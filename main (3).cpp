/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() 
{
    int num,count=0;
    cout<<"enter n value";
    cin>>num;
    for(int i=1;i<num/2;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        cout<<num<<" is PRIME number";
    }
    else
    {
        cout<<num<<" is NOT PRIME number";
    }

    return 0;
}