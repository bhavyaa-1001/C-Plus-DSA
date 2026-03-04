// Color Festival

// It is the festival of colors, and you decide to visit your NN friends one by one.

// When you visit friend ii, your face is painted with color CiCi​.

//     Initially, your face has no color.
//     If the color currently on your face is different from the color applied by the next friend, your face color changes.
//     In particular, when your face has no color and a color is applied to it, your face will change color.

// Each time your face color changes, you feel a jolt.

// You are allowed to choose the order in which you visit your friends, but you must visit every one of them exactly once each.
// Find the minimum possible number of jolts.
// Input Format

//     The first line contains an integer TT — the number of test cases.
//     For each test case:
//         The first line contains an integer NN — the number of friends.
//         The second line contains NN integers C1,C2,…,CNC1​,C2​,…,CN​ — where CiCi​ is the color painted by friend ii.

// Output Format

// For each test case, output a single integer — the minimum possible number of jolts.
// Constraints

//     1≤T≤1001≤T≤100
//     1≤N≤1001≤N≤100
//     1≤Ci≤N1≤Ci​≤N



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    
    while(T--){
        int N;
        cin >> N;
        
        vector<int> arr(N);
        
        for(int i = 0;i<N ;i++){
            cin >> arr[i];
        }
        
        sort(arr.begin(),arr.end());
        
        int jolts = 0;
        for(int i =0;i<N; i++){
            if(i == 0 || arr[i] != arr[i-1]){
                jolts++;
            }
        }
        std::cout << jolts << std::endl;
    }
    return 0;
}
