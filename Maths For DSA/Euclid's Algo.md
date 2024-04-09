# Euclid's Algorithm

Euclid's Algorithm is a method used to find the Greatest Common Divisor (GCD) or Highest Common Factor (HCF) of two numbers. It is based on the principle that the GCD of two numbers remains the same if the larger number is replaced by its difference with the smaller number.

## How it Works

1. **Initialization**: Given two numbers `a` and `b`, where `a` is greater than or equal to `b`, we start with the pair `(a, b)`.

2. **Iteration**: We repeatedly apply the operation `gcd(a, b) = gcd(a - b, b)` until `a - b` equals 0.

3. **Termination**: Once `a - b` becomes 0, the GCD is found. If `a - b` equals 0, then `b` is the GCD. If `b - a` equals 0, then `a` is the GCD.

4. **Alternative Case**: If `b` is greater than `a`, we swap `a` and `b`, and continue the process.

## Example

Let's illustrate the algorithm with an example:

Given `a = 48` and `b = 18`:

- Step 1: `gcd(48, 18) = gcd(48 - 18, 18) = gcd(30, 18)`
- Step 2: `gcd(30, 18) = gcd(30 - 18, 18) = gcd(12, 18)`
- Step 3: `gcd(12, 18) = gcd(18 - 12, 12) = gcd(6, 12)`
- Step 4: `gcd(6, 12) = gcd(12 - 6, 6) = gcd(6, 6)`

Since `6 - 6 = 0`, the GCD is found, and the result is `6`.

## Conclusion

Euclid's Algorithm provides an efficient method for finding the Greatest Common Divisor (GCD) or Highest Common Factor (HCF) of two numbers. It simplifies the problem by iteratively replacing the larger number with the difference between the two numbers, ultimately leading to the discovery of the GCD. This algorithm is widely used in various applications requiring the calculation of GCD or HCF.
