#include <iostream>
#include <vector>

using namespace std;

int main(){

int d;
vector<int>msgini;
vector<int>msgfim;

cin>>d;

for(int i=0; i<d; i++){
	int m;
	cin>>m;
	msgini.push_back(m);
}

for(int i=0; i<d; i++){

	if(i==0){
		msgfim.push_back(msgini[0]+msgini[1]);
		//cout<<"inicial"<<endl;
		}
	else if(i==d-1){
		msgfim.push_back(msgini[d-2]+msgini[d-1]);
		//cout<<"meio"<<endl;
		}
	else{
		msgfim.push_back(msgini[i-1]+msgini[i]+msgini[i+1]);
		//cout<<"meio"<<endl;
		}

}
cout<<msgfim[0];
for(int i=1; i<d; i++){
	cout<<" "<<msgfim[i];
}
cout<<endl;
}
