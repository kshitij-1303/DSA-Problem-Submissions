class Solution {
private:
    void sieve(int limit, vector<int>& primes) {

        vector<bool> isPrime(limit + 1, true);

        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i * i <= limit; i++) {

            if (isPrime[i]) {

                for (int j = i * i; j <= limit; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        for (int i = 2; i <= limit; i++) {

            if (isPrime[i]) {
                primes.push_back(i);
            }
        }
    }

public:
    vector<int> closestPrimes(int left, int right) {

        int limit = floor(sqrt(right));

        vector<int> primes;

        sieve(limit, primes);

        vector<bool> isPrime(right - left + 1, true);

   
        if (left == 1) {
            isPrime[0] = false;
        }

        for (int i = 0; i < primes.size(); i++) {

            int p = primes[i];

            int start = ((left + p - 1) / p) * p;

            if (start == p) {
                start += p;
            }

            for (int j = start; j <= right; j += p) {
                isPrime[j - left] = false;
            }
        }

        int previous = -1;
        int first = -1;
        int second = -1;
        int minDiff = INT_MAX;

        for (int i = 0; i < isPrime.size(); i++) {

            if (isPrime[i]) {

                int current = left + i;

                if (previous != -1) {

                    int diff = current - previous;

                    if (diff < minDiff) {
                        minDiff = diff;
                        first = previous;
                        second = current;
                    }
                }

                previous = current;
            }
        }

        return {first, second};
    }
};