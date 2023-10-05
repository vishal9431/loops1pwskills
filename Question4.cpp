
// Display this AP - 4,7,10,13,16.. upto ‘n’ terms
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the ap up to n term"<<endl;
    cin>>n;
    for(int i=4;i<=n;i+=3)
    {
        cout<<i<<endl;
    }
}