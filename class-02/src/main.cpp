#include <iostream>
#include "Vectors/Vector.hpp"

int main(int argc, const char *argv[])
{
    Vector<float> v1(5.4f, 3.3f);
    Vector<float> v2;
    
    std::cout << "Hello" << std::endl;
    v1.getVector();
    std::cout << &v1 << std::endl;

    v2 = v1;

    v2.getVector();
    std::cout << &v2 << std::endl;

    v2.setVector(9.4f, 12.9f);

    v1.getVector();
    v2.getVector();

    Vector<float> v3(v2);

    v3.getVector();
    std::cout << &v3 << std::endl;

    v3 = v2 + v1;
    v3.getVector();
    v3.setVector(23.8f, 25.8f);
    std::cout << v3.getMagnitude() << std::endl;    

    return 0;
}
