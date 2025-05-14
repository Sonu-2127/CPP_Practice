#include "Pointers.h"

/*! Main Function*/
void TypeOfPointers(void)
{
    /*! Declaring types of Pointers without any assign will contain garbage value. */
    int *integerPointer{nullptr}; // always assign some value to a pointer
    double *doublePointer{nullptr};
    char *charPointer{nullptr};
    string *stringPointer{nullptr};

    int value = 100;
    integerPointer = &value;
    cout << *integerPointer << endl;
    cout << integerPointer << endl;
    // cout << *doublePointer << endl; // throes error because it is not initialized
    // cout << doublePointer << endl;
    // cout << *charPointer << endl;
    // cout << charPointer << endl;
    // cout << *stringPointer << endl;
    // cout << stringPointer << endl;
}