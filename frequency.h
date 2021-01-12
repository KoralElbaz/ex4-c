#define NUM_LETTERS ((int)26)

typedef enum {FALSE=0, TRUE=1} boolean;

typedef struct node {
    char letter;
    long unsigned int count; // in node start the count represents the number of words.
    struct node* children[NUM_LETTERS];
    long unsigned int num_of_ch; // returns the number of children
    boolean end; // if this field is true that means there a word that ends like this
} node;

node* start;

node* new_node(char c);

int read();

void print(node *curr, int i, char* arr);

void print_reverse(node *curr, int i, char *arr);

node* add_letter(node *last_n, char curr_c, node* curr_n);

void free_all(node* curr);
