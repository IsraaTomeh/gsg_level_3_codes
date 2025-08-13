#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,cnt=0;
vector<string>v={"Running","Swimming","football"};

void fun(ll x,vector<string>a) {
    if(x==n) {
        cnt++;
        for(auto s:a) {
            cout<<s<<' ';
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<3;i++) {
        if(a.empty()||a.back()!=v[i]) {
            a.push_back(v[i]);
            fun(x+1,a);
            a.pop_back();
        }
    }
}
int main()
{
    cin>>n;
    fun(0,{});
    cout<<"COUNT: "<<cnt<<endl;
    return 0;
}
