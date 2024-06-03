#include "encryption.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;


// Reads input file into vector
void HGF::readSecret(){

    ifstream file("ciphertexts/secret_schmecret.txt");
    
    if (file.is_open()){

        string line;
        getline(file, line);
        
        stringstream ss(line);
        string val;
        while (ss >> val){
            secretThang.push_back(stoi(val));
        }

    }

    else cout << "cannot open output file -- text beller";

}

// Converts from numbers to letters
void HGF::asciiToText(){

    for (int val: secretThang) secretLetters.push_back(static_cast<char>(val));

}

// Writes decrypted output to a file
void HGF::textToFile(){

    ofstream file("ciphertexts/gf_too_smart.txt");
    if (file.is_open()){

        for (char val: secretLetters){
            if (val != '4'){
                file << val;
            }
        }

    }

    else cout << "cannot open output file -- text beller";

}

// Prints current state of numbers or letters into terminal (use for debugging)
void HGF::printSecrets(){
    
    cout << "secret nums: ";
    for (int val: secretThang) cout << val << " ";
    
    cout << "\nsecret letters: ";
    for (char val: secretLetters) cout << val << " ";
    cout << "\n";

}

// RSA decryption
void HGF::decryptText(){

    for (int i = 0; i < secretThang.size(); i++){
        int exp = 1;

        // this line computes m = c^d (mod n)
        for (int j = 0; j < d; j++) exp = (exp * secretThang[i]) % n;
        secretThang[i] = exp;

    }

}

// Calculates a number that is coprime to inputs e and pq_
int HGF::coprimeCalc(int e, int pq_){

    for (int i = 0; i < 1000; i++){
        if ((e * i) % pq_ == 1) return i;
    }
    return -1;

}

// Bundles all functions together bc dgaf
void HGF::doDecryption(){

    readSecret();
    decryptText();
    asciiToText();
    textToFile();

}