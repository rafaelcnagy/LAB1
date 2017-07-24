#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, k;
	scanf("%d %d",&n,&k);
	vector <int> vet;

	for(int i=0; i<n; i++){
		int aux;
		scanf("%d", &aux);
		vet.push_back(aux);
	}

	for(int i=0; i<k; i++){
		int aux;
		scanf("%d",&aux);
		if(binary_search(vet.begin(),vet.end(),aux)){
			vector<int>::iterator it;
			it=lower_bound(vet.begin(),vet.end(),aux);
			int kk;
			kk=it-vet.begin();
			printf("%d\n",kk);
		}

		else
			printf("-1\n");
	}
}