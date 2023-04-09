#ifndef DEV_ENVIRONMENT_H
#define DEV_ENVIRONMENT_H
//https://e.ventures
//the@e.ventures
//MIT License

#include "cicd_base.h"

namespace cicd {

    class DevEnvironment : public CiCdBase {
    public:
        void build() override;
        void test() override;
        bool deploy() override;
    };

} // namespace cicd

#endif // DEV_ENVIRONMENT_H
