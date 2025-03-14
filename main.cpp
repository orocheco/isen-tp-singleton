#include <iostream>

#include "MonSingleton.h"
#include "MonSingletonSansPointeur.h"

int main() {
    MonSingleton::getInstance()->showMessage();

    auto s1 = MonSingleton::getInstance();
    auto s2 = MonSingleton::getInstance();

    std::cout << "adresse s1: " << s1 << std::endl;
    std::cout << "adresse s2: " << s2 << std::endl;

    MonSingletonSansPointeur::getInstance().showMessage();

    return 0;
}
