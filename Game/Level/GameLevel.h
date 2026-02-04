#pragma once

// config 폴더 복사 되는지 확인하기 이따와서 

#include "Level/Level.h"

using namespace Wanted; 


class GameLevel : public Level
{
	// RTTI 등록.

	RTTI_DECLARATIONS(GameLevel, Level)  // ctrl + space로 자동완성 기능 

public:
	GameLevel(); 
	~GameLevel();



private:
	





};

