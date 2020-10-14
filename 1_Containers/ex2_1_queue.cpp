#include <iostream> 
#include <queue> 
  
using namespace std; 
  
void show(queue <int> gq) 
{ 
    queue<int> g = gq; 
    
    while (!g.empty()) 
    { 
        cout << g.front() << " "; 
        g.pop(); 
    } 
    cout << endl; 
} 
  
int main() 
{ 
    queue <int> fila; 
    
    fila.push(10); 					// adiciona no fim
    fila.push(20); 
    fila.push(30); 
  
    cout << "FILA: "; 
    show(fila); 
  
    cout << endl << "size() : " << fila.size(); 
    cout << endl << "front() : " << fila.front(); 
    cout << endl << "back() : " << fila.back(); 
  
    cout << endl << "pop() : "; 
    fila.pop(); 					// remove do inicio
    show(fila); 
  
    return 0; 
} 
