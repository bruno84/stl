#include <algorithm> 
#include <iostream> 
#include <vector> 

using namespace std; 
 
/*
Vectors são contêineres sequenciais que representam arrays que podem mudar de tamanho.
Assim como os arrays, os vectors usam armazenamento contíguos na memória para seus elementos, 
com a mesma eficiência dos arrays. 
Mas, diferentemente dos arrays, seu tamanho pode mudar dinamicamente.
Portanto, em comparação com os arrays, os vectors consomem mais memória 
em troca da capacidade de gerenciar o armazenamento e crescer dinamicamente de forma eficiente.
*/

void show(int array[], int size) 
{ 
	cout << endl; 
    for(int i = 0; i < size; ++i) {
    	cout << array[i] << " ";	
	}
	cout << endl;
}
  
void show(vector<int> v) 
{
	cout << endl; 
	int size = v.size();
    for(int i = 0; i < size; ++i) {
    	cout << v[i] << " ";	
	}
	cout << endl; 
}
  
int main() 
{
	// ARRAY
    int array[] = {1, 1, 7, 1, 1, 8 }; 	
    int n = sizeof(array) / sizeof(array[0]); 
    cout << "ARRAY: "; 
	show(array, n);		
    
    // ARRAY -> VECTOR
    vector<int> vetor(array, array+n);
    cout << endl << "VECTOR: "; 
	show(vetor);
			
	cout << endl <<"UNIQUE: " << endl;
	vector<int>::iterator last = unique( vetor.begin(), vetor.end() );  // : 1, 7, 1, 8, (1), (8)
	cout << "last = " << *last << endl;			// 1 (new end)
	
	cout << endl <<"DISTANCE: " << endl;
	int dist = distance(vetor.begin(), last );
	cout << "dist = " << dist << endl;			// 4
	
	cout << endl << "SIZE: " << endl;
	n = vetor.size();
	cout << "n = " << n << endl;				// 6
	
	cout << endl << "ERASE: (intervalo)";
    vetor.erase(last, vetor.end() ); 			// 1, 7, 1, 8	
    show(vetor); 
  
	cout << endl << "SIZE: " << endl;
	n = vetor.size();
	cout << "n = " << n;						// 4
  	show(vetor); 
  	
	cout << endl << "COUNT: ";
    cout << count(vetor.begin(), vetor.end(), 1) << endl; // 2 = 1 aparece duas vezes
  
    cout << endl << "FIND: "; 
    vector<int>::iterator pos = find(vetor.begin(), vetor.end(), 8); 
    cout << pos - vetor.begin() << endl; 		// 3
      
  	cout << endl << "ERASE: (elemento) " << endl;
	int indexToDelete = 2;
    vetor.erase(vetor.begin() + indexToDelete); 
		
	cout << endl << "SIZE: " << endl;
	n = vetor.size();
	cout << "n = " << n;						// 3
  	show(vetor); 

    return 0; 
} 
