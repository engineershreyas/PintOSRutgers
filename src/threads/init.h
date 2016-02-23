#ifndef THREADS_INIT_H
#define THREADS_INIT_H

#include <debug.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

//lock to enter the wait queue
static struct lock waitingLock;

//lock to exit wait queue
static struct lock releaseLock;

/* Page directory with kernel mappings only. */
extern uint32_t *init_page_dir;

#endif /* threads/init.h */
