//O(log n + klogk)	O(k)

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int idx = bsearch(arr, x);
        vector<int> res;
        int i = idx - 1, j = idx;

        while (i >= 0 && j < arr.size() && k > 0) {
            if (abs(arr[i] - x) <= abs(arr[j] - x)) {
                res.push_back(arr[i]);
                i--;
            } else {
                res.push_back(arr[j]);
                j++;
            }
            k--;
        }

        while (k > 0 && i >= 0) {
            res.push_back(arr[i]);
            i--;
            k--;
        }

        while (k > 0 && j < arr.size()) {
            res.push_back(arr[j]);
            j++;
            k--;
        }

        sort(res.begin(), res.end());
        return res;
    }

    int bsearch(vector<int>& arr, int x) {
        int left = 0;
        int right = arr.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] < x)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};




//O(log n + k)	O(k)
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0;
        int right = arr.size() - k;

        while (left < right) {
            int mid = (left + right) / 2;
            if (x - arr[mid] > arr[mid + k] - x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return vector<int>(arr.begin() + left, arr.begin() + left + k);
    }
};
