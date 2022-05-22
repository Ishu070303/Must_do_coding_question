/*
Number of subsets and  with minimum and maximum mean
Time Complexity = O(N)
Space Complexity = O(N)
*/


vector<long long> ans;

long long maxi = INT_MIN, mini = INT_MAX;

for(int i=0; i<N; i++){
    if(maxi < arr[i])
      maxi = arr[i];

    if( mini > arr[i])
      mini = arr[i];
}

int mini_count = 0, maxi_count = 0;
for(int i = 0; i<N; i++){
    if(maxi == arr[i])
      maxi_count ++;

    if(mini == arr[i])
      mini_count ++;
}

ans.push_back(pow(2, maxi_count) - 1);
ans.push_back(pow(2, mini_count) - 1);

return ans;


