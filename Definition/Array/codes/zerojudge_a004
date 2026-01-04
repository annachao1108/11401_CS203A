#include <iostream>
using namespace std;
bool arithmetic(int a[4]){
    if((a[1]-a[0]==a[2]-a[1])&&(a[2]-a[1]==a[3]-a[2])){
        return true;
    }
    return false;
}

int main()
{
    int ncase;
    int a[4];
    cin>>ncase;
    for(int i=1;i<=ncase;i++){
        for(int j=0;j<4;j++){
            cin>>a[j];
        }
        if(arithmetic(a)){
            for(int j=0;j<4;j++){
                cout<<a[j]<<" ";
            }
            cout<<a[3]-a[2]+a[3]<<endl;
        }
        else{
            for(int j=0;j<4;j++){
                cout<<a[j]<<" ";
            }
            cout<<a[3]/a[2]*a[3]<<endl;
    }
}
}
