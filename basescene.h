#ifndef BASESCENE_H
#define BASESCENE_H
#include <SFML/Graphics/Drawable.hpp>

class BaseScene : public sf::Drawable
{
public:
    BaseScene();
    virtual void tick() = 0; //Make this a pure virtual function since Tick will never have a
                             //Generic meaning
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const = 0; //Enforce a scene must be drawable

protected:

};

#endif // BASESCENE_H
