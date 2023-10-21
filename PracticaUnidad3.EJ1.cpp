//MAVI - Unidad 3 - Ejercicio1
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture;
Sprite sprite1;
Sprite sprite2;
Sprite sprite3;
Sprite sprite4;
int main() {
	
	texture.loadFromFile("Unidad3_Assets/rcircle.png");
	sprite1.setTexture(texture);
	sprite2.setTexture(texture);
	sprite3.setTexture(texture);
	sprite4.setTexture(texture);
	
	float size_x = (float)texture.getSize().x;
	float size_y = (float)texture.getSize().y;

	//Setear posiciones en 4 extremos de la pantalla
	sprite1.setPosition(0, 0);
	sprite2.setPosition(800-size_x,0);
	sprite3.setPosition(0, 600-size_y);
	sprite4.setPosition(800-size_x, 600-size_y);

	sf::RenderWindow App(sf::VideoMode(800, 600, 32),"Sniper^4");

	while (App.isOpen())
	{
		sf::Event event;
		while (App.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				App.close();
		}

		App.clear();
		
		App.draw(sprite1);
		App.draw(sprite2);
		App.draw(sprite3);
		App.draw(sprite4);
		
		App.display();
	}
	return 0;
}
