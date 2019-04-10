#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> a;
    int b;
    for (int i=0; i<10; i++){
        cin>>b;
        a.push_back(b);
    }
    for (int i=0; i<10; i++){
        cout<<a[i]<<"\n";
    }
    cout<<"Size of the vector is: "<<a.size()<<"\n";
    return 0;

}
