//============================================================================
// Name        : GameScene.h
// Author      : HP
// Version     :
// Copyright   : Your copyright notice
// Description : GameScene in Cocos2d x C++, Ansi-style
//============================================================================

#ifndef __GAME_SCENE__
#define __GAME_SCENE__

#include "GameLayer.h"
#include "cocos2d.h"

class GameLayer;
class GameScene : public cocos2d::CCScene
{
  GameLayer* mGameLayer ;
public:
  GameScene();
  ~GameScene();

  static GameScene* create();
  virtual bool init();

};

#endif

