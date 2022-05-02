#include <bits/stdc++.h>
using namespace std;

int v[10];
int main() {
    unordered_map<string,int> umap;
    map<string,int> _map;

    umap.insert({"test1",1});
    umap.emplace("test4",4);

    umap["test1"] = 2;

    for(auto elemet: umap)
    {
        cout << elemet.first << ":" << elemet.second << "\n";
    }

    auto search = umap.find("test5");
    if(search != umap.end())
    {
        cout << "find" << search->first << " " << (*search).second << "\n";
    }
    else {
        cout <<"not found" << "\n";
    }

    umap["test1"]++;
    cout<< umap["test1"] << "\n";

    cout << umap.size() << "\n";
    umap.erase("test1");

    cout << umap.size() << "\n";


  _map["큰돌"]++;
  _map["큰돌"]++;

  for(auto c : _map)
  {
      cout << c.first << ":" <<c.second << "\n";
  }




    return 0;
}