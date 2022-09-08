#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool vog(char c){
    if((c == 'a')||(c == 'A')){
        return 1;
    }else if((c == 'e')||(c == 'E')){
        return 1;
    }else if((c == 'i')||(c == 'I')){
        return 1;
    }else if((c == 'o')||(c == 'O')){
        return 1;
    }else if((c == 'u')||(c == 'U')){
        return 1;
    }else{
        return 0;
    }
}

bool con(char c){
    if((c != 'a')&&(c != 'A')){
        if((c != 'e')&&(c != 'E')){
            if((c != 'i')&&(c != 'I')){
                if((c != 'o')&&(c != 'O')){
                    if((c != 'u')&&(c != 'U')){
                        if((c != ' ')&&(c != 0)){
                            return 1;
                        }
                    }
                }
            }
        }
    }else{
        return 0;
    }
}

int pal(string s, int x){
    bool v=0, c=0;
    for(x;s[x]!=' '||s[x]==0;x++){
        v = vog(s[x]);
        c = con(s[x+1]);
        if(v==1){
            if(c==1){
                return x;
            }
        }
    }
    return 0;
}

int main(){
    int x=5, y;
    string s;
    getline(cin, s);
    for(x=0;s[x]!=0;x++){
        if((s[x-1]==' ')||(x==0)){
            y=pal(s, x);
            if(y>0){
                for(int i = x;i<=y;i++){
                    cout << s[i];
                }
                for(int i = x;i<=y;i++){
                    cout << s[i];
                }
            }
        }
        /*cout << y << ' ';
        cout << x << endl;*/
        y=0;
        cout << s[x];
        
    }
    y=pal(s, x);
    
    return 0;
}