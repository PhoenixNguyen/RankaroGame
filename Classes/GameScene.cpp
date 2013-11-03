//============================================================================
// Name        : GameScene.cpp
// Author      : HP
// Version     :
// Copyright   : Your copyright notice
// Description : GameScene in Cocos2d x C++, Ansi-style
//============================================================================

#include "GameScene.h"

USING_NS_CC;

GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}

GameScene* GameScene::create()
{
  GameScene* pScene = new GameScene();
  if(pScene && pScene->init())
  {
    pScene->autorelease();
    return pScene;

  }
  else
  {
    CC_SAFE_DELETE(pScene);
    return NULL;
  }
}

bool GameScene::init()
{
  if(!CCScene::init())
    return false;

  mGameLayer = GameLayer::create(this);
  addChild(mGameLayer);

}