/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,num,count=0;
    cout<<"enter number";
    cin>>num;
    for(i=2;i<sqrt(num);i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<num<<"is PRIME number";
    }
    else
    {
        cout<<num<<"is NOT PRIME number";
    }
    return 0;

}
