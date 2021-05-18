/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,count=0;
    cin>>num;
    while(num>0)
    {
        if(num&1==1)
        {
            count=count+1;
        }
        num=num>>1;
    }
    cout<<count;
    return 0;
}