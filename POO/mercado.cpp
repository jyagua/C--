#include <iostream>
#include <string>
using namespace std;
//codigo simples usando classes, para lembrar dps:
class carro{
    //private e uma categoria que so pode
    //ser puxada da propria classe, geral
    //mente sendo usada para atribuir var
    //iaveis.                            
    private:
    int lucro,quantidade;
    string tipo,nome;

    public:
    //construtor:
    //o construtor parece ser usado para
    //pre-atribur valores a objetos cria
    //dos. Um pouco util.
    carro (int l=-1,int q=-1){
        lucro =l;
        quantidade = q;

    }
    //essa funcao void recebe um inteiro
    //e printa uma frase, so e uma funca
    //o void pois ela printa.
    void imprimir(int l){
        if(l<=20000){
            cout << "Pequeno porte."<<endl;
        }
        else if(l>20000){
            cout << "Grande porte."<<endl;
        }
    }
    //essa funcao void serve para receber
    //uma string e atribuir para o objeto
    //em questao.
    void setnome(){
        string nom;
        cin >> nom;
        nome = nom;
    }
    //essa funcao retorna a string acima,
    //por isso ela nao e void
    string getnome(){
        return nome;
    }
    //funcoes void servem para receber os
    //atributos e modificar os objetos, p
    //arecendo ponteiros, mas mais faceis
    //de usar
    void setlucro(){
        int x;
        cin >> x;
        lucro = x;
    }
    int getlucro(){
        return lucro;
    }
    //funcoes nao utilizadas
    void setquantidade(){
        int x;
        cin >> x;
        quantidade = x;
    }
    int getquantidade(){
        return quantidade;
    }
    //esta funcao faz varias coisas
    void correto(){
        char resp;
        confirm:
        cout << "Os valores estao corretos: Y/n " <<endl;
        cin >> resp;
        if(resp == 'n'){
            cout << "Redigite o lucro:"<<endl;
            setlucro();
            cout << "Redigite o nome:"<<endl;
            setnome();
            cout << "Nome: "<< getnome() << endl;
            imprimir(getlucro());
            goto confirm;
        }
    }
};

int main(){
    //todas aquelas funcoes permitem minha
    //main ficar simples assim :)
    carro feira;
    cout << "Digite o lucro e o nome da sua empresa: " << endl;
    feira.setlucro();
    feira.setnome();
    cout << "Lucro por mes : "<<feira.getlucro()<< "\nNome da empresa : " <<feira.getnome()<<endl;
    feira.imprimir(feira.getlucro());
    feira.correto();
}