/*
Faça um programa que armazene o contatos de 5 pessoas com o nome, endereço e numero armazenando em um arquivo chamado agenda.txt
E depois mostre o conteudo da agenda na tela.
O armazenamento deve ser feito nesse modelo:

#CONTATO 1#
Nome: Jose
Endereco: Rua tilabuco, 44
Numero: (67) 9932-4522

#Contato 2#
...
*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

//VARIAVEIS GLOBAIS
FILE *pFile;


//VARIAVEIS
//Agenda os contatos digitados
void agendar(char arq[10], char nome[50], char endereco[50], char numero[50], int index){
    //Abre o arquivo como append ("adicionar")
    pFile = fopen(arq, "a");

    //Verifica se deu erro ao abrir o arquivo;
    if(pFile == NULL){
        cout << "Erro ao abrir arquivo";
        return;
    }

    //ISERINDO INFORMACOES NO ARQUIVO
    fprintf(pFile, "#Contato %d#", index+1);
    fputc('\n', pFile);
    fprintf(pFile, "Nome: %s", nome);
    fprintf(pFile, "Endereco: %s", endereco);
    fprintf(pFile, "Contato %s", numero);
    fputc('\n', pFile);

fclose(pFile);
}

void mostrarArq(char arq[10]){
    //Abre o arquivo para leitura
    pFile = fopen(arq, "r");
    
    if(pFile == NULL){
        cout << "Erro ao abrir arquivo";
        return;
    }

    //MOSTRANDO ARQUIVO
    char c;
    while(true){
        c = fgetc(pFile);
        if(c == EOF){break;}
        cout << c;
    }

fclose(pFile);
}

int main(){
    //Declaração de variaveis
    char nomes[5][50];
    char endereco[5][100];
    char numero[5][16];
    char agenda[] = "agenda.txt";

    //Pega as informacoes dos contatos
    for (int i = 0; i < 5; i++){
        fflush(stdin);
        cout << "Digite o nome do " << i+1 << " contato: ";
        fgets(nomes[i], 50, stdin);
        fflush(stdin);
        cout << "Digite o endereco do " << i+1 << " contato: ";
        fgets(endereco[i], 50, stdin);
        fflush(stdin);
        cout << "Digite o numero do " << i+1 << " contato: ";
        fgets(numero[i], 50, stdin);
        fflush(stdin);
        cout << endl;
    }

    //Cria a agenda
    for (int i = 0; i < 5; i++){
        agendar(agenda, nomes[i], endereco[i], numero[i], i);
    }
    mostrarArq(agenda);
}
