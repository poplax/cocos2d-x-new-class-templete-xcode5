// ___FILENAME___
// ___PROJECTNAME___
//
// Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"
___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___()
{

}

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___()
{

}

Scene* ___FILEBASENAMEASIDENTIFIER___::createScene()
{
	auto scene = Scene::create();
	auto layer = ___FILEBASENAMEASIDENTIFIER___::create();
	scene->addChild(layer);
	return scene;
}

bool ___FILEBASENAMEASIDENTIFIER___::init()
{
	if ( !Layer::init() )
	{
		return false;
	}
	initData();
	return true;
}

#pragma mark - initData
void ___FILEBASENAMEASIDENTIFIER___::initData()
{
	Size visibleSize = Director::getInstance()->getVisibleSize();

	// add your codes here...

}
