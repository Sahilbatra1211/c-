/*write a program to merge the contents of 2 soretd arrays.*/
#include<iostream.h>
#include<conio.h>
void merge(int[], int,int[],int,int[]);
int main()
{

 int A[50],B[50],C[100], M, N;
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
 for(i=0;i<(M+N);i++)
 cout<<C[i]<<" ";
 cout<<endl;
 getch();
}
void merge(int A[], int M, int B[], int N, int C[])
{
int i=0,j=0,k=0;
while((i<M)&&(j<N))
{
if(A[i]>B[j])
{
C[k]=A[i];
i++;
k++;
}
else
{
C[k]=B[j];
j++;
k++;
}
}
while(j<N)
{
C[k]=B[j];
j++;
k++;
}
while(i<M)
{
C[k]=A[i];
k++;
i++;
}
}
