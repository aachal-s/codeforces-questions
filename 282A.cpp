#include<iostream>
using namespace std;

int main(){
    int x = 0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string ch;
        cin>>ch;
        if(ch.at(1)=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;
}