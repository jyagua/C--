#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "time.h"
using namespace std;


int main(){
    cout << "main" << endl;
    time *teste = new time;

    teste->atacantes[0].setNome("JoaoFoda");

    cout << teste->atacantes[0].getNome() << " ";

    cout << teste->getNome() << endl;

}