class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        // Start adding from the last digit
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                // If the current digit is less than 9, just add 1 to this digit and return the result
                digits[i]++;
                return digits;
            }
            // If the current digit is 9, it becomes 0
            digits[i] = 0;
        }
        // If all digits were 9, we need an additional digit at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};