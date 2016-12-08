#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H
#include <SFML/Graphics.hpp>
#include "basescene.h"
#include <memory>
class GameWindow
{
public:
    GameWindow();
    void changeScene(std::unique_ptr<BaseScene> scene); //We need to ensure ownership is transfered, not shared.
    void run(); //Let this return control I think. We could figure this out on stream
private:
    std::unique_ptr<sf::RenderWindow> m_Window;
    std::unique_ptr<BaseScene> m_activeScene;

};

#endif // GAMEWINDOW_H
