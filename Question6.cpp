// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
#include<iostream>
using namespace std;
int main()
{
    bool ans= true;
    while(ans)
    {
        for(int i=65;i<=90;i++)
        {
            cout<<i<<" "<<char(i)<<endl;
        }
        ans = false;
    }
}