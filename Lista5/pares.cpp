#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector <int> vet;
	for(int i=0; i<n; i++){
		int aux;
		cin>>aux;
		vet.push_back(aux);
	}
	sort(vet.begin(),vet.end());

	int cont=0;

	for(vector <int> :: iterator it=vet.begin(); it!=vet.end()-1; it++){
		for(vector <int> :: iterator that=upper_bound(it, vet.end(),(*it)+k); that!=vet.end() && !((*that)-(*it)>k); that++){
			if((*that)-(*it)==k)
				cont++;
		}
	}
	cout<<cont<<endl;
}