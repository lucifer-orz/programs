#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
int main(){
	fastio
	int test_cases=0;
	cin>>test_cases;
	while(test_cases--){
		string str="";
		cin>>str;
		stack <char>s;
		int flag=1;
		ll i=0;
		ll ans=0;
		for (i=0;i<str.size();i++){
			if (str[i]=='<'){
				s.push('<');
			}
			else if (str[i]=='>'){
				if (!s.empty()){
					s.pop();
				}
				else{
					flag=0;
					break;
				}
			}
			if (s.empty()){
				ans=i+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
