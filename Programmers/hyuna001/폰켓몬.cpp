function solution(nums) {
    var answer = 0;
    var maxCount = nums.length / 2; // 최대 선택 가능한 폰켓몬 종류 개수

    var hash = {}; // 해시 맵 생성
    nums.forEach(function(num) {
        if (hash[num] == = undefined) { //키 존재 확인
            hash[num] = 1;
        }
        else {
            hash[num]++;
        }
    });

    if (Object.keys(hash).length >= maxCount) {
        answer = maxCount;
    }
    else {
        answer = Object.keys(hash).length;
    }

    return answer;
}
