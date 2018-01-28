#include <stdio.h>

main(c,v)char**v;{--c?printf("%s ",v[c]),main(c,v):c;}