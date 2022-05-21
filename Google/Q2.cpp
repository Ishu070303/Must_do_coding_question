// largest reactangle in histogram //

/*
Time complexity = O(N)
Space complexity = O(N)
Approach 1 : using stack only

*/

#include<stack>

stack<int> s;
vector<int> ans(n);

int maxArea = INT_MIN;
int area, i = 0, tp;

while(i < n){
   if(s.empty() || arr[s.top()] <= arr[i]){
       s.push(i++);
   }
   else{
       tp = s.top();
       s.pop();

       area = arr[tp] * ( s.empty() ? i : i - s.top() - 1);
       if( maxArea < area ){
           maxArea = area;
       }
   }

   while(!s.empty()){
      tp = s.top();
       s.pop();

       area = arr[tp] * ( s.empty() ? i : i - s.top() - 1);
       if( maxArea < area ){
           maxArea = area;
       } 
   }
}


// Approach 2 : using stack and arrays //

vector<int> nextSmallerElement( vector<int> arr, int n){
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);
    for(int i = n-1; i>=0; i--){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr)
          s.pop();

        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}


vector<int> prevSmallerElement( vector<int> arr, int n){
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);
    for(int i = 0; i<n; i++){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr)
          s.pop();

        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}


int main(){
    int n = arr.size();
    int area = INT_MIN;
    vector<int> next(n);
    next = nextSmallerElement(arr, n);

    vector<int> prev(n);
    prev = prevSmallerElement(arr, n);

    for(int i=0; i<n; i++){
        int h = arr[i];

        if( next == -1)
          next = n;

        int b = next[i] - prev[i] - 1;

        int maxArea = l*b;

        area = max(area, maxArea);
    }
}