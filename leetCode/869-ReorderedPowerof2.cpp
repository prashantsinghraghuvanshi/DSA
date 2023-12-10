#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int> countOfDigitsN = countDigits(n);

        for (int i = 0; i < 31; i++) {
            if (countDigits(1 << i) == countOfDigitsN) {
                return true;
            }
        }

        return false;
    }

private:
    vector<int> countDigits(int num) {
        vector<int> count(10, 0);

        while (num > 0) {
            int digit = num % 10;
            count[digit]++;
            num /= 10;
        }

        return count;
    }
};
