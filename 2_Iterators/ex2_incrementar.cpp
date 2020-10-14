#include<iostream> 
#include<iterator> 
#include<vector> 

using namespace std; 

int main() 
{ 
    vector<int> vetor = { 10, 20, 30, 40, 50 }; 
      
    // Declara iterator de vector 
    vector<int>::iterator iter1 = vetor.begin(); 
    vector<int>::iterator iter2 = vetor.end();   
      
    // INCREMENTAR X POSICOES (semelhantes)
    //iter1 = iter1+2;
	//iter1 = next(iter1, 2);
	advance(iter1,  2); 		
	
    // DECREMENTAR X POSICOES (semelhantes)
	//iter2 = iter2-1;
    //iter2 = prev(iter2, 1);
	advance(iter2, -1);

	cout << "iter1 : " << *iter1 << endl;	// 30
    cout << "iter2 : " << *iter2 << endl;	// 50
    
    int dist = distance(iter1, iter2);
    cout << "dist : " << dist << endl;	// 2
    
    
    return 0; 
} 
