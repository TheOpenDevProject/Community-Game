#include "testscene.h"

TestScene::TestScene()
{

}

void TestScene::tick()
{
    shapeTest.setFillColor(sf::Color(0,0,0));
    shapeTest.setPosition(sf::Vector2f(100,100));
    shapeTest.setSize(sf::Vector2f(100,100));

}

void TestScene::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(shapeTest,states);
}
