//string is a special character array
// Explanation: https://hackmd.io/@yun666/AtCoder_319A
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    if (str[0]<'Z'&&str[0]>'A') {
        if (str[0]=='S') {
            cout<<3630;
        }
        else if (str[0]<'S'){
            cout<<3658;
        }
        else{cout<< 3648;}
    }
    else if(str.size()<7){
        if(str.size()==5){
            cout<< 3638;
        }
        else{cout<<3679;}
    }
    else if (str.size()==7){
        if(str[0]=='t'){
            cout<<3858;
        }
        else if (str[0]=='m'){cout<<3555;}
        else if (str[0]=='s'){cout<<3481;}
    }
    else{
        if (str[0]=='e') {
            cout<<3613;
        } else {
            cout<<3516;
        }
    }
    cout<<"\n";
}
