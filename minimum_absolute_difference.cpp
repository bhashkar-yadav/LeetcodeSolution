class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>res;
        int l = arr.size();
        int mini = INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=1;i<l;i++){
            mini = min(mini,arr[i]-arr[i-1]);
        }

        for(int i=1;i<l;i++){
            if(arr[i]-arr[i-1]==mini){
                res.push_back({arr[i-1],arr[i]});
            }
        }
        return  res;
    }
};