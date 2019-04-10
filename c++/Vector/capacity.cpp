#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    for(int i=0; i<32; i++){
                a.push_back(i);
    }
    cout<<(int)a.capacity()<<"\n";
    return 0;
}


//ekahne jodi i er man 64 er kom ar 32 er besi hoto tobe capacity dekhato 64, abar jodi man 64 er besi ar 128 er kom hoto tahole capacity hoto 128.

// man gula 1 2 4 8  16 32 64 128 256 512 bit er sima bibechona kore briddhi pai
