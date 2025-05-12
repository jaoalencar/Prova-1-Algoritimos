/*
Faça um programa que receba dois numeros e o caracter M, D, A, S e execute a multiplicação, divisão, adição, e subtração desses numeros
*/

#include <iostream>
using namespace std;
//ADICAO
int add(int a, int b){
    return a+b;
}
//SUBTRACAO
int sub(int a, int b){
    return a-b;
}
//DIVISAO
int divi(int a, int b){
    return a/b;
}
//MULTIPLICACAO
int mul(int a, int b){
    return a*b;
}


int main(){
    int n1,n2;
    char op = ' ';
    cout << "Digite o primeiro numero: ";cin >> n1;
    cout << "Digite o segundo numero: ";cin >> n2;
    cout << "Digite a operacao que deseja realizar com esses num: \n";
    cout << "A - Adicao\n";
    cout << "S - Subtracao\n";
    cout << "D - Divicao\n";
    cout << "M - Multiplicacao\n";
    cout << "Opcao desejada: "; cin >> op;

    //Verifica a opção escolhida pelo usuário
    switch(op){
    case 'A':
        cout<< add(n1, n2);
        break;
    case 'S':
        cout<< sub(n1, n2);
        break;
    case 'D':
        cout<< divi(n1, n2);
        break;
    case 'M':
        cout<< mul(n1,n2);
        break;
    default:
        cout << "opcao invalida";
    }

}
