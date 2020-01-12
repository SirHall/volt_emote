#include "volt/emote/OCEAN.hpp"

using namespace volt::emote;

OCEAN::OCEAN(float openness_trait, float conscientiousness_trait,
             float extraversion_trait, float agreeableness_trait,
             float neuroticism_trait)
    : openness(openness_trait), conscientiousness(conscientiousness_trait),
      extraversion(extraversion_trait), agreeableness(agreeableness_trait),
      neuroticism(neuroticism_trait)
{
}

OCEAN::OCEAN(NEOPIR const &p)
{
    // No, I did not write this by hand.
    // To generate this I used a combination of Vim to clean up the data/turn it
    // into a table, and Google Sheets to transpose the table and generate the
    // code. Code generator is on Sheet 2. Should anything below be incorrect,
    // you can use the Google Sheet page to make your modifications, then copy
    // paste the resulting 'code' here and clang-format should auto-format it
    // to look like this.
    // https://docs.google.com/spreadsheets/d/121Fqp9lmqHDurRW-uNpn2H-GB9hptOnvI-uTUPskGfc/edit?usp=sharing
    // Look at data/NEO_PIR_mappings.md for source data.
    // Let's hope GCC is good at optimizing this with fast-math.
    this->neuroticism = //
        (p.anxiety * 0.81) + (p.anger * 0.63) + (p.depression * 0.8) +
        (p.selfConsciousness * 0.73) + (p.immoderation * 0.49) +
        (p.vulnerability * 0.7) + (p.friendliness * -0.12) +
        (p.gregariousness * -0.18) + (p.assertiveness * -0.32) +
        (p.activityLevel * 0.04) + (p.excitementSeeking * 0) +
        (p.cheerfulness * -0.04) + (p.imagination * 0.18) +
        (p.artisticInterests * 0.14) + (p.emotionality * 0.37) +
        (p.adventurousness * -0.19) + (p.intellect * -0.15) +
        (p.liberalism * -0.13) + (p.trust * -0.35) + (p.bluntness * -0.03) +
        (p.altruism * -0.06) + (p.cooperation * -0.16) + (p.modesty * 0.19) +
        (p.sympathy * 0.04) + (p.selfEfficacy * -0.41) +
        (p.orderliness * 0.04) + (p.dutifulness * -0.2) +
        (p.achievementStriving * -0.09) + (p.selfDiscipline * -0.33) +
        (p.cautiousness * -0.23);
    this->extraversion = //
        (p.anxiety * 0.02) + (p.anger * -0.03) + (p.depression * -0.1) +
        (p.selfConsciousness * -0.18) + (p.immoderation * 0.35) +
        (p.vulnerability * -0.15) + (p.friendliness * 0.66) +
        (p.gregariousness * 0.66) + (p.assertiveness * 0.44) +
        (p.activityLevel * 0.54) + (p.excitementSeeking * 0.58) +
        (p.cheerfulness * 0.74) + (p.imagination * 0.18) +
        (p.artisticInterests * 0.04) + (p.emotionality * 0.41) +
        (p.adventurousness * 0.22) + (p.intellect * -0.01) +
        (p.liberalism * 0.08) + (p.trust * 0.22) + (p.bluntness * -0.15) +
        (p.altruism * 0.52) + (p.cooperation * -0.08) + (p.modesty * -0.12) +
        (p.sympathy * 0.27) + (p.selfEfficacy * 0.17) + (p.orderliness * 0.06) +
        (p.dutifulness * -0.04) + (p.achievementStriving * 0.23) +
        (p.selfDiscipline * 0.17) + (p.cautiousness * -0.28);
    this->openness = //
        (p.anxiety * -0.01) + (p.anger * 0.01) + (p.depression * 0.02) +
        (p.selfConsciousness * -0.09) + (p.immoderation * 0.02) +
        (p.vulnerability * -0.09) + (p.friendliness * 0.18) +
        (p.gregariousness * 0.04) + (p.assertiveness * 0.23) +
        (p.activityLevel * 0.16) + (p.excitementSeeking * 0.11) +
        (p.cheerfulness * 0.19) + (p.imagination * 0.58) +
        (p.artisticInterests * 0.73) + (p.emotionality * 0.5) +
        (p.adventurousness * 0.57) + (p.intellect * 0.75) +
        (p.liberalism * 0.49) + (p.trust * 0.15) + (p.bluntness * -0.11) +
        (p.altruism * -0.05) + (p.cooperation * 0) + (p.modesty * -0.18) +
        (p.sympathy * 0.13) + (p.selfEfficacy * 0.13) +
        (p.orderliness * -0.19) + (p.dutifulness * 0.01) +
        (p.achievementStriving * 0.15) + (p.selfDiscipline * -0.08) +
        (p.cautiousness * -0.04);
    this->agreeableness = //
        (p.anxiety * -0.01) + (p.anger * -0.48) + (p.depression * -0.03) +
        (p.selfConsciousness * 0.04) + (p.immoderation * -0.21) +
        (p.vulnerability * 0.04) + (p.friendliness * 0.38) +
        (p.gregariousness * 0.07) + (p.assertiveness * -0.32) +
        (p.activityLevel * -0.27) + (p.excitementSeeking * -0.38) +
        (p.cheerfulness * 0.1) + (p.imagination * -0.14) +
        (p.artisticInterests * 0.17) + (p.emotionality * -0.01) +
        (p.adventurousness * 0.04) + (p.intellect * -0.09) +
        (p.liberalism * -0.07) + (p.trust * 0.56) + (p.bluntness * 0.68) +
        (p.altruism * 0.55) + (p.cooperation * 0.77) + (p.modesty * 0.59) +
        (p.sympathy * 0.62) + (p.selfEfficacy * 0.03) + (p.orderliness * 0.01) +
        (p.dutifulness * 0.29) + (p.achievementStriving * -0.13) +
        (p.selfDiscipline * 0.06) + (p.cautiousness * 0.22);
    this->conscientiousness = //
        (p.anxiety * -0.1) + (p.anger * -0.08) + (p.depression * -0.26) +
        (p.selfConsciousness * -0.16) + (p.immoderation * -0.32) +
        (p.vulnerability * -0.38) + (p.friendliness * 0.13) +
        (p.gregariousness * -0.03) + (p.assertiveness * 0.32) +
        (p.activityLevel * 0.42) + (p.excitementSeeking * -0.06) +
        (p.cheerfulness * 0.1) + (p.imagination * -0.31) +
        (p.artisticInterests * 0.14) + (p.emotionality * 0.12) +
        (p.adventurousness * -0.04) + (p.intellect * 0.16) +
        (p.liberalism * -0.15) + (p.trust * 0.03) + (p.bluntness * 0.24) +
        (p.altruism * 0.27) + (p.cooperation * 0.01) + (p.modesty * -0.08) +
        (p.sympathy * 0) + (p.selfEfficacy * 0.64) + (p.orderliness * 0.7) +
        (p.dutifulness * 0.68) + (p.achievementStriving * 0.74) +
        (p.selfDiscipline * 0.75) + (p.cautiousness * 0.57);
}
