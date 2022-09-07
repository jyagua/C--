#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int num(char c){
    if((c>='0')&&(c<='9')){
        return 1;
    }else{
        return 0;
    }
}

int let(char c){
    if(((c<'0')||(c>'9'))&&(c!='.')&&(c!=' ')&&(c!='-')){
        return 1;
    }else{
        return 0;
    }
}

int pon(char c){
    if(c=='.'){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    string s;
    bool n=0, p=0, l=0;
    bool n1=0, p1=0, l1=0;

    getline(cin, s);
    for(int i=0;s[i]!=0;i++){
        n=num(s[i]);
        p=pon(s[i]);
        l=let(s[i]);

        if((s[i]==' ')||(s[i]==0)){
            if(l1==1){
                cout << "str ";
            }else if(p1==1){
                cout << "float ";
            }else if(n1==1){
                cout << "int ";
            }
        }

        if(n==1){
            n1=1;
        }else if(s[i]==' '){
            n1=0;
        }
        if(p==1){
            p1=1;
        }else if(s[i]==' '){
            p1=0;
        }
        if(l==1){
            l1=1;
        }else if(s[i]==' '){
            l1=0;
        }
        
    }
    if(l1==1){
        cout << "str ";
    }else if(p1==1){
        cout << "float ";
    }else if(n1==1){
        cout << "int ";
    }


    return 0;
}