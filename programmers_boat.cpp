#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int person = 0, personI, diff, sofar;
    
    while(people.size() > 0){
        person = people[0];
        personI = 0;
        //cout << "< " << person << ">" << endl;
        sofar = limit;
        for(int i = 1 ; i < people.size() ; i++){
            diff = limit - person - people[i];
            //cout << people[i] << ":" << diff  << endl;
            if(diff >= 0 && diff < sofar){
                personI = i;
                sofar = diff;
            } 
        }
        if(personI == 0){
            answer++;
            
        }else{
            answer ++;
            people.erase(people.begin()+ personI);
        }
        people.erase(people.begin());            
    }
    return answer;
}

int main(){
    
    cout << "Case1---------------->" ;
    if(solution({70, 50, 80, 50},100) == 3)
        cout << " CORRECT! " <<endl;
    else
        cout << " WRONG!" << endl;
        
    cout << "Case2---------------->" ;
    if(solution({70, 80, 50},100) == 3)
        cout << " CORRECT! " <<endl;
    else
        cout << " WRONG!" << endl;
        
    cout << "Case3---------------->" ;
    if(solution({40, 40, 40},100) == 2)
        cout << " CORRECT! " <<endl;
    else
        cout << " WRONG!" << endl;
        
    cout << "Case4---------------->" ;
    if(solution({40, 40},100) == 1)
        cout << " CORRECT! " <<endl;
    else
        cout << " WRONG!" << endl;
        
    cout << "Case5---------------->" ;
    if(solution({20, 50, 50, 80},100) == 2)
        cout << " CORRECT! " <<endl;
    else
        cout << " WRONG!" << endl;        
    return 0;
}