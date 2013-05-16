#include "ScriptPCH.h"
#include "Battleground.h"

class FastArenaCrystal : public GameObjectScript
{
    public: FastArenaCrystal() : GameObjectScript("fast_arena_start") {}
	
	bool OnGossipHello(Player* player, GameObject* go)
	{
		if (Battleground *bg = player->GetBattleground())
			if (bg->isArena())
				bg->ClickFastStart(player, go);
		
		return false;
	}
};

void AddSC_fast_arena_start()
{
    new FastArenaCrystal();
}