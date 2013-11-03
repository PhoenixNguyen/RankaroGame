//============================================================================
// Name        : BackgroundGame.h
// Author      : HP
// Version     :
// Copyright   : Your copyright notice
// Description : BackgroundGame in Cocos2d x C++, Ansi-style
//============================================================================

#ifndef __BACKGROUND_GAME__
#define __BACKGROUND_GAME__

#include "cocos2d.h"
#include "GameLayer.h"

class GameLayer;
class BackgroundGame : public cocos2d::CCSprite
{
public:
  BackgroundGame(void);
  ~BackgroundGame(void);

  static BackgroundGame* create(GameLayer* pGameLayer);
  bool init(GameLayer* pGameLayer);


};

#endif