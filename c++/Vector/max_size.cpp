#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    for(int i=0; i<500; i++){
                a.push_back(i);
    }
    cout<<(int)a.capacity()<<"\n";
    cout<<(int)a.max_size()<<"\n";
    return 0;
}
