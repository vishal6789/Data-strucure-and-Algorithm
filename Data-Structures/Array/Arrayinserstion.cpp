#include <iostream>

void arrayInsert(int , int, int[],int , int, int);

int main(void) 
{
 int n,lb,ub,max,position,item;
  
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

  std::cout << "\nEnter the position where item is to be insert: " ;
  std::cin >> position;

  std::cout << "\nEnter the item which is to be inserted: " ;
  std::cin >> item;

  arrayInsert(lb,ub,arr,position,item,max);

  for(int i=lb;i<=ub;i++)
  {
    std::cout << arr[i] << "\t" ;
  }

  return 0;
}

void arrayInsert(int lb,int ub,int list[],int pos,int item,int max)
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

  for(int i=ub;;i--)
  {
    list[i]=list[i-1];
    if(i==pos)
    {  
      break;
    }
  }

  list[pos] = item;
}