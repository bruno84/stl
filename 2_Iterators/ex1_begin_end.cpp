#include<iostream> 
#include<iterator> 
#include<vector> 

using namespace std; 

int main() 
{ 
	// Inicializa vector
    vector<int> vetor = { 10, 20, 30, 40, 50 }; 
//  vector<int> vetor; // vazio
    
    // Declara iterator para um vector 
    vector<int>::iterator iter; 
    
    if( vetor.begin() == vetor.end() ) {
    	cout << "Vazio!" << endl;	
	}
	else {
		cout << "begin(): " << *vetor.begin()   << "\n";
    	cout << "end(): "   << *vetor.end()     << "\n";	// Elemento: past-the-end (depois do ultimo)
    	cout << "end()-1: " << *(vetor.end()-1) << "\n";	
	}
		    
    cout << "Elementos do vector: "; 
    
    for (iter = vetor.begin(); iter < vetor.end(); iter++) {
		cout << *iter << " "; 
	}
    
    cout << " FIM " << endl;
    
    return 0;     
} 
