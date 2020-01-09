#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: Create a list, seqList, of N empty sequences, where each sequence is indexed from 0 to N-1.
                The elements within each of the N sequences also use 0-indexing.
                Create an integer, lastAnswer, and initialize it to 0.
                The 2 types of queries that can be performed on your list of sequences (seqList) are described below:
                1 - Query: 1 x y
                    Find the sequence, seq, at index ((x XOR lastAnswer) % N) in seqList.
                    Append integer y to sequence seq.
                2 - Query: 2 x y
                    Find the sequence, seq, at index ((x XOR lastAnswer) % N) in seqList.
                    Find the value of element y % size in seq (where size is the size of seq) and assign it to lastAnswer.
                    Print the new value of lastAnswer on a new line.
2 5
1 0 5
1 1 7
1 0 3
2 1 0
2 1 1
*/

//procedimiento muestraSeq(vector<vector<int_fast64_t>> sL) {
//entero nroSeq = 0;
//paraCada(s,sL)
//    ++nroSeq;
//    si(s.size() > 0) entonces
//        mostrar << "Sec." << ++nroSeq << ":";
//        paraCada(x,s)
//            mostrar << " " << x <<",";
//            finParaCada
//        mostrar << salto;
//        finSi
//    finParaCada
//}

principal                                                       // Unidad de programa principal
int_fast64_t lastAnswer = 0
      ,N,Q,tipo,x,y,ind,ele,i;
leer(N); leer(Q);
vector<vector<int_fast64_t>> seqList(N);
for(i = 0; i < Q; i++) {
//    muestraSeq(seqList);
    leer(tipo);leer(x);leer(y);
    ind = bitOEX(x,lastAnswer) % N;
    si(tipo ES 1) entonces
        agregaALista(seqList[ind],y);
        sino
        ele = y % seqList[ind].size();
        lastAnswer = seqList[ind][ele];
        mostrar << lastAnswer << salto;
        finSi
    }
pausa;
finPrincipal
