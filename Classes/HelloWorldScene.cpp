#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    auto scene = Scene::create();
    
    auto layer = HelloWorld::create();

    scene->addChild(layer);

    return scene;
}

bool HelloWorld::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    // 画面サイズを定義
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    // 背景を定義
    auto _bg = LayerColor::create(Color4B(64,64,64,255), visibleSize.width, visibleSize.height);
    this->addChild(_bg);

    
    auto closeItem = MenuItemImage::create("back.png","push_back.png",CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
         closeItem->setPosition(Vec2(70,
                                     visibleSize.height - 70));

    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ANCHOR_BOTTOM_LEFT);
    this->addChild(menu, 1);
    
    auto title = Sprite::create("title.png");
    title->setPosition(Vec2(visibleSize.width * 0.5, visibleSize.height * 0.81));
    this->addChild(title);
    
    auto cell1 = Sprite::create("0.png");
    cell1->setPosition(Vec2(visibleSize.width * 0.14, visibleSize.height * 0.63));
    this->addChild(cell1);
    
    auto cell2 = Sprite::create("0.png");
    cell2->setPosition(Vec2(visibleSize.width * 0.38, visibleSize.height * 0.63));
    this->addChild(cell2);
    
    auto cell3 = Sprite::create("0.png");
    cell3->setPosition(Vec2(visibleSize.width * 0.62, visibleSize.height * 0.63));
    this->addChild(cell3);
    
    auto cell4 = Sprite::create("0.png");
    cell4->setPosition(Vec2(visibleSize.width * 0.86, visibleSize.height * 0.63));
    this->addChild(cell4);
    
    auto cell5 = Sprite::create("0.png");
    cell5->setPosition(Vec2(visibleSize.width * 0.14, visibleSize.height * 0.5));
    this->addChild(cell5);
    
    auto cell6 = Sprite::create("0.png");
    cell6->setPosition(Vec2(visibleSize.width * 0.38, visibleSize.height * 0.5));
    this->addChild(cell6);
    
    auto cell7 = Sprite::create("0.png");
    cell7->setPosition(Vec2(visibleSize.width * 0.62, visibleSize.height * 0.5));
    this->addChild(cell7);
    
    auto cell8 = Sprite::create("0.png");
    cell8->setPosition(Vec2(visibleSize.width * 0.86, visibleSize.height * 0.5));
    this->addChild(cell8);
    
    auto cell9 = Sprite::create("0.png");
    cell9->setPosition(Vec2(visibleSize.width * 0.14, visibleSize.height * 0.37));
    this->addChild(cell9);
    
    auto cell10 = Sprite::create("0.png");
    cell10->setPosition(Vec2(visibleSize.width * 0.38, visibleSize.height * 0.37));
    this->addChild(cell10);
    
    auto cell11 = Sprite::create("0.png");
    cell11->setPosition(Vec2(visibleSize.width * 0.62, visibleSize.height * 0.37));
    this->addChild(cell11);
    
    auto cell12 = Sprite::create("0.png");
    cell12->setPosition(Vec2(visibleSize.width * 0.86, visibleSize.height * 0.37));
    this->addChild(cell12);
    
    auto cell13 = Sprite::create("0.png");
    cell13->setPosition(Vec2(visibleSize.width * 0.14, visibleSize.height * 0.24));
    this->addChild(cell13);
    
    auto cell14 = Sprite::create("0.png");
    cell14->setPosition(Vec2(visibleSize.width * 0.38, visibleSize.height * 0.24));
    this->addChild(cell14);
    
    auto cell15 = Sprite::create("0.png");
    cell15->setPosition(Vec2(visibleSize.width * 0.62, visibleSize.height * 0.24));
    this->addChild(cell15);
    
    auto cell16 = Sprite::create("0.png");
    cell16->setPosition(Vec2(visibleSize.width * 0.86, visibleSize.height * 0.24));
    this->addChild(cell16);
    
    auto cell17 = Sprite::create("0.png");
    cell17->setPosition(Vec2(visibleSize.width * 0.14, visibleSize.height * 0.11));
    this->addChild(cell17);
    
    auto cell18 = Sprite::create("0.png");
    cell18->setPosition(Vec2(visibleSize.width * 0.38, visibleSize.height * 0.11));
    this->addChild(cell18);
    
    auto cell19 = Sprite::create("0.png");
    cell19->setPosition(Vec2(visibleSize.width * 0.62, visibleSize.height * 0.11));
    this->addChild(cell19);
    
    auto cell20 = Sprite::create("0.png");
    cell20->setPosition(Vec2(visibleSize.width * 0.86, visibleSize.height * 0.11));
    this->addChild(cell20);
    




    auto gauge = Sprite::create("gauge.png");
    gauge->setPosition(Vec2(visibleSize.width/2, 30));
    this->addChild(gauge);
    
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
