//============================================================================
// Name        : GameLayer.h
// Author      : HP
// Version     :
// Copyright   : Your copyright notice
// Description : GameLayer in Cocos2d x C++, Ansi-style
//============================================================================

#ifndef __GAME_LAYER__
#define __GAME_LAYER__

#include "cocos2d.h"
#include "GameScene.h"
#include "BackgroundGame.h"

class GameScene;
class GameLayer : public cocos2d::CCLayer
{
  GameScene* mGameScene;

public:
  GameLayer();
  ~GameLayer();

  static GameLayer* create(GameScene* pScene);
  virtual bool init(GameScene* pScene);

};

#endif