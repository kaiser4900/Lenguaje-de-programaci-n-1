#include<iostream>
using namespace std;

//no sé por qué manda error :,v si "mañana" no me logro despertar para corregirlo le pido su comprensión :,v no estoy seguro si aparece la hora de subida
int main(){

char* findX(const char* s, const char* x) {
    int res=0;
    if (x==0) return s;

    for (int i = 0; s[i]; ++i)
    {
        if (s[i] == x[0])
            {
                for (int j = 1; x[j]; ++j)
                 {
                    if (x[j+1]==0)
                    {
                        res=&s[i];
                        return res;
                    }


                    if (s[i+j+1]==0)
                    {
                        return res;
                    }

                }
            }
    }
    return res;
}
void to_lower(char* s) {
    int A='A';
    int Z='Z';
    int a='a';
    int dif= A-a;

    for (int i = 0; s[i]; ++i) {
        if (s[i]>=A && s[i]<=Z)
        {
            s[i] =s[i]+dif;
        }

    }
}


bool find(string p)
{
    bool res=false;
    Link* r;
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
