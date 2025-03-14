//
// Created by orocheco on 14/03/2025.
//

#include "MonSingleton.h"

// initialise le pointeur statique
MonSingleton* MonSingleton::instance = nullptr;

MonSingleton *MonSingleton::getInstance() {
    if (instance == nullptr) {
        instance = new MonSingleton();
    }
    return instance;
}
