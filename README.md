# Prova 1 de Algoritimos e Programação
 Primeira prova de algoritimos e programação
 ***
 1. Crie um programa que contenha uma função que receba dois números reais e um caractere e
retorne o resultado da operação conforme o caractere recebido: ‘A’ adição, ‘S’ subtração, ‘M’
multiplicação ou ‘D’ divisão. (2,0)
 2.  O desenvolvimento de sistema muitas vezes requer que os dados armazenados possam ser
recuperados mesmo que o computador seja desligado. Utilizando as funções para manipulação de
arquivos apresentadas em aula, desenvolva um programa que armazene 5 contatos em um arquivo
chamado “agenda.txt”. O programa deverá armazenar os contatos contendo: Nome, Endereço e
Telefone. Em seguida, o programa deverá apresentar na tela organizadamente todos os contatos
armazenados no arquivo. (3,0)
#Contato 01#
Nome: Afonso Pena
Endereço: Rua Dom Aquino, 1234
Telefone: 345-5432
#Contato 02#
Nome: Formado Corrêa da Costa
Endereço: Rua Eduardo Elias Zahran, 2345
Telefone: 456-7890
…
 3. Desenvolva uma função recursiva para apresentar os dados armazenados em um vetor de forma
invertida, ou seja, da última posição para a primeira. O programa principal deverá solicitar ao
usuário o preenchimento do vetor com números inteiros. A função recursiva, que deve receber o
vetor e seu tamanho, será responsável por exibir os valores na ordem inversa. (3,0)
 4. Analise o código a seguir e responda às questões:
 '''
#include &lt;iostream&gt;
using namespace std;
void soma(int &amp;a, int &amp;b, int &amp;resultado) {
    resultado = a + b;
}
int main()
{
    int n1 = 10, n2= -20, r=0;
    soma(n1, n2, r);
    cout &lt;&lt;&quot;Resultado: &quot;&lt;&lt; r &lt;&lt; endl;
    return 0;
}
'''
    1.  No contexto sobre modularização, o que significa &amp;a, &amp;b e &amp;resultado na /passagem de
parâmetros para uma função? (1,0)
    1.  Modifique a função apresentada na questão para que a passagem de parâmetros seja feita por
valor e o resultado da soma, seja apresentado na função principal (int main()). (1,0)
