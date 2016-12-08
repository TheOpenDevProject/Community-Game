#include <QCoreApplication>
#include "gamewindow.h"
#include "testscene.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Maybe we pass this window to something, not sure if we need an extra layer yet.
    std::unique_ptr<TestScene> testingScene(new TestScene);
    GameWindow window;
    window.changeScene(std::move(testingScene));
    window.run();

    return a.exec();
}
