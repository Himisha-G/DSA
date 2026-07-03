class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

      bool firstR=false; 
      bool firstC=false;

      for(int i=0;i<matrix.size();i++){
        if(matrix[i][0]==0){
            firstC=true;
            break;
        }
      }

    for(int i=0;i<matrix[0].size();i++){
            if(matrix[0][i]==0){
                  firstR=true;
                  break;
            }
    }


    for(int i=1;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
          if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
        }
    }
    
    

     if(firstR){
            for(int j = 0; j < n; j++){
                matrix[0][j] = 0;
            }
        }

       
        if(firstC){
            for(int i = 0; i < m; i++){
                matrix[i][0] = 0;
            }
    }}
};