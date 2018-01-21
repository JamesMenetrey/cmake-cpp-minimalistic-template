//
// Created by Jämes Ménétrey on 17.01.18.
//

#include <iostream>
#include <vector/Vec2.h>

using namespace std;

int main(int argc, char** argv) {
    Vec2 vec2(4, 5);

    cout << "The norm of Vec2(4, 5) is " << vec2.norm();
}