#include <iostream>

using namespace std;

void myswap(int *ptr1, int *ptr2)
{
  auto temp = ptr1;
  ptr1 = ptr2;
  ptr2 = temp;
}


int main()
{
  int a = 25, b =11;

  int *aptr = &a, *bptr = &b;

  cout<<"What am I doing wrong ☹ \n\n";

  cout<<"a = "<<a<<", b = "<<b<<endl;

  //swap(a,b); //why does theirs work????   
 
  myswap(aptr,bptr); // but mine doesn't ?!?!?!?!!!???

  cout<<"a = "<<a<<", b = "<<b<<endl;


}
