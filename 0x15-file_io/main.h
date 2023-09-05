#ifndef MAIN_H
#define MAIN_H
#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void  close_files(int file_hdl);
void copy_contents(int from_fd, int to_fd, char *src_file, char *dest_file);

#endif
