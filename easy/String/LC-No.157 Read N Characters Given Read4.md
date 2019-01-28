### Desciption
Given a file and assume that you can only read the file using a given method read4, implement a method to read n characters.

Method read4:

The API read4 reads 4 consecutive characters from the file, then writes those characters into the buffer array buf.

The return value is the number of actual characters read.

Note that read4() has its own file pointer, much like FILE *fp in C.

### Definition of read4:
```
    Parameter:  char[] buf
    Returns:    int
Note: buf[] is destination not source, the results from read4 will be copied to buf[]
```
Below is a high level example of how read4 works:
```
File file("abcdefghijk"); // File is "abcdefghijk", initially file pointer (fp) points to 'a'
char[] buf = new char[4]; // Create buffer with enough space to store characters
read4(buf); // read4 returns 4. Now buf = "abcd", fp points to 'e'
read4(buf); // read4 returns 4. Now buf = "efgh", fp points to 'i'
read4(buf); // read4 returns 3. Now buf = "ijk", fp points to end of file
```

### Example
Input: file = "abcde", n = 5<br>
Output: 5<br>
Explanation: After calling your read method, buf should contain "abcde". We read a total of 5 characters from the file, so return 5.
