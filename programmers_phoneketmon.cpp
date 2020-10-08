/************************************************************
 *  name : Youngwoo Park
 *  date : 09-23-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill: map
 * *********************************************************/
 
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    map<int, int> m;
    
    for(int i = 0 ; i < nums.size() ; i++){
        if(m.find(nums[i]) == m.end()){
            m.insert({nums[i], 1});
        }
        else{
            m[nums[i]] += 1;
        }
    }
    if(m.size() < nums.size()/2)
        return m.size();
    else
        return nums.size()/2;
}