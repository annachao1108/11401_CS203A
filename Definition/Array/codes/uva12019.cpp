#include<iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main(){
    int dates[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    string days[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    
    int ncase;
    cin>>ncase;
    for(int i=0;i<ncase;i++){
        int mon,da;
        cin>>mon>>da;
        string today;
        if(mon==1&&da==1){
            today=days[5];
        }
        else{
            int temp=da;
            for(int i=1;i<mon;i++){
                temp+=dates[i-1];
            }
            temp%=7;
            today=days[(5+temp-1)%7];
        }
        cout<<today<<endl;
    }
}
