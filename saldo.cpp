#include <iostream>
using namespace std;

int main(){

int teste=0, n;

while(cin>>n, n!=0){
	teste++;
	int x[10000],y[10000],mS=0, mP=0, ini, fim;
	for(int i=0; i<n; i++)
		cin>>x[i]>>y[i];
	for(int i=0; i<n; i++){
		int sF=0, sC=0, per=0;
		for(int j=i; j<n; j++){
			sF+=x[j];
			sC+=y[j];
			per++;
			if((sF-sC)>mS || ((sF-sC)==mS && per>mP)){
				mS=(sF-sC);
				ini=i;
				fim=j;
				mP=per;
			}
		}
	}

	cout<<"Teste "<<teste<<endl;
	if(mS==0)
		cout<<"nenhum";
	else
		cout<<ini+1<<" "<<fim+1;


	cout<<endl<<endl;

}
}