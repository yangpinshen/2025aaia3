#include <string>
#include <algorithm>
#include <iostream>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        // 使用两个指针 i 和 j，分别指向字符串 a 和 b 的末尾
        int i = a.length() - 1;
        int j = b.length() - 1;

        // 进位变量，初始为 0
        int carry = 0;

        // 用于存储结果的字符串
        std::string result = "";

        // 循环条件：只要 i 或 j 还有未处理的位，或者 carry 还有进位，就继续循环
        while (i >= 0 || j >= 0 || carry) {
            // 获取当前位的数字值
            // 如果指针越界 (例如 i < 0)，则该位数字为 0
            // 注意：a[i] 和 b[j] 是字符 '0' 或 '1'，需要减去 '0' 才能得到整数值 0 或 1
            int digit_a = (i >= 0) ? a[i] - '0' : 0;
            int digit_b = (j >= 0) ? b[j] - '0' : 0;

            // 计算当前位的和
            int sum = digit_a + digit_b + carry;

            // 1. 计算当前位的结果：sum % 2 (结果只能是 0 或 1)
            // 将结果转换为字符 '0' 或 '1'，并插入到结果字符串的开头。
            // 使用 std::to_string(sum % 2) 也可以，但字符运算更快
            result.insert(0, 1, (sum % 2) + '0');

            // 2. 更新进位：sum / 2 (结果只能是 0 或 1)
            carry = sum / 2;

            // 移动指针
            i--;
            j--;
        }

        return result;
    }
};

// 另一种更常见的写法 (先计算后反转)
class Solution_Alt {
public:
    std::string addBinary(std::string a, std::string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        std::string result = "";

        while (i >= 0 || j >= 0 || carry) {
            // 计算当前位的值
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            // 将当前位的结果 (sum % 2) 追加到 result 末尾
            result.push_back((sum % 2) + '0');

            // 更新进位
            carry = sum / 2;
        }

        // 因为是从低位向高位依次追加的，所以最终需要反转字符串
        std::reverse(result.begin(), result.end());

        return result;
    }
};
