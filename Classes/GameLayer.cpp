//============================================================================
// Name        : GameLayer.cpp
// Author      : HP
// Version     :
// Copyright   : Your copyright notice
// Description : GameLayer in Cocos2d x C++, Ansi-style
//============================================================================

#include "GameLayer.h"

USING_NS_CC;

GameLayer::GameLayer()
{
  //mGameScene = NULL;
}


GameLayer::~GameLayer()
{
}

GameLayer* GameLayer::create(GameScene* pScene)
{
  GameLayer* pLayer = new GameLayer();
  if(pLayer && pLayer->init(pScene))
  {
    pLayer->autorelease();
    return pLayer;
  }
  else
  {
    CC_SAFE_DELETE(pLayer);
    return NULL;
  }
}
  
bool GameLayer::init(GameScene* pScene)
{
  if(!CCLayer::init())
    return false;

  mGameScene = pScene;

  addChild(BackgroundGame::create(this), 1);
}