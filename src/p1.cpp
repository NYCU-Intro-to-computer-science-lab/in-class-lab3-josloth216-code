// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <bits/stdc++.h>
using namespace std;
int bb(int k){
  if(k==1){return 1;}
  else return(k*bb(k-1));
}
int aa(int k){
  if(k==1){return 1;}
  else return(k+aa(k-1));
}

int main() {
  int x;
  cin>>x;
  cout<<bb(x) << endl<<aa(x);
}
