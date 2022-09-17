#include <string>
#include <iostream>
#include <sstream>
#include "Passeio.h"
using namespace std;

int main(){
    cout << "\nBEM VINDO AO SEU VEICULO " << endl << endl;
    cout << "digite abaixo os dados sobre ele\n" << endl;
    
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
    carrin.impr();
}









































/*cout << "❀⊱┄┄┄┄┄┄┄┄┄┄┄⊰❀";
    cout << endl;
    carrin.getpeso();
    cout << endl;
    carrin.getvelma();
    cout << endl << "Os dados estão corretos?" << endl << "❀⊱┄┄┄┄┄┄┄┄┄┄┄⊰❀" << endl;
    */
