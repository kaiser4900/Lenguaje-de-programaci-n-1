#include<iostream>
#include<vector>
#include<algorithm>

int main(){
	vector<string>words;
	string temp;
	while( cin>>temp)
		words.push_back(temp);
		
	cout<<"Numero de palabras: "<<words.size()
	<<endl;
	sort(words.begin(),words.end());
	for(int i=0; i<words.size();i++)
		if(i==0 || words[i-1]!=words[i])
			cout<<words[i]<<"\n";
}
