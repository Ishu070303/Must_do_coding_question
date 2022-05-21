//Next greater element//

/*
Time complexity = O(N)
Space complexity = O(N)
I/P - [3, 2, 6, 3, 1] 
O/P - [2, 1, 3, 1, -1]
*/

#include<stack>

stack<int> s;
s.push(-1);

vector<int> ans(n);

for(int i = n-1; i>=0; i--){
    int curr = arr[i];
    while(s.top() != -1 && s.top() >= curr){
        s.pop();
    }

    ans[i] = s.top();
    s.push(curr);

}

return ans;


/*
I/P - [3, 2, 6, 3, 1] 
O/P - [1, 1, 3, 2, 1]
*/

#include<stack>

stack<int> s;
vector<int> ans(n) = arr;

for(int i = n-1; i>=0; i--){
    int curr = arr[i];
    while(!s.empty() && s.top() >= curr){
        s.pop();
    }
  
    if(!s.empty()){
        ans[i] -= s.top();
    }
    s.push(curr);
}

return ans;


