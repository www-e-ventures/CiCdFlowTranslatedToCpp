#include "include/dev_environment.h"
#include "include/staging_environment.h"
#include "include/prod_environment.h"
#include <iostream>
#include <memory>
//https://e.ventures
//the@e.ventures
//MIT License

using namespace cicd;

void promote(std::unique_ptr<CiCdBase> environment, const std::string& environment_name) {
    std::cout << "Promoting to " << environment_name << std::endl;
    environment->build();
    environment->test();
    if (environment->deploy()) {
        std::cout << "Successfully deployed to " << environment_name << std::endl;
    } else {
        std::cout << "Failed to deploy to " << environment_name << std::endl;
    }
}

int main() {
    promote(std::make_unique<DevEnvironment>(), "Dev");
    promote(std::make_unique<StagingEnvironment>(), "Staging");
    promote(std::make_unique<ProdEnvironment>(), "Prod");

    return 0;
}
