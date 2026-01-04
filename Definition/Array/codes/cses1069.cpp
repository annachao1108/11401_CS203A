//string is a special character array
// Explanation: https://hackmd.io/@yun666/cses_repetitions
#include <algorithm>
#include <iostream>
using namespace std;
 
int main() {
    string str;
    getline(cin, str);
    int max=1,temp=1;
    for(int i=1;i<str.size();i++){
        if(str[i]==str[i-1]&&str[i]!=str[i+1]){
            temp++;
            if(temp>max){
                max=temp;
            }
            temp=1;
        }
        else if (str[i]==str[i-1]){
            temp++;
        }
    }
    cout<<max<<"\n";
}
