/************************************************************
 *  name : Youngwoo Park
 *  date : 10-03-2020
 *  level: l3
 *  problem source: programmers
 *  lang: C++
 *  skill:  memorization
 * *********************************************************/
 
#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    long long arr[n+1];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    for(int i = 3 ; i <= n ; i ++){
        arr[i] = (arr[i-1] + arr[i-2])%1234567;
    }
    return arr[n];
}