/*
Altere o código para os parametros serem passados por valor e o resultado ser mostrado na função principal (int main())
*/

#include <iostream>
using namespace std;

int soma(int &a, int &b, int &resultado){
    resultado = a+b;
}

int main(){
    int n1 = 10, n2 = -20, r=0;
    soma(n1,n2, r);
    cout<<"Resultado: "<<r;
}
