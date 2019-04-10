#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a; //push_back er jonno size declare kora lage na
int b;
    for(int i=0; i<10; i++){
            cin>> b;
        a.push_back(b);
    }

     for(int i=0; i<10; i++){
            cout<<a[i]<< "\n";
    }
    cout<<"\n";

return 0;
}
