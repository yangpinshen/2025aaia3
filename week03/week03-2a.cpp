// week03-2a.cpp   璶糶 2 Ω
// LeetCode 絤策璸礶材 8 肈 1822. Sign of the Product of an Array
// р皚癬ㄓ琌タ计璽计临琌 0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        //  0 ヴ计常穦跑Θ 0
        // ┮﹍ノ 1ぐ或穦タ絋э跑

        for(int i = 0; i < nums.size(); i++) {
            ans *= nums[i];  // р–じ
        }//计禫禫 1000计  脄

        if(ans > 0) return 1;   // タ计 △ 肚 1
        if(ans < 0) return -1;  // 璽计 △ 肚 -1
        return 0;               //  0 △ 肚 0
    }
};
