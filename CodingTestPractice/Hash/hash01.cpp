#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map <string, int> strkey;
    for(auto str : completion)
    {
        if(strkey.end() == strkey.find(str))
            strkey[str] = 1;
        else
            strkey[str]++;
    }
    
    for(auto str : participant)
    {
        if(strkey.end() == strkey.find(str))
            return str;
        else
        {
            strkey[str]--;
            if(strkey[str] < 0)
                return str;
        }
    }
}