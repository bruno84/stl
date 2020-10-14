#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 


void show( map<int, int> m )
{
    map<int, int>::iterator itr; 
    
    cout << "\tKEY\tELEMENT\n"; 
    
    for (itr = m.begin(); itr != m.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
}


int main() 
{ 
    map<int, int> map1; 
  
	map1.insert( pair<int, int>(7, 70) ); 
  	map1.insert( pair<int, int>(3, 30) );
  	map1.insert( pair<int, int>(5, 50) ); 
    map1.insert( pair<int, int>(1, 10) ); 
    map1.insert( pair<int, int>(2, 20) ); 
    map1.insert( pair<int, int>(4, 40) ); 
    map1.insert( pair<int, int>(6, 60) ); 
  
  	cout << "MAP 1: "; 
	show(map1);
  
  	map<int, int>::iterator iter = map1.find(3);
  	cout << "Chave: " << iter->first << " Valor: " << iter->second << endl; 
  
    // Copiar map1 para map2
    map<int, int> map2(map1.begin(), map1.end()); 
  
  	cout << "MAP 2: "; 
  	show(map2);
  
  	// Remover: elemento com chave=4 
    map2.erase(4); 
    
	cout << "MAP 2: (Remover: elemento com chave=4)"; 
  	show(map2);
      
    // Remover: do inicio ate antes do elemento com chave=3
    map2.erase(map2.begin(), map2.find(3)); 
    
	cout << "MAP 2: (Remover: do inicio ate antes do elemento com chave=3)"; 
  	show(map2);

  
    return 0; 
} 
