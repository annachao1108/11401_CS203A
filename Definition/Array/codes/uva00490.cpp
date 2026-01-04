//string is a special character array
#include<iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include<vector>
using namespace std;

int main(){
    string str[101];
    string temp;
    int i=0;
    int n=0;
    while(getline(cin,temp)){
        n=max(n, (int)temp.size());
        str[i]=temp;
        i++;
    }
    
    for(int k=0;k<n;k++){
        for(int j=i-1;j>=0;j--){
            if(str[j].size()<=k){
                cout<<" ";
            }
            else{cout<<str[j][k];}
        }
        
        cout<<endl;
    }
}
