class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> answer;

        // Process each query
        for (int j = 0; j < queries.size(); j++) {
            int maxBeauty = 0;

            // Reset `i` for each query and find max beauty for current query
            for (int i = 0; i < items.size(); i++) {
                if (items[i][0] <= queries[j]) {
                    maxBeauty = max(maxBeauty, items[i][1]);
                }
            }

            // Store the result for the current query
            answer.push_back(maxBeauty);
        }

        return answer;
    }
};
new.