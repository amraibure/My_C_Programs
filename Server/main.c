#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>

#define PORT 8080
#define BUFFER_SIZE 1024

void handle_client(SOCKET client_socket) {
    char buffer[BUFFER_SIZE];
    int received_bytes;

    // Receive the request from the client
    received_bytes = recv(client_socket, buffer, sizeof(buffer), 0);

    // Check for errors or if the client closed the connection
    if (received_bytes <= 0) {
        closesocket(client_socket);
        return;
    }

    // Print the received request
    printf("Received request:\n%s\n", buffer);

    // Send a simple response to the client
    const char *response = "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nHello, this is a simple web server!";
    send(client_socket, response, strlen(response), 0);

    // Close the client socket
    closesocket(client_socket);
}

int main() {
    WSADATA wsa;
    SOCKET server_socket, client_socket;
    struct sockaddr_in server_address, client_address;
    int client_address_len = sizeof(client_address);

    // Initialize Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        perror("Error initializing Winsock");
        exit(EXIT_FAILURE);
    }

    // Create socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == INVALID_SOCKET) {
        perror("Error creating socket");
        exit(EXIT_FAILURE);
    }

    // Set up server address structure
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = INADDR_ANY;
    server_address.sin_port = htons(PORT);

    // Bind the socket
    if (bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address)) == SOCKET_ERROR) {
        perror("Error binding");
        exit(EXIT_FAILURE);
    }

    // Listen for incoming connections
    if (listen(server_socket, 10) == SOCKET_ERROR) {
        perror("Error listening");
        exit(EXIT_FAILURE);
    }

    printf("Server listening on port %d...\n", PORT);

    // Accept and handle incoming connections
    while (1) {
        client_socket = accept(server_socket, (struct sockaddr *)&client_address, &client_address_len);
        if (client_socket == INVALID_SOCKET) {
            perror("Error accepting connection");
            continue;
        }

        // Handle the client request in a separate function
        handle_client(client_socket);
    }

    // Close the server socket
    closesocket(server_socket);

    // Cleanup Winsock
    WSACleanup();

    return 0;
}