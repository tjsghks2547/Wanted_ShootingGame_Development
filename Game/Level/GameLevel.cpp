#include "GameLevel.h"
#include "Actor/Player.h"


// ctrl+alt+L 은 솔류션으로 커서이동
// ctrl+alt+; 은 검색창 or Ctrl + t(언리얼에서는 비추) 

using namespace Wanted;

GameLevel::GameLevel()
{
	//Player 액터 추가.
	AddNewActor(new Player());

}

GameLevel::~GameLevel()
{
}
