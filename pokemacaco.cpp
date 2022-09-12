/* planejamento : 
Criar cartas com vida, poder, agilidade, inteligencia, tipo
Dar opções das cartas para o jogador escolher
Escolher um oponente sendo outra carta
Somar os pontos de cada com um contador( vida1 - vida2 ) ( poder - poder )
Imprimir o vencedor e seus pontos
*/



#include<iostream>
#include<string>
using namespace std;

class Carta{
    private:    
        int vida, poder, agilidade, inteligencia, tipo;
    public:
        void setvida(int _vida){
            vida = _vida;
        }
        int getvida(){
            return vida;
        }
        void setpoder(int _poder){
            poder = _poder;
        }
        int getpoder(){
            return poder;
        }
        void setagilidade(int _agilidade){
            agilidade = _agilidade;
        }
        int getagilidade(){
            return agilidade;
        }
        void setinteligencia(int _inteligencia){
            inteligencia = _inteligencia;
        }
        int getinteligencia(){
            return inteligencia;
        }
        void settipo(int _tipo){
            tipo = _tipo;
        }
        int tipo(){
            return tipo;
        }
};

int main()
{
    Carta gorila;
    
    cout << "Escolha a sua classe : " << endl;
    cout << "Gorila\nMandril\nMacaco Narigudo" << endl;
}