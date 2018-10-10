/*the scanf( ) function fills in the characters typed at keyboard into this array until
 the enter key is hit. Once enter is hit, scanf( ) places a ‘\0’ in the array
 scanf( ) is not capable of receiving multi-word strings.
 The usage of functions gets( ) and its counterpart puts( ) i
 other wAY is shown below
 */
 #include<stdio.h>
 int main()
 { char c[10];
 scanf("%[^\n]s",c);
 puts(c);
 
 	
 }