#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "equipe.h"
using namespace std;

class partida{
    private:
    string data;
    int placarCasa;
    int placarVisitante;
    

    public:
    equipe equipeCasa;
    equipe equipeVisitante;


    partida(){
        data = "30/02";
        placarCasa = 0;
        placarVisitante = 0;
    }

    partida(string d){
        data = d;
        placarCasa = 0;
        placarVisitante = 0;
    }

    partida(string d, string c, string v){
        data = d;
        equipeCasa.setNome(c);
        equipeVisitante.setNome(v);

        placarCasa = 0;
        placarVisitante = 0;
    }


    void setData(string data) { 
        this->data = data; 
        } 
    string getData() { 
        return this->data; 
        }
    void setPlacarCasa(int placarCasa) {
        this->placarCasa = placarCasa;
        } 
    int getPlacarCasa() {
        return this->placarCasa;
        }
    void setPlacarVisitante(int placarVisitante) {
        this->placarVisitante = placarVisitante;
        } 

    void addGolcasa(){
        placarCasa++;
    }

    void addGolvisita(){
        placarVisitante++;
    }

    int getPlacarVisitante() {
        return this->placarVisitante;
        }

    void getPlacar(){
        cout << equipeCasa.getNome() << ": "<< getPlacarCasa() << " / " << equipeVisitante.getNome() << ": "<< getPlacarVisitante() << endl;
    }


    void setequipecasa(equipe a){
        equipeCasa = a;
    }

    void setequipevisitante(equipe b){
        equipeVisitante = b;
    }
    void printPartida(){
        cout << "equipe de Casa: " << equipeCasa.getNome() << endl << "equipe Visitante: " << equipeVisitante.getNome() << endl;
        getPlacar();
    }


};
