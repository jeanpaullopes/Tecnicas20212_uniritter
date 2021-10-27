#include <iostream>
#include <string>
using namespace std;



struct aluno {
    string nome;
    int matricula;
    string dataNasc;
    string curso;
};

void testeTroca(aluno estrutura[]) {
    estrutura[0].nome = "Bruno Cunha";
    cout << "dentro da funcao "<< estrutura[0].nome << "\n";
}

int main(int argc, char const *argv[]) {

    string nomes[7];
    int matricula[7];
    string dataNasc[7];
    string curso[7];

    nomes[0] = "Antonio Damiao Junior";
    matricula[0] = 123456;
    dataNasc[0] = "01/01/2000";
    curso[0] = "ADS";

    aluno alunos[7];
    alunos[0].nome = "Antonio Damiao Junior";
    alunos[0].matricula = 123456;
    alunos[0].dataNasc = "01/01/2000";
    alunos[0].curso = "ADS";

    aluno damiao;
    damiao.nome = "Antonio Damiao Junior";
    damiao.matricula = 123456;
    damiao.dataNasc  ="01/01/2000";
    damiao.curso = "ADS";


    cout << alunos[0].nome << "\n";
    cout << alunos[0].curso << "\n";

    testeTroca(alunos);

    cout << alunos[0].nome << "\n";
    cout << alunos[0].curso << "\n";
   
 
}

