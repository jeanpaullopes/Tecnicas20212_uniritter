#include <iostream>

using namespace std;

int troca(long var[]){
    var[0] = var[0] * 1000;
    cout << "dentro do troca "<< var[0] <<"\n";
    return var[0];
}

int main(int argc, char const *argv[])
{
    const int tam = 5;
    long a[tam];// = {};
    
    for (int i = 0; i < tam; i++) {
        cout <<"posicao " << i << ": "<< a[i] <<" \n ";
    }
    cout << "---- aqui acontence a magia. \n";
    for (int i = 0; i < tam; i++) {
        cout <<"posicao " << i << ": "<< a[i] <<" \n ";
    }


    return 0;

}

