#include <iostream>
using namespace std;
#define CSE 1
#define ECE 2
#define MECH 3
#define EEE 4
#define DEPARTMENT EEE

int main() {
    #ifdef DEPARTMENT
    #if DEPARTMENT == CSE || DEPARTMENT == ECE
    cout << "The candidate is eligible." << std::endl;
    #elif DEPARTMENT == MECH
    cout<<"The candidate is not eligible";
    #else
    cout<<"The candidate is ineligible";
    #endif
    #endif
}