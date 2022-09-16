#include <string>
#include <iostream>
#include <sstream>
#include "Veiculo.h"
using namespace std;

class carropasseio:public motor, public veiculo{
    private:
    string modelo, cor;
    public:
    carropasseio():veiculo(), motor(){
        string mod = "Celta";
        string cor = "Preto";
        modelo = mod;
        this->cor = cor;
    }

    void setmodelo(){
        string m;
        getline(cin, m);
        modelo = m;
    }
    string getmodelo(){
        cout << modelo;
        return modelo;
    }
    void setcor(){
        string c;
        getline(cin, c);
        cor = c;
    }
    string getcor(){
        cout << cor;
        return cor;
    }

    void impr(){
        stats();
        print();
        cout << "Modelo: " << modelo << endl <<
        "Cor: " << cor << endl <<
        "======================" << endl;
    }

};