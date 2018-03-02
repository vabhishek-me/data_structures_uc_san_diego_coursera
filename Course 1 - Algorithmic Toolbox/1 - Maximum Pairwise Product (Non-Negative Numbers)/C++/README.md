## Maximum Pairwise Product (For Non-Negative Numbers)

```

Find the maximum product of two distinct numbers in a sequence of non-negative integers.

Input: A sequence of non-negative integers.

Output: The maximum value that can be obtained by multiplying two different elements from the sequence.

```

- - -

### Naive Method (n^2 Complexity)

 - Go through the elements in two nested loops and find maximum product.


### Alternate Method (nlogn Complexity)

 - Sort the array in increasing order and find the product of the last two elements.


### Fast.1 Method (2n Complexity)

 - Go through the elements in two separate loops and find two max elements with different indexes.

 - Find Solution [maximum_pairwise_product_2n_complexity.cpp](./maximum_pairwise_product_2n_complexity.cpp)


### Fast.2 Method (n Complexity)

 - Take two max variables; max1 and max2.

 - Go through the elements in one loop and find both.

 - Find Solution [maximum_pairwise_product_n_complexity.cpp](./maximum_pairwise_product_n_complexity.cpp)
