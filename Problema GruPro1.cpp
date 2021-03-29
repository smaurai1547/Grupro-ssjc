/*
NOME DO PROBLEMA: Remover o menor (Traduzido do Inglês)

Você recebeu a matriz "a" consistindo de "n" inteiros positivos (maiores que zero).
Em um movimento, você pode escolher dois índices "i" e "j" (i ≠ j) de modo que a diferença absoluta entre "ai" e "aj" não seja maior que um (| ai − aj | ≤1) e remover o menor desses dois elementos. Se dois elementos forem iguais, você pode remover qualquer um deles (mas exatamente um).
Sua tarefa é descobrir se é possível obter o array (a matriz) consistindo de apenas um elemento usando vários (possivelmente, zero) desses movimentos ou não.
Você tem que responder "t" casos de teste independentes.

INPUT
A primeira linha da entrada contém um inteiro t (1 ≤ t ≤ 1000) - o número de casos de teste. A seguir, casos de teste t.
A primeira linha do caso de teste contém um inteiro "n" (1 ≤ n ≤ 50) - o comprimento de "a". A segunda linha do caso de teste contém "n" inteiros a1, a2, ..., an (1 ≤ ai ≤ 100), onde ai é o i-ésimo elemento de a.

OUTPUT
Para cada caso de teste, imprima a resposta: "SIM" se for possível obter a matriz que consiste em apenas um elemento usando vários (possivelmente, zero) movimentos descritos na declaração do problema, ou "NÃO" caso contrário.
*/

// Bibliotecas
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int casosteste, comprimentomatriz, teste;
  // Entrada do numero de casos de teste
  cin >> casosteste;
  
  for (int i = 0; i < casosteste; i++){
    // Entrada do comprimento da Matriz
    cin >> comprimentomatriz;
    // Definição de uma variavel vector com comprimento definido (ou fixo)
    vector<int> arrayA(comprimentomatriz);
    for (int j = 0; j < comprimentomatriz; j++){
	  // Entrada de valores para teste
      cin >> teste;
      // Atribui para cada espaço na vector um valor de teste
      arrayA[j] = teste;
    }
    // Ordena os valores da vector
    sort(arrayA.begin(), arrayA.end());
    // Declaração e atribuição de valor da variavel "interruptor"
    int flag = 1;
    // Teste do problema
    for (int j = 1; j < casosteste; j++){
      if(arrayA[j] - arrayA[j-1] >= 2){
        flag = 0;
      }
    }
    // Saídas do problema
    if(flag == 1){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
}