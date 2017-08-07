#include <list>
#include <iterator>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	list<int> l; //Declara lista, inicialmente vazia
	
	l.push_back(2); //insere elemento no fundo [2]
	l.push_back(1); //estado da lista [2, 1]
	l.push_front(5); // [5, 2, 1]
	
	list<int>::iterator it = find(l.begin(), l.end(), 2); // retorna iterator do 2
	l.insert(it, 7); //insere o 7 antes do numero 2 , a lista fica [5 , 7 , 2 , 1]

	int i = l.back(); // i = 1
	int j = l.front(); // i = 5
	
	l.pop_back(); // deleta o ultimo elemento [5, 7 , 2]

	l.pop_front(); // deleta o primeiro elemento [7, 2]
	
	l.remove(2); // remove o elemento "2" [7]
	
	it = find(l.begin(), l.end(), 7); //encontra o 7
	
	l.erase(it); //remove o elemento apontado pelo iterator, que no caso é o 7, lista fica vazia []

	if(l.empty()) //checa se lista está vazia
		cout << "lista vazia" << endl;
}
