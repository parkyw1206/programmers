/************************************************************
 *  name : Youngwoo Park
 *  date : 09-24-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill: binary Number
 * *********************************************************/
 
#include <string>
#include <vector>

using namespace std;
int countOne(int n){
    int binaryNum[20]; 
    int i = 0, count = 0; 
    while (n > 0) {   
        binaryNum[i] = n % 2; 
        if(n%2 == 1)
            count++;
        n = n / 2;
        i++; 
    }
    return count;
}
int solution(int n) {
    int answer = 0;
    int originNum = countOne(n);
    for(int num = n+1 ; num <= 1000000 ; num++){
        if(countOne(num) == originNum)
            return num;
    }
    return answer;
}