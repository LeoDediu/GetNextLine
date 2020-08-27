# GetNextLine

GetNextLine is a C function that reads any valid file and retrieves every line available.

`int get_next_line(const int fd, char **line);`

Functions allowed: read(), malloc() and free().

## Usage

### Compiling

Run the following commands:

* To compile
	- `make`
* To remove objects:
	- `make clean`
* To remove objects and binary file (program):
	- `make fclean`
* To re-compile:
	- `make re`

### Executing

To test the function, compile with main.c.

`gcc main.c src/get_next_line.c`

`./a.out tests/some_lines.txt`

## Return values

* Returns 1 when succesfully reads a line

* Returns 0 when finished reading a file 

* Returns -1 when an error occurs

Open **get_next_line.en.pdf** for more information about the project.