#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int len = arr[i].size();
        if(len > 10){
            cout<<arr[i].at(0)<<len-2<<arr[i].at(len-1)<<endl;
        }
        else{
            cout<<arr[i]<<endl;
        }
    }
    
}