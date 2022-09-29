

struct comp
{
    int r,i;
};

typedef struct comp complx;

void read(struct comp *a);

void display(struct comp *a);

struct comp add(struct comp *a, struct comp *b);

struct comp sub(struct comp *a, struct comp *b);

struct comp mul(struct comp *a, struct comp *b);
