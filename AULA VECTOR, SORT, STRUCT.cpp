#include<iostream>

#include <vector>


using namespace std;


int main(){

//////////////////////////////////////////VECTOR

vector <int> v2(1000);
vector <int> v;


for(int i=0; i<1000; i++){
	int j;
	cin>>j;


	v.push_back(j);	//funcao push_ack add elementos no final do vetor
			//e aloca mais espaco caso necessario

	vetor.size() 	//tamanho

	v.clear()	//apaga todos elementos

}



#include<iterator>

int main(){
	vector<int>::itterator it	//Declara um ponteiro "it"
	v.begin()			//Endereco inicial
	v.end()				//Endereco final

for(vector<int>::itterator it=v.begin; it!=v.end(); it++){
}


v.erase(v.begin())				//Remove a posicao do vetor
v.erase(v.begin()+1, v.end())			//Remove o intervalo
						//Nao limpa os endereços, remove a posicao msm

//www.cpluscplus.com		BOA FONTE






////////////////////////////////////ORDENACAO

#include<algorithm>

sort(v.begin(), v.end())			//Ordenacao com complexidade N*logN (Não estável)
stable_sort(v.begin(), v.end())

//Não estavel - nao preserva a ordem original quando há empates dos elementos
//(10,rubis)(10,ana)(5,joao) ->	(5,joao)(10,ana)(10,rubis)	NAO ESTAVEL
//(10,rubis)(10,ana)(5,joao) ->	(5,joao)(10,rubis)(10,ana)	ESTAVEL





/////////////////////////////////////STRUCT

struct pessoa{

	int id;
	string name;
//	...
};
bool cmp(pessoa i, peessoa j){		//Compara duas posicoes da estrutura
	return(i.id < j.id || i.id == j.id && i.nome < j.nome);	//Se a condicao do () for satisfeita,o bool retorna TRUE, senao, FALSE
}					

int main(){

	vector<pessoa> v;
//	...
	stable_sort(v.begin(), v.end(), cmp);
