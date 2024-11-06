
#include <iostream>
#include <sstream>
#include <string>
#include "Header.h"
using namespace std;


int main()
{
    auto movie = parseToMovie("24 s2, 1984");
    cout << movie.title << endl;
    cout << movie.year << endl;
}

