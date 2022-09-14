#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int tri(int v[], int i, int l){
    v[l]+=v[l+1];
    


    


}

int main(){
    int x, y, l;
    cin >> x;
    int v[x];
    for(int i=0;i<x;i++){
        cin >> v[i];
    }
    x--;
    y=tri(v, x, l);

    cout << y;
    return 0;
}