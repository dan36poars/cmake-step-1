#include <iostream>
#include <string>

#include "Config/TutorialConfig.h"
#include "Classes/MathFunctions.h"

int main(int argc, char *argv[])
{

    MathFunctions math;

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

    std::cout << "Hello World!" << std::endl;

    // Evaluate square root
    std::cout << "Square Root: " << math.squareRoot(9.0) << std::endl;

    return 0;


}
