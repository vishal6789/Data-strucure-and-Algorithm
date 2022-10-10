#include <iostream>

void deletion(int lb,int ub,int list[],int post,int max);



int main() 
{
  int n,lb,ub,max,position;
  
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

  std::cout << "\nEnter the position where item is to be deleted: " ;
  std::cin >> position;
  
  //calling the deletion function
  deletion(lb,ub,arr,position,max);

  //TRAVERSISNG THE ARRAY
  for(int i=lb;i<=ub;i++)
  {
    std::cout << arr[i] << "\t" ;
  }

  return 0;
}

void deletion(int lb,int ub,int list[],int pos,int max)
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

  for(int i=pos;i<ub;i++)
  {
    list[i] = list[i+1];
  }

  list[ub] = 0;
}