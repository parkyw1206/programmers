#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    priority_queue<int> q;
    priority_queue<int,vector<int>, greater<int>> p;
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    for(int i = 0 ; i < A.size() ; i++){
        q.push(A[i]);
        p.push(B[i]);
    }
    
    while(!q.empty()){
        answer += q.top()*p.top();
        p.pop();
        q.pop();
    }
    return answer;
}
int main(){
    cout << "Case1----->";
    if(solution({1, 4, 2},{5, 4, 4}) == 29)
        cout << "CORRECT" << endl;
    else
        cout << "WRONG!" << endl;
        
    cout << "Case2----->";
    if(solution({1,2},{3, 4}) == 10)
        cout << "CORRECT" << endl;
    else
        cout << "WRONG!" << endl;
        

    return 0;
}