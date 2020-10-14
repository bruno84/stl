#include <algorithm> 
#include <iostream> 
#include <vector> 
  
using namespace std; 

void show(vector<int> v, int size) 
{
    for(int i = 0; i < size; i++) {
        cout << v[i] << " "; 
    }
    cout << endl;
} 
  
int main() 
{ 
    vector<int> vetor = { 10, 20, 30, 40, 50 }; 
        
	int tam = vetor.size();
	cout << "tam: " << tam << endl;
  
    cout << "vetor: "; 
	show(vetor, tam);
  
    // Ordenar Vector: crescente
    sort(vetor.begin(), vetor.end()); 
  
    cout << "vetor: ordenado: "; 
	show(vetor, tam);
	
	// Busca binaria
    if ( binary_search( vetor.begin(), vetor.end(), 20) ) 
        cout << "Existe"; 
    else
        cout << "Nao Existe"; 
        
    // OBS: binary_search() funciona tamb�m para arrays:
    // binary_search( array, array+tam, 20)  
    
    // OBS: perceba que binary_search() retorna apenas true/false. 
	// Se quiser saber a posi��o do elemento na cole��o, 
	// implemente seu pr�prio algoritmo de busca bin�ria (� pequeno e f�cil).
  
    return 0; 
} 
