#include <algorithm>
#include <random>
#include <unordered_map>
#include <array>

#include "simengine.hpp"
#include "types.hpp"


// temp ----------------------------------------------
#include <iostream>
using std::cout;
//-----------------------------------------------------

// auto rng = std::default_random_engine {}; 

// testing function
// char bounce_back(int a) {return 6969;}


SimEngine::SimEngine(unsigned int deckIn) : NDECKS(deckIn) 
{
    // fill cardStream for NDECKS
    unsigned int filledIdx = 0;
    for (const auto &f: FACE_VALS) {
    for (const auto &s: SUIT_VALS) {
        for (int i=0; i<NDECKS; i++) 
        {
            cardStream[filledIdx] = {f, s};
            filledIdx += 1;
        }
    }}
    
    // fill remaining stack array with BLANK_CARD
    for (; filledIdx<MAX_DECKS*DECK_SIZE; filledIdx++) {cardStream[filledIdx] = BLANK_CARD;}
    // for (auto thing: cardStream) {cout<< thing;}
}

void SimEngine::shuffle() 
{
    ;
}

