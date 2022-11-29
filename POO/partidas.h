#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "time.h"
using namespace std;

class partida{
    private:
    string data;
    time* timeCasa;
    time* timeVisitante;
    int placarCasa;
    int placarVisitante;

    public:

    partida(){
        data = "30/02";
        placarCasa = 0;
        placarVisitante = 0;
    }

    partida(string d){
        data = d;
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
    int getPlacarVisitante() {
        return this->placarVisitante;
        }

    int getPlacar(){
        
    }




};