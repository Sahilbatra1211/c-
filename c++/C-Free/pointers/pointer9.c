/* supoose we want to refer s[2][1] using pointrs 
 *(s[2]+1)
 we can also write it as *( *(s+2)+1)
 therefore to enter elements intoan array we can write the code
 *(*(s+i)+j)
 */
 #include<stdio.h>
 int main()
 { int s[4][2] = { { 1234, 56 }, 
 					{ 1212, 33 }, 
					 { 1434, 80 },
					  { 1312, 78 } };
 int i, j ;
for ( i = 0 ; i <= 3 ; i++ )
 { printf ( "\n" ) ;
  for ( j = 0 ; j <= 1 ; j++ )
   printf ( "%d ", *( *( s + i ) + j ) ) ; 
   } 
   }