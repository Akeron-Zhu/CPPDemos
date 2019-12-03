#include <iostream>
#include "a.h"
using namespace std;

A::A()
{
    this->a = 100;
}

int A::geta()
{
    return a;
}
void A::hello()
{
    this->a = 500;
    printf("%d\n", a);
}

void A::handle(B *b)
{

    cout << "in A , objectb.b=" << b->getb() << endl;
}