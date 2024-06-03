#include <vector>

using namespace std;


class HGF{

public:

    HGF(int d_in) : p(17), q(19), n(17 * 19), e(5), d(d_in){}
    void doDecryption();

    void decryptText();
    void readSecret();
    void asciiToText();
    void textToFile();
    void printSecrets();
    int coprimeCalc(int e, int pq_);


private:

    vector<int> secretThang;
    vector<char> secretLetters;
    int p, q;
    int n;
    int e, d;

};