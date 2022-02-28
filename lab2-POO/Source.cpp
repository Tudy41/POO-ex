#include <stdio.h>
#include "InList.h"


int main()
{
    NumberList a;
    a.Init();
    a.Add(5);
    a.Add(1);
    a.Add(-1);
    a.Add(23);
    a.Add(25);
    a.Sort();
    a.Print();


    return 8;
}