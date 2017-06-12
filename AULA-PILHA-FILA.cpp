		//-------------PILHAS-------------

#include<stack>

	//A PILHA FUNCIONA COM ADICAO SEQUENCIAL DE DADOS, E O ELEMENTO ACESSADO É SEMPRE O ULTIMO A SER ADICIONADO
#include<iostream>
using namespace std;
int main(){
	stack <int> pilha;	//DECLARA A PILHA (o tipo pode ser uma struct)
	int i,n;
	for(i=0; i<5; i++){
		cin>>n;
		pilha.push(h);	//INSERE h NA PILHA (como vector)
	}




	while(!pilha.empty()){	//ENQUANTO A PILHA NAO ESTA VAZIA
		n=pilha.top();	//QUAL ELEMENTO ESTA NO TOPO DA PIHA
		pilha.pop();	//RETIRA/APAGA O ELEMENTO DO TOPO
	}


		//-------------FILA-------------

	//O PRIMEIRO ELEMENTO A ENTRAR NA FILA, É O PRIMEIRO A SAIR

#include<queue>
				
	queue<int>fila;		//DECLARA FILA
	int i,n;
	for(int i=0; i<5; i++){
		cin>>n;
		fila.push(n);	//ADD n NA FILA
	}

	while(!fila.empty()){	//ENQUANTO A FILA NAO ESTA VAZIA
		n=pilha.front();//QUAL ELEMENTO ESTA NO INICIO DA PIHA
		pilha.pop();	//RETIRA/APAGA O PRIMEIRO ELEMENTO DA FILA
	}
}
