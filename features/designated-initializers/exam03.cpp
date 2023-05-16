/**
g++  -c exam03.cpp
*/
struct A {
    int x, y;
};

struct B {
    struct A a;
};

extern "C"
{
    struct A a = {.y = 1, .x = 2};  // valid C, invalid C++ (out of order)
    int arr[3] = {[1] = 5};         // valid C, invalid C++ (array)
    struct B b = {.a.x = 0};        // valid C, invalid C++ (nested)
}
