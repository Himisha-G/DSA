class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
      vector<int>row(n,0);
      vector<int>col(m,0);  
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                row[i]++;
                col[j]++;
                cout<<"hey"<<endl;
                cout<<i<<" "<<j<<endl;
            }
        }
     }

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1 && (row[i]>1 or col[j]>1)){
                count++;
            }
        }
     }

return count;
    }
};