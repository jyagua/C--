#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int x, y, l;
    cin >> x;
    int v[x];
    for(int i=0;i<x;i++){
        cin >> v[i];
    }
    for(int i=0;i<x;i++){
        v[i]+=v[i+1];

    }
    for(int i=0;i<x;i++){
        cout << v[i] << endl;
    }
    cout << y;
    return 0;
}