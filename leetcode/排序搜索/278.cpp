// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        int mid;
        while (left <= right){
            mid = int((long(right) + left) / 2);
            if (isBadVersion(mid)){
                right = mid;
                if (!isBadVersion(mid-1) || mid == 1)
                    return mid;
            }
            else{
                left = mid + 1;
            }
        }
        return -1;
    }
};
