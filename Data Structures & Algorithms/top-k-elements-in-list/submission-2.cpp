class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        for (int i : nums){
            mp[i]++;
        }
        priority_queue <pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> min_heap;

        for (auto &[num,freq] : mp){
            min_heap.push({freq,num});
            if (min_heap.size()>k) min_heap.pop();
        }
        vector <int> result;
        while (!min_heap.empty()){
            result.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return result;
    }
};
