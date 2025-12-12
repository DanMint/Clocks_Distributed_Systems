#include "utils.h"

#include <unistd.h>

std::string Utils::getMyContainerId() {
    char hostname[128];

    if (gethostname(hostname, sizeof(hostname)) == 0) {
        return std::string(hostname);
    }
    else {
        perror("gethostname failed");
        return "";
    }
}