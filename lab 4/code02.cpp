#include <iostream>
#include<vector>
using namespace std;

namespace innocent
{
    void f(int z)
    {
        int x;
        x=7;
    }
}
namespace dangerous
{
    void f(int z)
    {   int x;
        if ( z>x){
        }
        x=7;
    }
}
