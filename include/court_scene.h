#ifndef BREAKOUT_COURT_SCENE_H
#define BREAKOUT_COURT_SCENE_H

#include "scene.h"

namespace breakout
{
	class CourtScene final : public Scene
	{
	public:
    CourtScene() = delete;
    CourtScene(Game& game);
    CourtScene(const CourtScene&) = delete;
    CourtScene(CourtScene&&) = delete;

    CourtScene& operator=(const CourtScene&) = delete;
    CourtScene& operator=(CourtScene&&) = delete;

    ~CourtScene();
  };
}

#endif