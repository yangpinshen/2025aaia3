// week03-3a.cpp �ĤG�ؤ�k �⤣�O0����X�ӡA�ȩ�ans�A�A��^�h
// LeetCode �ǲ߭p�e 283. Move Zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // �Ψө�u���O0���ơv
        // ��X�Ҧ����O0����
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != 0) ans.push_back(nums[i]);
        }
        // �W����u���O0���ơv�Ȯɩ�b ans �̡A���@�U�A��^�h
        // �A�� for �^��^�h
        for(int i=0; i<nums.size(); i++) {
            if(i < ans.size()) nums[i] = ans[i]; // ��^�h
            else nums[i] = 0; // ��L����0
        }
    }
};
