#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> strMap;
    for (auto player : participant) {
        if (strMap.end() == strMap.find(player))
            strMap.insert(make_pair(player, 1));
        else
            strMap[player]++;
    }

    for (auto player : completion)
        strMap[player]--;

    for (auto player : participant) {
        if (strMap[player] > 0) {
            answer = player;
            break;
        }
    }
    return answer;
}