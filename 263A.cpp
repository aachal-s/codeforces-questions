#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int matrix[5][5];
    int x,y;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                x=i;
                y=j;
            }
        }
    }

// Manhattan Distance formula --> middle (2,2) index

    int moves = abs(x-2)+abs(y-2);
    cout<<moves<<endl;
}