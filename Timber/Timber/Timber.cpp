// Include important C++ libraries here
#include "stdafx.h"
#include <SFML/Graphics.hpp>

//Namespace sf
using namespace sf;

int main()
{
	//Create a video mode object
	VideoMode vm(1366, 768);

	//Create and open a window for the game
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	//Create a texture to hold graphic on the GPU
	Texture textureBackground;

	//Load a graphic into the texture
	textureBackground.loadFromFile("graphics/background.png");

	//Create a sprite
	Sprite spriteBackground;

	//Attach texture to the sprite
	spriteBackground.setTexture(textureBackground);

	//Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);


	while (window.isOpen()) 
	{
		/*
		****************************************
		Handle the player input
		****************************************
		*/
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
		/*
		****************************************
		Update the scene
		****************************************
		*/
		/*
		****************************************
		Draw the scene
		****************************************
		*/
		//Clear everything from the last frame
		window.clear();

		//Draw our game scene here
		window.draw(spriteBackground);

		//Show everything we just drew
		window.display();

	}

    return 0;
}

