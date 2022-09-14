#include "Platform/Platform.hpp"
#include <cstdlib>
#include <time.h>
using namespace sf;
using namespace std;
int main()
{
	util::Platform platform;

#if defined(_DEBUG)
	cout << "Hello World!" << std::endl;
#endif
	RenderWindow window;
	// in Windows at least, this must be called before creating the window
	float screenScalingFactor = platform.getScreenScalingFactor(window.getSystemHandle());
	// Use the screenScalingFactor
	window.create(VideoMode(847.0f * screenScalingFactor, 649.0f * screenScalingFactor), "Frogger !!!"
		/*,Style::Fullscreen*/);
	platform.setIcon(window.getSystemHandle());
	//sf::ConvexShape shape(window.getSize().x / 3);
	//shape.setFillColor(sf::Color::White);

	//window.setPosition(sf::Vector2i(10, 50));
	//window.setTitle("SFML window");
	//window.setSize(sf::Vector2u(800, 600));

	Texture BackGround, Ambulance, Bus, Car33, Car34, Firetruck, Limousine, Minicar, Police, Taxi, Van, Wood1,
	Wood2, Wood3, Wood4, Wood5, Wood6, FrogT, FrogB, FrogL, FrogR, MenuBackGround, Day, Night, Easy, Medium, Hard,
	Win , Lose;
	//BackGround.loadFromFile("content/background.png");
	BackGround.setSmooth(true);
	Day.setSmooth(true);
	Night.setSmooth(true);
	Easy.setSmooth(true);
	Medium.setSmooth(true);
	Hard.setSmooth(true);
	/*
	Ambulance.setSmooth(true);
	Bus.setSmooth(true);
	Car33.setSmooth(true);
	Limousine.setSmooth(true);
	Firetruck.setSmooth(true);
	Minicar.setSmooth(true);
	Police.setSmooth(true);
	Taxi.setSmooth(true);
	Van.setSmooth(true);
	*/
	//Sprite sprite;
	//Vector2u size = window.getSize();
	//sprite.setTexture(BackGround);
	//sprite.setOrigin(0,0);

	//sprite.setScale(Vector2f(0.3f, 0.3f));
	//sprite.scale(Vector2f(size.x,size.y));
	//shape.setTexture(&BackGround);
	BackGround.loadFromFile("content/background.png");
	MenuBackGround.loadFromFile("content/menubackground.jpg");
	Ambulance.loadFromFile("content/ambulance.png");
	Bus.loadFromFile("content/bus.png");
	Car33.loadFromFile("content/car33.png");
	Car34.loadFromFile("content/car34.png");
	Firetruck.loadFromFile("content/firetruck.png");
	Limousine.loadFromFile("content/limousine.png");
	Minicar.loadFromFile("content/minicar.png");
	Police.loadFromFile("content/police.png");
	Taxi.loadFromFile("content/taxi.png");
	Van.loadFromFile("content/van.png");
	Wood1.loadFromFile("content/wood1.png");
	Wood2.loadFromFile("content/wood2.png");
	Wood3.loadFromFile("content/wood3.png");
	Wood4.loadFromFile("content/wood4.png");
	Wood5.loadFromFile("content/wood5.png");
	Wood6.loadFromFile("content/wood6.png");
	FrogT.loadFromFile("content/frogt.png");
	FrogB.loadFromFile("content/frogb.png");
	FrogL.loadFromFile("content/frogl.png");
	FrogR.loadFromFile("content/frogr.png");
	Win.loadFromFile("content/win.png");
	Lose.loadFromFile("content/lose.png");
	Day.loadFromFile("content/day.png");
	Night.loadFromFile("content/night.png");
	Easy.loadFromFile("content/easy.png");
	Medium.loadFromFile("content/medium.png");
	Hard.loadFromFile("content/hard.png");
    SoundBuffer jump;
	jump.loadFromFile("content/jump.wav");
    SoundBuffer gameover;
    gameover.loadFromFile("content/gameover.wav");
	SoundBuffer win;
    win.loadFromFile("content/win.wav");
	SoundBuffer carhorn;
    carhorn.loadFromFile("content/carhorn.wav");
    SoundBuffer river;
	river.loadFromFile("content/river.wav");
    SoundBuffer street;
	street.loadFromFile("content/street.wav");
	Sound soundjump;
	Sound soundgameover;
	Sound soundwin;
	Sound soundcarhorn;
	Sound soundriver;
	Sound soundstreet;
	soundjump.setBuffer(jump);
	soundwin.setBuffer(win);
	soundgameover.setBuffer(gameover);
	soundcarhorn.setBuffer(carhorn);
	soundriver.setBuffer(river);
	soundstreet.setBuffer(street);
	int firo=0;
	while(1){
		if (firo==1){
			break;
		}
	Sprite BG;
	BG.setTexture(BackGround);
	//sprite.setColor(sf::Color(255, 0, 0));
	//sprite.setColor(sf::Color(255, 255, 255, 18));
	BG.setPosition(Vector2f(0.f, 0.f));
	BG.setScale(Vector2f(0.5f, 0.5f));

	Sprite MBG;
	MBG.setTexture(MenuBackGround);
	//sprite.setColor(sf::Color(255, 0, 0));
	//sprite.setColor(sf::Color(255, 255, 255, 18));
	MBG.setPosition(Vector2f(0.f, 0.f));
	MBG.setScale(Vector2f(0.5f, 0.5f));

	Sprite Dy, Nt;
	Dy.setTexture(Day);
	Dy.setPosition(Vector2f(817.f, 3.f));
	Dy.setScale(Vector2f(0.2f, 0.2f));
	Nt.setTexture(Night);
	Nt.setPosition(Vector2f(817.f, 3.f));
	Nt.setScale(Vector2f(0.2f, 0.2f));

	Sprite Wn, Le;
	Wn.setTexture(Win);
	Wn.setPosition(Vector2f(125.f, 75.f));
	Wn.setScale(Vector2f(0.8f, 0.8f));
	Le.setTexture(Lose);
	Le.setPosition(Vector2f(125.f, 75.f));
	Le.setScale(Vector2f(0.8f, 0.8f));

	Sprite Ey, Mm, Hd;
	Ey.setTexture(Easy);
	Ey.setPosition(Vector2f(365.f, 100.f));
	Ey.setScale(Vector2f(0.7f, 0.7f));
	Mm.setTexture(Medium);
	Mm.setPosition(Vector2f(365.f, 250.f));
	Mm.setScale(Vector2f(0.7f, 0.7f));
	Hd.setTexture(Hard);
	Hd.setPosition(Vector2f(365.f, 400.f));
	Hd.setScale(Vector2f(0.7f, 0.7f));


	Sprite FT;
	float ftx = 404, fty = 610;
	FT.setTexture(FrogT);
	FT.setPosition(Vector2f(ftx, fty));
	FT.setScale(Vector2f(0.014f, 0.014f));

	Sprite FB;
	FB.setTexture(FrogB);
	FB.setPosition(Vector2f(ftx, fty));
	FB.setScale(Vector2f(0.014f, 0.014f));

	Sprite FL;
	FL.setTexture(FrogL);
	FL.setPosition(Vector2f(ftx, fty));
	FL.setScale(Vector2f(0.014f, 0.014f));

	Sprite FR;
	FR.setTexture(FrogR);
	FR.setPosition(Vector2f(ftx, fty));
	FR.setScale(Vector2f(0.014f, 0.014f));

	//Line1
	Sprite L1C1, L1C2, L1C3;
	float l1c1 = -150, l1c2 = -459.08, l1c3 = -768.17;
	L1C1.setTexture(Van);
	L1C1.setPosition(Vector2f(-150.f, 555.f));
	L1C1.setScale(Vector2f(0.063f, 0.063f));
	L1C2.setTexture(Van);
	L1C2.setPosition(Vector2f(-350.f, 555.f));
	L1C2.setScale(Vector2f(0.063f, 0.063f));
	L1C3.setTexture(Van);
	L1C3.setPosition(Vector2f(-550.f, 555.f));
	L1C3.setScale(Vector2f(0.063f, 0.063f));

	//Line2
	Sprite L2C1, L2C2, L2C3;
	float l2c1 = 1100, l2c2 = 1427.55, l2c3 = 1755.11;
	L2C1.setTexture(Limousine);
	L2C1.setPosition(Vector2f(1100.f, 502.f));
	L2C1.setScale(Vector2f(0.043f, 0.043f));
	L2C2.setTexture(Limousine);
	L2C2.setPosition(Vector2f(1427.55, 502.f));
	L2C2.setScale(Vector2f(0.043f, 0.043f));
	L2C3.setTexture(Limousine);
	L2C3.setPosition(Vector2f(1755.11, 502.f));
	L2C3.setScale(Vector2f(0.043f, 0.043f));
	//Line3
	Sprite L3C1, L3C2, L3C3, L3C4;
	float l3c1 = -250, l3c2 = -481.562, l3c3 = -713.124, l3c4 = -944.686;
	L3C1.setTexture(Taxi);
	L3C1.setPosition(Vector2f(-250.f, 454.f));
	L3C1.setScale(Vector2f(0.048f, 0.048f));
	L3C2.setTexture(Taxi);
	L3C2.setPosition(Vector2f(-481.562, 454.f));
	L3C2.setScale(Vector2f(0.048f, 0.048f));
	L3C3.setTexture(Taxi);
	L3C3.setPosition(Vector2f(-713.124, 454.f));
	L3C3.setScale(Vector2f(0.048f, 0.048f));
	L3C4.setTexture(Taxi);
	L3C4.setPosition(Vector2f(-944.686, 454.f));
	L3C4.setScale(Vector2f(0.048f, 0.048f));
	//line4
	Sprite L4C1, L4C2, L4C3, L4C4;
	float l4c1 = 1100, l4c2 = 1477.65, l4c3 = 1778.91;
	L4C1.setTexture(Firetruck);
	L4C1.setPosition(Vector2f(1100, 401.5));
	L4C1.setScale(Vector2f(0.060f, 0.060f));
	L4C2.setTexture(Police);
	L4C2.setPosition(Vector2f(1477.65, 403.f));
	L4C2.setScale(Vector2f(0.050f, 0.050f));
	L4C3.setTexture(Ambulance);
	L4C3.setPosition(Vector2f(1778.91, 401.f));
	L4C3.setScale(Vector2f(0.080f, 0.072f));
	//line5
	Sprite L5C1, L5C2;
	float l5c1 = -150, l5c2 = 847;
	L5C1.setTexture(Car33);
	L5C1.setPosition(Vector2f(-150, 402.5));
	L5C1.setScale(Vector2f(0.048f, 0.048f));
	L5C2.setTexture(Car34);
	L5C2.setPosition(Vector2f(-150, 402.5));
	L5C2.setScale(Vector2f(0.048f, 0.048f));
	L5C1.setColor(Color(255, 255, 255, 64));
	L5C2.setColor(Color(255, 255, 255, 64));

	//Line6
	Sprite L6W1, L6W2, L6W3;
	float l6w1 = -150, l6w2 = -476.25, l6w3 = -802.50;
	L6W1.setTexture(Wood1);
	L6W1.setPosition(Vector2f(-150.f, 254.f));
	L6W1.setScale(Vector2f(0.09f, 0.057f));
	L6W2.setTexture(Wood1);
	L6W2.setPosition(Vector2f(-476.25f, 254.f));
	L6W2.setScale(Vector2f(0.09f, 0.057f));
	L6W3.setTexture(Wood1);
	L6W3.setPosition(Vector2f(-802.50f, 254.f));
	L6W3.setScale(Vector2f(0.09f, 0.057f));

	//Line7
	Sprite L7W1, L7W2, L7W3;
	float l7w1 = 1100, l7w2 = 1440.37, l7w3 = 1780.74;
	L7W1.setTexture(Wood2);
	L7W1.setPosition(Vector2f(1100, 205.f));
	L7W1.setScale(Vector2f(0.11f, 0.057f));
	L7W2.setTexture(Wood2);
	L7W2.setPosition(Vector2f(1440.37, 205.f));
	L7W2.setScale(Vector2f(0.11f, 0.057f));
	L7W3.setTexture(Wood2);
	L7W3.setPosition(Vector2f(1780.74, 205.f));
	L7W3.setScale(Vector2f(0.11f, 0.057f));
	//Line8
	Sprite L8W1, L8W2, L8W3, L8W4;
	float l8w1 = -250, l8w2 = -480.86, l8w3 = -711.72, l8w4 = -942.58;
	L8W1.setTexture(Wood4);
	L8W1.setPosition(Vector2f(-250.f, 153.f));
	L8W1.setScale(Vector2f(0.055f, 0.055f));
	L8W2.setTexture(Wood4);
	L8W2.setPosition(Vector2f(-480.86, 153.f));
	L8W2.setScale(Vector2f(0.055f, 0.055f));
	L8W3.setTexture(Wood4);
	L8W3.setPosition(Vector2f(-711.72, 153.f));
	L8W3.setScale(Vector2f(0.055f, 0.055f));
	L8W4.setTexture(Wood4);
	L8W4.setPosition(Vector2f(-942.58, 153.f));
	L8W4.setScale(Vector2f(0.055f, 0.055f));
	//line9
	Sprite L9W1, L9W2, L9W3;
	float l9w1 = 1100, l9w2 = 1427.23, l9w3 = 1754.46;
	L9W1.setTexture(Wood5);
	L9W1.setPosition(Vector2f(1100, 107.f));
	L9W1.setScale(Vector2f(0.1f, 0.055f));
	L9W2.setTexture(Wood5);
	L9W2.setPosition(Vector2f(1427.23, 107.f));
	L9W2.setScale(Vector2f(0.1f, 0.055f));
	L9W3.setTexture(Wood5);
	L9W3.setPosition(Vector2f(1754.46, 107.f));
	L9W3.setScale(Vector2f(0.1f, 0.055f));
	//line10
	Sprite L10W1, L10W2, L10W3;
	float l10w1 = -150, l10w2 = -474.82, l10w3 = -799.64;
	L10W1.setTexture(Wood6);
	L10W1.setPosition(Vector2f(-150.f, 54.f));
	L10W1.setScale(Vector2f(0.07f, 0.05f));
	L10W2.setTexture(Wood6);
	L10W2.setPosition(Vector2f(-474.82, 54.f));
	L10W2.setScale(Vector2f(0.07f, 0.05f));
	L10W3.setTexture(Wood6);
	L10W3.setPosition(Vector2f(-799.64, 54.f));
	L10W3.setScale(Vector2f(0.07f, 0.05f));
	Event event;
	Clock clock;
	float speed=5;
	int light=1;
	int menu = 0;
	int flag = 0;
	int flagak = 1;
	int flagri =0;
	int u1 = 0, d1 = 0, l1 = 0, r1 = 0;
	int countu = 0, countd = 0, countl = 0, countr = 0;
	int Arr[2] = { 0 };
	int so=0;
	int soo=0;
	Time elapsed1 = clock.getElapsedTime();
	srand(time(NULL));
	int swit = rand() % 2;
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				case Event::Closed:
					window.close();
					firo=1;
					break;
				case Event::KeyPressed:
					if (menu == 1){
						if (Keyboard::isKeyPressed(Keyboard::Up) && flag < 2 && u1 == 0)
						{
							u1 = 1;
							Arr[flag] = 1;
							flag++;
						}
						else if (Keyboard::isKeyPressed(Keyboard::Up) && flag == 2 && u1 == 0)
						{
							u1 = 1;
							Arr[1] = 1;
						}
						if (Keyboard::isKeyPressed(Keyboard::Down) && flag < 2 && d1 == 0)
						{
							d1 = 1;
							Arr[flag] = 2;
							flag++;
						}
						else if (Keyboard::isKeyPressed(Keyboard::Down) && flag == 2 && d1 == 0)
						{
							d1 = 1;
							Arr[1] = 2;
						}
						if (Keyboard::isKeyPressed(Keyboard::Left) && flag < 2 && l1 == 0)
						{
							l1 = 1;
							Arr[flag] = 3;
							flag++;
						}
						else if (Keyboard::isKeyPressed(Keyboard::Left) && flag == 2 && l1 == 0)
						{
							l1 = 1;
							Arr[1] = 3;
						}
						if (Keyboard::isKeyPressed(Keyboard::Right) && flag < 2 && r1 == 0)
						{
							r1 = 1;
							Arr[flag] = 4;
							flag++;
						}
						else if (Keyboard::isKeyPressed(Keyboard::Right) && flag == 2 && r1 == 0)
						{
							r1 = 1;
							Arr[1] = 4;
						}
					}
					break;
				case Event::KeyReleased:
					if (menu == 1){
						if (event.key.code == Keyboard::Up)
						{
							u1 = 0;
						}
						if (event.key.code == Keyboard::Down)
						{
							d1 = 0;
						}
						if (event.key.code == Keyboard::Left)
						{
							l1 = 0;
						}
						if (event.key.code == Keyboard::Right)
						{
							r1 = 0;
						}
					}
					break;
				case Event::Resized:
					break;
				default:
					break;
			}
			if (event.type == Event::MouseButtonPressed)
			{
				if (event.mouseButton.button == Mouse::Left && event.mouseButton.x>815 && event.mouseButton.x<842 && event.mouseButton.y>1 && event.mouseButton.y<27)
				{
					light++;
				}
				if (event.mouseButton.button == Mouse::Left && event.mouseButton.x>365 && event.mouseButton.x<478 && event.mouseButton.y>100 && event.mouseButton.y<213)
				{
					speed=1;
					menu=1;
				}
				if (event.mouseButton.button == Mouse::Left && event.mouseButton.x>365 && event.mouseButton.x<478 && event.mouseButton.y>250 && event.mouseButton.y<363)
				{
					speed=1.3;
					menu=1;
				}
				if (event.mouseButton.button == Mouse::Left && event.mouseButton.x>365 && event.mouseButton.x<478 && event.mouseButton.y>400 && event.mouseButton.y<513)
				{
					speed=1.7;
					menu=1;
				}
			}
		}
		window.clear();
		if (light%2==0){
			BG.setColor(Color(255, 255, 255, 64));
		}
		else{
			BG.setColor(Color(255, 255, 255, 255));
		}
		window.draw(BG);
		window.draw(L1C1);
		window.draw(L1C2);
		window.draw(L1C3);
		window.draw(L2C1);
		window.draw(L2C2);
		window.draw(L2C3);
		window.draw(L3C1);
		window.draw(L3C2);
		window.draw(L3C3);
		window.draw(L3C4);
		window.draw(L4C1);
		window.draw(L4C2);
		window.draw(L4C3);
		if (swit == 0)
		{
			window.draw(L5C1);
		}
		else
		{
			window.draw(L5C2);
		}
		window.draw(L6W1);
		window.draw(L6W2);
		window.draw(L6W3);
		window.draw(L7W1);
		window.draw(L7W2);
		window.draw(L7W3);
		window.draw(L8W1);
		window.draw(L8W2);
		window.draw(L8W3);
		window.draw(L8W4);
		window.draw(L9W1);
		window.draw(L9W2);
		window.draw(L9W3);
		window.draw(L10W1);
		window.draw(L10W2);
		window.draw(L10W3);
		switch (flagak)
		{
			case 1:
				FT.setPosition(Vector2f(ftx, fty));
				window.draw(FT);
				break;
			case 2:
				FB.setPosition(Vector2f(ftx, fty));
				window.draw(FB);
				break;
			case 3:
				FL.setPosition(Vector2f(ftx + 6, fty - 8));
				window.draw(FL);
				break;
			case 4:
				FR.setPosition(Vector2f(ftx + 6, fty - 8));
				window.draw(FR);
				break;
			default:
				break;
		}
		if (menu == 0)
		{
			MBG.setColor(Color(255, 255, 255, 128));
			window.draw(MBG);
			if (light%2==0){
				window.draw(Dy);
			}
			else{
				window.draw(Nt);
			}
			window.draw(Ey);
			window.draw(Mm);
			window.draw(Hd);
		}
		window.display();
		elapsed1 = clock.getElapsedTime();
		if ((int)elapsed1.asMilliseconds() > 3)
		{
			//line1
			L1C1.setPosition(Vector2f(l1c1, 555.f));
			l1c1 += 1.1*speed;
			L1C2.setPosition(Vector2f(l1c2, 555.f));
			l1c2 += 1.1*speed;
			L1C3.setPosition(Vector2f(l1c3, 555.f));
			l1c3 += 1.1*speed;
			//line2
			L2C1.setPosition(Vector2f(l2c1, 502.f));
			l2c1 -= 1*speed;
			L2C2.setPosition(Vector2f(l2c2, 502.f));
			l2c2 -= 1*speed;
			L2C3.setPosition(Vector2f(l2c3, 502.f));
			l2c3 -= 1*speed;
			//line3
			L3C1.setPosition(Vector2f(l3c1, 454.f));
			l3c1 += 0.9*speed;
			L3C2.setPosition(Vector2f(l3c2, 454.f));
			l3c2 += 0.9*speed;
			L3C3.setPosition(Vector2f(l3c3, 454.f));
			l3c3 += 0.9*speed;
			L3C4.setPosition(Vector2f(l3c4, 454.f));
			l3c4 += 0.9*speed;
			//line4
			L4C1.setPosition(Vector2f(l4c1, 352.5));
			l4c1 -= 1*speed;
			L4C2.setPosition(Vector2f(l4c2, 354.f));
			l4c2 -= 1*speed;
			L4C3.setPosition(Vector2f(l4c3, 352.f));
			l4c3 -= 1*speed;
			//line5
			if (swit == 0)
			{
				if (fty < 459 && fty > 361)
				{
					if (so==0){
						soundcarhorn.play();
						so=1;
					}
					L5C1.setColor(Color(255, 255, 255, 255));
					L5C1.setPosition(Vector2f(l5c1, 402.5));
					l5c1 += 2*speed;
				}
				else
				{
					if (so==1){
						soundcarhorn.stop();
						so=0;
					}
					L5C1.setColor(Color(255, 255, 255, 64));
					L5C1.setPosition(Vector2f(l5c1, 402.5));
					l5c1 += 1*speed;
				}
			}
			else
			{
				if (fty < 459 && fty > 361)
				{
					if (so==0){
						soundcarhorn.play();
						so=1;
					}
					L5C2.setColor(Color(255, 255, 255, 255));
					L5C2.setPosition(Vector2f(l5c2, 402.5));
					l5c2 -= 2*speed;
				}
				else
				{
					if (so==1){
						soundcarhorn.stop();
						so=0;
					}
					L5C2.setColor(Color(255, 255, 255, 64));
					L5C2.setPosition(Vector2f(l5c2, 402.5));
					l5c2 -= 1*speed;
				}
			}
			clock.restart();
			//line6
			L6W1.setPosition(Vector2f(l6w1, 254.f));
			l6w1 += 1.1*speed;
			L6W2.setPosition(Vector2f(l6w2, 254.f));
			l6w2 += 1.1*speed;
			L6W3.setPosition(Vector2f(l6w3, 254.f));
			l6w3 += 1.1*speed;
			//line7
			L7W1.setPosition(Vector2f(l7w1, 205.f));
			l7w1 -= 1*speed;
			L7W2.setPosition(Vector2f(l7w2, 205.f));
			l7w2 -= 1*speed;
			L7W3.setPosition(Vector2f(l7w3, 205.f));
			l7w3 -= 1*speed;
			//line8
			L8W1.setPosition(Vector2f(l8w1, 153.f));
			l8w1 += 0.9*speed;
			L8W2.setPosition(Vector2f(l8w2, 153.f));
			l8w2 += 0.9*speed;
			L8W3.setPosition(Vector2f(l8w3, 153.f));
			l8w3 += 0.9*speed;
			L8W4.setPosition(Vector2f(l8w4, 153.f));
			l8w4 += 0.9*speed;
			//line9
			L9W1.setPosition(Vector2f(l9w1, 107.f));
			l9w1 -= 1*speed;
			L9W2.setPosition(Vector2f(l9w2, 107.f));
			l9w2 -= 1*speed;
			L9W3.setPosition(Vector2f(l9w3, 107.f));
			l9w3 -= 1*speed;
			//line10
			L10W1.setPosition(Vector2f(l10w1, 54.f));
			l10w1 += 1*speed;
			L10W2.setPosition(Vector2f(l10w2, 54.f));
			l10w2 += 1*speed;
			L10W3.setPosition(Vector2f(l10w3, 54.f));
			l10w3 += 1*speed;
			switch (Arr[0])
			{
				case 1:
					if (countu==1 || countu==2){
						soundjump.play();
					}
					flagak = 1;
					if (countu < 50)
					{
						if (fty <= -15)
						{
							countu += 25;
							fty += 25;
						}
						else
						{
							fty -= 1;
						}
						countu++;
					}
					else
					{
						for (int i = 0; i < 1; i++)
						{
							Arr[i] = Arr[i + 1];
						}
						Arr[1] = 0;
						flag--;
						countu = 0;
					}
					break;
				case 2:
					if (countd==1 || countd==2){
						soundjump.play();
					}
					flagak = 2;
					if (countd < 50)
					{
						if (fty >= 635)
						{
							countd += 25;
							fty -= 25;
						}
						else
						{
							fty += 1;
						}
						countd++;
					}
					else
					{
						for (int i = 0; i < 1; i++)
						{
							Arr[i] = Arr[i + 1];
						}
						Arr[1] = 0;
						flag--;
						countd = 0;
					}
					break;
				case 3:
					if (countl==1 || countl==2){
						soundjump.play();
					}
					flagak = 3;
					if (countl < 50)
					{
						if (ftx <= -21)
						{
							countl += 25;
							ftx += 25;
						}
						else if(flagri==0)
						{
							ftx -= 1;
						}
						else if(flagri==1){
							ftx -= 0.9*speed;
							countl++;
						}
						else if(flagri==2){
							ftx -= 3*speed;
							countl++;
						}
						else if(flagri==3){
							ftx -= 1.1*speed;
							countl++;
						}
						else if(flagri==4){
							ftx -= 3*speed;
							countl++;
						}
						else if(flagri==5){
							ftx -= 1*speed;
							countl++;
						}
						countl++;
					}
					else
					{
						for (int i = 0; i < 1; i++)
						{
							Arr[i] = Arr[i + 1];
						}
						Arr[1] = 0;
						flag--;
						countl = 0;
					}
					break;
				case 4:
					if (countr==1 ||countr==2){
						soundjump.play();
					}
					flagak = 4;
					if (countr < 50)
					{
						if (ftx >= 829)
						{
							countr += 25;
							ftx -= 25*speed;
						}
						else if(flagri==0)
						{
							ftx += 1*speed;
						}
						else if(flagri==1){
							ftx += 3.1*speed;
							countr++;
						}
						else if(flagri==2){
							ftx += 1*speed;
							countr++;
						}
						else if(flagri==3){
							ftx += 2.9*speed;
							countr++;
						}
						else if(flagri==4){
							ftx += 1*speed;
							countr++;
						}
						else if(flagri==5){
							ftx += 3*speed;
							countr++;
						}
						countr++;
					}
					else
					{
						for (int i = 0; i < 1; i++)
						{
							Arr[i] = Arr[i + 1];
						}
						Arr[1] = 0;
						flag--;
						countr = 0;
					}
					break;
				default:
					break;
			}

			//line1
			if (l1c1 > 848)
			{
				l1c1 = -80.26;
			}
			if (l1c2 > 848)
			{
				l1c2 = -80.26;
			}
			if (l1c3 > 848)
			{
				l1c3 = -80.26;
			}

			//line2
			if (l2c1 < -136.66)
			{
				l2c1 = 847;
			}
			if (l2c2 < -136.66)
			{
				l2c2 = 847;
			}
			if (l2c3 < -136.66)
			{
				l2c3 = 847;
			}

			//line3
			if (l3c1 > 848)
			{
				l3c1 = -79.248;
			}
			if (l3c2 > 848)
			{
				l3c2 = -79.248;
			}
			if (l3c3 > 848)
			{
				l3c3 = -79.248;
			}
			if (l3c4 > 848)
			{
				l3c4 = -79.248;
			}
			//line4
			if (l4c1 < -156.54)
			{
				l4c1 = 847;
			}
			if (l4c2 < -156.54)
			{
				l4c2 = 847;
			}
			if (l4c3 < -156.54)
			{
				l4c3 = 847;
			}
			//line5

			if (l5c1 > 847)
			{
				l5c1 = -79.392;
				swit = rand() % 2;
			}
			if (l5c2 < -79.392)
			{
				l5c2 = 847;
				swit = rand() % 2;
			}

			//Line6
			if (l6w1 > 848)
			{
				l6w1 = -131.76;
			}
			if (l6w2 > 848)
			{
				l6w2 = -131.76;
			}
			if (l6w3 > 848)
			{
				l6w3 = -131.76;
			}
			//line7
			if (l7w1 < -175.13)
			{
				l7w1 = 847;
			}
			if (l7w2 < -175.13)
			{
				l7w2 = 847;
			}
			if (l7w3 < -175.13)
			{
				l7w3 = 847;
			}

			//line8
			if (l8w1 > 848)
			{
				l8w1 = -76.45;
			}
			if (l8w2 > 848)
			{
				l8w2 = -76.45;
			}
			if (l8w3 > 848)
			{
				l8w3 = -76.45;
			}
			if (l8w4 > 848)
			{
				l8w4 = -76.45;
			}
			//line9
			if (l9w1 < -135.7)
			{
				l9w1 = 847;
			}
			if (l9w2 < -135.7)
			{
				l9w2 = 847;
			}
			if (l9w3 < -135.7)
			{
				l9w3 = 847;
			}
			//line10
			if (l10w1 > 848)
			{
				l10w1 = -128.47;
			}
			if (l10w2 > 848)
			{
				l10w2 = -128.47;
			}
			if (l10w3 > 848)
			{
				l10w3 = -128.47;
			}
			if (!(54 - 4 < fty && 254 + 39.216 + 4 > fty))
			{
				flagri=0;
			}
			if (fty<11){
				soundwin.play();
				window.draw(Wn);
				window.display();
				sleep(milliseconds(3500));
				break;
			}
			if (!(-40 < fty && 300 + 39.216 + 4 > fty))
			{
				if (soo==0){
					soundriver.stop();
					soundstreet.play();
					soo=1;
				}
			}
			else{
				if (soo==1){
					soundstreet.stop();
					soundriver.play();
					soo=0;
				}
			}
			if (countu == 0 && countd == 0 && countl == 0 && countr == 0)
			{
				//line 6
				//wood1
				if ((flagak == 1 || flagak == 2) && (l6w1 - 21.483 < ftx && l6w1 + 131.76 > ftx + 42.96 - 21.483) && (254 < fty && 254 + 39.216 > fty + 22.148))
				{
					flagri=1;
					if(ftx>=803){
					ftx-=1.1*speed;
					}
					ftx += 1.1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l6w1 - 14.574 < ftx + 6 && l6w1 + 131.76 > ftx + 14.574 + 6) && (250 < fty - 8 && 258 + 39.216 > fty + 22.148 - 8))
				{
					flagri=1;
					if(ftx>=803){
					ftx-=1.1*speed;
					}
					ftx += 1.1*speed;
				}
				//wood2
				else if ((flagak == 1 || flagak == 2) && (l6w2 - 21.483 < ftx && l6w2 + 131.76 > ftx + 42.96 - 21.483) && (254 < fty && 254 + 39.216 > fty + 22.148))
				{
					flagri=1;
					if(ftx>=803){
					ftx-=1.1*speed;
					}
					ftx += 1.1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l6w2 - 14.574 < ftx + 6 && l6w2 + 131.76 > ftx + 14.574 + 6) && (250 < fty - 8 && 260 + 39.216 > fty + 22.148 - 8))
				{
					flagri=1;
					if(ftx>=803){
					ftx-=1.1*speed;
					}
					ftx += 1.1*speed;
				}
				//wood3
				else if ((flagak == 1 || flagak == 2) && (l6w3 - 21.483 < ftx && l6w3 + 131.76 > ftx + 42.96 - 21.483) && (254 < fty && 254 + 39.216 > fty + 22.148))
				{
					flagri=1;
					if(ftx>=803){
					ftx-=1.1*speed;
					}
					ftx += 1.1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l6w3 - 14.574 < ftx + 6 && l6w3 + 131.76 > ftx + 14.574 + 6) && (250 < fty - 8 && 260 + 39.216 > fty + 22.148 - 8))
				{
					flagri=1;
					if(ftx>=803){
					ftx-=1.1*speed;
					}
					ftx += 1.1*speed;
				}
				//line7
				//wood1
				else if ((flagak == 1 || flagak == 2) && (l7w1 - 21.483 < ftx && l7w1 + 174.13 > ftx + 42.96 - 21.483) && (205 < fty && 205 + 45.714 > fty + 22.148))
				{
					flagri=2;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l7w1 - 14.574 < ftx + 6 && l7w1 + 174.13 > ftx + 14.574+ 6 ) && (201 < fty - 8 && 209 + 45.714 > fty + 22.148 - 8))
				{
					flagri=2;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				//wood2
				else if ((flagak == 1 || flagak == 2) && (l7w2 - 21.483 < ftx && l7w2 + 174.13 > ftx + 42.96 - 21.483) && (205 < fty && 205 + 45.714 > fty + 22.148))
				{
					flagri=2;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l7w2 - 14.574 < ftx + 6 && l7w2 + 174.13 > ftx + 14.574 + 6) && (201 < fty - 8 && 209 + 45.714 > fty + 22.148 - 8))
				{
					flagri=2;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				//wood3
				else if ((flagak == 1 || flagak == 2) && (l7w3 - 21.483 < ftx && l7w3 + 174.13 > ftx + 42.96 - 21.483) && (205 < fty && 205 + 45.714 > fty + 22.148)) //wood3
				{
					flagri=2;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l7w3 - 14.574 < ftx + 6 && l7w3 + 174.13 > ftx + 6 + 14.574) && (201 < fty && 209 + 45.714 > fty + 22.148 - 8))
				{
					flagri=2;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				//line8
				//wood1
				else if ((flagak == 1 || flagak == 2) && (l8w1 - 21.483 < ftx && l8w1 + 76.45 > ftx + 42.96 - 21.483) && (153 < fty && 153 + 48.565 > fty + 22.148))
				{
					flagri=3;
					if(ftx>=803){
					ftx-=0.9*speed;
					}
					ftx += 0.9*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l8w1 - 14.574 < ftx + 6 && l8w1 + 76.45 > ftx + 6 + 14.574) && (149 < fty - 8 && 157 + 48.565 > fty + 22.148 - 8))
				{
					flagri=3;
					if(ftx>=803){
					ftx-=0.9*speed;
					}
					ftx += 0.9*speed;
				}
				//wood2
				else if ((flagak == 1 || flagak == 2) && (l8w2 - 21.483 < ftx && l8w2 + 76.45 > ftx + 42.96 - 21.483) && (153 < fty && 153 + 48.565 > fty + 22.148))
				{
					flagri=3;
					if(ftx>=803){
					ftx-=0.9*speed;
					}
					ftx += 0.9*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l8w2 - 14.574 < ftx + 6 && l8w2 + 76.45 > ftx + 6 + 14.574) && (149 < fty - 8 && 157 + 48.565 > fty + 22.148 - 8))
				{
					flagri=3;
					if(ftx>=803){
					ftx-=0.9*speed;
					}
					ftx += 0.9*speed;
				}
				//wood3
				else if ((flagak == 1 || flagak == 2) && (l8w3 - 21.483 < ftx && l8w3 + 76.45 > ftx + 42.96 - 21.483) && (153 < fty && 153 + 48.565 > fty + 22.148))
				{
					flagri=3;
					if(ftx>=803){
					ftx-=0.9*speed;
					}
					ftx += 0.9*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l8w3 - 14.574 < ftx + 6 && l8w3 + 76.45 > ftx + 6 + 14.574 ) && (149 < fty - 8 && 157 + 48.565 > fty + 22.148 - 8))
				{
					flagri=3;
					if(ftx>=803){
					ftx-=0.9*speed;
					}
					ftx += 0.9*speed;
				}
				//wood4
				else if ((flagak == 1 || flagak == 2) && (l8w4 - 21.483 < ftx && l8w4 + 76.45 > ftx + 42.96 - 21.483) && (153 < fty && 153 + 48.565 > fty + 22.148))
				{
					flagri=3;
					if(ftx>=803){
					ftx-=0.9*speed;
					}
					ftx += 0.9*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l8w4 - 14.574 < ftx + 6 && l8w4 + 76.45 > ftx + 6 + 14.574 ) && (149 < fty - 8 && 157 + 48.565 > fty + 22.148 - 8))
				{
					flagri=3;
					if(ftx>=803){
					ftx-=0.9*speed;
					}
					ftx += 0.9*speed;
				}
				//line9
				//wood1
				else if ((flagak == 1 || flagak == 2) && (l9w1 - 21.483 < ftx && l9w1 + 134.7 > ftx + 42.96 - 21.483) && (107 < fty && 107 + 41.965 > fty + 22.148))
				{
					flagri=4;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l9w1 - 14.574 < ftx + 6 && l9w1 + 134.7 > ftx + 6 + 14.574) && (101 < fty - 8 && 113 + 41.965 > fty + 22.148 - 8))
				{
					flagri=4;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				//wood2
				else if ((flagak == 1 || flagak == 2) && (l9w2 - 21.483 < ftx && l9w2 + 134.7 > ftx + 42.96 - 21.483) && (107 < fty && 107 + 41.965 > fty + 22.148))
				{
					flagri=4;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l9w2 - 14.574 < ftx + 6 && l9w2 + 134.7 > ftx + 6 + 14.574 ) && (101 < fty - 8 && 113 + 41.965 > fty + 22.148 - 8))
				{
					flagri=4;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				//wood3
				else if ((flagak == 1 || flagak == 2) && (l9w3 - 21.483 < ftx && l9w3 + 134.7 > ftx + 42.96 - 21.483) && (107 < fty && 107 + 41.965 > fty + 22.148))
				{
					flagri=4;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l9w3 - 14.574 < ftx + 6 && l9w3 + 134.7 > ftx + 6 + 14.574) && (101 < fty - 8 && 113 + 41.965 > fty + 22.148 - 8))
				{
					flagri=4;
					if(ftx<=0){
					ftx+=1*speed;
					}
					ftx -= 1*speed;
				}
				//line10
				//wood1
				else if ((flagak == 1 || flagak == 2) && (l10w1 - 21.483 < ftx && l10w1 + 127.47 > ftx + 42.96 - 21.483) && (54 < fty && 54 + 49.65 > fty + 22.148))
				{
					flagri=5;
					if(ftx>=803){
					ftx-=1*speed;
					}
					ftx += 1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l10w1 - 14.574 < ftx + 6 && l10w1 + 127.47 > ftx + 6 + 14.574) && (50 < fty - 8 && 58 + 49.65 > fty + 22.148 - 8))
				{
					flagri=5;
					if(ftx>=803){
					ftx-=1*speed;
					}
					ftx += 1*speed;
				}
				//wood2
				else if ((flagak == 1 || flagak == 2) && (l10w2 - 21.483 < ftx && l10w2 + 127.47 > ftx + 42.96 - 21.483) && (54 < fty && 54 + 49.65 > fty + 22.148))
				{
					flagri=5;
					if(ftx>=803){
					ftx-=1*speed;
					}
					ftx += 1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l10w2 - 14.574 < ftx + 6 && l10w2 + 127.47 > ftx + 6 + 14.574) && (50 < fty - 8 && 58 + 49.65 > fty + 22.148 - 8))
				{
					flagri=5;
					if(ftx>=803){
					ftx-=1*speed;
					}
					ftx += 1*speed;
				}
				//wood3
				else if ((flagak == 1 || flagak == 2) && (l10w3 - 21.483 < ftx && l10w3 + 127.47 > ftx + 42.96 - 21.483) && (54 < fty && 54 + 49.65 > fty + 22.148))
				{
					flagri=5;
					if(ftx>=803){
					ftx-=1*speed;
					}
					ftx += 1*speed;
				}
				else if ((flagak == 3 || flagak == 4) && (l10w3 - 14.574 < ftx + 6 && l10w3 + 127.47 > ftx + 6 + 14.574) && (50 < fty - 8 && 58 + 49.65 > fty + 22.148 - 8))
				{
					flagri=5;
					if(ftx>=803){
					ftx-=1*speed;
					}
					ftx += 1*speed;
				}
				else if (54 - 4 < fty && 254 + 39.216 + 4 > fty)
				{
					soundgameover.play();
					window.draw(Le);
					window.display();
					sleep(milliseconds(5000));
					break;
				}
			}
			//line1
			//car1
			if ((ftx >= l1c1 - 42.96 && ftx <= l1c1 + 80.26) && (fty > 555 && 555 + 39.438 > fty))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//car2
			if ((ftx >= l1c2 - 42.96 && ftx <= l1c2 + 80.26) && (fty > 555 && 555 + 39.438 > fty))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//car3
			if ((ftx >= l1c3 - 42.96 && ftx <= l1c3 + 80.26) && (fty > 555 && 555 + 39.438 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//line2
			//car1
			if ((ftx >= l2c1 - 42.96 && ftx <= l2c1 + 135.665) && (fty > 502 && 502 + 41.452 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//car2
			if ((ftx >= l2c2 - 42.96 && ftx <= l2c2 + 135.665) && (fty > 502 && 502 + 41.452 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//car3
			if ((ftx >= l2c3 - 42.96 && ftx <= l2c3 + 135.665) && (fty > 502 && 502 + 41.452 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//line3(ftx >= l5c2 - 42.96 && ftx <= l5c2 + 79.392 )&& (fty > 402.5 && 402.5 + 39.6 > fty + 29.148)
			//car1
			if ((ftx >= l3c1 - 42.96 && ftx <= l3c1 + 79.24) && (fty > 454 && 454 + 35.856 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//car2
			if ((ftx >= l3c2 - 42.96 && ftx <= l3c2 + 79.24) && (fty > 454 && 454 + 35.856 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//car3
			if ((ftx >= l3c3 - 42.96 && ftx <= l3c3 + 79.24) && (fty > 454 && 454 + 35.856 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//car4
			if ((ftx >= l3c4 - 42.96 && ftx <= l3c4 + 79.24) && (fty > 454 && 454 + 35.856 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				sleep(milliseconds(5000));
				break;
			}
			//line5
			//car1
			if ((ftx >= l5c1 - 42.96 && ftx <= l5c1 + 79.392) && (fty > 402.5 && 402.5 + 39.6 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//car2
			if ((ftx >= l5c2 - 42.96 && ftx <= l5c2 + 79.392) && (fty > 402.5 && 402.5 + 39.6 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//line4
			//car1
			if ((ftx >= l4c1 - 42.96 && ftx <= l4c1 + 156.54) && (fty > 352.5 && 352.5 + 39.06 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//car2
			if ((ftx >= l4c2 - 42.96 && ftx <= l4c2 + 80.15) && (fty > 354 && 354 + 36.4 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
			//car3
			if ((ftx >= l4c3 - 42.96 && ftx <= l4c3 + 103.52) && (fty > 352 && 352 + 42.264 > fty + 29.148))
			{
				soundgameover.play();
				window.draw(Le);
				window.display();
				sleep(milliseconds(5000));
				break;
			}
		}
	}
	}
	return 0;
}
