#include <iostream>
#include <string>
using namespace std;


float soma(int a, int b) {
   return -1;
}

int main(int argc, char const *argv[]) {
    int op1 = 10;
    bool rodando;
    //bool parado = true;
    bool b;

    b = rodando = !1;
        cout << "b->"<<b<<"\n";

    int a = 50;
    do {
        //a = 10;
        a--;
        cout << "no laco a->"<<a<<"\n";

    } while (a>20);
    cout <<"    a-> "<<a<<"\n";

    b = true;

    //if (bool b = a = op1 = 100 ) {
    if (b) {
    
        cout << "eh TRUE";
    } else {
        cout << "eh FARÇO";
    }
    cout <<" op1-> "<<op1 <<"   a-> "<<a<<"   b->"<<b;
}