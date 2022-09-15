#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
using namespace std;

int vshow(vector<int> v, int i, int x){
    if(i<x){
        cout << v[i] << " ";
        i++;
        return vshow(v, i, x);
    }else{
        return i;
    }
    return 0;
}

int vwohs(vector<int> v, int x){
    if(x>=0){
        cout << v[x] << " ";
        x--;
        return vwohs(v, x);
    }else{
        return x;
    }
    return 0;
}

int soma(vector<int> v, int i, int x, int s){
    if(i<x){
        s += v[i];
        i++;
        return soma(v, i, x, s);
    }else{
        cout << s;
        return s;
    }
}

int X(vector<int> v, int i, int x, int s){
    if(i<x){
        s *= v[i];
        i++;
        return X(v, i, x, s);
    }else{
        cout << s;
        return s;
    }
}

int menor(vector<int> v, int i, int x, int m){
    if(i<x){
        if(m>v[i]){
            m=v[i];
            i++;
            return menor(v, i, x, m);
        }
        i++;
        return menor(v, i, x, m);
    }else{
        cout << m;
        return 0;
    }

}


int main(){
string s;
getline(cin, s);
stringstream ss(s);
vector<int> vet;
int value;
while(ss >> value){
    vet.push_back(value);
}
int x = vet.size();
//mostra a ordem do vetor
cout << "vet : [ ";
int i=0, y=0, z=0;
y = vshow(vet, i, x);
cout << "]";
//
cout << endl;
//inverte a ordem do vetor
cout << "rvet: [ ";
x--;
y = vwohs(vet, x);
x++;
cout << "]";
//
cout << endl;
//Soma os elementos do vetor
cout << "sum : ";
y = soma(vet, i, x, z);
//
cout << endl;
//Multiplica os elementos do vetor
cout << "mult: ";
z=1;
y = X(vet, i, x, z);
//
cout << endl;
//Mostra o menor elemento
cout << "min : ";
z = 10000;
y = menor(vet, i, x, z);
//
cout << endl;
//inverte a ordem do vetor
cout << "inv : [ ";
x--;
y = vwohs(vet, x);
x++;
cout << "]" << endl;
//

}