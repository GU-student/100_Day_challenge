#include<bits/stdc++.h>
using namespace std;
 int minDifference(vector<int>& nums) {
        int n = nums.size();
        if (n <= 4) return 0;
        sort(nums.begin(), nums.end());
        int option1 = nums[n-4] - nums[0]; 
        int option2 = nums[n-3] - nums[1];
        int option3 = nums[n-2] - nums[2];
        int option4 = nums[n-1] - nums[3];
        
        return min({option1, option2, option3, option4});
    }
int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minDifference(arr)<<endl;
    return 0;
}