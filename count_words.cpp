#include <bits/stdc++.h>
using namespace std;

int check(string &str)
{
    int flage=0;
        // cout<<str<<endl; 
    for (int i = 0; i < str.length(); i++) {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            flage=1;
        }
    } 
    return flage;
}

void print(stringstream& ss){
    string word;
    int count=0;
    while (ss >> word) {
        int ck=check(word);
        if(ck>0){
            ++count;
        }
    }
    cout<<count<<endl;
}

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);

    print(ss);
    return 0;
}