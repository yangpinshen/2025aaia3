#include <vector>
#include <iostream>

class Solution {
public:
    /**
     * @brief Determines if it's possible to provide change for all customers.
     * * @param bills A list of bills paid by customers in order.
     * @return true if change can be provided for everyone, false otherwise.
     */
    bool lemonadeChange(std::vector<int>& bills) {
        // Track the number of $5 and $10 bills we currently possess.
        // We only need to track $5 and $10 bills, as $20 bills cannot be used for change.
        int fives = 0;
        int tens = 0;

        for (int bill : bills) {
            if (bill == 5) {
                // Customer pays with $5: No change needed.
                fives++;
            }
            else if (bill == 10) {
                // Customer pays with $10: Needs $5 change.
                if (fives >= 1) {
                    fives--;  // Give one $5
                    tens++;   // Keep the $10
                } else {
                    // Cannot make $5 change
                    return false;
                }
            }
            else if (bill == 20) {
                // Customer pays with $20: Needs $15 change.

                // 1. Greedy Choice: Try to give $10 + $5 to save crucial $5 bills.
                if (tens >= 1 && fives >= 1) {
                    tens--;  // Give one $10
                    fives--; // Give one $5
                    // Note: We don't track the $20 bill count, as it's useless for change.
                }
                // 2. Secondary Choice: Use three $5 bills if Option 1 fails.
                else if (fives >= 3) {
                    fives -= 3; // Give three $5 bills
                }
                else {
                    // Cannot make $15 change with available bills.
                    return false;
                }
            }
        }

        // If we processed all customers without failing, we succeeded.
        return true;
    }
};

// Example usage (Optional)
/*
int main() {
    Solution s;
    std::vector<int> bills1 = {5, 5, 5, 10, 20};
    std::cout << "Result 1: " << (s.lemonadeChange(bills1) ? "true" : "false") << std::endl; // Output: true

    std::vector<int> bills2 = {10, 10};
    std::cout << "Result 2: " << (s.lemonadeChange(bills2) ? "true" : "false") << std::endl; // Output: false

    std::vector<int> bills3 = {5, 5, 10, 10, 20};
    std::cout << "Result 3: " << (s.lemonadeChange(bills3) ? "true" : "false") << std::endl; // Output: false

    return 0;
}
*/
