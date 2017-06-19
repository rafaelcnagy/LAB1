#include <iostream>
#include <queue>
#include <climits>

using namespace std;

struct map{
	int x;
	int y;
	int cont;
};


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
	bool flag[lin][col];
	for(int i=0; i<lin; i++)
		for(int j=0; j<col; j++)
			flag[i][j]=true;

	flag[y][x]=false;
	queue<map>caminho;
	map iniciacao;
	iniciacao.x=x;
	iniciacao.y=y;
	iniciacao.cont=0;
	caminho.push(iniciacao);

	while(true){
		map aux;
		aux=caminho.front();
		if(mapa[aux.y][aux.x]==0){
			cout<<aux.cont<<endl;
			break;
		}
		if(aux.x-1!=-1 && mapa[aux.y][aux.x-1] != 2  && flag[aux.y][aux.x-1]){
			map auxiliar;
			auxiliar.x=aux.x-1;
			auxiliar.y=aux.y;
			auxiliar.cont=aux.cont+1;
			caminho.push(auxiliar);
			flag[aux.y][aux.x-1]=false;
		}
		if(aux.y-1!=-1 && mapa[aux.y-1][aux.x] != 2 && flag[aux.y-1][aux.x]){
			map auxiliar;
			auxiliar.x=aux.x;
			auxiliar.y=aux.y-1;
			auxiliar.cont=aux.cont+1;
			caminho.push(auxiliar);
			flag[aux.y-1][aux.x]=false;
		}
		if(aux.x+1!=col && mapa[aux.y][aux.x+1] != 2 && flag[aux.y][aux.x+1]){
			map auxiliar;
			auxiliar.x=aux.x+1;
			auxiliar.y=aux.y;
			auxiliar.cont=aux.cont+1;
			caminho.push(auxiliar);
			flag[aux.y][aux.x+1]=false;
		}		
		if(aux.y+1!=lin && mapa[aux.y+1][aux.x] != 2 && flag[aux.y+1][aux.x]){
			map auxiliar;
			auxiliar.x=aux.x;
			auxiliar.y=aux.y+1;
			auxiliar.cont=aux.cont+1;
			caminho.push(auxiliar);
			flag[aux.y+1][aux.x]=false;
		}
		caminho.pop();
	}

}