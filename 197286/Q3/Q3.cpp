/*
Usando função recursiva faça que receba uma lista e o tamanho da lista e que apresente na tela a lista ao contrário
*/

#include <iostream>
using namespace std;

void imprimeContrario(int *lista, int tam, int i=0){
    if(tam == 0){
        cout << *lista << ",";
        return;
    }
    imprimeContrario(lista+1, tam-1, i+1);
    //Nao coloca a virgula no ultimo item da lista invertida
    if (i == 0){
        cout << *lista;
    }else{
        cout << *lista << ",";
    }
}

int main(){
    int vetor[] = {1,2,3,45,6,4,3,12,4};
    int tam = sizeof(vetor)/sizeof(vetor[0]);
    cout << "lista ao contrario: {";
    imprimeContrario(vetor, tam-1);
    cout << "}";
}