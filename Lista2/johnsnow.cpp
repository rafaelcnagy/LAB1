#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct house{
	int cartas;
	int id;
};

bool cmp(house i, house j){
return (i.cartas<j.cartas || i.cartas==j.cartas && i.id>j.id);
}

int main(){
int c,h,t=0;

cin>>h>>c;
while(h!=0 && c!=0){
t++;

house teste;
vector <house> vet;

for(int i=0; i<h; i++){
	teste.id=i+1;
	teste.cartas=0;
	vet.push_back(teste);
}

for(int i=0; i<c; i++){
	int letter;
	cin>>letter;
	vet[letter-1].cartas++;
	cin>>letter;
	vet[letter-1].cartas++;
}



sort(vet.begin(), vet.end(), cmp);

cout<<"Teste "<<t<<endl<<vet[h-1].id;
int i=h-2;
while(vet[i].cartas==vet[h-1].cartas){
	cout<<" "<<vet[i].id;
	i--;
}
cout<<endl<<endl;

cin>>h>>c;
}
}
