#include <iostream>

using namespace std;
void hanoi(int n, char A, char B, char C)
{
    if(n==0){
        return;
    }
    if(n==1){
        cout << A << "-> " << C << endl;
    }
    else {
        hanoi(n-1, A, C, B);
        cout << A << "-> " << C << endl;
        hanoi(n-1, B, A, C);
    }
}

int main()
{
   int qte;
   cin >> qte;
   hanoi(qte, 'A', 'B', 'C');
   return 0;
}