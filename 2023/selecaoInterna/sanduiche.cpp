/**
 * Uma nova lanchonete abriu na cidade, prometendo um menu com a maior variedade de sanduíches da região. A cada dia o Chef de cozinha compra 
N ingredientes distintos e prepara o menu usando esses 
N ingredientes. Infelizmente não é possível ter sanduíches com qualquer combinação de ingredientes: a cada dia o Chef determina que 
M pares de ingredientes não podem ser utilizados no mesmo sanduíche, porque ele considera que esses ingredientes “não combinam”.

Por exemplo, suponha que num determinado dia 
N é igual a quatro e os ingrediantes são queijo, presunto, goiabada e azeitona, e 
M é igual a dois: os pares (goiabada, presunto) e (azeitona, goiabada) não podem ser utilizados no mesmo sanduíche. Nesse dia, alguns dos sanduíches que podem ser feitos são:

presunto, queijo
azeitona
presunto, azeitona, queijo
goiabada, queijo
Alguns dos sanduíches que não podem ser feitos são:

presunto, queijo, goiabada
azeitona, goiabada
goiabada, presunto, azeitona
Dados os 

N ingredientes e os 
M pares de ingredientes que não combinam, sua tarefa é determinar qual o máximo número de sanduíches diferentes que podem ser feitos. Dois sanduíches 
A e 
B são considerados diferentes se 
A contém um ingrediente 
X que não está presente em 
B ou se 
B contém um ingrediente 
Y que não está presente em 
A. Um sanduíche deve conter ao menos um ingrediente.

Entrada
A primeira linha contém dois números inteiros 
N e 
M, indicando respectivamente o número de ingredientes e o número de pares de ingredientes que não combinam. Os ingredientes são identificados por números de 1 a 
N. Cada uma das 
M linhas seguintes contém dois números inteiros 
X e 
Y que representam um par de ingredientes que não combinam.

Saída
Seu programa deve produzir uma única linha, o número de sanduíches diferentes que podem ser feitos.
Exemplos de Entrada	
3 2
2 3
1 2
Exemplos de Saída
4

3 0
7

3 3
1 2
2 3
1 3
3

 * 
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> ingredientes(n);
    vector<vector<int>> naoCombinam(n);
    for(int i = 0; i < n; i++){
        ingredientes[i] = i;
    }
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        naoCombinam[a-1].push_back(b-1);
        naoCombinam[b-1].push_back(a-1);
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        vector<int> sanduiches;
        for(int j = 0; j < n; j++){
            if(i != j){
                sanduiches.push_back(j);
            }
        }
        for(int j = 0; j < naoCombinam[i].size(); j++){
            for(int k = 0; k < sanduiches.size(); k++){
                if(naoCombinam[i][j] == sanduiches[k]){
                    sanduiches.erase(sanduiches.begin() + k);
                    k--;
                }
            }
        }
        if(sanduiches.size() > max){
            max = sanduiches.size();
        }       
    }
    cout << max << endl;
    return 0;
}