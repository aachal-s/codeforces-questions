#include<iostream>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    //basically performing ceil function through integer
    n=n/a+(n%a!=0);
    m=m/a+(m%a!=0);
    cout<<n*m<<endl;
}