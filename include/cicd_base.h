#ifndef CICD_BASE_H
#define CICD_BASE_H
//https://e.ventures
//the@e.ventures
//MIT License

#include <string>
#include <functional>

namespace cicd {

    class CiCdBase {
    public:
        CiCdBase() = default;
        virtual ~CiCdBase() = default;

        virtual void build() = 0;
        virtual void test() = 0;
        virtual bool deploy() = 0;
    };

} // namespace cicd

#endif // CICD_BASE_H
