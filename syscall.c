// ...
// WARNING: OWN SYSCALL IMPLEMENTATION
extern int sys_getreadcount(void);

static int (*syscalls[])(void) = {
    // ...
    // WARNING: ADDED OWN SYSCALL
    [SYS_getreadcount] sys_getreadcount,
};

// ...
