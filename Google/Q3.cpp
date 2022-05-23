/*
Find largest word in dictionary 

Input: d = {"ale", "apple", "monkey", "plea"}
       S = "abpcplea"

Output: "apple" 
*/

int checkString(string &a, string &b){
    int n =  a.size();
    int m = b.size();

    int i=0, j=0;

    while( i<n && j<m ){
        if(a[i] == b[j]){
            i++;
            j++;
        }

        else{
            j++;
        }
    }

    if(i == n)
    return n;

    else
    return INT_MIN
}

string largestword(string &S, vector<string> &dic){
     int index = -1;
     int maxlength = 0;

     for(int i=0; i<dic.size(); i++){
        int len = checkString(dic[i], S);
 
        if(maxlength < len){
            index = i;
            maxlength = len;
        }

     }

     if( index == -1)
     return " ";

     else
     return d[index];
}