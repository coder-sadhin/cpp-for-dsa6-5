#include <bits/stdc++.h>
using namespace std;


void print(stringstream& ss){
    string word;
    int count=0;
    while (ss >> word) {
        reverse(word.begin(), word.end());
        cout<<word<<" ";
    }
}

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);

    print(ss);
    return 0;
}