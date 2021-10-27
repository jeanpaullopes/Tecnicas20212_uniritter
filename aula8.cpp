#include <iostream>
#include <string>
using namespace std;

struct aluno {
    //string nome;
    int matricula;
    int valor;
    //string dataNasc;
    //string curso;
};

void imprime(struct aluno* al, int pos) {
    cout << al[pos].matricula << "\n";
    al[pos].matricula = 1;
}

int main(int argc, char const *argv[]) {

    int tam = 4;
    aluno *al = (aluno*) malloc(tam * sizeof(aluno));
    /*
    al[0] = (aluno*) malloc(sizeof(aluno));
    //al[0]->nome = "jean";
    al[1] = (aluno*) malloc(sizeof(aluno));
    //al[1]->nome = "jean";
    al[2] = (aluno*) malloc(sizeof(aluno));
    //al[2]->nome = "jean";
*/
    for (int i = 0; i < tam; i++) {
       imprime(al, i);
    }
       
    for (int i = 0; i < tam; i++) {
       imprime(al, i);
    }

}