#ifndef Header_h
#define Header_h

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct Movie {
    string title;
    int year;

};

Movie parseToMovie(string str) {
    stringstream stream;
    stream.str(str);

    Movie movie;
    getline(stream, movie.title, ',');
    stream >> movie.year;

    return movie;
}


#endif

