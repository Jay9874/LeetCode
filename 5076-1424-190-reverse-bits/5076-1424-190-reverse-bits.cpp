class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        std::bitset<32> a(n);
        std::bitset<32> res;
        for (int i = 0; i < a.size(); ++i) {
            int j = 31 - i;
            res[j] = a[i];
        }
        return res.to_ulong();
    }
};