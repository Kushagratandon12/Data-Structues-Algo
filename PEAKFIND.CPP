#include<iostream.h>
#include<conio.h>

 int findPeaku(int ar[] , int low , int high , int n)
   {
     int  mid = (low +high)/2;
	if((mid==0 || ar[mid-1]<=ar[mid]) && (mid==n-1|| arr[mid+1]<=ar[mid]))
	return mid;

	else if(mid>0 && arr[mid-1]>ar[mid])
	 return findpeaku(arr , low , (mid-1),n);

	else
	return findpeaku(arr,(mid+1),high,n) ;
   }

 int findpeak(int arr[] , int n)
 {
 return findpeaku(arr,0,(n-1),n);
 }
 int main()
 {
 clrscr();
 int arr[] = {1,3,20,4,1,0};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<findpeak(arr,n);
 getch();
 return 0;
 }

