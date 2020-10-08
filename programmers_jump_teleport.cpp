/************************************************************
 *  name : Youngwoo Park
 *  date : 09-24-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill: int to binary int
 * *********************************************************/
#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    int i = 0; 
    while (n > 0) { 
        if(n%2 == 1)
            ans++;
        n = n / 2; 
        i++; 
    } 
  
    return ans;
}