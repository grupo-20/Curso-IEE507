#include <stdio.h>
# include <stdlib.h>/*directorio que nos ayudara para ocupar rand y srand*/
#include <time.h>/*directorio que nos permitira ocupar la funcion time*/
int * getRandom( ) {
static int r[10];
int i;
/* set the seed */
srand( (unsigned) time( NULL ) );
for ( i = 0; i < 10; ++i) {
r[i] = rand();
}
return r;
}
/* main function to call above defined function */
int main () {
/* a pointer to an int */
int*p;
int i;
p= getRandom () ;
for ( i= 0; i < 10; i++) {
printf("*(p + %d) : %d\n", i,*(p+i));
}
return 0;
}
