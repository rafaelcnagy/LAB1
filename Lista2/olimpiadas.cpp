#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct pais{
	int id,ouro,prata,bronze;
};

bool cmp(pais i,pais j){
	return(i.ouro>j.ouro || i.ouro==j.ouro && i.prata>j.prata || i.ouro==j.ouro && i.prata==j.prata && i.bronze>j.bronze);
}

int main(){
vector<pais>vet;
int n,m;
cin>>n>>m;
for(int i=0; i<n; i++){
	pais num;
	num.id=i+1;
	num.ouro=0;
	num.prata=0;
	num.bronze=0;
	vet.push_back(num);
}
for(int i=0; i<m; i++){
	int o, p, b;
	cin>>o>>p>>b;
	vet[o-1].ouro++;
	vet[p-1].prata++;
	vet[b-1].bronze++;
}
stable_sort(vet.begin(),vet.end(),cmp);
cout<<vet[0].id;
for(int i=1; i<n; i++)
	cout<<" "<<vet[i].id;
cout<<endl;
}