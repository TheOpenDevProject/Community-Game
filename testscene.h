#ifndef TESTSCENE_H
#define TESTSCENE_H
#include "basescene.h"
#include <SFML/Graphics.hpp>
class TestScene : public BaseScene
{
public:
    TestScene();
    virtual void tick();
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const; //Enforce a scene must be drawable
private:
    sf::RectangleShape shapeTest;

};

#endif // TESTSCENE_H
