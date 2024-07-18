#ifndef _STDIO_H_
# define _STDIO_H_

#include <stddef.h>

#ifndef NULL
# define NULL (void *)0
#endif

#ifndef EOF
# define EOF (-1)
#endif

// This FILE definition will do for now
typedef char * FILE;

FILE *fopen(char *pathname, char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fwrite(void *ptr, size_t size, size_t nmemb, FILE *stream);
int fclose(FILE *stream);
int printf(char *format, ...);
int fprintf(FILE *stream, char *format, ...);
int sprintf(char *str, char *format, ...);
int snprintf(char *str, size_t size, char *format, ...);
int fgetc(FILE *stream);
int getc(FILE *stream);
int getchar(void);
int fputc(int c, FILE *stream);
int fputs(char *s, FILE *stream);
int putc(int c, FILE *stream);
int putchar(int c);
int puts(char *s);
FILE *popen(char *command, char *type);
int pclose(FILE *stream);
int ferror(FILE *stream);
FILE *freopen(char *pathname, char *mode, FILE *stream);
char *fgets(char *s, int size, FILE *stream);
long ftell(FILE *stream);
int fseek(FILE *stream, long offset, int whence);
FILE *tmpfile(void);

#ifndef SEEK_SET
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#endif

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

#endif	// _STDIO_H_