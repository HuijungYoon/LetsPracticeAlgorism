#include <bits/stdc++.h>
using namespace std;


vector<string> split(string input, string delimeter) {
    vector<string> ret ;
    long long pos = 0;
    string token = "";
    while((pos = input.find(delimeter))!= string::npos)
    {
        token = input.substr(0,pos);
        ret.push_back(token);
        input.erase(0, pos + delimeter.length());
    }
    ret.push_back(input);
    return ret;
}



int main() {
    string s = "안녕하세요 큰돌이는 알고리즘 선생님이에요. 내가 아는 최공의 강사죠!";
    string d =" ";
    vector<string> a = split(s,d);
    for(string b : a) cout << b << "\n";\
    return 0;
}
