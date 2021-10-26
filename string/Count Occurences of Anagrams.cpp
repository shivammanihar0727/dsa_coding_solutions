#include<bits/stdc++.h>
#define MAX 256
using namespace std;
bool compare(char arr1[], char arr2[])
{
	for (int i = 0; i < MAX; i++)
	    if (arr1[i] != arr2[i]) return false;
	return true;
}
int main()
{
	string txt,pat;
	cin>>txt>>pat;
	int M = pat.length(), N = txt.length();

	    char countP[MAX] = {0}, countTW[MAX] = {0};
	    for (int i = 0; i < M; i++) {
	        (countP[pat[i]])++;
	        (countTW[txt[i]])++;
	    }
	    int ans = 0;

	    for (int i = M; i < N; i++) {
	
	        if (compare(countP, countTW)) ans++;
	        (countTW[txt[i]])++;
	        countTW[txt[i - M]]--;
	    }

	    if (compare(countP, countTW)) ans++;
	    cout<<ans;
	return 0; 
}
