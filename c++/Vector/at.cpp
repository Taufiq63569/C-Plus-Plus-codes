#include<bits\stdc++.h>
using namespace std;
int main()
{
    vector<int> a(100);
    for(int i=0; i<a.size(); i++){
        a.at(i)=i;
    }
    cout<<"element is: ";
    for(int i=0; i< a.size(); i++){
        cout<<" "<<a.at(i);
    }
    cout<<"\n";
    return 0;
}
