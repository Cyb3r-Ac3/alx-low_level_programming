# C - Singly linked lists

## 0-print-list.c

```This function takes a pointer to the beginning of a list_t list as its argument, and prints out each element of the list, along with its length, in the format [%d] %s\n. If an element's str field is NULL, it prints [0] (nil)\n instead. The function returns the number of nodes in the list, which is the number of elements that were printed.```

## 1-list_len.c

```This function takes a pointer to the beginning of a list_t list as its argument, and iterates through the list using a while loop. Each time it encounters a non-NULL element, it increments a count variable. Once it has finished iterating through the list, it returns the count variable, which represents the number of elements in the list.```

## 2-add_node.c

This function takes a pointer to a pointer to the beginning of a list_t list as its first argument, and a string to be added to the list as its second argument. It first checks if the string is NULL, and returns NULL if it is.

It then allocates memory for a new list_t node using malloc(), and checks if the allocation was successful. If it was not, it returns NULL.

The function then uses strdup() to duplicate the string, and stores the resulting pointer in the str field of the new node. It also stores the length of the string in the len field of the new node.

The new node's next field is set to the current head of the list, and the head of the list is set to the new node. Finally, the function returns the address of the new node.

If the strdup() call fails, the function frees the memory that was allocated for the new node, and returns NULL.

## 3-add_node_end.c

This function takes a pointer to a pointer to the beginning of a list_t list as its first argument, and a string to be added to the list as its second argument. It first checks if the string is NULL, and returns NULL if it is.

It then allocates memory for a new list_t node using malloc(), and checks if the allocation was successful. If it was not, it returns NULL.

The function then uses strdup() to duplicate the string, and stores the resulting pointer in the str field of the new node. It also stores the length of the string in the len field of the new node, and sets the next field to NULL, since this will be the last node in the list.

If the list is currently empty (i.e. the head is NULL), the function sets the head to the new node. Otherwise, the function iterates through the list to find the last node, and sets its next field to the new node.

Finally, the function returns the address of the new node.

If the strdup() call fails, the function frees the memory that was allocated for the new node, and returns NULL.


## 4-free_list.c

This function takes a pointer to the beginning of a list_t list as its argument, and frees each node in the list, starting from the head node. It does this using a while loop that iterates through each node in the list.

On each iteration, the function stores the current head node in a temporary variable, and moves the head node to the next node in the list. It then frees the str field of the temporary node using free(), and frees the temporary node itself using free().

When the loop is finished, all nodes in the list have been freed.


## 100-first.c

This function simply prints the message "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" using printf(). It does not take any arguments or return any values.

You can call this function before the main() function to print the message before the program starts executing.

## 101-hello_holberton.asm

It defines a string "Hello, Holberton" in the .data section and a format string "%s\n" in the .data section, which includes a newline character (\n) to print after the string. It then calls the printf function to print the string using the format string.

The code sets the first argument to the address of the string (msg) and the second argument to the format string (fmt) before calling the printf function. It then sets the return value to 0 and exits the program with the ret instruction.

To compile and run this program, you can use the following commands:

```nasm -f elf64 hello.asm && gcc hello.o -o hello ./hello```
