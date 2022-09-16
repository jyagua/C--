#include <string>
#include <iostream>
#include <sstream>
#include "Veiculo.h"
using namespace std;

int main(){
    string s;
    int p;
    carropasseio carrin;
    cout << "Digite o Peso do seu carro:" << endl;
    cin >> p;
    carrin.setpeso(p);
    cout << endl << "Digite a velocidade máxima do seu carro:" << endl;
    cin >> p;
    carrin.setvelma(p);
    carrin.impr();
}









































/*cout << "❀⊱┄┄┄┄┄┄┄┄┄┄┄⊰❀";
    cout << endl;
    carrin.getpeso();
    cout << endl;
    carrin.getvelma();
    cout << endl << "Os dados estão corretos?" << endl << "❀⊱┄┄┄┄┄┄┄┄┄┄┄⊰❀" << endl;
    */