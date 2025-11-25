// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>

using namespace std;

int GCD(int num1,int num2)
{
	if(num2==0)
	{
	 return num1;
	} 
	
	return GCD(num2,num1%num2);
}
int main(){
  int x,y;
  cin>>x>>y;
  cout<<GCD(x,y);
  return 0;
}
