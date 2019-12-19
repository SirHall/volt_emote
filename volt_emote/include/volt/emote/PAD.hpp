#pragma once
#ifndef VOLT_EMOTE_PAD_HPP
#define VOLT_EMOTE_PAD_HPP

namespace volt::emote
{

    struct PAD
    {
    private:
        float pleasure, arousal, dominance;

    public:
        PAD() = default;
        PAD(float p, float a, float d);

        inline float GetPleasure() { return pleasure; }
        inline float GetArousal() { return arousal; }
        inline float GetDominance() { return dominance; }

        inline void SetPleasure(float v) { pleasure = v; }
        inline void SetArousal(float v) { arousal = v; }
        inline void SetDominance(float v) { dominance = v; }
    };

} // namespace volt::emote
#endif
