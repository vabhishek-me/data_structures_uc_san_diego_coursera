## Maximum Pairwise Product (For -ve & +ve Numbers)

```

Find the maximum product of two distinct numbers in a sequence of positive as well as negative integers.

Input: A sequence of +ve & -ve integers.

Output: The maximum value that can be obtained by multiplying two different elements (+ve or -ve) from the sequence.

```

### Fast Method (n complexity)

 - This algorithm can solve the problem in a single traversal.

 - Find two extreme values (both +ve and -ve).

 - Use four variable to keep track of the extreme values : 
		- Max +ve Integer
    - 2nd Max +ve Integer
    - Max -ve Value (absolute)
    - 2nd Max -ve Value (absolute)

 - Find Solution
		- C++ : [maximum_pairwise_product_all.cpp](./C++/maximum_pairwise_product_all.cpp)
