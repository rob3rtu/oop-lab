#include "Agenda.h"
#include <iostream>

int main() {
    Abonat_Skype rbt("12", "0712312312", 16, "Robert");
    Abonat* p = &rbt;
    std::cout << rbt.getPhoneNumber() << '\n';
    std::cout << rbt.getIdSkype() << '\n';
    rbt.showName();

    std::cout << '\n';

    Abonat_Skype_Romania ken("rbt@mail.ro", "13", "07123123", 19, "Keanu");
    Abonat* r = &ken;
    std::cout << ken.getPhoneNumber() << '\n';
    std::cout << ken.getIdSkype() << '\n';
    std::cout << ken.getEmail() << '\n';
    ken.showName();

    std::cout << '\n';

    Abonat_Skype_Extern bbu("Congo", "14", "071343123", 56, "Babbu");
    Abonat* e = &bbu;
    std::cout << bbu.getPhoneNumber() << '\n';
    std::cout << bbu.getIdSkype() << '\n';
    std::cout << bbu.getCountry() << '\n';
    bbu.showName();

    std::cout << '\n';

    Agenda ag;
    ag.addAbonat(p);
    ag.addAbonat(r);
    ag.addAbonat(e);

    ag.showAgenda();

    return 0;
}