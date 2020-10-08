/************************************************************
 *  name : Youngwoo Park
 *  date : 09-29-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill:  toupper
 * *********************************************************/
#include <map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    map<string, int> m1,m2;
    float gyo = 0, hap = 0;
    int answer = 0;
    string tempStr = "";
    for(int i = 0 ; i < str1.size() -1 ; i++){
        if(isalpha(str1.substr(i,2)[0])  && isalpha(str1.substr(i,2)[1])){
            tempStr = "";
            tempStr.push_back(toupper(str1.substr(i,2)[0]));
            tempStr.push_back(toupper(str1.substr(i,2)[1]));
            cout << tempStr << endl;
            if(m1.find(tempStr) == m1.end())
                m1.insert({tempStr, 1});
            else
                m1[tempStr]++;            
            hap++;
        } 
    }
    for(int i = 0 ; i < str2.size() -1 ; i++){
        if(isalpha(str2.substr(i,2)[0])  && isalpha(str2.substr(i,2)[1])){
            tempStr = "";
            tempStr.push_back(toupper(str2.substr(i,2)[0]));
            tempStr.push_back(toupper(str2.substr(i,2)[1]));
            cout << tempStr << endl;            
            if(m1.find(tempStr) == m1.end() || m1[tempStr] < 1){
                hap++;                
            }
            else{
                cout << "<"  << tempStr << ">"  << m1[tempStr] << endl;
                m1[tempStr]--;
                gyo++;   
                hap++;
            }
        }
    }
    hap -= gyo;
    cout << gyo << "divided by  "<< hap  << " = " << gyo / hap << endl; 

    if(gyo == 0 && hap == 0)
        answer = 65536;
    else
        answer = 65536 * (gyo / hap);
    return answer;
}