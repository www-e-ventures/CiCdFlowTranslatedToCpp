#ifndef STAGING_ENVIRONMENT_H
#define STAGING_ENVIRONMENT_H
//https://e.ventures
//the@e.ventures
//MIT License

#include "cicd_base.h"

namespace cicd {

    class StagingEnvironment : public CiCdBase {
    public:
        void build() override;
        void test() override;
        bool deploy() override;
    };

} // namespace cicd

#endif // STAGING_ENVIRONMENT_H
