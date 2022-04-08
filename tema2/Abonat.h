#ifndef _ABONAT_H_
#define _ABONAT_H_

#include <string>
#include "Persoana.h"

class Abonat : public Persoana {
private: 
    std::string nr_telefon;

public:

    Abonat();

    Abonat(std::string nr_telefon_, int id_, std::string nume_);

    Abonat(const Abonat& ab);

    std::string getPhoneNumber() const;
    void setPhoneNumber(std::string nr_telefon_);

    friend std::ostream& operator<<(std::ostream& os, Abonat* ab_);

    ~Abonat() = default;
};

#endif