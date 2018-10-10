//Memory allocation for objects in class

/*Memory space for objects is allocated when they are
declared and not when the class is specified :
partially true.


Since all the objects belonging to that class use the
same member functions, no separate space is
allocated for member functions when the objects are
created.


Only space for member variables is allocated
separately for each object. Because, member
variables will hold different data values for different
objects.