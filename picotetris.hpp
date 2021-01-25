#include "pico_explorer.hpp"

void setup();
void loop();
int getBlock(int x, int y);
void reset();
bool move(int dir);
void rotate();
void drop();
void dropPiece();
void removeLines();
void removeLine(int n);
void draw();
void drawCourt();
void drawNext();
void drawScore();
void drawPiece(unsigned int type[], int x, int y, int dir, pimoroni::Pen pen);
void drawBlock(int x, int y);
void onLeftButton();
void onRightButton();
void onRotateButton();

struct Piece {
  unsigned int *type;
  int x;
  int y;
  int dir;
  pimoroni::Pen pen;
};

struct Block {
  int x;
  int y;
};
