#include "cristiansClock.h"
#include "utils.h"

#include <iostream>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>

CristiansClock::CristiansClock() {
    this->currentPeerId = Utils::getMyContainerId();

    if (this->currentPeerId == "") 
        std::cerr << "PEER has no ID\n";
    
    else if (this->currentPeerId == "server")
        CristiansClock::startServer();
    
    else 
        CristiansClock::startPeer();
    
}

void CristiansClock::startServer() {
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in serverAdderess{};
    // IPv4 usage
    serverAdderess.sin_family = AF_INET;
    // set portto 8080
    serverAdderess.sin_port = htons(8080);
    // server IP
    serverAdderess.sin_addr.s_addr = INADDR_ANY;

    bind(serverSocket, (sockaddr*) &serverAdderess, sizeof(serverAdderess));
    listen(serverSocket, 1);

    
}

void CristiansClock::startPeer() {
    
}