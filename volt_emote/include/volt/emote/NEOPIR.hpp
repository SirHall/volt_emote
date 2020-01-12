#pragma once
#ifndef VOLT_EMOTE_NEOPIR_HPP
#define VOLT_EMOTE_NEOPIR_HPP

namespace volt::emote
{

    struct NEOPIR
    {
    public:
        float                  //--- Neuroticism ---//
            anxiety,           // Nervousness during any uncertain outcome
            anger,             // A strong feeling of displeasure, or hostility
            depression,        // Long term grief, gloom, or sorrow
            selfConsciousness, // Excessively aware of being observed by others
            immoderation,      // The lack of self-restraint and discipline
            vulnerability;     // Open to moral attack, criticism, & temptation

        float                  //--- Extraversion ---//
            friendliness,      // Warmth and ability to get along
            gregariousness,    // Enjoys the company of others
            assertiveness,     // Dominant in interactions with others
            activityLevel,     // Lives a busy life, seeks to always do more
            excitementSeeking, // Always seeking high stimulation
            cheerfulness;      // Is easily excited and is overall joyful

        float                  //--- Openness ---//
            imagination,       // Has a vivid imagination and daydreams often
            artisticInterests, // Has a deep appreciation for art and beauty
            emotionality,      // Experiences emotions more strongly
            adventurousness,   // Seeks new experiences
            intellect,         // The desire to learn new topics and subjects
            liberalism;        // A general rejection of tradition and authority

        float            //--- Agreeableness ---//
            trust,       // The belief that most others are generally truthful
            bluntness,   // Tends to be frank, sincere and straightforward
            altruism,    // Unselfish concern for others well-being
            cooperation, // Is meek and mild, avoids aggression
            modesty,     // Is mostly humble and disapproves of arrogance
            sympathy;    // Is moved by the needs of others

        float                    //--- Conscientiousness ---//
            selfEfficacy,        // Is competent, effective, and prudent
            orderliness,         // Is neat, tidy and well-organized
            dutifulness,         // Adheres to their ethical and moral beliefs
            achievementStriving, // Has high aspirations & avoids laziness
            selfDiscipline,      // Has self control & avoids procrastination
            cautiousness;        // Thinks carefully before acting, avoids haste

    public:
        NEOPIR() = default;
    };

} // namespace volt::emote
#endif
