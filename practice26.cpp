#include <iostream>
#include "MyString.h"

int main() {
    MyString s1("Hello");
    MyString s2(" World!");
    MyString s3 = s1 + s2;

    std::cout << "s3 (operator+): " << s3 << ", len: " << s3.getLength() << "\n";

    MyString s4(std::move(s3));
    std::cout << "s4 (move ctor): " << s4 << "\n";

    MyString s5;
    s5 = std::move(s4);
    std::cout << "s5 (move assign): " << s5 << "\n";
}