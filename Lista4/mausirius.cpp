#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

int f;
while(cin>>f, f!=0){
	set <string> magicas;
	for(int i=0; i<f; i++){
		string edu;
		cin>>edu;
		sort(edu.begin(), edu.end());
		magicas.insert(edu);
	}
	cout<<magicas.size()<<endl;
}
}
