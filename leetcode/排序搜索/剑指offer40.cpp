class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        quickSort(arr,0,arr.size()-1);
        vector<int> result;
        for (int i = 0; i < k; i++)
            result.push_back(arr[i]);
        return result;
    }
    void quickSort (vector<int>& arr, int l, int r){
        if (l >= r)  
            return;
        int val = arr[l];
        int tempL = l - 1;
        int tempR = r + 1;
        while (tempL < tempR){
            do tempL++; while(arr[tempL] < val);
            do tempR--; while(arr[tempR] > val);
            if (tempL < tempR)
                swap(arr[tempL],arr[tempR]);
        }
        quickSort(arr,l,tempR);
        quickSort(arr,tempR+1,r);
    }
};
