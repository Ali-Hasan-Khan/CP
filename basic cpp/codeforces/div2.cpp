#include<bits/stdc++.h>
using namespace std;
using li = long int;
using lli  = long long int;


#define loop(x,n) for(int x = 0; x < n; ++x)
#define loop1S(x,n) for(int x = 1; x <= n; ++x)
#define revloop(x,n) for(int x = n-1; x>=0; --x)
#define ll long long
#define all(v) (v).begin(),(v).end()
#define in(v) for(auto& item:v) cin >> item;

// int isSubstring(string s1, string s2)
// {
//     // using find method to check if s1 is
//     // a substring of s2
//     if (s2.find(s1) != string::npos)
//         return s2.find(s1);
//     return -1;
// }

std::vector<long long> calculatePrefixSum(const std::vector<long long>& nums) {
    std::vector<long long> prefixSum(nums.size());
    prefixSum[0] = nums[0];

    for (size_t i = 1; i < nums.size(); i++) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }

    return prefixSum;
}

std::vector<long long> findMaxPrefixSubarray(const std::vector<long long>& nums) {
    long long maxSum = nums[0]; // Initialize maxSum to the first element
    long long currentSum = nums[0]; // Initialize currentSum to the first element
    size_t maxStartIndex = 0;
    size_t currentStartIndex = 0;
    size_t maxEndIndex = 0;

    for (size_t i = 1; i < nums.size(); i++) {
        // Check if extending the current subarray is beneficial or starting a new subarray is better
        if (currentSum + nums[i] > nums[i]) {
            currentSum += nums[i];
        } else {
            currentSum = nums[i];
            currentStartIndex = i;
        }

        // Update the maximum sum and its corresponding start and end indices
        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxStartIndex = currentStartIndex;
            maxEndIndex = i;
        }
    }

    // Create and return the subarray with the maximum sum
    std::vector<long long> maxSubarray(nums.begin() + maxStartIndex, nums.begin() + maxEndIndex + 1);
    return maxSubarray;
}


void solve(){
	int n;
	cin >> n;
	vector<ll> v(n);
	in(v);
	vector<vector<ll>> ml;
	vector<ll> currentSubarray;
	currentSubarray.push_back(v[0]);
	int j=0;
	for(int x = 1; x < n; ++x){
		// ml[j].push_back(v[x]);
		if((v[x]+v[x-1])%2!=0) currentSubarray.push_back(v[x]);
		else {
			// j++;
			ml.push_back(currentSubarray);
			currentSubarray.clear();
			currentSubarray.push_back(v[x]);
			// ml[j].push_back(v[x]);
		}
	}
	ml.push_back(currentSubarray);
	// for (const auto& subarray : ml) {
    //     for (const auto& element : subarray) {
    //         cout << element << " ";
    //     }
    //     cout << endl;
    // }
    ll mx2 = -1e5;
    for (const auto& subarray : ml) {
    	// vector<long long> prefixSum = calculatePrefixSum(subarray);
        ll mx = -1e5;
        vector<long long> maxSubarray = findMaxPrefixSubarray(subarray);
    	vector<long long> prefixSum = calculatePrefixSum(maxSubarray);
        for (const auto& element : prefixSum) {
        	mx = max(mx,element);
            // cout << element << " ";
        }
        // cout << endl;
        // cout << mx << endl;
        mx2 = max(mx,mx2);
    }
    cout << mx2 << endl;
}



int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	// solve();
}
