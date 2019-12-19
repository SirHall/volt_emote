#include "volt/emote/Temperament.hpp"

using namespace volt::emote;

Temperament::Temperament(float pMin, float pMax, float aMin, float aMax,
                         float dMin, float dMax, std::string name)
    : pleasureMin(pMin), pleasureMax(pMax), arousalMin(aMin), arousalMax(aMax),
      dominanceMin(dMin), dominanceMax(dMax), emotionName(std::move(name))
{
}

std::string const &Temperament::GetName() { return emotionName; }