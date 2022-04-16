#include <iostream>
using namespace std;
int reverse_num(int n){ 
  int reverse =0;
  while(n>0)
  {
      reverse = reverse * 10 + n % 10;
      n/=10;
  }
  return reverse;
}
bool checksymmetricalnumber(int n)
{
    if(n==reverse_num(n))
    {
        return true;
    }
    return false;
}
int main()
{
  int n;
  std::cout<<"Enter number";
  std::cin>>n;
  if(checksymmetricalnumber(n)){
        std::cout<<"\nSo doi xung";
   }else{
    std::cout<<"\nKhong phai so do xung";
   }
  return 0;
}
