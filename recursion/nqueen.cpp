#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> vs;
    void convert(vector<vector<int>>&v,int n){
        vector<string>v1;
        string s,t;
        for(int i=0;i<n;i++)s+='.';
        t=s;
        for(int i=0;i<n;i++){
            s=t;
            for(int j=0;j<n;j++){
                if(v[i][j])s[j]='Q';
            }
            v1.push_back(s);
        }
        vs.push_back(v1);
    }

    bool check(vector<vector<int>>&v,int row,int col,int n){
        int i,j;
        for(i=0;i<col;i++){
            if(v[row][i])return false;
        }

        for(i=row,j=col;i>=0&&j>=0;i--,j--)
            if(v[i][j])
                return false;

        for(i=row,j=col;i<n&&j>=0;i++,j--)
            if(v[i][j])
                return false;
        return true;
    }

    bool solve(vector<vector<int>>&v,int col,int n){
        if(col==n){
            convert(v,n);
            return true;}
        for(int i=0;i<n;i++){
            if(check(v,i,col,n)){
                v[i][col]=1;
                solve(v,col+1,n);
                v[i][col]=0;
            }
        }
        return false;
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>>v(n,vector<int>(n,0));
        solve(v,0,n);
        return vs;
    }

int main()
{
    cout<<endl<<"Shivam Manihar Sahu\nROLL NO. - 18115077\n\n";
  	int n;
  	cout<<"Enter your chess board size NxN = ";
  	cin>>n;
  	vector<vector<string>> queens;
	queens = solveNQueens(n);
	if(queens.size()==0)cout<<"NOT POSSIBLE";

	else{
	    cout<<"One Possible n queens location \n";
        for(auto j:queens[0]){
        cout<<j<<'\n';
    }
	}
	return 0;
}
