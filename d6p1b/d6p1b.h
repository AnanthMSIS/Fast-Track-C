#define SIZE 10

struct stud
{
    int roll_number;
    char name[20];
    int age;
    int marks[4];
};
typedef struct stud student;

void display(struct stud s[]);
void read(struct stud s[]);
