//
// Created by orocheco on 14/03/2025.
//

#ifndef MONSINGLETON_H
#define MONSINGLETON_H
#include <iostream>

/**
 * @brief Exemple de Singleton (non-thread safe)
 */
class MonSingleton {
private:
    /// instance statique
    static MonSingleton *instance;

public:
    static MonSingleton* getInstance();

    void showMessage() {
        std::cout << "Hello from MonSingleton!" << std::endl;
    }

private:
    MonSingleton() { std::cout << "MonSingleton constructor" << std::endl; };
    ~MonSingleton() { std::cout << "MonSingleton destructor" << std::endl; };
};



#endif //MONSINGLETON_H
