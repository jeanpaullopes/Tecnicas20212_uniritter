#include <iostream>
#include <string>
using namespace std;

string nossaFuncao(string str) {
    return "o parametro enviado foi "+str;
}
int tamanhoString(string str) {
    int i = 0;
    while (str[i] != '\0') {
        //cout << "i="<<i<<" a["<<i<<"] = "<<a[i]<<'\n';
        i++;
    }
    return i;
}

int posicaoCaracter(string entrada, char caracter, int comecaEm) {
    int ret = -1;
    for (int i = comecaEm; i < tamanhoString(entrada); i++) {
        if (caracter == entrada[i])  {
            ret = i;
            return ret;
        } 
    } 
    return ret;
}

int qtdPalavras(string str, char separador) {
    //            1111111111 
    //  01234567890123456789 
    // "    olá mundo cruel!"
    int ret = 0;
    int startAt = 0; //4
    if (tamanhoString(str) > 0) {
        if(str[0] != separador) {
            ret = 1;
        } else {
            while(str[startAt] == separador) {
                startAt++;
            }
        } 
        while (posicaoCaracter(str, separador, startAt+1) >= 0) {
            ret++;
            startAt = posicaoCaracter(str, separador, startAt+1);
        }
    }
    return ret;
}

void funcaoSemRetorno() {
    return 1;
}

int main(int argc, char const *argv[])
{
    cout << "argc:" << argc << '\n';
    
    string a = "";
    if (argc > 1) {

        for (int i = 1; i < argc; i++) {
            if (i > 1) {
                a = a + " ";
            }
            a = a + argv[i];
        }


    } else {
        //cin >> a;
    }
    
    cout << a << '\n';
    cout << "tamanho da string: " << tamanhoString(a) << '\n';
    cout << "posicao do ' ': " << posicaoCaracter(a,' ',0) << '\n';
    cout << "quantidade palavras: " << qtdPalavras(a, ' ') << '\n';

    /*
    int i = 0;
    while (a[i] != '\0') {
        cout << "i="<<i<<" a["<<i<<"] = "<<a[i]<<'\n';
        i++;
    }
    
    cout <<"tamanho do String: " << i << '\n';
    cout <<"tamanho do String método size(): " << a.size() << '\n';
    //cout << "sizeof a: " <<sizeof a << " sizeof a[0]: " << sizeof a[0] << "tamanho ARRAY a: " << (sizeof a / sizeof a[0]); 
    */
    return 0;
}
