//
// Created by miron on 09.11.17.
//

#ifndef MS383504_BW386389_SEJF_H
#define MS383504_BW386389_SEJF_H

#include <vector>
#include <string>
using namespace std;
class kontroler {
    friend class sejf;
public:
    operator string();
private:
    sejf * sejf_pointer;
    kontroler();
    kontroler(sejf * sejf_pointer);

};

class sejf {
private:
    string content;
    unsigned long permissions;

public:
    sejf(string content, unsigned long permissions);
    sejf(string content);
    unsigned char operator [](int position);
    string kontroler();


};



#endif //MS383504_BW386389_SEJF_H
