#include <iostream>

using namespace std;

void myswap(int *&ptr1, int *&ptr2)//Pass by reference
{
  auto temp = ptr1;
  ptr1 = ptr2;
  ptr2 = temp;
}

int main()
{
  int a = 25, b =11;

  int *aptr = &a, *bptr = &b;

  //cout<<"What am I doing wrong ☹ \n\n";
  cout<<"Before swapping"<<endl;
  cout<<"a = "<<*aptr<<", b = "<<*bptr<<endl;

  //swap(a,b); //why does theirs work????   
 
  myswap(aptr,bptr); //myswap works now!!

  cout<<"After swapping"<<endl;
  cout<<"a = "<<*aptr<<", b = "<<*bptr<<endl;
}
