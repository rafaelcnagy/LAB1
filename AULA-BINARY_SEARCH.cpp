#include <algorithm>			/////////////////BUSCA BINARIA//////////////
#include <vector>

struct pessoa{
	int id;
	string nome;
}


bool cmp (pessoa i, pessoa j){
	return (i.id < j.id || i.id == j.id && i.nome < j.nome);
}


int main(){

	vector<int> vet;
	vector<pessoa> dados;
	pessoa aux;
	aux.id=10;
	aux.nome="Maria";
	dados.push_back(aux);

	for(int i=0; i<100; i++){
		int num;
		cin>>num;
		vet.push_back(num);
	}

	stable_sort(vet.begin(), vet.end());	//PRECISA SEMPRE ORDENAR ANTES DE FAZER A BUSCA BINARIA
	int numero=20;

	if (binary_search(vet.begin(), vet.end(), numero)){		//BUSCA BINARIA DE UM ELEMENTO "NUMERO"
		cout<<"Numero ESTA na lista"<<endl;					//de vet.begin() até vet.end()
	}														//Se encontrar, retorna TRUE

	if (binary_search(dados.begin(), dados.end(), aux, cmp)){	//ELE PRECISA DA CONDICAO DE ORDENACAO, POIS É UMA STRUCT

		vector<int>::iterator it;

		it=lower_bound(vet.begin(), vet.end(), numero);		//RETORNA A POSICAO DO ELEMENTO DE VALOR MENOR DENTRE OS MAIORES OU IGUAIS AO "NUMERO"															// PARA (4,7,7,8,9) -> lower(7)=7
		it=upper_bound(vet.begin(), vet.end(), numero);		//RETORNA A POSICAO DO ELEMENTO QUE É O MENOR DENTRE OS MAIORES  AO "NUMERO"
																	// PARA (4,7,7,8,9) -> lower(7)=8
		it-vet.begin()->distancia

}


