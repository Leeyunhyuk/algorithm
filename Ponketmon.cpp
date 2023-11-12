#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer;
 
    // 정렬 및 중복제거
    sort(nums.begin(),nums.end());
    for(int i=0; i < nums.size(); i++){
        if (nums[i] != nums[i+1]){
            answer_vec.push_back(nums[i]);
        }else if (i == nums.size()-1){
            break;
        }
    }
    
    // 가져가도 될 폰켓몬 수 vs 종류 입력
    if (nums.size()/2 > answer_vec.size()) answer = answer_vec.size();
    else if (nums.size()/2 < answer_vec.size()) answer = nums.size()/2;
    
    return answer;
}