#include <iostream> 
#include <deque> 
  
using namespace std; 
  

void show(deque<int> g) 
{ 
    deque<int> :: iterator it; 
    
	for (it = g.begin(); it != g.end(); ++it) {
        cout << *it << " "; 
	}
	
    cout << endl; 
} 

  
int main() 
{ 
    deque<int> deque1; 
    
    deque1.push_back(10); 
    deque1.push_front(20); 
    deque1.push_back(30); 
    deque1.push_front(15); 
    
    cout << "DEQUE: "; 
    show(deque1); 		// 15 20 10 30
  
    cout << endl << "size() : " << deque1.size(); 			// 4
    cout << endl << "max_size() : " << deque1.max_size(); 
  
  	cout << endl;
    cout << endl << "at(2) : " << deque1.at(2); 		// 10
    cout << endl << "front() : " << deque1.front(); 	// 15
    cout << endl << "back() : " << deque1.back(); 		// 30
  
  	cout << endl;
    cout << endl << "pop_front() : "; 
    deque1.pop_front(); 
    show(deque1); 		// 20 10 30
  
    cout << "pop_back() : "; 
    deque1.pop_back(); 
    show(deque1); 		// 20 10

  
    return 0; 
} 
