//============================================================================
// Name        : BackgroundGame.cpp
// Author      : HP
// Version     :
// Copyright   : Your copyright notice
// Description : BackgroundGame in Cocos2d x C++, Ansi-style
//============================================================================

#include "BackgroundGame.h"

USING_NS_CC;

BackgroundGame::BackgroundGame(void)
{
}


BackgroundGame::~BackgroundGame(void)
{
}

BackgroundGame* BackgroundGame::create(GameLayer* pGameLayer)
{
  BackgroundGame* pBackgroundGame = new BackgroundGame();
  if(pBackgroundGame && pBackgroundGame->init(pGameLayer))
  {
    pBackgroundGame->autorelease();
    return pBackgroundGame;

  }
  else
  {
    CC_SAFE_DELETE(pBackgroundGame);
    return NULL;
  }
}
bool BackgroundGame::init(GameLayer* pGameLayer)
{
  if(!CCSprite::initWithFile("background.jpg"))
  {
    return false;
  }

  return true;

}

