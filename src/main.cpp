#include "Game.h"
#include <iostream> 
int main()
{
	try
	{
		Game game; // Create a Game object
		game.run(); // Start the game loop
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl; // Catch and display any exceptions
		return EXIT_FAILURE; // Exit with failure status
	}
}
 