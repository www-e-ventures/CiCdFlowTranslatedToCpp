#ifndef PROD_ENVIRONMENT_H
#define PROD_ENVIRONMENT_H
//https://e.ventures
//the@e.ventures
//MIT License

#include "cicd_base.h"

namespace cicd {

    class ProdEnvironment : public CiCdBase {
    public:
        void build() override;
        void test() override;
        bool deploy() override;
    };

} // namespace cicd

#endif // PROD_ENVIRONMENT_H
