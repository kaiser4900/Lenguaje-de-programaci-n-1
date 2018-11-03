#include <iostream>
#include<vector>
using namespace std;

// archivo f.h
int f(int);
// arqchivo cpp
#include "f.h"
//Copia las declaracones de f.h en este archivo
int g (int i)
{
    return f(i);
}
int main()
{
    return g(0);
}
int f (int n){
    return n;
}
