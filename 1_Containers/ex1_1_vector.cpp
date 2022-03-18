#include <algorithm> 
#include <iostream> 
#include <vector> 

using namespace std; 
 
/*
Vectors sao conteineres sequenciais que representam arrays que podem mudar de tamanho.
Assim como os arrays, os vectors usam armazenamento contiguos na memoria para seus elementos, 
com a mesma eficiencia dos arrays. 
Porem, diferentemente dos arrays, seu tamanho pode mudar dinamicamente.
Portanto, em comparacao com os arrays, os vectors consomem mais memoria, 
em troca da capacidade de gerenciar o armazenamento e crescer dinamicamente de forma eficiente.
*/



void show(vector<int>::iterator begin, vector<int>::iterator end) 
{ 
	cout << endl; 
	
	// auto : keyword usado em contextos que o compilador ja subentende qual sera o tipo.
	// 		  Deve ser usado com moderacao.
    for (auto it = begin; it != end; it++) 
	{
		cout << *it << " ";
	}
        
	cout << endl<<endl;
}

void show(int array[], int size) 
{ 
	cout << endl; 
    for(int i = 0; i < size; ++i) {
    	cout << array[i] << " ";	
	}
	cout << endl<<endl;
}
  
void show(vector<int> v) 
{
	cout << endl; 
	int size = v.size();
    for(int i = 0; i < size; ++i) {
    	cout << v[i] << " ";	
	}
	cout << endl<<endl;
}
  
int main() 
{
	cout << "ARRAY: "; 
    int array[] = {10, 20, 20, 20, 30, 30, 20, 20, 10}; 	
    
	int sizeArray = sizeof(array) / sizeof(array[0]); 

	show(array, sizeArray);		
    cout << "sizeArray: " << sizeArray << endl<<endl; 
    
    
    cout << "VECTOR: " << endl; 
    
	// Declaracao sem informar o tamanho e depois adiciono elementos no final
    vector<int> vetor1;	 
    
    vetor1.push_back(10);
    vetor1.push_back(20);
    vetor1.push_back(30);
    
    cout << "vetor1: "; 
    show(vetor1);
    
	// Declaracao informando o tamanho e depois preencho todos com um valor padrao
	vector<int> vetor2( 5 );	
	 
    fill(vetor2.begin(), vetor2.end(), -1);
    
    cout << "vetor2: "; 
    show(vetor2);
    
    // Inicializacao preenchendo todos com um valor padrao 
    vector<int> vetor3(10, -1);	 // (size, valorInicial)
	cout << "vetor3: "; 
    show(vetor3);

    // Inicializacao com base em um conjunto
    vector<int> vetor4 = { 10, 20, 30 };
    cout << "vetor4: "; 
    show(vetor4);

    
	// Inicializacao com base em um array
    vector<int> vetor5(array, array+sizeArray);		// 10, 20, 20, 20, 30, 30, 20, 20, 10 	
    cout << "vetor5: "; 
	show(vetor5);

	cout << "COUNT: ";
	// Conta quantos elementos o valor aparece no vector.
    cout << count(vetor5.begin(), vetor5.end(), 20) << endl<<endl;  // 5

	cout << "UNIQUE: " << endl;
	// Retorna um iterator que aponta para o ultimo elemento apos o ultimo elemento valido.
	vector<int>::iterator last = unique( vetor5.begin(), vetor5.end() );  // 10 20 30 20 10 (30) (20) (20) (10)
	cout << "last = " << *last;			// 30  pois o ultimo elemento valido eh o 10 								 *
	show(vetor5);	
	
	cout << "DISTANCE: " << endl;
	// Retorna a quantidade de elementos entre o inicio e o fim.
	int dist = distance( vetor5.begin(), last );
	cout << "dist = " << dist << endl;					// 5  (quantidade de elementos uteis)
	cout << "size = " << vetor5.size() << endl<<endl;	// 9
	
	cout << "RESIZE: " << endl;
	// Altera o tamanho do vector
	vetor5.resize( dist ); 					// 10 20 30 20 10
	cout << "size = " << vetor5.size();		// 5
	show(vetor5);
	
	cout << "BEGIN e END: ";
	// OBS: end() nao retorna o iterator do ultimo elemento,
	// 		mas sim o iterator apos o ultimo (past-the-end).
	show( vetor5.begin(), vetor5.end() );  // 0, 5
			
	cout << "ERASE (intervalo): " << endl;
	// Remove um trecho do vector. Parametros: inicio, fim (past-the-end)
    vetor5.erase(vetor5.begin(), vetor5.end() - 3 );  // 0, (5-3=2)
	cout << "size = " << vetor5.size();		// 3	
    show(vetor5); 			// Removeu o inicio: 10, 20 	Resultou: 30 20 10
	  
    cout << "FIND: " << endl; 
    // Retorna o iterator para a primeira ocorrencia do argumento.
    vector<int>::iterator pos = find(vetor5.begin(), vetor5.end(), 10); 
    cout << "index de pos: " << pos - vetor5.begin() << endl; 	// 2
      
  	cout << endl << "ERASE: (elemento) " << endl;
	int indexToDelete = 1;			// quero apagar o 20
    vetor5.erase(vetor5.begin() + indexToDelete); 
		
	cout << "size = " << vetor5.size();	 // 2
  	show(vetor5); 
  	

    return 0; 
} 
