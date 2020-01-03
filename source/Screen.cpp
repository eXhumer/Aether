#include "Screen.hpp"

namespace Aether {
    Screen::Screen(Element * e) : Element(e, 0, 0, 1280, 720) {
        this->active_func = nullptr;
        this->inactive_func = nullptr;
    }

    void Screen::callActive() {

    }

    void Screen::callInactive() {

    }

    Screen::~Screen() {

    }
};