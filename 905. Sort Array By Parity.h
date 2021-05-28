Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        vector<int> res;
        res.reserve(a.size());
        for (int e : a){
            if ((e & 1 ) == 0) {
                res.push_back(e);
            }
        }

        for (int e : a) {
            if ((e & 1) != 0) {
                res.push_back(e);
            }
        }
        asset(res.size() == a.size());
        return res; 
    }
};

Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        int i = 0;
        int j = (int)a.size() - 1;
        while (true) {
            while (i < j && (a[i] & 1) == 0) {
                i++;
            }
            while (i < j && (a[i] & 1) != 0) {
                j--;
            }
            if (i < j) {
                swap(a[i],a[j]);
                i++;
                j--;
            } else {
                break;
            }
        }
        return move(a);
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

class Solution(object):
    def sortArrayByParity(self, A):
    return ([x for x in A if x % 2 == 0] + [x for x in A if x % 2 == 1])
