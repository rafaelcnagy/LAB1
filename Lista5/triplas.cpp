#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while (cin>>n, n!=0){
		vector<int>vet;
		for(int i=0; i<n; i++){
			int aux;
			cin>>aux;
			vet.push_back(aux);
		}
		sort(vet.begin(),vet.end());
		int cont=0;
		vector<int>::iterator it;
		for(it=vet.begin(); it!=vet.end()-2; it++){
			for(vector<int>::iterator that=it+1; that!=vet.end()-1;that++){
				vector<int>::iterator what=upper_bound(that,vet.end(),(*it)+(*that));
				if(what!=vet.end()){
					cont+=(vet.end()-what);
				}
			}
		}
		cout<<cont<<endl;
	}
}