#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int petya[n];
    int vasya[n];
    int tonya[n];

    for(int i=0;i<n;i++){
        cin>>petya[i];
        cin>>vasya[i];
        cin>>tonya[i];
    }

    int cnt=0;

    for(int i=0;i<n;i++){
        if(petya[i] + vasya[i] + tonya[i] >= 2)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;
}