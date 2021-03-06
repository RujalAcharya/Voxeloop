#ifndef CORE_INCLUDE_PLAYSTATE_HPP
#define CORE_INCLUDE_PLAYSTATE_HPP

#include "Common.hpp"
#include "CoreEngine.hpp"
#include "StateMachine.hpp"
#include "Voxeloop.hpp"

class PlayState : public StateMachine {
public:
  void init();
  void cleanup();

  void pause();
  void resume();

  void handleEvents(CoreEngine *engine);
  void update(CoreEngine *engine);
  void draw(CoreEngine *engine);

  static PlayState *instance() { return &m_PlayState; }

protected:
  PlayState() {}

private:
  static PlayState m_PlayState;

  SharedDataRef m_sharedData;
  Voxeloop *voxeloop;

private:
  void loop();
};

#endif // CORE_INCLUDE_PLAYSTATE_HPP
