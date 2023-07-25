#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> clothesMap;

    // �ǻ� ������ ���� �ľ�
    for (const auto& cloth : clothes) {
        string category = cloth[1];
        clothesMap[category]++;
    }

    // �ǻ� ������ �� ���
    for (const auto& entry : clothesMap) {
        answer *= (entry.second + 1);
    }

    // �ƹ� �͵� ���� ���� 1���� ��� ����
    answer--;

    return answer;
}