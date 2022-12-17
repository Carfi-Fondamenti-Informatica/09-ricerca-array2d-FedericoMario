#include <iostream>
#include "lib.h"
using namespace std;

int main(){

    char lista[10][20];
    char nome[20];
    int c = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            nome[j] = ' ';
            lista[i][j] = ' ';
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> lista[i];
    }
    cin >> nome;

    if (controllo(lista, nome, c))
    {
        cout << c;
    }
    else
    {
        cout << "non presente"<<endl;
    }

    return 0;
}
