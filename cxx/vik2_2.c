# 1 "vik2_1.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "vik2_1.c"
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 1011 "vik2.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 410 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 441 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 442 "/usr/include/sys/cdefs.h" 2 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 443 "/usr/include/sys/cdefs.h" 2 3 4
# 411 "/usr/include/features.h" 2 3 4
# 434 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4






# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 435 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/bits/libc-header-start.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/i686-pc-linux-gnu/6.3.1/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/i686-pc-linux-gnu/6.3.1/include/stddef.h" 3 4
# 216 "/usr/lib/gcc/i686-pc-linux-gnu/6.3.1/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/i686-pc-linux-gnu/6.3.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;







__extension__ typedef long long int __intmax_t;
__extension__ typedef unsigned long long int __uintmax_t;
# 130 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 131 "/usr/include/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-pc-linux-gnu/6.3.1/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-pc-linux-gnu/6.3.1/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-pc-linux-gnu/6.3.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 385 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 105 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;
# 167 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 168 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 198 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 212 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 230 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
# 240 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 255 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 269 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 298 "/usr/include/stdio.h" 3 4
# 309 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 322 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 359 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 415 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 428 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 446 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 466 "/usr/include/stdio.h" 3 4
# 474 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 497 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 525 "/usr/include/stdio.h" 3 4
# 534 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 553 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 564 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 576 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 597 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 625 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 643 "/usr/include/stdio.h" 3 4
# 668 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 692 "/usr/include/stdio.h" 3 4
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 740 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
# 752 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 776 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 795 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 818 "/usr/include/stdio.h" 3 4
# 827 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 849 "/usr/include/stdio.h" 3 4
extern void perror (const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 857 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 875 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 915 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 945 "/usr/include/stdio.h" 3 4
# 1012 "vik2.c" 2
# 1012 "vik2.c"

# 1012 "vik2.c"
int
 main()





{
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 999 "vik2.c"
printf(

"%d"
"\n"
,
1
# 1021 "vik2.c" 2
+
1
)
;
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 972 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 959 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 945 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 535 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 536 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 538 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 907 "vik2.c" 2
# 946 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 535 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 536 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 538 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 907 "vik2.c" 2
# 947 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 622 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 623 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 625 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 907 "vik2.c" 2
# 948 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 716 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 717 "vik2.c" 2
# 751 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 752 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 754 "vik2.c" 2
# 788 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 789 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 999 "vik2.c"
printf(

"%d"
"\n"
,
1
# 792 "vik2.c" 2

| 2
# 819 "vik2.c"
)
;


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 824 "vik2.c" 2
# 866 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 867 "vik2.c" 2
# 898 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 899 "vik2.c" 2
# 949 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 535 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 536 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 538 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 907 "vik2.c" 2
# 950 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 535 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 536 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 538 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 907 "vik2.c" 2
# 951 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 535 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 536 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 538 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 907 "vik2.c" 2
# 952 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 622 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 623 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 625 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 907 "vik2.c" 2
# 953 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 622 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 623 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 625 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 907 "vik2.c" 2
# 954 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 716 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 717 "vik2.c" 2
# 751 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 752 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 754 "vik2.c" 2
# 788 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 789 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 999 "vik2.c"
printf(

"%d"
"\n"
,
1
# 792 "vik2.c" 2




| 4
# 819 "vik2.c"
)
;


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 824 "vik2.c" 2
# 866 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 867 "vik2.c" 2
# 898 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 899 "vik2.c" 2
# 955 "vik2.c" 2
# 960 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 945 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 535 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 536 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 538 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 907 "vik2.c" 2
# 946 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 535 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 536 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 538 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 907 "vik2.c" 2
# 947 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 535 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 536 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 538 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 907 "vik2.c" 2
# 948 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 351 "vik2.c" 2
# 489 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 491 "vik2.c" 2
# 622 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 257 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 258 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 261 "vik2.c" 2
# 623 "vik2.c" 2

# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 625 "vik2.c" 2
# 669 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 670 "vik2.c" 2
# 906 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 322 "vik2.c" 2







# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 330 "vik2.c" 2


# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "vik2.c" 2
# 215 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 216 "vik2.c" 2
# 226 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 227 "vik2.c" 2
# 237 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 238 "vik2.c" 2
# 248 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 249 "vik2.c" 2
# 333 "vik2.c" 2
# 907 "vik2.c" 2
# 949 "vik2.c" 2
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 455 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 456 "vik2.c" 2
# 488 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 350 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 321 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 138 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 139 "vik2.c" 2
# 149 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 150 "vik2.c" 2
# 160 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 161 "vik2.c" 2
# 171 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 172 "vik2.c" 2
# 182 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 183 "vik2.c" 2
# 193 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 194 "vik2.c" 2
# 204 "vik2.c"
# 1 "vik2_1.c" 1
# 1 "vik2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vik2.c"
# 18 "vik2.c"
# 205 "v