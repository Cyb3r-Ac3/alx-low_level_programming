<h1 align="center">0x0C. C - More malloc, free</h1>
> ### What are the functions `calloc` and `realloc` from the standard library and how to use them

The `calloc` and `realloc` functions are memory allocation functions available in the C standard library.

`calloc` function allocates a block of memory for an array of elements, and initializes all bytes in the block to zero. The function takes two arguments: the number of elements to allocate space for, and the size of each element.

The syntax for the `calloc` function is as follows: `ptr = (castType*)calloc(n, size);` where:
- `ptr` is a pointer to the first byte of the allocated memory block
- `castType` is the type to which the pointer should be cast
- `n` is the number of elements to be allocated and size is the size of each element.

`realloc` function changes the size of the memory block pointed to by a previously allocated memory block. The function takes two arguments: a pointer to the previously allocated memory block, and the new size of the memory block.

The syntax for the `realloc` function is as follows: `ptr = realloc(ptr, newSize);` where:
- `ptr` is a pointer to the previously allocated memory block
- `newSize` is the new size of the memory block

Both `calloc` and `realloc` functions return a pointer to the allocated memory block. If the memory allocation fails, both functions return a `NULL` pointer.
