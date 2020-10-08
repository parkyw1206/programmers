#include <iostream>

using namespace std;

long long gcd(long long a,long long b) {
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a-b, b);
    else return gcd(a, b-a);
}

long long solution(int w,int h) 
{
    long long W = (long long)w;
    long long H = (long long)h;
    
    long long answer  = W*H - ( W + H - gcd(W,H));
    return answer;
}