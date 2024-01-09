#include <bits/stdc++.h>
using namespace std;

void findsubseq(string str,string output,int index,vector<string>&ans){
    // base case
    if(index>=str.length()){
        // ans ready hai 
        ans.push_back(output);
        return ;
    }

    // exclude 
    char ch = str[index];

    // findsubseq(str,output,index+1);

    // output.push_back(ch);

    // findsubseq(str,output,index+1);

    // second way

    // include
    output.push_back(ch);
    findsubseq(str,output,index+1,ans);

    // exclude
    output.pop_back();
    findsubseq(str,output,index+1,ans);






    //include
    
}

int main(){
    string str = "abc";
    string output = "";
    int index = 0;

    vector<string> ans ;

    findsubseq(str,output,index,ans);

    for(auto s:ans){
        cout << "->" << s << endl;
    }
    return 0;
}