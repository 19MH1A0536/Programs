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
	int num,pos,result;
	cin>>num;
	cin>>pos;
	result=num^(1<<(pos-1));
	cout<<result;
	return 0;
}
