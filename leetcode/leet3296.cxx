#include <vector>
using namespace std;

class Solution {
public:
    long long maxHeight(long long time, long long t) {
        long long low = 0, high = 1e6;
        while (low <= high) {
            long long mid = (low + high) / 2;
            long long req = t * (mid * (mid + 1)) / 2;
            if (req <= time)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high;
    }
    
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        
        long long low = 0, high = 1e18;
        long long ans = high;
        
        while (low <= high) {
            
            long long mid = (low + high) / 2;
            long long total = 0;
            
            for (int t : workerTimes) {
                total += maxHeight(mid, t);
                if (total >= mountainHeight) break;
            }
            
            if (total >= mountainHeight) {
                ans = mid;
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }
        
        return ans;
    }
};