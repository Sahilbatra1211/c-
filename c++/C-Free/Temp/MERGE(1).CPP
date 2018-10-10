#include<iostream.h>
#include<conio.h>
void merge(int[], int,int[],int,int[]);
void main()
{
 clrscr();
 int A[50],B[50],C[50],MN=0, M, N;
 cout<<"Enter the number of elements in array 1: ";
 cin>>M;
 cout<<"Enter the elements for array 1:"<<endl;
 for(int i=0; i<M; i++)
  cin>>A[i];
 cout<<"Enter the number of elements in array 2: ";
  cin>>N;
 cout<<"Enter the elements of array 2: ";
 for(i=0;i<N;i++)
  cin>>B[i];
 merge(A,M,B,N,C);
 cout<<"The merged array is:"<<endl;
 for(i=0;i<MN;i++)
 cout<<C[i]<<" ";
 cout<<endl;
 getch();
}
void merge(int A[], int M, int B[], int N, int C)
{
 int a,b,c;
 for(a=0,b=-1,c=0;a<M&&b>=0;)
 {
  if(A[a]<=B[b])
   C[c++] = A[a--];
  }
  if( a<M)
  {
  while(a<M)
   C[c++]=A[a++];
  }
  else
  {
   while(b>=0)
   C[c++]=B[b--];
  }
}
