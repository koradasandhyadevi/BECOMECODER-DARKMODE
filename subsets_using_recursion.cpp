#include<bits/stdc++.h>
using namespace std;
void SubSet(vector<int>v,int index,int size,vector<int>ans){
	if(index >= size){
		for(int i = 0; i < ans.size(); i++)cout<<ans[i]<<" ";
		cout<<endl;
		return;
	}
	ans.push_back(v[index]);
	SubSet(v,index+1,size,ans);
	ans.pop_back();
	SubSet(v,index+1,size,ans);
}
int main(){
	vector<int>v = {1,2,3,4};
	SubSet(v,0,v.size(),{});
	return 0;
}