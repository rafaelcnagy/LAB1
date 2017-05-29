#include <iostream>
using namespace std;

int apaga(int id[], int acao[], int j, int n){
	id[j]=id[j+1];
	acao[j]=acao[j+1];
	if(j<n)
		apaga(id,acao,j+1, n);
	else
		return n-1;
}


int main(){

int teste=0,p,r;

while(cin>>p>>r, p!=0 && r!=0){

	teste++;

	int id[100];

	for (int i=0; i<100; i++)
		id[i]=0;
	for (int i=0; i<p; i++)
		cin>>id[i];

	for (int i=0; i<r; i++){
		int n,ordem,acao[100];
		cin>>n>>ordem;
		for(int j=0; j<n; j++)
			cin>>acao[j];

		for(int j=0; j<n; j++){
			if(acao[j]!=ordem){
				apaga(acao,id,j,n);
				j--;
				n--;
			}
		}
	}

	cout<<"Teste "<<teste<<endl<<id[0]<<endl<<endl;
}
}