#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    int A,B;
    while(cin>>A>>B){
    int matrix[A][B];
    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<B;i++){
        for(int j=0;j<A;j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
    }
}
