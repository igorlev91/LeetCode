class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        int mask = 1;
        while (num > 0) {
            if ((num & mask) == 0){
                ans |= mask;
            } else {
                num ^= mask;
            }
            mask <<= 1;
        }
        return ans;
    }
};

class Solution2 {
public:
    int findComplement(int num) {
       int left = 0;
       int right = 31;
       while (right > left + 1) {
         int mid = (left + right) >> 1;
         if ((1 << mid) > num) {
             right = mid;
         } else {
            left = mid;
         }
       }
       int mask = (1 << left) + ((1 << left));
       return num ^ mask;
    }
};

class Solution3 {
public:
    int findComplement(int num) {
        int mask = num;
        mask |= mask >> 1;
        mask |= mask >> 2;
        mask |= mask >> 4;
        mask |= mask >> 8;
        mask |= mask >> 16;
        return num ^ mask;
    }
};