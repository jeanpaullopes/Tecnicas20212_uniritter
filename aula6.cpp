#include <iostream>
#include <string>
using namespace std;

void funcao(int var[10]) {
    var[100] = var[0] * 4;
}


int fatorial(double v) {
    if(v == 2) {
        //cout << "eh 2, entao vou retornar 2 \n";
        return 2;
    } else {
        //cout << "eh "<<v<<", entao vou retornar "<<v<<"x"<<(v-1)<<"!\n";
        //int temp = fatorial(v-1);
        //cout <<"retorno da chamada recursiva "<<(v-1)<<"!   -> "<<temp<<"\n";
        //return v * temp;
        return v * fatorial(v-1);
    }

}
int fatorial2() {
        return 2;
}

int fatorial3() {
        return 3 * fatorial2();
}
int fatorial4() {
        return 4 * fatorial3();
}
int fatorial5() {
    return 5 * fatorial4();
}
int fatorial6() {
    return 6 * fatorial5();
}

string telefoneSemFio(string msg) {
    return msg;
}

void paregr(int v, int razao) {
    cout << v <<", ";
    if (v > 0) {
        paregr((v - razao), razao);
    }
}
int main(int argc, char const *argv[]) {
    
    // 1 int tem 4 bytes -> 32 bits
    // 2^32 = 4.294.967.296
    // metade é 2.147.483.648
    
    int a[10];
    for (int i = 0; i < 10; i++) {
        a[i]=-1;
        }
    //int &b[10] = a;
    cout << "sizeof(a) ->"<< sizeof(a) << "\n";
    //funcao(a);
    a[1] = 4294967296;
    //cout << "a[0] ->"<< a[0] << "\n";
    //cout << "a[1] ->"<< a[1] << "\n";
    //a = 2147483648; 

    cout << "fatorial de 6 ->"<<fatorial(12) << "\n";
    paregr(63, 3);

}

