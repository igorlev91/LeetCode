Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
    }
};

Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int l = 0; r = A.size() - 1;
        while (l < r){
            while (l < r && a[l] % 2 == 0) l++;
            while (l < r && a[r] % 2 == 1) r--;
            int tmp = A[l];
            A[l] = A[r];
            A[r] = tmp;

        }
        return A;
    }
};

class Solution:
    def sortArrayByParity(self, A: List[int]) -> List[int]:
        l, r = 0, len(A) - 1;
        while l < r:
            while l < r and A[l] % 2 == 0: l += 1
            while l < r and A[r] % 2 == 1: r -= 1
            A[l], A[r] = A[r], A[l]
         return A       