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
    int num,pos;
    cin>>num;
    cin>>pos;
    if(num&((pos-1)<<1))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}