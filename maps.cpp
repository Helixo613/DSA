#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    map<string,int>m;
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        
        if (q==1){
            int num;
            string name;
            cin>>name>>num;
            m[name]+=num;
        }
        if (q==2){
            string name;
            cin>>name;
            m.erase(name);
        }
        if (q==3){
            string name;
            cin>>name;
            cout<<m[name]<<endl;
        }
    }
  
    return 0;
}


