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
    int a, b;
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
    x = getch(); == PEGAR UM CARACTERE
    cout << "Operacao terminada";
    */
   system("clear||cls");
   MENU:
   cout << "BEM VINDO AO BOMBA PATCH EDICAO C++ :)" << endl;
   cout << "=======================================" << endl;
   cout << "             MENU PRINCIPAL           " << endl;
   cout << "Digite 0 para parar o programa" << endl;
   cout << "Digite 1 para ver os times atuais" << endl;
   cout << "Digite 2 para criar um time" << endl;
   cout << "Digite 3 para criar uma partida" << endl;
   cout << "Digite 4 para ver os jogadores de um time" << endl;

   

    x = getch();

   if(x == '0'){
    goto FIM;
   }

   if(x == '1'){
    system("clear||cls");

    cout <<"--- " << afo.getNome() << endl << "--- " << flo.getNome() << endl << "--- " << lag.getNome() << endl << "--- " << toc.getNome() << endl;
    cout << endl << "Digite 1 para voltar ao menu" << endl;
    cout << "Digite 2 para ver os jogadores de um time" << endl;
    y = getch();
    if(y == '1'){
        system("clear||cls");
        goto MENU;
    }else if(y == '2'){

    }
   }
    
    
    
    
    
    
    
    
    


































    /*teste.timeCasa.atacantes[0].setNome("JoaoFoda");

    cout << teste.timeCasa.getNome() << endl << teste.timeCasa.atacantes->getNome() << endl;
    teste.getPlacar();

    /*time *teste = new time;

    teste->atacantes[0].setNome("JoaoFoda");

    cout << teste->atacantes[0].getNome() << " ";

    cout << teste->getNome() << endl;*/

    FIM:
    if(x == '0'){
    cout << "tchau :D";
    }
}
