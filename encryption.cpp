#include "encryption.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;


void HGF::readSecret(){

    ifstream file("secret_schmecret.txt");
    
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

void HGF::asciiToText(){

    for (int val: secretThang) secretLetters.push_back(static_cast<char>(val));

}

void HGF::caesarShift(int shift){
    
    for (char& letter: secretLetters) {
        letter = letter - shift;
        if (letter != ' ' && letter < 'a') letter += 26;
    }

}

void HGF::textToFile(){

    ofstream file("gf_too_smart.txt");
    if (file.is_open()){

        for (char val: secretLetters){
            if (val != '4'){
                file << val;
            }
            file << " ";
        }

    }

    else cout << "cannot open output file -- text beller";

}


void HGF::printSecrets(){
    
    cout << "secret nums: ";
    for (int val: secretThang) cout << val << " ";
    
    cout << "\nsecret letters: ";
    for (char val: secretLetters) cout << val << " ";
    cout << "\n";

}

void HGF::decryptText(){

    for (int i = 0; i < secretThang.size(); i++){
        int exp = 1;
        for (int j = 0; j < d; j++) exp = (exp * secretThang[i]) % n;
        secretThang[i] = exp;

    }

}

int HGF::coprimeCalc(int e, int pq_){

    for (int i = 0; i < 1000; i++){
        if ((e * i) % pq_ == 1) return i;
    }
    return -1;

}