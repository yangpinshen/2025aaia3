class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; // ���ܱ���l�~��
        int empty = numBottles;

        while (empty >= numExchange) {
            empty -= numExchange;  // �ΪŲ~�I��
            ans += 1;              // �o��@�~�s��
            empty += 1;            // �ܱ���S�h�@�ӪŲ~
            numExchange++;         // �C�I���@���A�ݨD�ܤj
        }

        return ans;
    }
};
