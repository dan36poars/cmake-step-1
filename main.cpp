#include <iostream>
#include <string>

#include "Config/TutorialConfig.h"

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

    std::cout << "Hello World!" << std::endl;
    return 0;
}
