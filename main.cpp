#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>

#include "encryption.h"

using namespace std;


int main(){


    int secret_key_1 = 0; // CHANGE

    HGF bae = HGF(secret_key_1);
    bae.doDecryption();


    return 0;
}


