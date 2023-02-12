class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        merged.reserve(nums1.size() + nums2.size());
        merged.insert(merged.end(),nums1.begin(),nums1.end());
        merged.insert(merged.end(),nums2.begin(),nums2.end());
        sort(merged.begin(),merged.end());
        int len = merged.size();
        float median {0};
        // cout << len/2;
        if(len%2 == 1)
        {
           median = merged.at(len/2);
        }
        else
        {
            cout << merged.at(len/2);
            median = (1.0)*(merged.at(len/2) + merged.at(len/2 - 1))/2;
        }
        return  median;
    }
};
