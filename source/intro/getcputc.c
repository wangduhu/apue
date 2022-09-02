/*
  simple cat
  - getc
  - putc
  - stdin :: extern FILE *__stdinp;
  - stdout :: extern FILE *__stdoutp;
  - EOF :: #define	EOF	(-1)
  - 带缓冲的
 */
#include "apue.h"

int main(void) {
  int c;

  while ((c = getc(stdin)) != EOF) {
    if (putc(c, stdout) == EOF) {
      err_sys("output error");
    }
  }

  if (ferror(stdin)) {
    err_sys("input error");
  }

  exit(0);
}
