vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    bool vis[V];
    for (int i = 0; i < V; i++)
        vis[i] = false;
    queue<int> q;
    q.push(0);
    vector<int> v;
    v.push_back(0);
    while (!q.empty())
    {
        int i = q.front();
        q.pop();
        for (int j : adj[i])
        {
            if (!vis[j])
            {
                vis[j] = true;
                q.push(j);
                v.push_back(j);
            }
        }
    }
    return v;
}