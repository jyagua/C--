#include <iostream>
#include <string>
#include <iomanip>

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
    void maior(double n1, string name){
           
        cout<<name<<" , "<<fixed<<showpoint<<setprecision(1)<<n1;

    }

};
void igual(double n1,string name1, string name2){

        cout<<name1<<" e "<<name2<<" , "<<fixed<<showpoint<<setprecision(1)<<n1;

    }

int main(){

    aluno al1;
    aluno al2;

    int matricula;
    double nota1, nota2;
    string nome1, nome2,  materia1, materia2;

    cin>>nome1>>matricula>>materia1>>nota1;

    al1.insere(matricula, nota1, nome1, materia1);

    cin>>nome2>>matricula>>materia2>>nota2;

    al2.insere(matricula, nota2, nome2, materia2);

    if(nota1>nota2){
        
        al1.maior(nota1, nome1);

    }
    else if(nota2>nota1){
        
        al2.maior(nota2, nome2);

    }
    else{

        igual(nota1,nome1, nome2);

    }

}