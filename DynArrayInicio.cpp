#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int matricula;
    int valor;
    string dataNasc;
    string curso;
};


void func1(Aluno* alns, int tam) {
    for (int i = 0; i < tam; i++) {
        cout << alns[i].nome << "\n";
    }
}

void func2(Aluno alns[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << alns[i].nome << "\n";
    }
}

void troca(string &str) {
    str = "novo valor";
}
void trocaChar(char *chr) {
    chr[0] = 'O';
}

int main(int argc, char const *argv[]) {
    int nRecs = 0;
    Aluno * alunos;
    string a;
    char b[10];

    cout << "sizeof  a  "<<sizeof(a)<<"\n";
    a ="1234556789012345567890123455678901234556789012345567890123455678901234556789012345567890";
    cout << "sizeof  a  "<<sizeof(a)<<"\n";
    cout << "sizeof  b  "<<sizeof(Aluno)<<"\n";
    

    char *d = (char*) malloc(sizeof(char));
    char *c = (char*) malloc(sizeof(char));
    c = d;
    d[0] = 'z';
    c[0] = 'w';
    c = (char*) malloc(sizeof(char));
    c[0] = 'm';


    a = "teste";
    cout << "antes ->"<< a <<"\n";
    troca(a);
    cout << "depois ->"<< a <<"\n";
    cout << "_______________________agora com char\n";
    cout << "antes ->"<< c << "  " << d <<"\n";
    trocaChar(c);
    cout << "depois ->"<< c <<"  " << d << "\n";
    

 /*   
    nRecs = 10;
    alunos = new Aluno[nRecs];
    alunos[3].nome = "Matheus";
    alunos[2].nome = "Joao";
    alunos[0].nome = "Gabriella";
    func2(alunos, nRecs);
*/
}