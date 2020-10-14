#include<iostream> 
#include<iterator> 
#include<vector> 

using namespace std; 

int main() 
{ 
    vector<int> vetor1 = { 1, 2, 3, 4, 5 }; 
    vector<int> vetor2 = { 10, 20, 30, 40, 50 }; 
	  
    vector<int>::iterator iter = vetor1.begin(); // 1
    iter = iter + 2; // 3   
    
    // Insere elementos de vetor2 na posicao X de vetor1 
    copy(vetor2.begin(), vetor2.end(), inserter(vetor1, iter) ); 
    
    cout << endl << "vetor1 : " << endl; 
    for (int &x : vetor1) {
    	cout << x << " "; 
	}
        
    cout << endl << "vetor2 : " << endl; // Nao se altera
    for (int &x : vetor2) {
    	cout << x << " "; 
	}
    
    return 0; 
} 
