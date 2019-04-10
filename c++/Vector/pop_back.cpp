#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a; //push_back er jonno size declare kora lage na
a.push_back(100);
a.push_back(200);
a.push_back(300);
for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
}
a.pop_back();
cout<<"\n";
for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
}
return 0;
}

