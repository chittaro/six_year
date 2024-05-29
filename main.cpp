#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>

#include "encryption.h"

using namespace std;


int main(){


    int secret_key_1 = 0; // CHANGE
    int secret_key_2 = 0; // CHANGE

    HGF bae = HGF(secret_key_1);

    bae.readSecret();
    bae.decryptText();
    bae.asciiToText();
    bae.caesarShift(secret_key_2);
    bae.textToFile();


    return 0;
}


