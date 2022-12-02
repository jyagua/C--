#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "partidas.h"
using namespace std;


int main(){
    cout << "main" << endl;

    partida jogo1;
    /*partida jogo2;
    partida jogo3;
    partida jogo4;*/

    time fla("Flamengo");
    
    jogo1.setTimecasa(fla);
    cout << fla.getNome();

    
    
    
    
    
    
    
    
    
    
    /*teste.timeCasa.atacantes[0].setNome("JoaoFoda");

    cout << teste.timeCasa.getNome() << endl << teste.timeCasa.atacantes->getNome() << endl;
    teste.getPlacar();

    /*time *teste = new time;

    teste->atacantes[0].setNome("JoaoFoda");

    cout << teste->atacantes[0].getNome() << " ";

    cout << teste->getNome() << endl;*/

}