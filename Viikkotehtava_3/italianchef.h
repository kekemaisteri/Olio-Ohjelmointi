#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <string>

class ItalianChef : public Chef

{

private:

    std::string password = "pizza";

    int flour;
    int water;
    int makePizza();

public:

    ItalianChef(std::string name);
    ~ItalianChef();

    bool askSecret(std::string pw, int flour, int water);
};

#endif
