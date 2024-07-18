#include <gtest/gtest.h>
#include "Soundex.h"


TEST(SoundexTest, HandlesEmptyString) {
    EXPECT_EQ(generateSoundex(""), "");
}

TEST(SoundexTest, HandlesSingleCharacter) {
    EXPECT_EQ(generateSoundex("A"), "A000");
}

TEST(SoundexTest, HandlesDuplicatesAndSkips) {
    EXPECT_EQ(generateSoundex("AABBBB"), "A100");
}

TEST(SoundexTest, HandlesNonAlphabeticCharacters) {
    EXPECT_EQ(generateSoundex("John123"), "J500");
}

TEST(SoundexTest, HandlesMixedCase) {
    EXPECT_EQ(generateSoundex("McDonald"), "M235");
}

