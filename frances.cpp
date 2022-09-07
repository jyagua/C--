#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string s;
    int x = 0, y;
    char c = 8;
    getline(cin, s);
    for(int i = 0; s[i]!=0; i++){
        if((s[i+2]==s[i])&&(s[i+1]==' ')){
            i+=1;
        }else{
            cout << s[i];
        }
    }


    return 0;
}