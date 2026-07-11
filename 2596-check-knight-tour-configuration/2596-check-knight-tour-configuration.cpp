class Solution {
public:
// dd-r , dd-l , rr-d, rr-u , uu-l, uu-r, ll-u, ll-d
   bool check(vector<vector<int>>& grid, int count,int n, int row, int col){
    if(count==n){
        return true;
    }
int dr[] = {2,2,-2,-2,1,-1,1,-1};
int dc[] = {1,-1,1,-1,2,2,-2,-2};

         for(int i=0;i<8;i++){
            int r=row+dr[i];
            int c=col+dc[i];
            if(r<grid.size() && c<grid.size() && r>=0 && c>=0 && grid[r][c]==count){
              if(check(grid,count+1,n,r,c)){
                return true;
              }
            }
         }
     
return false;
   }

    bool checkValidGrid(vector<vector<int>>& grid) {
        if(grid[0][0]!=0){
            return false;
        }
        int n=(grid.size()*grid.size());
       bool ans = check(grid,1,n,0,0);
  return ans;  }
};