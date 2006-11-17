#ifndef CRASHDUMP_H
#define CRASHDUMP_H

extern int get_crash_notes_per_cpu(int cpu, uint64_t *addr, uint64_t *len);

/* Need to find a better way to determine per cpu notes section size. */
#define MAX_NOTE_BYTES		1024
/* Expecting ELF headers to fit in 4K. Increase it if you need more. */
#define KCORE_ELF_HEADERS_SIZE  4096

#endif /* CRASHDUMP_H */
