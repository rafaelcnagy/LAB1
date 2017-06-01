#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct paises{
	string name;
	int qnt;
};

bool cmp(paises i, paises j){
	return(i.qnt>j.qnt || i.qnt==j.qnt && i.name<j.name);
}



int main(){
int teste=0,n;
while(cin>>n, n!=0){
	teste++;
	vector<paises>vet;
	for(int i=0; i<n; i++){
		paises nome;		
		cin>>nome.name;
		//cout<<"LEU O NOME"<<endl;
		vector<int>memes;
		for(int i=0; i<12; i++){
			int num;
			cin>>num;
			memes.push_back(num);
		}
		//cout<<"LEU A QUANT"<<endl;
		sort (memes.begin(), memes.end());
		//cout<<"PRIMEIRA ORD"<<endl;
		memes.erase(memes.begin());
		memes.erase(memes.end()-1);
		//cout<<"APAGOU"<<endl;
		nome.qnt=0;
		for(int i=0; i<10; i++)
			nome.qnt+=memes[i];
		vet.push_back(nome);
	}
	sort(vet.begin(), vet.end(), cmp);
	cout<<"Teste "<<teste<<endl;
	for(int i=0; i<n; i++){
		cout<<i+1<<" "<<vet[i].qnt<<" "<<vet[i].name<<endl;
	}
	cout<<endl;
}
}