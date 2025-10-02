class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; // 先喝掉初始瓶數
        int empty = numBottles;

        while (empty >= numExchange) {
            empty -= numExchange;  // 用空瓶兌換
            ans += 1;              // 得到一瓶新的
            empty += 1;            // 喝掉後又多一個空瓶
            numExchange++;         // 每兌換一次，需求變大
        }

        return ans;
    }
};
