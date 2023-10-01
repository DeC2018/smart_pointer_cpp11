#include <iostream>

template <class Type>
class SmartPointer {
private:
    Type* pointer;
public:
    SmartPointer(Type* p): pointer(p) {};
    operator Type* () {return pointer;};
    Type *operator -> () {return pointer;};
};

class Foo {
private:
    int a, b;
public:
    Foo(): a(0), b(0) {};
    Foo(int a, int b): a(a), b(b) {};
    int Sum() {return a+b;}
};

int main(int argc, char **argv) {
    SmartPointer<Foo> sp(new Foo(2,2));
    std::cout << sp -> Sum() << std::endl;
}
