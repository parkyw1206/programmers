#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0, least = 0, next = 0;
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i = 0 ; i < scoville.size(); i++){
        q.push(scoville[i]);
    }
    
    while(!q.empty() && q.top() < K){
        if(q.size()== 1){
            return -1;
        }
        least = q.top();
        q.pop();
        if(least  < K)
        {
            next = q.top();
            q.pop();
            q.push(least + 2*next);
            answer++;
        }
    }

    return answer;
}