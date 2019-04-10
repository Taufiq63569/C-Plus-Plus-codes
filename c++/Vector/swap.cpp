#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    vector<int>b;
    int c;
     cout<<"a is: ";

    for(int i=0; i<5; i++){
            cin>>c;
        a.push_back(c);
    }

    cout<<"\n\n\n";
 cout<<"b is: ";
     for(int i=0; i<3; i++){
            cin>>c;
        b.push_back(c);
    }

    cout<<"\nafter swap: \n";
    a.swap(b);

    cout<<"a is: ";

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n\n\n";
 cout<<"b is: ";
  for(int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
    return 0;

}
