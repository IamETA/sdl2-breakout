#ifndef BREAKOUT_PADDLE_H
#define BREAKOUT_PADDLE_H

#include "movable.h"

namespace breakout
{
  class Paddle final : public Movable
  {
  public:
    Paddle(Game& game);

    void shrink();
    void reset();
  private:
    int mOriginalWidth;
  };
}

#endif