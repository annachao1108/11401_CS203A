#include<iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>
using namespace std;
void print(int ca[]){
    
    while(true){
        int max=0;
        for(int i=0;i<26;i++){
            if(max<ca[i]){
                max=ca[i];
            }
        }
        if(max==0){
            break;
        }
        for(int i=0;i<26;i++){
            if(max==ca[i]){
                cout<<(char)(i+'A')<<" "<<ca[i]<<endl;
                ca[i]=0;
            }
        }
        
    }
}
int main(){
    int ncase;
    cin>>ncase;
    cin.ignore();
    int ca[26]={};
    for(int i=0;i<ncase;i++){
        string text;
        getline(cin,text);
        for(int i=0;i<text.size();i++){
            if(text[i]<='z'&&text[i]>='a'){
                ca[text[i]-'a']++;
            }
            if(text[i]<='Z'&&text[i]>='A'){
                ca[text[i]-'A']++;
            }
        }
    }
    print(ca);
    
}
