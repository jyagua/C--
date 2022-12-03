#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <conio.h>
#include "partidas.h"
using namespace std;


int main(){
    cout << "main" << endl;

    char x, y;
    //PARTIDAS PADRAO
    partida jogo1;
    partida jogo2;
    //TIMES PADRAO
    time afo("Afogados");
    time flo("Floresta");
    time lag("Lagarto");
    time toc("Tocantinopolis");
    //ATRIBUINDO TIMES AS PARTIDAS
    jogo1.setTimecasa(afo);
    jogo1.setTimevisitante(flo);

    //jogo1.getPlacar(); == PLACAR DA PARTIDA
    //jogo1.addGolcasa(); == COLOCAR UM GOL PRO TIME DE CASA
    /*
    cout << "Teste: aperte F" << endl;  
    x = getch(); == pegar o caractere
    cout << "Operacao terminada";
    */

    
    
    
    
    
    
    
    
    
    
    /*teste.timeCasa.atacantes[0].setNome("JoaoFoda");

    cout << teste.timeCasa.getNome() << endl << teste.timeCasa.atacantes->getNome() << endl;
    teste.getPlacar();

    /*time *teste = new time;

    teste->atacantes[0].setNome("JoaoFoda");

    cout << teste->atacantes[0].getNome() << " ";

    cout << teste->getNome() << endl;*/

}