#include <vector>

using namespace std;


class HGF{

public:

    // TODO: combine all functions into 1 and make inner functions private

    HGF(int d_in) : p(17), q(19), n(17 * 19), e(5), d(d_in){}

    void decryptText();
    void readSecret();
    void caesarShift(int shift);
    void asciiToText();
    void textToFile();
    void printSecrets();


private:

    int coprimeCalc(int e, int pq_);

    vector<int> secretThang;
    vector<char> secretLetters;
    int p, q;
    int n;
    int e, d;

};