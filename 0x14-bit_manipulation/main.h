#ifndef MAIN
#define MAIN
typedef struct bit bit_s;
typedef struct bit_ptr bit_p;

struct bit_ptr {
	int *b;
	struct bit_ptr next;
};

struct bit {
	int b;
	struct bit *next;
};

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif /* MAIN */
