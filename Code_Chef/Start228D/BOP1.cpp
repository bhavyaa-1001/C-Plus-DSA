#include<iostream>
using namespace std;

int main() {
	int x;
	std::cin >> x;
	int y ;
	std::cin >> y;
	
    if(x>y){
        std::cout << "Alice" << std::endl;
    }
    else if(y>x){
        std::cout << "Bob" << std::endl;
    }
    else{
        std::cout << "Draw" << std::endl;
    }
}