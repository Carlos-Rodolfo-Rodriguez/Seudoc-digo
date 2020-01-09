#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: You are given a 3-D Matrix in which each block contains 0 initially. 
                The first block is defined by the coordinate (1,1,1) and the last block is defined by the coordinate (N,N,N). 
                There are two types of queries.

UPDATE x y z W              updates the value of block (x,y,z) to W.

QUERY x1 y1 z1 x2 y2 z2     calculates the sum of the value of blocks whose x coordinate is between x1 and x2 (inclusive), 
                                                                            y coordinate between y1 and y2 (inclusive) and 
                                                                            z coordinate between z1 and z2 (inclusive).
Input Format
The first line contains an integer T, the number of test-cases. T testcases follow.
For each test case, the first line will contain two integers N and M separated by a single space.
N defines the N * N * N matrix.
M defines the number of operations.
The next M lines will contain either

 1. UPDATE x y z W
 2. QUERY  x1 y1 z1 x2 y2 z2 

Output Format
Print the result for each QUERY.

Constrains
1 <= T <= 50
1 <= N <= 100
1 <= M <= 1000
1 <= x1 <= x2 <= N
1 <= y1 <= y2 <= N
1 <= z1 <= z2 <= N
1 <= x,y,z <= N
-109 <= W <= 109


*/
constante entero NMAX = 100;

principal                                                       // Unidad de programa principal
largo mat[NMAX][NMAX][NMAX];
entero T,veces;
leer(T);
variarMas1(veces,1,T)
    entero N,M,f,c,p,oper;
    leer(N);leer(M);
    variarMas1(f,0,N-1)
        variarMas1(c,0,N-1)
            variarMas1(p,0,N-1)
                mat[f][c][p] = 0;
                finVariar
            finVariar
        finVariar
    cadena algo;
    caracter accion;
    entero x1,x2,y1,y2,z1,z2;
    largo W;
    variarMas1(oper,1,M)
        leer(algo);
        accion = algo[0];
        si(accion ES 'U') entonces
            leer(x1);leer(y1);leer(z1);leer(W);
            mat[x1-1][y1-1][z1-1] = W;
            sino
            leer(x1);leer(y1);leer(z1);leer(x2);leer(y2);leer(z2);
            largo suma = 0;
            variarMas1(f,x1,x2)
                variarMas1(c,y1,y2)
                    variarMas1(p,z1,z2)
                        suma += mat[f-1][c-1][p-1];
                        finVariar
                    finVariar
                finVariar
            mostrar << suma << salto;
            finSi
        finVariar
    finVariar
finPrincipal

