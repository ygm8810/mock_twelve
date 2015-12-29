//
//  twelveData.h
//  twelve
//
//  Created by Hayate Yagami on 2015/12/27.
//
//

#ifndef twelveData_h
#define twelveData_h

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"
#include "SimpleAudioEngine.h"
#include <random>


class GameLayer : public cocos2d::Layer
{
protected:
    // タグ
    enum Tag
    {
        T_BG = 1,
        T_Block,
        T_Penguin,
    };
    
    //ゲームの状態
    enum class State
    {
        GameStart,
        Gaming,
        GameOver,
    };
    
    std::mt19937 _mt; //乱数生成エンジン
    std::uniform_real_distribution<double> _height; //乱数の分布
    
    State _state; //ゲームの状態
    
    cocos2d::Sprite* bird{nullptr}; //キャラクターを表示
    cocos2d::Sprite* upperblock{nullptr}; //上部ブロック
    cocos2d::Sprite* lowerblock{nullptr}; //下部ブロック
    cocos2d::Sprite* back{nullptr}; //戻るボタン
    
    void retry();
    
public:
    
    static cocos2d::Scene* createScene(); //シーン作成
    virtual bool init(); //初期化
    CREATE_FUNC(GameLayer); //create関数作成マクロ
    virtual void onEnter(); //レイヤー表示時処理
    virtual void update(float dt); //update関数(毎フレーム処理)
    
    int check = 0;
    
    // マルチタップイベント
    void onTouchesBegan(const std::vector<cocos2d::Touch*>& Touches,
                        cocos2d::Event * event);
    
};

#endif /* twelveData_h */
