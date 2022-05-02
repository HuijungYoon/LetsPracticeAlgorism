#include <bits/stdc++.h>
using namespace std;


int idx = 2;


void go(int &idx)
{
 idx =1;
}
void go2(int idx) {
idx =100;
}

int main() {
go(idx);
cout << idx << "\n";
go2(idx);
cout << idx << "\n";
// string  a = "abcde";
// string * b = &a;

// cout << b << '\n';
// cout << *b <<  "\n";


    return 0;
}