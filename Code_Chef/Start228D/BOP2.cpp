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
