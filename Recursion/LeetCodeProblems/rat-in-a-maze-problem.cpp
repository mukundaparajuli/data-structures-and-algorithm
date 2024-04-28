//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    private:
        bool isPossible(int x, int y, vector<vector<int>> &m, vector<vector<int>> visited, int n){
            if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
                return true;
            }else{
                return false;
            }
        }
        void solve(vector<vector<int>> &m, int n, vector<string> &ans, string path,int x, int y, vector<vector<int>> visited)
        {
            // base case
            if(x==n-1 && y==n-1){
                ans.push_back(path);
                return;
            }
            
            // mark the square as visited
            visited[x][y]=1;
            
            // go to down
            int newx=x+1;
            int newy=y;
            if(isPossible(newx, newy, m, visited, n)){
                path.push_back('D');
                solve(m, n, ans, path,newx, newy, visited);
                path.pop_back();
            }
            
            // go to left
            newx=x;
            newy=y-1;
            if(isPossible(newx, newy, m, visited, n)){
                path.push_back('L');
                solve(m, n, ans, path,newx, newy, visited);
                path.pop_back();
            }
            
            // go to right
            newx=x;
            newy=y+1;
            if(isPossible(newx, newy, m, visited, n)){
                path.push_back('R');
                solve(m, n, ans, path,newx, newy, visited);
                path.pop_back();
            }
            
            // go to up
            newx=x-1;
            newy=y;
            if(isPossible(newx, newy, m, visited, n)){
                path.push_back('U');
                solve(m, n, ans, path,newx, newy, visited);
                path.pop_back();
            }
            
            // set the value of the square to 0
            visited[x][y]=0;
        }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        int srcx=0;
        int srcy=0;
        
        // return if the first square has the value 0
        if(m[0][0]==0) return ans;
        
        // intialize visited vector with zero
        vector<vector<int>> visited=m;
        for(int i=0; i<n; i++){
            for(int j=0; j<n;j++){
                visited[i][j]=0;
            }
        }
        
        string path="";
        
        // function to solve
        solve(m, n, ans, path,srcx, srcy, visited);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends