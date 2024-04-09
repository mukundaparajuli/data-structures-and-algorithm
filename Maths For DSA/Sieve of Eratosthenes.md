# Sieve of Eratosthenes

The Sieve of Eratosthenes is an ancient algorithm used to find all prime numbers up to a given limit `n`. It works by iteratively marking the multiples of each prime number starting from 2, which are not prime. The algorithm has a time complexity of O(n log log n).

## Algorithm Steps

1. **Initialization**: Initially, all numbers between 2 and `n` are considered as potential prime numbers.

2. **First Pass**: Starting from 2, consider it as a prime number and eliminate all its multiples from the list.

3. **Second Pass and Beyond**: Repeat the process for each remaining number in the list, treating it as a prime number and eliminating its multiples.

4. **Termination**: Continue until all numbers less than or equal to `n` have been processed.

5. **Counting**: The remaining numbers in the list after the algorithm terminates are prime numbers.

## Example

Let's illustrate the algorithm with an example where `n = 30`:

- Initial list:
  2 3 4 5 6 7 8 9 10
  11 12 13 14 15 16 17 18 19 20
  21 22 23 24 25 26 27 28 29

- After eliminating multiples of 2:
  2 3 5 7 9
  11 13 15 17 19
  21 23 25 27 29

- After eliminating multiples of 3:
  2 3 5 7
  11 13 17 19
  23 25 29

- After eliminating multiples of 5:
  2 3 5 7
  11 13 17 19
  23 29

- After eliminating multiples of 7:
  2 3 5 7
  11 13 17 19
  23 29

- After eliminating multiples of 11, 13, 17, 19, 23, and 29, no further elimination is needed. The remaining numbers are all prime.

- Total number of prime numbers up to 30: 10

This example demonstrates the process of finding prime numbers using the Sieve of Eratosthenes algorithm.

## Conclusion

The Sieve of Eratosthenes is an efficient algorithm for finding prime numbers within a given range. It works by iteratively marking the multiples of each prime number, thereby reducing the search space for identifying prime numbers. This algorithm is particularly useful for applications that involve prime number generation or prime number testing.
