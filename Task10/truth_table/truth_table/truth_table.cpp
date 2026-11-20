#include <iostream>

int main() 
{
    bool a, b;

    a = false; b = false;
    std::cout << "A=" << a << " B=" << b << " &&=" << (a && b) << " || =" << (a || b) << '\n';

    a = false; b = true;
    std::cout << "A=" << a << " B=" << b << " &&=" << (a && b) << " || =" << (a || b) << '\n';

    a = true; b = false;
    std::cout << "A=" << a << " B=" << b << " &&=" << (a && b) << " || =" << (a || b) << '\n';

    a = true; b = true;
    std::cout << "A=" << a << " B=" << b << " &&=" << (a && b) << " || =" << (a || b) << '\n';

    return 0;
}
