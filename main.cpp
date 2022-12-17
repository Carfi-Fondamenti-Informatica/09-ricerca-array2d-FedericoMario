#include <iostream>

int main(){
  char a[10][20];
    char b[1][20];
    for(int i=0; i<10; i++) {
        for (int j = 0; j < 20; j++) {
            a[i][j] = ' ';
        }
        cin >> a[i];
    }
    for(int j=0; j<20; j++){
        b[0][j] = ' ';
    }
    cin>>b[0];
    if(nomi(a,b)==-1){
        cout<<"non presente";
    }else{
        cout<<nomi(a,b);
    }
    return 0;
}
