//
// Created by Jämes Ménétrey on 18.01.18.
//

#include <vector/Vec2.h>
#include "gtest/gtest.h"

TEST(TestCaseNameFoo, Foo) {
    Vec2 vec2(5, 6);

    EXPECT_EQ(5, vec2.getX());
}

TEST(TestCaseNameFoo, Bar) {
    Vec2 vec2(5, 6);

    EXPECT_EQ(6, vec2.getY());
}