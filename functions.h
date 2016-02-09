
#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <stdexcept>

struct HandsUpInTheAir: public std::runtime_error {
    /**
     * This is a custom exception. It's mostly just a copy of runtime_error,
     * but it replaces every message with a custom one.
     */
    HandsUpInTheAir(std::string message={}): std::runtime_error{"AYO!"} {}
};


void chorus();

void bigChorus();

void celebrateAndLiveMyLife();

void transition();

/* Transition */
void onAndOn();

/* Big Chorus */
void weGon(const std::string& s, bool caps=false);
void like(const std::string& s);
void toldYou(const std::string& s);

/* Ancillary */
void sayAndRepeatFourTimes(const std::string& single1, 
    const std::string& repeated, const std::string& single2="");

void repeatFourTimes(const std::string& s);

void gonna(const std::string& s);
void handsInAir();

void linebreak();

#endif