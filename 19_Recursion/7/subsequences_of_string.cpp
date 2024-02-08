// #include <bits/stdc++.h> 


// void solve(string str, string output,int index, vector<string>&ans){

// 	if(index >= str.length()){
// 		if(output.length()>0){
// 		ans.push_back(output);
// 		}
// 		return ;
	
// 	}


// 	//  excluding

// 	solve(str,output, index+1, ans);


// 	//  includding

// 	char ele = str[index];
// 	output.push_back(ele);
// 	solve(str,output,index+1,ans);
// }

// vector<string> subsequences(string str){
	
// 	// Write your code here
// 	vector<string> ans;

// 	string output = "";

// 	int index = 0;
// 	solve(str,output,index,ans);
// 	return ans;

// }
