#include "../include/dev_environment.h"
#include <iostream>
//https://e.ventures
//the@e.ventures
//MIT License

namespace cicd {

    void DevEnvironment::build() {
        std::cout << "Building in Dev environment" << std::endl;
    }

    void DevEnvironment::test() {
        std::cout << "Testing in Dev environment" << std::endl;
    }

    bool DevEnvironment::deploy() {
        std::cout << "Deploying to Dev environment" << std::endl;
        return true;
    }

} // namespace cicd
