#include<bits/stdc++.h>
using namespace std;
void Fun(vector<int>v,int index,int size,vector<int>ans){
	if(index >= size){
		for(int i = 0; i < ans.size(); i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	int Flag = 0;
	if(ans.size() == 0){
		ans.push_back(v[index]);
		Fun(v,index+1,size,ans);
		ans.pop_back();
	}
	else if(ans.back() < v[index]){
		ans.push_back(v[index]);
		Fun(v,index+1,size,ans);
		ans.pop_back();
	}
	else if(ans.back() > v[index]){
		Fun(v,index+1,size,ans);
		Flag = 1;
	}
	if(Flag != 1){
		Fun(v,index+1,size,ans);
	}

}
int main(){
	vector<int> v = {8,0,1,2};
	Fun(v,0,v.size(),{});
	return 0;
}