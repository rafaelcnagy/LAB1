//LOGIN: T1A38

#include <iostream>
#include <stdlib.h>
using namespace std;

/*int main(){				//EXEMPLO
	int var, x, y;
	int *p, *q;
	var=10; x=20; y=30;
	p=&var;p++; q=&x; *p=*q;
	p=q; *q++;
	cout<<*p<<endl;
}*/


/*void troca(int *p1, int *p2){		//PONTEIRO
	int aux;
	aux=*p1;
	*p1=*p2;
	*p2=aux;
}

int main(){
	int n1,n2;
	int aux;
	n1=100;
	n2=20;
	cout<<"n1="<<n1<<endl<<"n2="<<n2<<endl<<"TROCA"<<endl;
	troca (&n1, &n2);
	cout<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
} */


/*int main(){				//ALOCAÇÃO DINAMICA
	int **mat, n=2;
	mat=(int**)malloc(sizeof(int*)*n);
	for(int i=0; i<n; i++){
		mat[i]=(int*)malloc(sizeof(int)*n);
	}
	mat [2][3]=7;
	
	cout<<mat[2][3]<<endl;




}*/
