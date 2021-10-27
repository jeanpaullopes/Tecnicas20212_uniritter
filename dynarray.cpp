#include <iostream>
#include <string>
#include <cstring>

using namespace std;
/*
struct Aluno {
    string nome;
    int matricula;
    int valor;
    string dataNasc;
    string curso;
};
*/
struct Mapa {
    string propriedade;
    string valor;
};

struct Aluno {
    char nome[50];
    int matricula;
    int valor;
    char dataNasc[10];
    char curso[50];
    int qtdProps;
    Mapa propriedades[10];
};

void usaArray(Aluno * alns, const int count);

void usaArray2(Aluno  alns[], const int count);

int growArray(Aluno **aluno_arr, int tamAtual, int novosElementos);



int main(int argc, char const *argv[]) {
    int nRecs = 0;
    Aluno * alunos;
    nRecs = 10;
    alunos = new Aluno[nRecs];

    
    usaArray(alunos, nRecs);
   usaArray2(alunos, nRecs);
   cout << "------------------------\n";
    nRecs = growArray(&alunos, nRecs, 5);
    usaArray2(alunos, nRecs);
    
}


void usaArray(Aluno * alns, const int count) {
    for ( int i = 0; i < count; i ++) {
        //alns[i].nome = "Jean Paul "+std::to_string(i);
        string nome = "Jean Paul "+std::to_string(i);
        strcpy(alns[i].nome, nome.c_str());
        alns[i].matricula = i;
    }
}

void usaArray2(Aluno  alns[], const int count){
    for(int i= 0; i < count; i++) {
        cout << alns[i].nome <<"  " << alns[i].matricula<< "\n";
    }
}

int growArray(Aluno **aluno_arr, int tamAtual, int novosElementos)
{
    const int tamTotal = tamAtual + novosElementos;
    Aluno *temp = (Aluno*) realloc(*aluno_arr, (tamTotal * sizeof(Aluno)));

    if (temp == NULL)
    {
        cout <<"Não é possível realocar a memória.\n";
        return 0;
    }
    else
    {
        *aluno_arr = temp;
    }

    return tamTotal;
}
