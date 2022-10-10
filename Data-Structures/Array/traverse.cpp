#include <iostream>

void arrayTraverse(int, int, int[],int);

int main(void) 
{
  int n,lb,ub,max;
  
  std::cout << "Enter number of elements in array:" ;
  std::cin >> n;
  
  int arr[n];
  max = n-1;
  
  std::cout << "enter elements of array:\n" ;
  for(int i=0;i<n;i++)
  {
    std::cin >> arr[i];
  }  
  
  std::cout << "\nEnter the value of lower bound: " ;
  std::cin >> lb;

  std::cout << "\nEnter the value of upper bound: " ;
  std::cin >> ub;

  //Traversing an array
  arrayTraverse(lb,ub,arr,max);
  return 0;
}

void arrayTraverse(int lb, int ub,int list[],int max)
{
  if(lb>ub)
  {
    std::cout << "\n Error" ;
    return;
  }

  if(ub>max)
  {
    std::cout << "\n Overflow Condition";
    return;
  }

  for(int i=lb;i<=ub;i++)
  {
    std::cout << list[i] << "\t" ;
  }
}