#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[],int st,int en) {
  int last = st-1;
  int pivot = arr[en];
  for(int i =st;i<=en;++i) {

     if(arr[i] <= pivot) {

         swap(arr[i] , arr[++last]);
     }



  }
  return last;

}  // end partition function.


void quick_sort(int arr[],int st,int en) {

   if(st >= en) return;

    int indexP = Partition(arr,st,en);
    quick_sort(arr,st,indexP - 1);
    quick_sort(arr,indexP + 1,en);

}








int main()
{

 int arr [] = {1,4,5,6,3,2,8,9,55,44};

 for(int i =0;i<10;i++) {

   cout << arr[i] <<" ";
 }
 cout <<endl;

 quick_sort(arr,0,9);

 for(int i =0;i<10;i++) {

   cout << arr[i] <<" ";
 }


    return 0;
}
