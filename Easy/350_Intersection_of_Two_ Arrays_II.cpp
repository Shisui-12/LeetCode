class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> intersection_vec {};
        int len_1 = nums1.size();
        int len_2 = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        set_intersection(nums1.begin(), nums1.end(),
                         nums2.begin(), nums2.end(),
                         back_inserter(intersection_vec));
       
        return intersection_vec;
    }
};
