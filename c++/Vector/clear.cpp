#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int b;
    for(int i=0; i<5; i++){
        cin>>b;
        a.push_back(b);
    }

     for(int i=0; i<5; i++){
        cout<<a[i]<<"\n";
     }
      cout<<"\nafter clear and push 100 & 200: ";
     a.clear();
     a.push_back(100);
     a.push_back(200);
     for(int i=0; i<a.size(); i++){
         cout<<"\n"<<a[i]<<" ";
     }
      cout<<"\n";
     return 0;

}
