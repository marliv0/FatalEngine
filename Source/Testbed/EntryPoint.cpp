#include <Engine/Core/Memory.h>
#include <EntryPoint.h>

bool create_game(Application::Game& out_game)
{
	out_game.m_Config.m_StartPosX   = 100;
	out_game.m_Config.m_StartPosY   = 100;
	out_game.m_Config.m_StartWidth  = 1280;
	out_game.m_Config.m_StartHeight = 720;
	out_game.m_Config.m_AppName     = "FatalEngine";

	out_game.m_State = Memory::falloc(sizeof(Application::Game));
	Memory::print_usage();

	Memory::ffree(out_game.m_State, sizeof(Application::Game));
	Memory::print_usage();

	return true;
}
