#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "jogador.h"
using namespace std;

class time{

    private:
    string Nome;
    jogador* Jogadores[11];
    int Vitorias;
    int Derrotas;
    int Empates;

    public:
    void setNome(string Nome) {
        this->Nome = Nome;
        } 
    string getNome() {
        return this->Nome;
        }
    void setVitorias(int Vitorias) {
        this->Vitorias = Vitorias;
        } 
    int getVitorias() {
        return this->Vitorias;
        }
    void setDerrotas(int Derrotas) {
        this->Derrotas = Derrotas;
        } 
    int getDerrotas() {
        return this->Derrotas;
        }
    void setEmpates(int Empates) {
        this->Empates = Empates;
        } 
    int getEmpates() {
        return this->Empates;
        }

    void somaVitorias(){
        Vitorias++;
    }

    void somaDerrotas(){
        Derrotas++;
    }

    void somaEmpates(){
        Empates++;
    }
};