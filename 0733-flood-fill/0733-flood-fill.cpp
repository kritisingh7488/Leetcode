class Solution {
public:
    int org;
    void dfs(vector<vector<int>> &image,int m,int n,int i, int j, int col){
        if(i<0 || j<0 || i>=m|| j>=n || image[i][j]==col || image[i][j]!=org){
            return;
        }
        image[i][j]=col;
        dfs(image,m,n,i+1,j,col);
        dfs(image,m,n,i-1,j,col);
        dfs(image,m,n,i,j+1,col);
        dfs(image,m,n,i,j-1,col);
    }

    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        org= image[sr][sc];
        int m=image.size();
        int n = image[0].size();
        dfs(image,m,n,sr,sc,color);
        return image;
       
    }
};