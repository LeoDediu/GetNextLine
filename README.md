# GetNextLine

GetNextLine is a C function that reads any valid file and retrieves every line available.
Functions allowed: read(), malloc() and free().

## Usage:
It is a function that reads a file and allows you to read a line ending with a newline character from a file descriptor.
When you call the function again on the same file, it grabs the next line. This project deals with memory allocation and when to free and allocate memory to prevent leaks.  

## Return value:
  return 1 when it read a line;  
  return 0 when it finished reading a file;  
  return -1 when an error occurs.  
