class Solution {
public:
    void mergeSort(vector<pair<int,int>>& arr,
                   vector<int>& count,
                   int left,
                   int right) {

        if (right - left <= 1)
            return;

        int mid = (left + right) / 2;

        mergeSort(arr, count, left, mid);
        mergeSort(arr, count, mid, right);

        vector<pair<int,int>> temp;

        int i = left;
        int j = mid;

        // Number of elements from the right half
        // that are smaller than current left element
        int smaller = 0;

        while (i < mid && j < right) {

            if (arr[j].first < arr[i].first) {

                // arr[j] is smaller than arr[i]
                // and is originally to the right of arr[i]
                smaller++;

                temp.push_back(arr[j]);
                j++;

            } else {

                // All previously selected elements
                // from the right are smaller than arr[i]
                count[arr[i].second] += smaller;

                temp.push_back(arr[i]);
                i++;
            }
        }

        // Remaining elements in left half
        while (i < mid) {
            count[arr[i].second] += smaller;
            temp.push_back(arr[i]);
            i++;
        }

        // Remaining elements in right half
        while (j < right) {
            temp.push_back(arr[j]);
            j++;
        }

        // Copy back
        for (int k = 0; k < temp.size(); k++) {
            arr[left + k] = temp[k];
        }
    }


    vector<int> countSmaller(vector<int>& nums) {

        int n = nums.size();

        vector<int> count(n, 0);

        // {value, original index}
        vector<pair<int,int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        mergeSort(arr, count, 0, n);

        return count;
    }
};
 