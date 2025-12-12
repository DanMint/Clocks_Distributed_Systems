#pragma once

class CristiansClock {
    public:
        CristiansClock();    

        void startServer();
        
        void startPeer();

    private:
        std::string currentPeerId;
};
