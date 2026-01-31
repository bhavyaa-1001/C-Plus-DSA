#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Normal sieve to get primes up to sqrt(R)
vector<int> simpleSieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            if ((long long)i * i <= limit) {
                for (int j = i * i; j <= limit; j += i)
                    isPrime[j] = false;
            }
        }
    }
    return primes;
}

// Segmented sieve for range [L, R]
void segmentedSieve(long long L, long long R) {
    int limit = sqrt(R) + 1;
    vector<int> primes = simpleSieve(limit);

    vector<bool> isPrime(R - L + 1, true);

    if (L == 1)
        isPrime[0] = false;

    for (int p : primes) {
        long long start = max((long long)p * p,
                               ((L + p - 1) / p) * p);

        for (long long j = start; j <= R; j += p)
            isPrime[j - L] = false;
    }

    cout << "Prime numbers between " << L << " and " << R << ":\n";
    for (long long i = L; i <= R; i++) {
        if (isPrime[i - L])
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    long long L, R;
    cout << "Enter L and R: ";
    cin >> L >> R;

    segmentedSieve(L, R);

    return 0;
}
