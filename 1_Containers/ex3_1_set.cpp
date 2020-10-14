#include <iostream> 
#include <set> 
#include <iterator> 
  
using namespace std; 

void show(set<int> s)
{
	set<int> :: iterator iter; 
    for (iter = s.begin(); iter != s.end(); ++iter) { 
        cout << *iter << " "; 
    } 
    cout << endl; 
}


int main() 
{ 
	set<int> s1;  								// descrescente: less (default)
    //set <int, greater <int> > s1;         	// crescente: greater
  	
    s1.insert(40); 
    s1.insert(30); 
    s1.insert(60); 
    s1.insert(20); 
    s1.insert(50); 
    s1.insert(50); // este nao sera adicionado
    s1.insert(10); 
    
    cout << "SET 1: "; 
	show(s1);
  
    // Copiar set1 para set2
    set<int> s2(s1.begin(), s1.end()); 
  	
  	cout << "SET 2: "; 
  	show(s2);
  
	// Remover: elemento 40
    s2.erase(40); 
  
  	cout << "SET 2: (removido)";
  	show(s2);
  
    // Remover elementos: do inicio ate antes de 30
    s2.erase(s2.begin(), s2.find(30)); 

	cout << "SET 2: (removido)";
  	show(s2);
    
    return 0; 
  
}
