#include <iostream> 
#include <list> 
#include <iterator> 

using namespace std; 
  
/**
 * Por padrão, "list" é DUPLAMENTE encadeada.
 * Para usar lista simplesmente encadeada usar "forward_list".
 */

void show(list<int> lista) 
{ 
    list <int> :: iterator it; 
    
    for(it = lista.begin(); it != lista.end(); ++it) {
        cout << *it << " "; 
    }
    
    cout << endl; 
} 
  

int main() 
{
	// DECLARAR LISTAS
    list <int> lista1, lista2; 
    
    int n = lista1.size();
    cout << "n = " << n << endl;
  
    for(int i = 0; i < 10; ++i) { 
        lista1.push_back(i); 	// adiciona do fim
        lista2.push_front(i); 	// adiciona do inicio
    } 
    
    n = lista1.size();
    cout << "n = " << n << endl;
    
    cout << endl << "Lista 1: "; 
    show(lista1); 
  
    cout << endl << "Lista 2: "; 
    show(lista2); 
  
    cout << endl << "lista1.front() : " << lista1.front(); 
    cout << endl << "lista1.back() : "  << lista1.back() << endl; 
  
    cout << endl << "lista1.pop_front() : "; 
    lista1.pop_front(); 
    show(lista1); 
  
    cout << endl << "lista2.pop_back() : "; 
    lista2.pop_back(); 
    show(lista2); 
  
    cout << endl << "lista1.reverse() : "; 
    lista1.reverse(); 
    show(lista1); 
  
    cout << endl << "lista2.sort(): "; 
    lista2.sort(); 
    show(lista2); 
  
    return 0; 
  
}  
