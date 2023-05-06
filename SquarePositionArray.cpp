#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double alpha[50];
    int element = 0;
    for (int i = 0; i<50; i++){
        if(i<25){
            alpha[i] = pow(i,2);
            cout << alpha[i] << "  ";
        }
        else if(i>24){
            alpha[i] = 3*i;
            cout << alpha[i] << "  ";
        }
        element++;
        if (element == 10){
            cout << endl;
            element = 0;
        }
    }
    return 0;
}
