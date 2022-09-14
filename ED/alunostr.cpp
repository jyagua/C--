#include <string>
#include <iostream>

using namespace std;

 struct aluno{
    
    int matricula;
    double nota;
    string nome, materia;

    void insere(int userMatricula, double userNota, string userNome, string userMateria ){

        matricula = userMatricula;
        nota = userNota;
        nome =  userNome;
        materia = userMateria;

    }

    void avaliacao(double n1, string name, string materia1){

        if(n1>=7){

            cout<<name<<" aprovado(a) em "<<materia1;
        }
        else{
            cout<<name<<" reprovado(a) em "<<materia1;
        }

    }
};

int main(){

    aluno al1;

    int matricula;
    double nota;
    string nome,  materia;

    cin>>nome>>matricula>>materia>>nota;

    al1.insere(matricula, nota, nome, materia);
    al1.avaliacao(nota, nome, materia);

}