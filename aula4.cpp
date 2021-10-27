#include <iostream>
#include <string>
using namespace std;

int soma(int a, int b) {
    return a+b;
}
int subtracao(int a, int b){
    return a - b;
}
int multiplicacao(int a, int b){
    return a * b;
}
int potencia(int base, int potencia) {
    int ret = base;
    for (int i = 2; i <= potencia; i++) {
        ret = multiplicacao(ret, base);
        cout << "->"<< ret << '\n';
    }
    return ret;
}
int divisao(int a, int b){
    return a / b;
}

int operacao(int a, int b, char operador) {
    int ret = 0;
    switch(operador) {
        case '+': return soma(a,b);
        case '-': return subtracao(a,b);
        case '*': return multiplicacao(a,b);
        case '/': return divisao(a,b);
        case '^': return potencia(a,b);
        default: ret =  -99999;
    }
    return ret;
}

char tela() {
    char op ;
    do {
        cout << "informe a operacao: ( + - * / ^)";
        cin >> op;
    } while (op != '*' && op != '/' && op != '-' && op != '+' && op != '^');
    return op;
}
int main(int argc, char const *argv[]) {

    int op1 = 9;
    int op2 = 5;
    char oper = tela();
    cout << operacao(op1, op2, oper);


}