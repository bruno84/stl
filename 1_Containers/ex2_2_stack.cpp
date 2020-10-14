#include <iostream> 
#include <stack> 

using namespace std; 
  
void show(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << s.top() << " "; 
        s.pop(); 
    } 
    cout << endl; 
} 
  
int main () 
{ 
    stack<int> pilha; 
    
    pilha.push(10); 				// adiciona no topo (inicio)
    pilha.push(30); 
    pilha.push(20); 
    pilha.push(5); 
    pilha.push(1); 
  
    cout << "PILHA: "; 
    show(pilha); 
  
    cout << endl << "size() : " << pilha.size(); 
    cout << endl << "top() : " << pilha.top(); 
  
  
    cout << endl << "pop() : "; 
    pilha.pop(); 					// remove do topo (inicio)
    show(pilha); 
  
    return 0; 
} 
