#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> inver1(vector<int> v)
{
    vector<int>inver(v.size());

    int x=0;

    int i= (v.size()-1);
    while(i>=0)
    {
            inver[x]=v[i];
            i=i-1;
            ++x;
    }
    return inver;
}

void inver2(vector <int>& v)
{
    int x=0;
    int aux=0;

    int i= (v.size()-1);

    while(i>=0)
    {
           aux=v[x];
           v[x]=v[i];
           v[i]=aux;

            i=i-1;
            ++x;

    }
}


int main()
{
    vector<int>nums;
    for(int i =0; i<4; ++i)
    {
        nums.push_back(i+1);
    }

    vector<int>resultado = inver1(nums);



    for(int i =0; i<4; ++i)
    {
        cout<<resultado[i];
    }

    cout<<endl;

    inver2(nums);

    for(int i =0; i<4; ++i)
    {
        cout<<nums[i];
    }
}


