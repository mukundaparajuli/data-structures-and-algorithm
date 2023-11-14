/*
    1
   121
  12321
 1234321
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {

        // spaces
        int spaces = n - i;
        int j = 1;
        while (j <= spaces)
        {
            cout << " ";
            j++;
        }

        // printing second part of the pattern
        int secondNo = i;
        int count = 1;
        int k = 1;
        while (k <= secondNo)
        {
            cout << count;
            count++;
            k++;
        }

        // printing third part of the pattern
        int thirdNo = i - 1;
        int count2 = thirdNo;

        int l = 1;
        while (l <= thirdNo)
        {
            cout << count2;
            count2--;
            l++;
        }
        i++;
        cout << endl;
    }
    return 0;
}

/**
 * Logic Here:
 * -so first of all we will divide the whole pattern into 3 sections
 *
 *
 * -first one is the triangle of white space and second one is the right angled triangle and third one is
 *  another right angled triangle
 *
 *
 * first part
 *
 * -first we will solve for the white space using while loop
 *  -we will give the value of column i.e j for 1 and we will run that until when the n-1 spaces are completed
 *  -once the space part is complete for the column we move to the second section
 *
 *
 * second section
 *
 * -here will give the value of column i.e. k for 1 and we will run that unit the i(no. of the current row)
 *  columns are covered
 * -and we will print the value of count which value we will give 1 initially and will goes on increasing as
 *  we move toward the other column
 *
 *
 * third section
 *
 * -thirdly we will solve the third section of the pattern
 *  -here we will give the value of column l=1 at beginning and this value will goes on increasing as long as it
 *   satisfies the condition that l<i-1;
 *  -and for each column we will print count which value we will initially give i-1 and its value will go on
 * deacreasing
 */