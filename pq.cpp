#include <bits/stdc++.h>
using namespace std;


//priority_queue<int, vector<int>,greater<int>> pq;
priority_queue<int, vector<int>,less<int>> pq;
int main() {
  pq.push(5);
  pq.push(4);
  pq.push(3);
  pq.push(2);
  pq.push(1);

  cout<< pq.top() << "\n";

  return 0;
}