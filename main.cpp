#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    unsigned long long int sum=0,a;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    cout<<sum<<endl;

}


