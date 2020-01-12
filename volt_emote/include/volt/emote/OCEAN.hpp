#pragma once
#ifndef VOLT_EMOTE_OCEAN_HPP
#define VOLT_EMOTE_OCEAN_HPP

#include "volt/emote/NEOPIR.hpp"

namespace volt::emote
{

    struct OCEAN
    {
    private:
        float                  //--- OCEAN model ---//
                               //(High vs Low)
            openness,          // inventive/curious vs consistent/cautious
            conscientiousness, // efficient/organized vs easy-going/careless
            extraversion,      // outgoing/energetic vs solitary/reserved
            agreeableness,     // friendly/compassionate vs challenging/detached
            neuroticism;       // sensitive/nervous vs secure/confident

    protected:
    public:
        OCEAN() = default;
        OCEAN(float openness, float conscientiousness, float extraversion,
              float agreeableness, float neuroticism);
        OCEAN(NEOPIR const &personality);
    };

} // namespace volt::emote
#endif
