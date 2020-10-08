/************************************************************
 *  name : Youngwoo Park
 *  date : 10-05-2020
 *  level: l3
 *  problem source: programmers
 *  lang: C++
 *  skill:  sorting
 * *********************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool myComp(vector<int> &a, vector<int> &b){
    if(a[1] > b[1])
        return false;
    else
        return true;
}
int solution(vector<vector<int>> jobs) {
    int answer = 0, count = jobs.size();
    int index = 0, time = 0, sum = 0;
    bool changeAtLeast = false;
    sort(jobs.begin(), jobs.end(), myComp);
     time = 0;
    while(jobs.size() > 0){
        changeAtLeast = false;
        for(int i = 0 ; i < jobs.size(); i++ ){
            if(time >= jobs[i][0]){
                time+= jobs[i][1];
                sum += (time - jobs[i][0]);
                changeAtLeast = true;
                jobs.erase(jobs.begin()+i);
                break;
            }
        }
        if(changeAtLeast == false){
            time++;
        }

    }
    answer = sum / count;
    //cout <<  answer << endl;
    return answer;
}