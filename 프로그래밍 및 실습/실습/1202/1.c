//1
int *pi;

//2
double *pd;

//3
char c;
char *pc = &c;

//4
int a[3];
int *p = a;

//5
int a[3];
int *p = a;
*(p + 2) = 10;
