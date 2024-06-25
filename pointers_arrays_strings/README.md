# C - Pointers, arrays and strings

[![An interesting video](https://img.youtube.com/vi/DplxIq0mc_Y/0.jpg)](https://www.youtube.com/watch?v=DplxIq0mc_Y)
--------------------------------------------------------------------------------------
|**Concept|Description|Example Code**|
|--------|-----------------|---------|
|*Pointer Declaration*|Declare a pointer by specifying the data type it points to, followed by a `*`.|`int *p;`|
|*Pointer Initialization*|Assign the address of a variable to the pointer using `&`.|`int x = 10; int *p = &x;`|
|*Dereferencing*|Access the value stored at the memory address pointed to by the pointer.|`int value = *p;`|
|*Pointer Arithmetic*|Perform arithmetic operations on pointers, useful for arrays.|`*(p + 1)`|
|*Pointers to Pointers*|A pointer that points to another pointer.|`int **pp = &p;`|
|*Null Pointers*|A pointer that is not initialized should be set to `NULL`.|`int *p = NULL;`|

# **Pointer:** A variable that stores the memory address of another variable. Pointers can point to any data type.
----------------------------------------------------------------------------------------
# **Array:** A collection of elements of the same type, stored in contiguous memory locations. The size of the array is fixed at compile time.

|**Concept|C**|
|----|--------|
|**Declaration**|`int numbers[5];`|
|**Initialization**|`int numbers[5] = {1, 2, 3, 4, 5};`|
|**Accessing Elements**|`int first = numbers[0];`|
||`numbers[2] = 10;`|
|**Iterating Elements**|`for (int i = 0; i < 5; i++) {`|
||`printf("%d ", numbers[i]);`|
||`}`|
|**Fixed Size**|Yes|
|**Indexing Start**|0|
|**Homogeneous Elements**|Yes|
