#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QDesktopWidget>

#include "qt-victim.h"

MainWin::MainWin() {
  QGridLayout *layout = new QGridLayout;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      layout->addWidget(new QPushButton("PUSH ME!"), i, j);
    }
  }
  setLayout(layout);
}

int main(int argc, char **argv) {
  QApplication app(argc, argv);

  MainWin win{};
  win.resize(QDesktopWidget().availableGeometry(&win).size() * 0.25);
  win.show();

  return app.exec();
}
