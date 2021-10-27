#include <iostream>
#include <string>
using namespace std;

const int TAM = 10;

void push(int arr[], int &qtd, int valor) {
    if (qtd < TAM) {
        arr[qtd] = valor;
        qtd++;
    }
}

int popFila(int arr[], int &qtd) {
    int ret = 0;

    return ret;
}
int popPilha(int arr[], int &qtd) {
    int ret = 0;
    
    return ret;
}

int pop(int arr[], int &qtd, char tipo) {
    switch (tipo) {
        case 'P': return popPilha(arr, qtd); break;
        case 'F': return popFila(arr, qtd); break;
    }
}

struct Dados {
    int dados[TAM];
    int qtd = 0;
    char tipo;
};

int32_t main() {
    int dados1[TAM];
    int qtd1 = 0;
    char tipoLista1 = 'F';
    
    int dados2[TAM];
    int qtd2 = 0;
    char tipoLista2 = 'P';
    

    push(dados1, qtd1, 5);
    push(dados1, qtd1, 6);
    push(dados2, qtd2, 7);
    push(dados2, qtd2, 8);
   

    for (int i = 0; i < qtd1; i++) {
        cout << dados1[i] << ", ";
    }
    cout << pop(dados1, qtd1, tipoLista1);
    cout << pop(dados2, qtd2, tipoLista2);
    cout << "tamanho atual "<< qtd1;

}