#include <iostream>
#include <cstdlib>
#include "a.h"
using namespace std;

int main()
{
    A* a;
    B* b;

    a->a=1;
    b->b=2;
    //a.objectb = &b;
    //b.objecta = &a;

    //a.hello();
    a->handle(b);

    b->handle(a);
}