#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter)
{
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while((pos = input.find(delimiter)) != string::npos)
    {
        token = input.substr(0,pos);
        ret.push_back(token);
        input.erase(0,pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main() {
    string a = "머라는거야 머라는거야1112 머라는거야3 머라는거야4 머라는거양5";
    string b =" ";
    vector<string> c = split(a,b);
    for(string d: c) cout<< d <<"\n";\
    return 0;
}