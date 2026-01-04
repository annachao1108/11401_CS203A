#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
void check(char* str,int &sum);
void transition(int sum);
int main(){
    char strA[4001];
    char strB[4001];
    int temp=0,sum=0;
    while(cin>>strA){
        if(strA[0]=='#'){
            break;
        }
        cin>>strB;
        temp=0;
        sum=0;
        check(strA,sum);
        check(strB,temp);
        sum-=temp;
        transition(sum);
    }
}

void check(char* str,int &sum){
    for(int i=0;i<strlen(str);i++){
        switch (str[i]) {
            case 'M':
                sum+=1000;
                break;
            case 'D':
                if(str[i+1]!='M')
                sum+=500;
                else
                    sum-=500;
                break;
            case 'C':
                if(str[i+1]!='D'&&str[i+1]!='M')
                    sum+=100;
                else
                    sum-=100;
                break;
            case 'L':
                if(str[i+1]!='D'&&str[i+1]!='C')
                    sum+=50;
                else
                    sum-=50;
                break;
            case 'X':
                if(str[i+1]!='L'&&str[i+1]!='C')
                    sum+=10;
                else
                    sum-=10;
                break;
            case 'V':
                if(str[i+1]!='L'&&str[i+1]!='X')
                    sum+=5;
                else
                    sum-=5;
                break;
            case 'I':
                if(str[i+1]!='V'&&str[i+1]!='X')
                    sum+=1;
                else
                    sum-=1;
                break;
            default:
                break;
        }
    }
}

void transition(int sum){
    sum=abs(sum);
    if(sum==0){
        cout<<"ZERO"<<endl;
        return;
    }
    if(sum>=1000){
        if(sum/1000<=3){
            for(int i=0;i<sum/1000;i++){
                cout<<"M";
            }
        }
        sum%=1000;
    }
    if(sum>=100){
        if(sum/100<=3){
            for(int i=0;i<sum/100;i++){
                cout<<"C";
            }
        }
        else if(sum/100==4){cout<<"CD";}
        else if (sum/100==9){cout<<"CM";}
        else{
            cout<<"D";
            for(int i=0;i<sum/100-5;i++){
                cout<<"C";
            }
        }
        sum%=100;
    }
    if(sum>=10){
        if(sum/10<=3){
            for(int i=0;i<sum/10;i++){
                cout<<"X";
            }
        }
        else if(sum/10==4){cout<<"XL";}
        else if (sum/10==9){cout<<"XC";}
        else{
            cout<<"L";
            for(int i=0;i<sum/10-5;i++){
                cout<<"X";
            }
        }
        sum%=10;
    }
    if(sum<=3){
        for(int i=0;i<sum;i++){
            cout<<"I";
        }
    }
    else if(sum==4){cout<<"IV";}
    else if (sum==9){cout<<"IX";}
    else{
        cout<<"V";
        for(int i=0;i<sum-5;i++){
            cout<<"I";
        }
    }
    cout<<endl;
}
