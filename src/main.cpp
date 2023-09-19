#include <iostream>
#include "mathpro.h"
#include "math1.h"

using namespace math;

int main(int argc, const char* argv[])
{
    std::cout << "Hello C++ " << __cplusplus << std::endl;
    std::cout << my_add(1,2)  << std::endl;
    std::cout << sub(2,1) << std::endl;
}