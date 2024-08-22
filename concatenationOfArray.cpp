#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int l = nums.size();
        vector<int> arr(2 * l);
        for (int i = 0; i < l; i++) {
            arr[i] = nums[i];
            arr[l + i] = nums[i];
        }
        return arr;
    }
};

int main() {
    Solution sol;
    int n;
    
    // Input size of the vector
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n); 
    // Input elements of the vector
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> result = sol.getConcatenation(nums);
    // Output the concatenated vector
    cout << "Concatenated vector: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
