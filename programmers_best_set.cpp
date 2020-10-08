/************************************************************
 *  name : Youngwoo Park
 *  date : 10-03-2020
 *  level: l3
 *  problem source: programmers
 *  lang: C++
 *  skill: dynamic allocation
 * *********************************************************/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    vector<int> temp;
    int arr[n];
    int i = 0, m = n;

    if(s/n ==0)
        return {-1};

    while(s > 0 && n > 0){
        rem = (int) s/n;
        arr[i++] = rem;
        n--;
        s -= rem;
    }
    
    for(int j =  0 ; j < m ; j++){
        answer.push_back(arr[j]);
    }
    return answer;
}