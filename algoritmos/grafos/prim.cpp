
int Prim (vvi& G, vvi& W, int n){
    vector <bool> vis(n, false); 
    priority_queue <ii> Q; 
    Q.push({-0,0}); 
    int answer = 0; 

    while (not Q.empty()){
        ii arc = Q.top() 
        Q.pop(); 

        int v = arc.second; 
        int p = -arc.first; 

        if (not vis[v]){ 
            vis[v] = true;
            answer += p;

            for (int i = 0; i < G[v].size(); ++i){ 
                int u = G[v][i];
                int w = W[v][i];

                Q.push({-w, u}); 
            }
        }
    }

    return answer; 
}
