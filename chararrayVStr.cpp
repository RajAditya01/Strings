#include<iostream>
using namespace std;

int main(){
    char ch[10]="adi\0tya";
    string str="adi\0tya";

    cout<<ch<<endl<<str<<endl;
}

/*
In C++, a character array is a sequence of characters stored in contiguous memory locations, whereas a string is a container class that represents a sequence of characters as a single object.

Here are some differences between character arrays and strings in C++:

Size: In a character array, you need to explicitly specify the size of the array. In contrast, the size of a string is dynamically adjusted as you add or remove characters from it.

Mutability: Character arrays are mutable, meaning you can modify the contents of the array. Strings are also mutable, but you need to use member functions like insert, erase, and replace to modify the contents.

Null termination: In C++, character arrays must be null-terminated, meaning that the last character in the array must be a null character '\0'. This is not required for strings, as the size of the string is automatically determined by the class and stored separately.

Accessing characters: You can access individual characters in a character array using array indexing, like myCharArray[0]. In a string, you can use the at() member function or the indexing operator [] to access individual characters.

Comparison: Comparing two character arrays involves using the strcmp() function, whereas comparing two strings can be done using the == operator or the compare() member function.

Overall, while character arrays and strings share many similarities, strings offer more convenience and flexibility due to their dynamic size and built-in member functions for common string operations.
*/