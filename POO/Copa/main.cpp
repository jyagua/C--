#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <ctime>
/*#include <conio.h>*/
#include "partidas.h"
using namespace std;

int escolha(string nome, equipe tal){
    if(tal.getNome() == nome){
        return 1;
    }else{
        return 0;
    }

}

int rand(int x){
    srand(time(0));
    x = rand()%11+1;
    return x;
}

int radom(int x){
    srand(x);
    x = rand()%11+1;
    return x;
}

/*float randh(){
    float x, z;
    srand(time(0));
    x = rand()%2+1;
    z = rand()%8+5;
    z = z/10;
    x+=z;

    return x;
}*/

string batizo(int x){
    int y;
    y = radom(rand(1) * x);
    if(y == 1){
        return "Manoel";
    }else if(y == 2){
        return "Lucas";
    }else if(y == 3){
        return "Gabriel";
    }else if(y == 4){
        return "Ytalo";
    }else if(y == 5){
        return "Thiago";
    }else if(y == 6){
        return "Mateus";
    }else if(y == 7){
        return "Igor";
    }else if(y == 8){
        return "Yudi";
    }else if(y == 9){
        return "Lucio";
    }else if(y == 10){
        return "Davi";
    }else if(y == 11){
        return "Douglas";
    }

}

int main(){
    

    char x;
    int a = 0, b, y;
    string equipenome;
    //PARTIDAS PADRAO
    partida jogo1;
    partida jogo2;
    //equipeS PADRAO
    equipe afo("Afogados");
    equipe flo("Floresta");
    equipe lag("Lagarto");
    equipe toc("Tocantinopolis");
    equipe usuario[10];
    //JOGADORES PADRAO
    jogadorGoleiro gol[5];
    jogadorDefesa zag[5];
    jogadorAtaque ata[5];
    //ATRIBUINDO equipeS AS PARTIDAS
    jogo1.setequipecasa(afo);
    jogo1.setequipevisitante(flo);

{
    afo.setNomes(batizo(1), batizo(2), batizo(3), batizo(4), batizo(5));
    flo.setNomes(batizo(12), batizo(23), batizo(34), batizo(45), batizo(56));
    lag.setNomes(batizo(123), batizo(234), batizo(345), batizo(456), batizo(567));
    toc.setNomes(batizo(15), batizo(26), batizo(37), batizo(48), batizo(59));
    for(int i=0;i<10;i++){
        usuario[i].setNomes(batizo(2+i), batizo(2*i), batizo(3+i), batizo(4*2*i), batizo(5+i*3));
    }
}

{
    afo.habilidades(1.80, radom(rand(1)+1), radom(rand(1)+26), radom(rand(1)+75), radom(rand(1)), radom(rand(1)+59), radom(rand(1)+96), radom(rand(1)+728), radom(rand(1)+997), radom(rand(1)+9), radom(rand(1)+10), radom(rand(1)+11));
    flo.habilidades(1.83, radom(rand(1)+175), radom(rand(1)+2156), radom(rand(1)+755), radom(rand(1)+865), radom(rand(1)+593), radom(rand(1)+9657), radom(rand(1)+2), radom(rand(1)+83), radom(rand(1)+79), radom(rand(1)+102), radom(rand(1)+141));
    lag.habilidades(1.76, radom(rand(1)+657), radom(rand(1)+375), radom(rand(1)+786), radom(rand(1)+5687), radom(rand(1)+53), radom(rand(1)+486), radom(rand(1)+286), radom(rand(1)+19), radom(rand(1)+45), radom(rand(1)+65), radom(rand(1)+78));
    toc.habilidades(1.92, radom(rand(1)+472), radom(rand(1)+420), radom(rand(1)+69), radom(rand(1)+335), radom(rand(1)+468), radom(rand(1)+164), radom(rand(1)+987), radom(rand(1)+231), radom(rand(1)+34), radom(rand(1)+378), radom(rand(1)+433));
    for(int x=0;x<10;x++){
        usuario[x].habilidades(1.92, radom(rand(1)+x*2), radom(rand(1)+x*3), radom(rand(1)+x*9), radom(rand(1)+x*22), radom(rand(1)+x*12), radom(rand(1)+x*31), radom(rand(1)+x*45), radom(rand(1)+x*62), radom(rand(1)+x*80), radom(rand(1)+x*20), radom(rand(1)+x*60));
    }
}

    cout << "main" << endl;

   MENU:
   system("clear||cls");
   //TEMOS QUE MUDAR O MENU COMPLETAMENTE
   cout << "   BEM VINDO AO BOMBA PATCH C++ EDITION :)   " << endl;
   cout << "=============================================" << endl;
   cout << "|              MENU PRINCIPAL               |" << endl;
   cout << "|   Digite 1 para ver o menu de partidas    |" << endl;
   cout << "|   Digite 2 para ver o menu de equipes     |" << endl;
   cout << "|   Digite 3 para ver o menu de jogadores   |" << endl;
   cout << "|   Digite 4 para iniciar uma partida       |" << endl;
   cout << "|   Digite 5 para criar ou editar jogadores |" << endl;
   cout << "=============================================" << endl;

   cout << "Digite 0 para parar o programa" << endl;

    /*x = getch();*/
    cin >> x;

   if(x == '0'){
    goto FIM;
   }else if(x == '1'){
    goto equipeNOME;
   }else if(x == '2'){
    goto equipeCRIAR;
   }/*else if(x == '3'){
    goto PARTIDACRIAR;
   }
   */else if(x == '4'){
    goto VERJOGADORES;
   }/*else if(x == '5'){
    goto CRIARJOGADOR;
   }
   */

   x = 0;
   equipeNOME:
   if(x == '1'){
    system("clear||cls");

    cout << "--- " << afo.getNome() << endl << "--- " << flo.getNome() << endl << "--- " << lag.getNome() << endl << "--- " << toc.getNome() << endl;
    for(int i = 0;i<a;i++){
        cout << "--- " << usuario[i].getNome() << endl;
    }
    cout << endl << "Digite 1 para voltar ao menu" << endl;
    cout << "Digite 2 para ver os jogadores de um equipe" << endl;

    /*x = getch();*/
    cin >> x;

    if(x == '1'){
        system("clear||cls");
        goto MENU;
    }else if(x == '2'){
        goto VERJOGADORES;
    }
   }

    x = 0;
    equipeCRIAR:
    if(x == '2'){
        cout << endl;
        cout << "Digite o nome do seu equipe ou digite 1 para voltar ao menu : " << endl;
        cin >> equipenome;

        if(a<10){

            if(equipenome == "1"){

                goto MENU;

            }else{

                usuario[a].setNome(equipenome);
                a++;
                cout << equipenome << " criado!";
            }
        }else{
            cout << "Voce atingiu o limite de equipes!!" << endl;

        }
        /*_sleep(1000.0);*/
        goto MENU;
    }
    
    /*
    x = 0;
    PARTIDACRIAR:
    if(x == '3'){

    }
    */
    x = 0;
    VERJOGADORES:
    if(x == '2' || x == '4'){
        system("clear||cls");
        cout << "Escolha o equipe que voce quer ver ou digite 1 para voltar ao menu: " << endl;
        cin >> equipenome;
        if(equipenome == "1"){
            goto MENU;
        }else{
            if(equipenome == "Floresta"){
                flo.printequipe();
                y=1;
            }else if(equipenome == "Afogados"){
                afo.printequipe();
                y=1;
            }else if(equipenome == "Tocantinopolis"){
                toc.printequipe();
                y=1;
            }else if(equipenome == "Lagarto"){
                lag.printequipe();
                y=1;
            }else{
                for(int i=0;i<a;i++){
                    y = escolha(equipenome, usuario[i]);
                    if(y == 1){
                        usuario[i].printequipe();
                        break;
                    }
                }
            }
            if(y==1){
                cout << "Aperte 1 para voltar ao menu" << endl;

                /*x = getch();*/
                cin >> x;

                if(x == '1'){
                    goto MENU;
                }
            }else{
                cout << "Nome errado!" << endl;
                /*_sleep(1000.0);*/
                goto VERJOGADORES;
            }
        }

    }


























    /*
    x = 0;
    CRIARJOGADDOR:
    if(x == '5'){

    }
    */

    /*teste.equipeCasa.atacantes[0].setNome("JoaoFoda");

    cout << teste.equipeCasa.getNome() << endl << teste.equipeCasa.atacantes->getNome() << endl;
    teste.getPlacar();

    /*equipe *teste = new equipe;

    teste->atacantes[0].setNome("JoaoFoda");

    cout << teste->atacantes[0].getNome() << " ";

    cout << teste->getNome() << endl;*/

    //jogo1.getPlacar(); == PLACAR DA PARTIDA
    //jogo1.addGolcasa(); == COLOCAR UM GOL PRO equipe DE CASA
    /*
    cout << "Teste: aperte F" << endl;  
    x = getch(); == PEGAR UM CARACTERE
    cout << "Operacao terminada";
    */

    FIM:
    if(x == '0'){
    cout  << endl << "PROGRAMA ENCERRADO" << endl;
    }
}
