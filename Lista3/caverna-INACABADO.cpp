#include <iostream>
#include <queue>
#include <climits>

using namespace std;

int main(){
	
	int col,lin,x,y,mapa[10][10]={};
	cin>>lin>>col;

	for(int i=0; i<lin; i++){
		for(int j=0; j<col; j++){
			cin>>mapa[i][j];
			if(mapa[i][j]==3){
				x=j;
				y=i;
			}
		}
	}
	int maior= INT_MAX;
}