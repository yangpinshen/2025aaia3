//week12-3
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0"; // 特判：若有一個是0，結果就是0

        int N1 = num1.length(), N2 = num2.length();
        vector<int> ans(N1 + N2, 0); // 最多這麼 N1+N2 位，初始化為 0

        for (int i = N1 - 1; i >= 0; i--) { // 兩層暴力 for 迴圈
            for (int j = N2 - 1; j >= 0; j--) { // 倒過來的迴圈
                // num1[i] vs. num2[j] 要記得把字母變數值
                int mul = (num1[i] - '0') * (num2[j] - '0');

                // 核心邏輯：乘積 + 原本該位的數值
                int sum = mul + ans[i + j + 1];

                // 更新當前位與進位
                ans[i + j + 1] = sum % 10; // 餘數留在當前位
                ans[i + j] += sum / 10;    // 進位加到前一位
            }
        }

        // --- 以下是原本「還沒完成」的部分 ---

        // 把 vector<int> 轉成 string
        string res = "";
        for (int num : ans) {
            // 處理前導零：只有當 res 不為空(已經有數字了)，或是當前數字不為 0 時才加入
            if (!(res.empty() && num == 0)) {
                res.push_back(num + '0'); // 轉回字符
            }
        }

        return res.empty() ? "0" : res; // 防呆：如果是空字串回傳 "0"
    }
};
