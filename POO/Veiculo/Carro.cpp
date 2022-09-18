#include <string>
#include <iostream>
#include <sstream>
#include "Passeio.h"
using namespace std;

int main(){
    cout << "\n----- BEM VINDO AO SEU VEICULO -----" << endl;
    cout << "-- digite abaixo os dados sobre ele --\n" << endl;
    
    string s;
    int p;
    carropasseio carrin;
    cout << "Qual o peso do seu carro? " << endl;
    cin >> p;
    carrin.setpeso(p);
    cout << endl << "Agora informe a velocidade maxima do seu carro :" << endl;
    cin >> p;
    cout << endl;
    carrin.setvelma(p);
    cout << "Quantos cilindros tem o carro? " << endl;
    cin >> p;
    carrin.setcil(p);
    cout << "\nQual o preco do seu carro?" << endl;
    cin >> p;
    carrin.set$(p);
    cout << "\nE qual a potencia do seu veiculo? " << endl;
    cin >> p;
    carrin.setpot(p);
    cout << "\nInforme o modelo :" << endl;
    getline(cin, s);
    carrin.setmodelo();
    cout << "\nPor ultimo, qual a cor do veiculo? " << endl;
    carrin.setcor();
    cout << endl;
    carrin.impr();
}









































/*cout << "❀⊱┄┄┄┄┄┄┄┄┄┄┄⊰❀";
    cout << endl;
    carrin.getpeso();
    cout << endl;
    carrin.getvelma();
    cout << endl << "Os dados estão corretos?" << endl << "❀⊱┄┄┄┄┄┄┄┄┄┄┄⊰❀" << endl;
    */
