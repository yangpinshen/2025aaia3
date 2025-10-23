#include <iostream>
#include <cmath> // 引入 cmath 庫以便使用 sqrt 或進行數學判斷

/**
 * 函數 prime(n)：判斷整數 n 是否為質數。
 * @param n 要檢查的整數。
 * @return 如果 n 是質數，回傳 1；否則回傳 0。
 */
int prime(int n)
{
    // 1. 處理邊界條件：小於等於 1 的數不是質數。
    if (n <= 1) return 0;

    // 2. 2 是唯一的偶數質數。
    if (n == 2) return 1;

    // 3. 所有大於 2 的偶數都不是質數。
    if (n % 2 == 0) return 0;

    // 4. 檢查從 3 開始到 sqrt(n) 的所有奇數。
    // 只需要檢查到 i * i <= n (即 i <= sqrt(n))，因為若 n 有更大的因子，
    // 則必有一個更小的因子已經被檢查過。
    for (int i = 3; i * i <= n; i += 2)
    {
        // 如果 n 能被 i 整除，則 n 不是質數。
        if (n % i == 0)
        {
            return 0;
        }
    }

    // 遍歷完成，沒有找到因子，n 是質數。
    return 1;
}

int main()
{
  int n;
  // 從標準輸入讀取一個整數 n
  std::cin >> n;
  // 呼叫 prime(n) 函數並以 [結果] 格式輸出
  std::cout << "[" << prime(n) << "]";
  return 0;
}
