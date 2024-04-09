# Modulo Arithmetic and Fast Exponentiation

Modulo arithmetic is a branch of arithmetic dealing with remainders. It is often used in cryptography, computer science, and number theory. Fast exponentiation, also known as modular exponentiation, is a technique used to compute large powers of a number modulo another number efficiently.

## Modulo Arithmetic

Modulo arithmetic, denoted as `a mod n`, calculates the remainder when `a` is divided by `n`. It operates on integers and produces results within the range from 0 to `n - 1`.

### Properties of Modulo Arithmetic:

- **Addition**: `(a + b) mod n = ((a mod n) + (b mod n)) mod n`
- **Subtraction**: `(a - b) mod n = ((a mod n) - (b mod n) + n) mod n`
- **Multiplication**: `(a * b) mod n = ((a mod n) * (b mod n)) mod n`
- **Exponentiation**: `(a^k) mod n = ((a mod n)^k) mod n`

## Fast Exponentiation

Fast exponentiation is a technique used to compute large powers of a number modulo another number efficiently. It utilizes the binary representation of the exponent to minimize the number of multiplications required.

### Algorithm Steps:

1. **Initialization**: Start with the base `a`, exponent `k`, and modulus `n`.

2. **Binary Representation**: Convert the exponent `k` into binary representation.

3. **Exponentiation**: Iterate through the binary representation of `k`:

   - If the current bit is 1, multiply the result by `a` modulo `n`.
   - Square `a` modulo `n` for each bit position.

4. **Termination**: After iterating through all bits of the exponent, the result will be the final answer.

### Example

Let's illustrate fast exponentiation with an example:

Given `a = 5`, `k = 13`, and `n = 7`:

- Binary representation of `13` is `1101`.
- Start with result `res = 1`.
- Iterating through the bits:
  - 1st bit: `res = (res * 5) mod 7 = 5 mod 7 = 5`.
  - 2nd bit: `res = (5 * 5) mod 7 = 25 mod 7 = 4`.
  - 3rd bit: `res = (4 * 4) mod 7 = 16 mod 7 = 2`.
  - 4th bit: `res = (2 * 5) mod 7 = 10 mod 7 = 3`.

The result is `3`.

## Conclusion

Modulo arithmetic is a fundamental concept in mathematics with various applications, including cryptography and computer science. Fast exponentiation is an efficient technique for computing large powers modulo a number, especially in scenarios where exponentiation is performed multiple times. Together, they provide powerful tools for solving problems efficiently in various domains.
