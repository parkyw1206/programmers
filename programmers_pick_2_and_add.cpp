#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i = 0 ; i < numbers.size();i++){
        for(int j = i+1 ; j < numbers.size(); j++){
            if(find(answer.begin(), answer.end(), numbers[j] + numbers[i]) == answer.end()){
                answer.push_back(numbers[i]+numbers[j]);
            }
        }
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}
int main(){
    vector<int> v;
    
    cout << "Case1 :" ;
    v = {2,3,4,5,6,7};
    if( solution({2,1,3,4,1}) == v)
        cout << "Correct!" << endl;
    else
        cout << "Wrong" << endl;
        
    cout << "Case2 : ";
    v = {2,5,7,9,12};
    if(solution({5,0,2,7}) == v)
        cout << "Correct!" << endl;
    else
        cout << "Wrong" << endl;
}