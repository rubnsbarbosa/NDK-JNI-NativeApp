//
// Created by rubens on 10/02/18.
//

#ifndef IMAGE_H
#define IMAGE_H


// Vetor da imagem de 55x55 esta sendo armazenada no vetor coocorrence
// de 3025 posicoes sendo transformado depois num vetor de coocorrencia.
unsigned char coocorrence[3025] = {

        3,3,3,3,3,3,3,4,3,3,3,3,3,3,3,3,4,4,3,4,3,2,1,1,2,4,7,5,4,3,5,3,3,6,5,6,5,3,3,7,7,6,6,5,2,3,4,3,4,3,3,3,4,4,3,
        2,2,1,1,1,1,3,3,3,3,3,4,3,3,3,4,3,4,4,3,3,3,5,3,3,3,2,2,1,1,4,7,12,8,3,4,5,3,3,5,3,3,7,5,3,3,5,3,4,7,7,5,3,4,5,
        3,3,4,3,3,3,3,3,4,3,2,2,1,1,1,1,1,1,3,4,3,3,3,3,3,3,3,3,3,3,5,4,3,4,5,4,3,2,2,2,2,3,4,5,3,3,5,4,3,4,5,3,3,5,4,
        4,5,3,4,7,5,3,3,7,7,6,6,4,6,6,3,2,3,4,3,4,3,2,1,1,1,0,0,0,0,4,3,4,4,4,3,4,4,4,4,4,4,5,5,4,4,6,5,4,4,5,4,3,6,6,
        5,3,4,5,3,4,5,3,3,5,4,3,5,4,3,5,3,3,5,3,3,5,3,3,5,3,4,5,4,4,5,3,3,5,3,3,5,3,3,2,5,6,3,2,3,3,2,2,2,1,1,0,0,0,1,
        0,4,4,4,4,4,3,4,4,4,4,5,4,4,5,5,5,6,6,5,6,6,6,6,7,5,3,3,5,4,3,5,4,3,5,4,3,5,3,3,5,3,3,5,4,4,5,4,3,5,4,4,12,11,5,
        4,3,5,4,4,5,4,3,5,3,3,5,4,5,2,2,2,1,1,1,1,0,0,0,0,1,1,4,4,4,4,4,3,3,4,4,4,4,5,5,4,6,6,6,6,5,6,6,5,3,3,5,3,3,5,
        3,4,5,3,4,5,4,3,5,4,3,5,3,4,5,3,3,5,4,3,5,4,4,5,4,4,5,4,3,5,4,4,12,10,5,3,3,5,3,4,5,4,3,5,4,3,7,5,4,2,1,1,1,0,0,
        0,0,0,1,1,1,4,4,4,4,4,4,4,4,4,4,4,5,6,6,6,6,6,6,7,5,3,3,5,4,3,5,4,3,5,3,4,5,3,3,5,4,4,5,4,4,5,4,3,5,3,3,5,4,3,
        5,4,4,5,4,3,5,3,4,5,3,3,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,5,3,3,5,3,3,5,4,3,5,3,3,4,4,2,1,0,0,0,0,0,0,0,1,1,5,4,4,
        4,4,4,4,4,4,4,4,5,7,5,3,3,6,6,6,6,7,5,4,3,12,11,5,4,3,5,4,3,5,4,4,5,4,4,5,4,4,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,3,
        4,5,3,3,5,3,3,5,4,4,5,4,4,5,4,3,12,10,5,3,3,5,3,4,7,4,3,0,0,0,0,0,0,1,1,0,1,5,4,4,4,5,3,4,5,4,4,6,5,5,6,7,7,7,6,
        5,3,4,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,4,5,4,4,5,4,4,5,4,4,5,4,3,5,4,4,5,4,3,5,4,4,5,4,3,5,3,4,5,3,3,5,
        3,4,5,3,3,5,4,3,5,4,4,5,3,3,5,3,3,5,4,3,7,2,1,1,0,0,0,0,0,1,0,1,5,5,4,4,5,4,4,4,4,4,4,5,5,4,7,7,6,7,5,3,4,5,4,
        3,5,4,4,5,4,4,5,4,3,5,4,3,5,4,4,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,12,11,5,4,3,5,4,3,5,4,3,5,3,3,5,3,4,5,3,4,5,
        4,4,5,4,3,5,3,3,7,5,4,3,3,0,0,0,0,0,0,0,1,1,6,5,4,4,5,5,5,4,5,4,3,3,4,7,5,4,3,6,7,5,4,4,5,4,3,5,4,4,5,4,4,5,4,
        3,12,11,5,4,3,5,4,3,5,4,4,5,4,4,5,4,4,5,4,4,12,11,12,11,5,4,3,5,4,4,5,4,3,5,4,3,5,3,3,5,4,3,5,4,4,12,8,5,3,3,6,0,0,0,
        0,0,0,0,0,1,1,6,5,4,5,5,5,4,4,5,5,3,3,7,5,4,4,7,7,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,5,4,4,5,4,3,5,4,4,5,4,4,5,4,3,
        5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,12,11,5,4,3,5,4,3,5,4,4,5,4,3,5,4,3,5,4,4,5,4,3,5,4,3,5,3,4,5,3,3,2,5,
        3,3,0,0,0,0,0,1,1,1,6,6,4,4,5,5,4,4,4,4,4,5,3,3,12,8,5,5,4,3,5,4,3,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,5,4,4,5,4,3,5,
        4,3,5,4,3,5,4,4,5,4,4,5,4,3,5,4,4,5,4,4,5,4,3,5,4,3,5,4,4,12,11,5,4,3,5,4,3,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,5,4,3,
        5,3,4,5,3,3,0,5,3,3,0,0,0,0,1,1,1,6,6,5,4,5,4,3,3,4,4,7,5,3,3,5,3,4,5,5,3,3,5,4,3,5,4,3,5,4,3,5,4,4,5,4,3,5,4,
        3,5,4,3,5,4,4,5,4,4,5,4,3,5,4,3,5,4,4,5,4,3,5,4,3,5,4,4,5,4,3,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,12,11,5,4,4,5,4,3,5,
        4,3,5,4,4,5,4,4,5,4,3,5,3,3,5,3,3,5,2,5,3,3,0,0,0,1,1,1,6,6,5,4,5,4,2,3,5,3,3,5,3,3,5,3,4,7,6,6,5,4,3,5,4,4,5,
        4,4,5,4,4,5,4,3,5,4,3,5,4,4,5,4,4,5,4,3,5,4,4,5,4,4,5,4,3,5,4,3,5,4,4,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,12,11,5,4,4,
        5,4,4,5,4,3,5,4,4,5,4,4,5,4,3,5,4,3,5,4,4,5,4,3,5,4,3,6,3,5,2,5,3,3,0,0,1,1,1,6,6,5,4,4,3,4,5,4,3,5,3,4,7,7,6,
        5,7,5,4,3,5,4,3,5,4,4,5,4,4,5,4,3,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,5,4,4,5,4,4,5,4,3,5,4,4,5,4,4,5,4,4,5,4,3,5,4,
        4,5,4,3,5,4,3,5,4,4,5,4,3,12,11,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,3,4,2,5,3,3,4,2,5,3,3,0,1,1,1,6,6,5,
        3,3,2,5,3,3,5,3,4,5,5,5,6,6,5,3,4,5,4,3,5,4,3,5,4,4,5,4,3,5,4,4,5,4,3,5,4,4,5,4,3,5,4,3,5,4,4,5,4,4,5,4,3,13,11,
        5,4,4,5,4,3,5,4,3,5,4,4,5,4,4,5,4,4,5,4,3,5,4,4,5,4,3,5,4,3,5,4,3,5,4,3,5,4,4,5,4,4,12,11,5,4,3,5,4,3,6,0,0,4,1,
        5,3,3,0,0,1,6,6,5,4,3,6,7,4,6,5,3,3,5,5,3,3,6,5,3,3,5,0,5,5,3,4,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,5,4,4,5,4,3,12,10,
        5,3,3,6,7,5,3,4,5,3,3,5,4,3,5,4,3,12,11,5,4,3,12,11,5,4,4,5,4,3,5,4,3,12,11,5,4,3,5,3,4,7,5,1,2,3,5,3,3,0,0,0,5,6,5,
        3,3,5,3,3,5,3,5,3,3,5,3,4,5,5,4,4,5,6,6,5,3,3,5,4,3,5,4,4,5,4,3,5,4,4,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,
        3,13,11,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,12,11,5,4,4,5,4,3,5,4,3,13,11,5,4,3,5,3,4,7,5,3,1,3,2,0,0,1,
        6,6,5,5,5,7,5,5,5,4,3,7,7,5,4,3,6,7,5,4,3,5,4,3,5,4,4,5,4,4,5,4,4,5,4,3,5,4,4,5,4,4,5,4,3,5,4,4,5,4,4,5,4,3,5,
        4,3,5,4,3,5,4,4,5,4,4,5,4,3,5,4,3,5,4,3,13,11,5,4,4,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,5,4,4,13,10,5,3,4,5,3,3,5,3,3,7,
        4,1,5,3,3,2,1,0,0,6,5,5,6,5,4,3,7,5,4,4,6,7,5,4,3,5,5,3,4,5,4,4,13,11,5,4,4,5,4,4,5,4,4,5,4,3,5,4,4,5,4,3,5,4,4,
        5,4,3,5,4,3,5,4,3,5,4,4,13,11,5,4,4,5,4,3,5,4,3,13,11,5,4,3,5,4,3,5,4,3,5,4,3,12,11,5,4,3,5,4,3,5,4,3,5,4,4,5,3,4,5,
        3,3,5,3,4,7,4,0,5,3,3,1,1,0,6,5,5,5,3,3,2,7,5,3,3,5,7,5,3,4,5,5,4,3,5,4,4,5,4,3,7,5,4,4,12,10,5,4,3,5,4,3,5,4,4,
        5,4,3,5,4,3,5,4,3,13,11,5,3,3,5,4,3,5,4,3,5,4,3,5,4,3,13,10,5,4,3,5,4,3,5,4,3,5,4,4,5,4,3,5,4,3,5,4,4,5,4,4,5,4,4,
        5,4,3,12,9,5,3,3,5,4,3,5,4,3,4,5,3,3,0,1,1,5,4,4,4,2,2,2,7,7,4,5,3,3,7,4,13,9,7,5,4,4,5,3,3,5,3,4,5,4,3,7,5,4,3,
        5,4,3,5,4,3,12,11,5,4,3,5,3,3,5,3,4,5,4,3,5,4,3,5,3,3,5,4,3,13,11,5,4,4,5,4,3,5,4,4,12,11,5,4,3,5,4,4,5,4,3,12,11,12,11,
        5,3,3,5,3,3,5,3,3,7,4,0,0,1,5,4,4,4,2,0,1,6,6,4,5,3,4,5,3,3,5,5,4,3,7,13,8,5,3,3,5,3,3,5,4,4,7,5,3,4,5,4,3,5,4,
        3,5,4,3,5,4,3,5,3,4,12,10,0,3,5,4,3,5,4,3,5,4,3,12,11,5,4,3,5,4,3,5,4,3,5,4,4,5,4,4,5,4,4,5,4,3,13,11,5,4,4,5,4,3,5,
        3,3,5,3,4,5,4,3,6,5,3,0,0,5,3,3,4,2,1,3,7,6,5,5,3,3,5,3,3,7,12,10,5,4,3,6,4,5,4,3,5,4,4,5,3,3,5,4,3,5,4,4,12,11,12,
        10,13,8,1,6,5,4,3,5,4,3,5,4,3,12,11,5,4,3,12,11,5,4,4,5,4,3,5,4,3,12,11,5,4,3,5,4,4,5,3,3,5,4,3,5,4,4,5,3,4,5,3,4,3,2,
        3,0,4,2,3,3,2,4,4,7,5,4,6,7,5,3,3,5,4,4,5,3,3,7,5,3,4,5,4,3,13,8,6,5,4,3,5,4,3,12,11,5,4,3,5,4,3,5,3,4,5,3,4,5,4,
        3,5,4,3,5,4,3,5,4,3,5,4,4,5,4,3,5,4,3,5,4,3,12,11,5,4,3,5,4,4,13,11,5,3,4,5,4,3,5,4,4,5,4,3,5,3,4,5,3,3,5,3,3,6,7,
        0,2,1,3,1,2,3,3,3,3,5,3,3,3,2,5,5,5,3,4,5,3,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,6,5,4,4,5,4,3,5,4,4,5,4,3,5,4,3,
        12,11,5,4,3,5,4,4,5,4,3,5,4,3,5,4,4,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,5,4,3,5,4,3,12,11,5,4,4,5,4,3,5,3,3,5,3,4,12,11,5,
        3,4,5,4,3,7,5,3,1,2,3,2,1,3,2,1,5,6,3,1,2,3,5,4,4,5,4,4,5,4,3,5,4,3,12,11,5,4,3,5,5,4,3,12,10,5,4,3,5,4,3,5,4,4,5,
        4,3,13,11,5,4,3,12,11,5,4,4,5,4,3,5,4,3,5,4,3,5,4,4,5,4,4,5,4,4,5,4,3,5,4,3,5,4,4,5,3,3,5,4,4,5,4,4,7,7,5,4,4,5,4,
        4,5,4,4,5,4,3,7,5,0,1,2,1,1,2,2,3,4,3,3,2,1,2,5,4,3,5,4,3,5,4,3,5,4,4,5,4,3,5,4,4,5,3,4,7,12,11,5,4,3,5,4,3,5,4,
        3,5,4,4,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,3,5,4,4,12,11,5,4,4,5,4,3,5,4,3,5,4,3,5,4,3,5,4,4,5,3,3,5,4,3,5,
        4,4,5,4,4,6,7,5,4,3,5,4,4,5,4,4,5,4,4,5,3,3,2,1,1,0,1,1,2,4,3,2,2,4,1,2,5,4,4,5,4,4,5,4,4,5,4,4,5,4,4,5,4,3,7

};


#endif