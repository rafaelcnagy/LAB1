#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct car{
	int id;
	int tempo;
};

bool cmp(car i, car j){
	return(i.tempo<j.tempo);
}

int main(){

int c,v;
cin>>c>>v;

vector<car>vet;

for(int i=0; i<c; i++){
	int soma=0;
	for(int j=0; j<v; j++){
		int time;
		cin>>time;
		soma+=time;
	}
	car car;
	car.id=i+1;
	car.tempo=soma;
	vet.push_back(car);
}

sort(vet.begin(), vet.end(),cmp);

cout<<vet[0].id<<endl<<vet[1].id<<endl<<vet[2].id<<endl;
}