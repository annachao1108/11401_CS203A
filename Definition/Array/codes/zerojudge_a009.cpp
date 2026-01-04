//string is a special character array
#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for(int i=0;i<str.size();i++){
        cout<<static_cast<char>(str[i]-7);
    }
}
