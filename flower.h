/**
 * Copyright 2011 University of Illinois at Urbana-Champaign
 * Authors:
 *   Simon Krueger <skruege2@illinois.edu>
 */

#ifndef FLOWER_H_
#define FLOWER_H_

#include "shape.h"

#include <memory> // For std::unique_ptr

class Flower : public Drawable
{
    private:
        std::unique_ptr<Shape> stem;
        std::unique_ptr<Shape> pistil; // center piece of flower
        std::unique_ptr<Shape> leaf;

        void drawPedals(PNG* canvas, const Vector2& center, int x, int y) const;
    public:
        Flower(const Vector2& center);
        void draw(PNG* canvas) const;
};

#endif // FLOWER_H_