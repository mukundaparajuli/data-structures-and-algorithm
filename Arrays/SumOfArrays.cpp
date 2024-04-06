#include <bits/stdc++.h> 
#include<vector>
#include<iostream>

using namespace std;

vector<int> reverse(vector<int> v){
	int s=0; 
	int e=v.size()-1;
	while(s<=e){
		swap(v[s++],v[e--]);
	}
	return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i=n-1, j=m-1;
	vector<int>ans;
	int sum=0, carry=0;
	int num=0;
	while(i>=0&& j>=0){
		sum=carry+a[i]+b[j];
		carry=sum/10;
		num=sum%10;

		ans.push_back(num);

		i--;
		j--;
	}
	while(i>=0){
		sum=carry+a[i];
		carry=sum/10;
		num=sum%10;

		ans.push_back(num);
		
		i--;
	}
	while(j>=0){
		sum=carry+b[j];
		carry=sum/10;
		num=sum%10;

		ans.push_back(num);

		j--;
	}

	while(carry!=0){
		sum=carry;
		carry=sum/10;
		num=sum%10;

		ans.push_back(num);
	}
	return reverse(ans);
}
int main(){
    vector<int> arr1{1,2,3,4,5};
    vector<int> arr2{1,2,3,4,5};
    vector<int> ans=findArraySum(arr1, 5, arr2, 5);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}