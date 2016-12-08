#include "gamewindow.h"
#include <QDebug>
GameWindow::GameWindow(): m_Window(new sf::RenderWindow(sf::VideoMode(800,800),"Community Game"))
{

}

void GameWindow::changeScene(std::unique_ptr<BaseScene> scene)
{
    this->m_activeScene = std::move(scene); //Move the ownership to our class.
}
void GameWindow::run(){
    //Yet to decide where to run events from. Will do on saturday.
    while(this->m_Window->isOpen()){
        sf::Event events;
        while(this->m_Window->pollEvent(events)){
            if(events.type == sf::Event::Closed){
               this->m_Window->close(); //This is bad but just for testing
            }
        }
       if(!this->m_activeScene){
           qDebug() << "Faulty Scene";
       }else{
           this->m_Window->clear(sf::Color(255,0,0));
           this->m_activeScene->tick();
           this->m_Window->draw(*this->m_activeScene.get()); //Kinda weirdly dereferencing the pointer
           this->m_Window->display();
       }
    }
}
