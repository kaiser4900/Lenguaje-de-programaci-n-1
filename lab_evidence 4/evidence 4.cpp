#include<iostream>
using namespace std;


int main(){

char* findx(const char*s, const char* x)
{
    int i=0;
    int* res=0;
    while(s[i])
    {
        if(s[i]==*x)
        {
            res=s[i];
            i++;
        }
    }
    return res;
}
void to_lower(char* s)
{
    int A='A';
    int a='a';
    int dif=0;

    dif=A-a;
    int i=0;
    while(s[i])
    {
        *s[i=*s[i]-dif;
    }
}
bool find(string p)
{
    bool res=false;
    Link=*r;
    r=this;
    while(r)
    {
        if(r==p)
        {
            res=true;
        }
    }
    return res;
}
	return 0;
}
