// Balloon Splash

// Alice and Bob are playing a balloon splash game.

// Alice has XX water balloons and Bob has YY water balloons.

// The player with more balloons wins. If both players have the same number of balloons, the result is a draw.

// Output:

//     Alice if Alice wins
//     Bob if Bob wins
//     Draw if it is a draw

// Input Format

//     The first line contains two space-separated integers XX and YY.

// Output Format

// Output a single string denoting the result of game:

//     Alice if Alice wins
//     Bob if Bob wins
//     Draw if it is a draw

// Each character can be printed in either uppercase or lowercase, i.e. if the winner is Bob, the outputs BOB, Bob, bOb, and so on will all be accepted.
// Constraints

//     1≤X,Y≤1001≤X,Y≤100



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