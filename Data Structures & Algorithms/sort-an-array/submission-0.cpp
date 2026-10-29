class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() <= 1) return nums;
        int end = nums.size();
        int mid = end/2;
        vector <int> left(nums.begin(),nums.begin()+mid);
        vector <int> right(nums.begin()+mid,nums.end());
        left = sortArray(left);
        right = sortArray(right);

        return merge(nums,left,right);

    }
    vector <int> merge(vector<int> nums,vector<int>&left , vector<int>&right){

        int l = 0;int r=0;int k=0;
        while (l < left.size() && r < right.size()){
            if (left[l] < right[r]){
                nums[k] = left[l];
                k++;
                l++;
            }else{
                nums[k] = right[r];
                r++;
                k++;
            }
        }
        while (l < left.size()){
            nums[k] = left[l];
            k++;
            l++;
        }
        while (r < right.size()){
            nums[k] = right[r];
            k++;
            r++;
        }
        return nums;
    }

};