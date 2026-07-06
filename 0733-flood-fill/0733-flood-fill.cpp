class Solution {
public:


 void colors(vector<vector<int>>& image, int sr, int sc, int color,int value){
    

    if(sr<0 or sc<0 or sr>=image.size() or sc>=image[0].size() ){
        return;
    }

    if(image[sr][sc]==value){
        image[sr][sc]=color;
        colors(image,sr+1,sc,color,value);
        colors(image,sr,sc+1,color,value);
        colors(image,sr-1,sc,color,value);
        colors(image,sr,sc-1,color,value);
    }
 return; }


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)
             return image;
        colors(image,sr,sc,color,image[sr][sc]);
    
        return image;
    }
};