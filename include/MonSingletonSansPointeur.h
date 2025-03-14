//
// Created by orocheco on 14/03/2025.
//

#ifndef MONSINGLETONSANSPOINTEUR_H
#define MONSINGLETONSANSPOINTEUR_H
#include <iostream>


/**
 * @brief Utilisation d'une variable statique au lieu d'un pointeur
 */
class MonSingletonSansPointeur {
public:
    static MonSingletonSansPointeur& getInstance() {
        static MonSingletonSansPointeur instance;
        return instance;
    }

    void showMessage() {
        std::cout << "Hello from MonSingletonSansPointeur!" << std::endl;
    }

private:
    MonSingletonSansPointeur() { std::cout << "MonSingletonSansPointeur constructor" << std::endl; }
    /// on interdit la copie
    MonSingletonSansPointeur(const MonSingletonSansPointeur&) = delete;
    /// on interdit la copie par affectation
    MonSingletonSansPointeur& operator=(const MonSingletonSansPointeur&) = delete;
};



#endif //MONSINGLETONSANSPOINTEUR_H
