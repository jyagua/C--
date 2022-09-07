#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string sep(string a, int *x){
    int i=0;
    string b;
    for(*x=*x;((a[*x]!=' ')||(a[*x]!=0)); *x++);{
        b[i] = a[*x];
        i++;
    }
    return b;
}

int main(){
    string a, b, c;
    int x = 0, y, z1, z2;
    getline(cin, a);
    for(x=0;a[x]!=0;x++){
        
        b=sep(a, &x);
        cout << x;
        y=x;
        c=sep(a, &x);
        x=y;
        z1=b.compare(c);
        z2=z2+z1;
    }
    cout << z2;


    return 0;
}