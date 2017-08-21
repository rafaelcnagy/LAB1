#include <iostream>
#include <iterator>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;

struct vendedor{
	int id,qnt,status;
};


bool comp(vendedor a, vendedor b){
	return(a.id>b.id);
}


int main(){

	int n,l;
	cin>>n>>l;

	priority_queue <vendedor, vector<vendedor>,bool(*)(vendedor, vendedor)> vend(comp);

	for(int i=0; i<n; i++){
		vendedor aux;
		aux.id=i+1;
		aux.qnt=0;
		aux.status=0;
		vend.push(aux);
	}

	vector<pair<vendedor,int>>ligacao;

	for(int i=0; i<l; i++){
		int t;
		cin>>t;
		pair <vendedor,int> aux={vend.top(),t};
		ligacao.push_back(aux);
		vend.pop();
	}


}
