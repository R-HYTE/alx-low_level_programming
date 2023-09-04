#ifndef MAIN_H
#define MAIN_H

#include <stdio.h> /*For perror*/
#include <stdlib.h> /*For malloc and free*/
#include <errno.h>
#include <unistd.h> /*For open, close, read, write*/
#include <fcntl.h> /*For file access modes*/

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
