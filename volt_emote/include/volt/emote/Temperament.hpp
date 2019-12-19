#pragma once
#ifndef VOLT_EMOTE_TEMPERAMENT_HPP
#define VOLT_EMOTE_TEMPERAMENT_HPP

#include <string>

namespace volt::emote
{

    struct Temperament
    {
    private:
        const float pleasureMin, pleasureMax, arousalMin, arousalMax,
            dominanceMin, dominanceMax;
        const std::string emotionName;

    public:
        Temperament(float pMin, float pMax, float aMin, float aMax, float dMin,
                    float dMax, std::string name);

        std::string const &GetName();
    };

} // namespace volt::emote
#endif
