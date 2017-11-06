-c
Este comando generó dos objetos hellofunc.o y hellomake.o para los archivos hellofunc.c y hellomake.c

-E
Resultó el preproceso de los archivos.

Ejemplo:
# 1 "hellomake.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "hellomake.c"
# 1 "./hellomake.h" 1

-S
Compiló los archivos hellofunc.c y hellomake.c y generó dos archivos hellofunc.s y hellomake.s que están en lenguaje ensamblador.
