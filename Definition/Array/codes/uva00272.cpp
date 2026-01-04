//string is a special character array
#include<iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main(){
    string str;
    int time=0;
    while(getline(cin,str)){
    for(int i=0;i<str.size();i++){
        if(str[i]=='\"'){
            time++;
            if(time%2==1){
                cout<<"``";
            }
            else{cout<<"''";}
        }
        else{cout<<str[i];}
    }
    cout<<endl;
    }
}
