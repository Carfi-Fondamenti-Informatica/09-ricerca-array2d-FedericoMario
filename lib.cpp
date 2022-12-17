#include "lib.h"
bool controllo(char nomi[10][20], char nome[20], int &c){
    for (int n = 0; n < 10; n++){
    for (int i = 0; i < 20; i++)
        {
            if (nomi [n][i] != nome[i]){
                i = 20;  }
            if (i == 19){
                c = n;
                return true;}
        }
    }
    return false;
}
