#include<bits/stdc++.h>
using namespace std;

int candy(vector<int>& ratings) {
    int n = ratings.size();
    if (n == 0) return 0;
        
    vector<int> candies(n, 1);
        
    for (int i = 1; i < n; ++i) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
       }
    }
    for (int i = n - 2; i >= 0; --i) {
        if (ratings[i] > ratings[i + 1]) {
            candies[i] = max(candies[i], candies[i + 1] + 1);
        }
    }
    int totalCandies = 0;
    for (int i=0;i<candies.size();i++) {
        totalCandies += candies[i];
    }
        
    return totalCandies;
}
int main(){
    int n;
    cin>>n;
    vector<int>ratings(n);
    for(int i=0;i<n;i++){
        cin>>ratings[i];
    }
    int ans = candy(ratings);
    cout<<ans<<endl;
    return 0;
}