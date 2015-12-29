//
//  twelveData.cpp
//  twelve
//
//  Created by Hayate Yagami on 2015/12/27.
//
//

#include "twelveData.h"

// シーン作成
cocos2d::Scene* GameLayer::createScene()
{
    auto scene = cocos2d::Scene::create(); // シーンを生成する
    auto layer = GameLayer::create(); // GameLayerクラスのレイヤーを生成する
    scene->addChild(layer); // シーンに対してレイヤーを追加する
    CCLOG("GameLayer::createScene");
    return scene; // シーンを返す
}