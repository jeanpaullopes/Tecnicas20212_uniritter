#include <iostream>
using namespace std;
int troca(long var[]){
   var[0] = var[0] * 1000;
   cout << "dentro do troca "<< var[0] <<"\n";
   return var[0];
}


int main(int argc, char const *argv[])
{
    const int tam = 10;
    int cont = 0;
    long a[tam] = {0,3,5,1,10,5,2,5,8,9};




//   for (int i = 0; i < tam; i++) {
//     //a[i] = i;
//       cout <<" posicao " << i << ": "<< a[i] <<" \n";
//   }
       cout <<a[0]<< " " << a[1]<< " " << a[2]<< " " << a[3]<< " " << a[4]<< " " << a[5]<< " " << a[6]<< " " << a[7]<< " " << a[8]<< " " << a[9]<< "\n";

    int round = 0;
   cout << "\n Vetor Ordenado: \n \n";
   for (int i = 0; i < tam; i++) {
     for (int j = i+1; j < tam; j++){
         round++;
       if (a[i] >a[j]){
         int aux = a[i];
         a[i]= a[j];
         a[j] = aux;
       }
       cout << "i = " << i << "  j =  " << j << "\n";
       cout <<a[0]<< " " << a[1]<< " " << a[2]<< " " << a[3]<< " " << a[4]<< " " << a[5]<< " " << a[6]<< " " << a[7]<< " " << a[8]<< " " << a[9]<< "\n";
     }
   }
   for (int i = 0; i < tam; i++) {
       cout <<" posicao " << i << ": "<< a[i] <<" \n";
   }
cout << "rounds: "<<round;

   return 0;


}