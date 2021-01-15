#include <iostream> // input output header file
using namespace std; // all the things under the std namespace available without having to prefix std:: before each of them

void isPalindrome(string str, int first, int last) // palindrome checking function
{
    if(first>=last) // checking two char at the same time slices the string into two parts, it is okay to check half of length
    {
        int len = str.size(); // calculating size of the string
        if(len%2==0) cout<<"Even Palindrome"; // if the length of string is even
        else cout<<"Odd Palindrome"; // if the length of string is odd
    }
    else if(str[first]!=str[last]) //if palindrome property mismatch
    {
        cout<<"Not a Palindrome"; // if it is not a palindrome
    }
    else isPalindrome(str,first+1,last-1); // recursively checking next two char by following palindrome property
}
int main()
{
    string str; // declaring a string
    cin>>str; // taking string as input
    int len = str.size(); // calculating size of the string
    for(int i=0; i<len; i++) // converting all char of string into lower case
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i] += 32;
    }
    isPalindrome(str,0,len-1); // checking if the string is palindrome or not
}