// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return a list containing the DFS traversal of the graph.
    void rec(int i, bool vis[], vector<int> &v, vector<int> adj[])
    {
        for (int j : adj[i])
        {
            if (!vis[j])
            {
                vis[j] = true;
                v.push_back(j);
                rec(j, vis, v, adj);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> v;
        v.push_back(0);
        bool vis[V];
        for (int i = 0; i < V; i++)
            vis[i] = false;
        vis[0] = true;
        rec(0, vis, v, adj);
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends