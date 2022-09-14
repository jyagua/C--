#include <iostream>
#include <string>
#include <sstream>
using namespace std;

    int conta(string s, char c, int i, int x){
        if(s[i]==c){
            x++;
        }
        if(s[i]!=0){
            i++;
            return conta(s, c, i, x);
        }else{
            return x;
        }
    }


int main(){
    string s;
    char c;
    int i=0, x=0, y;
    getline(cin, s);
    cin >> c;
    y = conta(s, c, i, x);
    cout << y;

    return 0;
}