#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0, nowSum = 0;
    queue<int> before;
    vector<pair<int,int>> now;
    for(int i = 0 ; i < truck_weights.size(); i++){
        before.push(truck_weights[i]);
    }
    
    while(!(before.size() <= 0 && now.size() == 0)){
        if(before.size() != 0 && nowSum + before.front() <= weight){  
            now.push_back({before.front(),1});
            nowSum += before.front();
            before.pop();
        }

        for(int i = 0 ; i < now.size() ; i++){
            if(now[i].second >= bridge_length){
                nowSum -= now[i].first;
                now.erase(now.begin()+i);                            
            }
            now[i].second ++;
        }

       answer++;
    }
    
    return ++answer;
}
int main(){
    
    cout << "Case 1---------->";
    if(solution(2,10,{7,4,5,6}) == 8)
        cout << "CORRECT" << endl;
    else
        cout << "WRONG!" << endl;
        
    cout << "Case 2---------->";
    if(solution(100,100,{10}) == 101)
        cout << "CORRECT" << endl;
    else
        cout << "WRONG!" << endl;
        
    cout << "Case 3---------->";
    if(solution(100,100,{10,10,10,10,10,10,10,10,10,10}) == 110)
        cout << "CORRECT" << endl;
    else
        cout << "WRONG!" << endl;
    return 0;
}