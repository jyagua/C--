#include <string>
#include <iostream>
#include <sstream>
using namespace std;

/*Crie a classe Veiculo, contendo o peso, a velocidade máxima, e o preço. 
Inclua um construtor sem argumentos e um com argumentos para inicialização 
dos atributos. Crie métodos que funcionemcomo getter e setter e print.*/

class veiculo{
    private:
    int peso, velma, $;
    public:
    
    void setpeso(int p){
        peso = p;
    }
    int getpeso(){
        return peso;
    }
    void setvelma(int v){
        velma=v;
    }
    int getvelma(){
        return velma;
    }
    void set$(int m){
        $=m;
    }
    int get$(){
        return $;
    }
    veiculo(){}

    veiculo(int peso, int velma, int $){
        peso = 1532;
        velma = 250;
        $ = 50000;
        this->peso = peso;
        this->velma = velma;
        this->$ = $;
    }

    void stats(){
        cout << "Peso: " << peso << endl <<
        "Velocidade Maxima: " << velma << endl <<
        "preco: " << $ << endl <<
        "======================" << endl;

    }

};
/*Crie a classe Motor, contendo o número de 
cilindros e a potência. Inclua um construtor sem 
argumentos e um com argumentos para inicialização 
dos atributos. Crie métodos que funcionem como 
getter e setter e print.*/

class motor{
    private:
    int cil, pot;
    public:
    void setcil(int c){
        cil = c;
    }
    int getcil(){
        cout << cil;
        return cil;
    }
    void setpot(int p){
        pot = p;
    }
    int getpot(){
        cout << pot;
        return pot;
    }

    motor(){
        int cil = 8;
        int pot = 500;
        this->cil = cil;
        this->pot = pot;
    }

    void print(){
        cout << "Cilindros: " << cil << endl <<
        "Potencia: " << pot << endl <<
        "======================" << endl;
    }
};
/*Crie a classe CarroPasseio, derivada das classes Veiculo e Motor. 
Inclua atributos como modelo e cor.Crie um construtor para esta classe 
que chame explicitamente o construtor das classes base, um getter e um 
setter, além de um método print, que utiliza o método print da classe 
base. Crie um driver para testar sua aplicação.*/

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