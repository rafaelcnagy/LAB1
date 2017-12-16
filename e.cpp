#include <iostream>
#include <iomanip>
#include <queue>
#include <cmath>
using namespace std;
typedef struct {
	double x,y,z;
} ponto;


int main(){
	long long n;
	cin>>n;
	queue<ponto> p;

	for(long long i=0; i<n; i++){
		ponto aux;
		double x,y,z;
		cin>>x>>y>>z;
		aux.x = x;
		aux.y = y;
		aux.z = z;
		p.push(aux);
	}

	


	while (p.size() != 1){
		long long tam = p.size();
		for(long long i=0; i<tam/2; i++){
			ponto aux1, aux;
			aux = p.front();
			p.pop();
			aux1 = p.front();
			p.pop();

			ponto novo;
			novo.x = (double) (aux.x + aux1.x)/2;
			novo.y = (double) (aux.y + aux1.y)/2;
			novo.z = (double) (aux.z + aux1.z)/2;

			p.push(novo);
		}
	}

	ponto aux = p.front();

	cout<<aux.x<<" "<<aux.y<<" "<<aux.z<<endl;

}