#include "../include/prod_environment.h"
#include <iostream>
//https://e.ventures
//the@e.ventures
//MIT License

namespace cicd {

    void ProdEnvironment::build() {
        std::cout << "Building in Prod environment" << std::endl;
    }

    void ProdEnvironment::test() {
        std::cout << "Testing in Prod environment" << std::endl;
    }

    bool ProdEnvironment::deploy() {
        std::cout << "Deploying to Prod environment" << std::endl;
        return true;
    }

} // namespace cicd
