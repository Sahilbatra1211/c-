/* LIST AS A ABSTRACT DATATYPE
we can make this using array
1)empty element has size 0 
2)remove element
3)insert element(if we have to insert or remove in between we have to do right or left shift
4)if array is finished we need to make an array of double the size and copy the elments of first 

Time and Cost
access any element -read or write element at end if the array is npt full.constant time(o(1))
insert- to insert we need to do right shift of or left shift therfore t is prop to no of elements on arr(O(n))
adding an element if the array is full will take time that is O(n)

CONSTANT TIME APPLICATION
it takes const time to go from one elemnet to end element the time is constant that is 
	like to acess a[4]
	base adress +4*(size of int)
	 
so we use linklist instead of array because they take time and cost



*/