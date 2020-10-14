#include <algorithm> 
#include <iostream> 
#include <vector> 
#include <numeric> 

using namespace std; 
  
void show(int a[], int size) 
{
    for(int i = 0; i < size; i++) {
        cout << a[i] << " "; 
    }
    cout << endl;
} 

void show(vector<int> v, int size) 
{
    for(int i = 0; i < size; i++) {
        cout << v[i] << " "; 
    }
    cout << endl;
} 

int main() 
{ 
	// Array
    int array[] = {10, 20, 5, 23, 42, 15}; 
    
    int tam = sizeof(array) / sizeof(array[0]); 
    cout << "tam: " << tam << endl; 
    
    cout << "array: "; 
    show(array, tam);   
    
    // Ordenar Array: crescente
    sort(array, array+tam); 
    
    cout << "array: ordenado: "; 
	show(array, tam);
    cout << endl; 
    
	// Vector
    vector<int> vetor(array, array+tam); 
    
	tam = vetor.size();
	cout << "tam: " << tam << endl;
  
    cout << "vetor: "; 
	show(vetor, tam);
  
  
    // Ordenar Vector: crescente
    sort(vetor.begin(), vetor.end()); 
  
    cout << "vetor: ordenado: "; 
	show(vetor, tam);
  
  
    // Reverter Vector
    reverse(vetor.begin(), vetor.end()); 
  
    cout << "vetor: revertido: "; 
	show(vetor, tam);
  
  	// Maximo, Minimo e Somatorio 
    vector<int>::iterator max = max_element( vetor.begin(), vetor.end() );
    cout << endl << "vetor: maximo: " << *max; 
  
  	vector<int>::iterator min = min_element( vetor.begin(), vetor.end() ); 
    cout << endl << "vetor: minimo: " << *min; 
  
  	// OBS: por que max e min não poderiam ser simples ponteiros? Porque estamos utilizando um container (vector).
  
  	long soma = accumulate(vetor.begin(), vetor.end(), 0); 
    cout << endl << "vetor: somatorio: " << soma; 
    
    return 0; 
} 



