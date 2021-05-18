#include <iostream>
#include <string>
#include <cmath>

#include "Config/TutorialConfig.h"

// check if option is ON
#ifdef USE_MYMATH
#include "Classes/MathFunctions.h"
#endif

int main(int argc, char *argv[])
{

    // report version
    if (argc < 2)
    {
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
                  << Tutorial_VERSION_MINOR << std::endl;
        std::cout << " Usage: " << argv[0] << " <number>" << std::endl;
        return 1;
    }

    // Convert string to double
    const double inputValue = std::stod(argv[1]);

#ifdef USE_MYMATH
    MathFunctions math;
    const double outputValue = math.squareRoot(inputValue);
#else
    const double outputValue = sqrt(inputValue);
#endif

    std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;

    return 0;
}
