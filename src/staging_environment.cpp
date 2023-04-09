#include "../include/staging_environment.h"
#include <iostream>
//https://e.ventures
//the@e.ventures
//MIT License

namespace cicd {

    void StagingEnvironment::build() {
        std::cout << "Building in Staging environment" << std::endl;
    }

    void StagingEnvironment::test() {
        std::cout << "Testing in Staging environment" << std::endl;
    }

    bool StagingEnvironment::deploy() {
        std::cout << "Deploying to Staging environment" << std::endl;
        return true;
    }

} // namespace cicd
