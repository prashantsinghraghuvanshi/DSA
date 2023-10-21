class Solution {
public:
    static constexpr int mod = 1'000'000'007;
    long long power(long long x,long long y){
        if(y==0)    return 1;   //base condition
        long long ans=power(x,y/2);
        ans=(ans*ans)%mod;
        if(y%2) ans=(ans*x)%mod;
        return ans;
    }

    int countGoodNumbers(long long n) {
    long long odd = n / 2;
    long long even = n / 2 + n % 2; // Formula to calculate odd and even
    long long result = 1;

    // Calculate power of 5 and 4 with modulo at each step
    long long power5 = power(5, even);
    long long power4 = power(4, odd);

    // Multiply the powers with modulo
    result = (power5 % mod) * (power4 % mod);
    result %= mod;

    return result;
}
};