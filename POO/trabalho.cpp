#include <iostream>
#include <string>

using namespace std;
//QUESTÃO 2
class Veiculo{
    protected:
        int peso;
        int vmax;
        int preco;

    public:
    //Construtores
        Veiculo(){

        }
        Veiculo(int peso, int vmax, int preco){
            this ->peso = peso;
            this ->vmax = vmax;
            this ->preco = preco;
        }
//sets e gets
        void setpeso(int peso){
            this ->peso = peso;
        }
        void setvmax(int vmax){
            this->vmax = vmax;
        }
        void setpreco(int preco){
            this->preco = preco;
        }
        int getpeso(){
            return peso;
        }
        int getvmax(){
            return vmax;
        }
        int getpreco(){
            return preco;
        }
        void printVeiculo(){
            cout << "Peso: " << peso << "kg"<< endl;
            cout << "Velocidade Maxima: " << vmax <<"km/h"<< endl;
            cout << "Preco: " << preco <<"R$"<< endl;
        }
};
//construtor da segunda classe
class Motor{
    protected:
        int c;
        int p;
    public:
        Motor(){

        }
        Motor(int c, int p){
            this ->c = c;
            this -> p = p;
        }
        //sets e gets
        void setc(int c){
            this->c = c;
        }
        void setp(int p){
            this->p = p;
        }
        int getc(){
            return c;
        }
        int getp(){
            return p;
        }
        void printMotor(){
            cout << "Numero de cilindros: " << c << endl;
            cout << "Potencia: " << p << endl;
        }
};
class CarroPasseio: public Veiculo, public Motor {
    private:
        string modelo;
        string cor;
    public:
    //construtor da classe derivada
        CarroPasseio(){

        }
        CarroPasseio(string modelo, string cor): Veiculo(peso, vmax, preco), Motor(c, p){
            this->modelo = modelo;
            this->cor = cor;
        }
        //sets e gets
        void setmodelo(string modelo){
            this ->modelo = modelo;
        }
        void setcor(string cor){
            this -> cor = cor;
        }
        string getmodelo(){
            return modelo;
        }
        string getcor(){
            return cor;
        }
        void printPasseio(){
            cout << "Modelo: " << modelo << endl;
            cout << "Cor: " << cor << endl;
        }
};
//QUESTÃO 3
class Caminhao: public Veiculo, public Motor{
    private:
        float toneladas;
        float amax;
        float com;
    public:
    //construtor da classe derivada
        Caminhao(){

        }
        Caminhao(float toneladas, float amax, float com){
            this -> toneladas = toneladas;
            this -> amax = amax;
            this -> com = com;
        }
        //gets e sets
        void settoneladas(float toneladas){
            this->toneladas = toneladas;
        }
        void setamax(float amax){
            this ->amax= amax;
        }
        void setcom(float com){
            this->com = com;
        }
        float gettoneladas(){
            return toneladas;
        }
        float getamax(){
            return amax;
        }
        float getcom(){
            return com;
        }
        void printCaminhao(){
            cout << "Toneladas: " << toneladas << endl;
            cout << "Altura Maxima: " << amax << endl;
            cout << "Comprimento: " << com << endl;
        }
};
//main
int main () {
    int peso, vmax, preco, c, p, modelo, cor;
    string carro;
    //objetos das 4 classes
    Veiculo palio(940, 157, 39000);
    Veiculo celta(890, 157, 9000);
    Motor palio1(4, 73);
    Motor celta1(4, 78);
    CarroPasseio palio2("1.0", "vermelho");
    CarroPasseio celta2("1.4", "preto");
    Caminhao mercedez(10, 2.3, 14);
    Caminhao scania(40, 2.5, 15);

    cout << "Digite o carro ou caminhao: " << endl;
    cin >> carro;
    //situações
    if(carro=="palio"){
        palio.printVeiculo();
        palio1.printMotor();
        palio2.printPasseio();
    }
    else if(carro=="celta"){
        celta.printVeiculo();
        celta1.printMotor();
        celta2.printPasseio();
    }
    else if(carro=="mercedez"){
        mercedez.printCaminhao();
    }
    else if(carro=="scania"){
        scania.printCaminhao();
    }
    else{
        cout << "Nao possuimos esse carro/caminhao no nosso banco de dados" << endl;
    }
}