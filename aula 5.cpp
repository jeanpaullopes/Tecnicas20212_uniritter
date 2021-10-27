#include <iostream>
#include <string>
using namespace std;

string caracterTab(int val, bool local) {
  string chr;
      if (local) { 
      switch (val) {
          case 0: chr = " ... "; break;
          case 9: chr = " xXx "; break;
          case 1: chr = "MMMMM"; break;
          case 2: chr = "MMMMM"; break; 
          case 3: chr = "MMMMM"; break;
          case -1:
          case -2:
          case -3:
          default: chr = "@@@@@";
        } 
      } else { 
          switch (val) {
          case 1:
          case 2:
          case 3:
          case 0: chr = "~~~~~"; break;
          case 9: chr = " ### "; break;
          case -1: chr = "1111"; break;
          case -2: chr = "2222"; break; 
          case -3: chr = "3333"; break;
          default: chr = " @@@ ";
        } 
      }
      return chr;
    
}

void desenhaTabuleiro(int c[10][10], bool local) {
    for (int i = 0; i < 10 ; i ++){
        for (int j =0; j < 10; j ++){
            cout<< caracterTab(c[i][j], local) << "";
        }
        cout << "\n";
    }
}

int main(int argc, char const *argv[]) {

int const tam = 10;
int campo[tam][tam], linha, coluna, cont=0;
int cmp [tam][tam];




for (int i = 0; i < 10 ; i ++){
  for (int j =0; j < 10; j ++){

    campo [i][j] = 0;
    cmp [i][j] = 0;

  }


}
campo [3][5] = 3;
campo [3][4] = 3;
campo [3][3] = 3;
campo [5][2] = 2;
campo [5][1] = -2;
campo [1][7] = 2;
campo [2][7] = 2;
campo [9][8] = 1;
campo [7][7] = 1;

cmp [0][2] = -1;
cmp [3][5] = 3;
cmp [3][4] = 3;
cmp [3][3] = 3;
cmp [5][2] = 2;
cmp [5][1] = 2;
cmp [1][7] = 2;
cmp [2][7] = 2;
cmp [9][8] = 1;
cmp [7][7] = 1;
cmp [0][2] = 1;

do{

cout << "Digite o número da linha:";
cin >> linha;
cout << "Digite o número da coluna:";
cin >> coluna;
/*
if (campo[linha][coluna] == 0){
  cmp[linha][coluna]='#';

}
if (campo[linha][coluna] == 3){
  cmp[linha][coluna]='3';
  cont++;
}
if (campo[linha][coluna] == 2){
  cmp[linha][coluna]='2';
  cont++;
}
if (campo[linha][coluna] == 1){
  cmp[linha][coluna]='1';
  cont++;
}
*/
system("cls");

desenhaTabuleiro(campo, true);
  cout<< endl;
  cout<< endl;
desenhaTabuleiro(cmp, false);
  cout<< endl;





cout << cont <<" acertos ";
}while (cont != 10);
cout <<"Você venceu!!!"<<endl;
}