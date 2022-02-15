#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QDesktopWidget>

int main(int argc, char **argv) {
  QApplication app(argc, argv);

  QPushButton hello("Hello world!", 0);
  hello.resize(QDesktopWidget().availableGeometry(&hello).size() * 0.25);
  hello.show();

  return app.exec();
}
