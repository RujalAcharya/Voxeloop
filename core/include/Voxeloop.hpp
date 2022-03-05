#ifndef VOXELOOP_VOXELOOP_HPP
#define VOXELOOP_VOXELOOP_HPP

// clang-format off
#include "glad/gl.h"
#include "GLFW/glfw3.h"
// clang-format on

#include "Audio.hpp"
#include "Cubes.hpp"
#include "LinkedList.hpp"

class Voxeloop {
public:
  Voxeloop();
  ~Voxeloop();

  static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

  void run();
private:
  Cubes* cubes;
  Audio* audio;

  float mvmt;
  float scale;

  GLFWwindow* window;

  const uint32_t GLMajor;
  const uint32_t GLMinor;
  void loop();

  double prevTime;

};

#endif // VOXELOOP_VOXELOOP_HPP