/* Arthemetic precesion
"Highest-order operand" determines type of arithmetic "precision" performed
17 / 5 evaluates to 3 in C++!
17.0 / 5 equals 3.4 in C++!

1 / 2 / 3.0 / 4 performs 3 separate divisions.
First? 1 / 2 equals 0
Then? 0 / 3.0 equals 0.0
Then? 0.0 / 4 equals 0.0 !!

