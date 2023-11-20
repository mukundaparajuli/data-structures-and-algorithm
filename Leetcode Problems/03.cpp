// 231. Power of Two

// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

// #include <math.h>
// class Solution
// {
// public:
//     bool isPowerOfTwo(int n)
//     {
//         int i = 0;
//         int ans = 0;
//         while (i <= 30)
//         {

//             ans = pow(2, i);
//             if (ans == n)
//             {
//                 return true;
//             }
//             i++;
//         }
//         return false;
//     }
// };



// SECOND APPROACH
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         int a=1;
//         if(n==1){
//             return true;
//         }
//         for(int i=0;i<=30; i++){
//             if(a==n){
//                 return true;
//             }
//             if(a<INT_MAX/2)
//             a=a*2;
//         }
//         return false;
//     }
// };