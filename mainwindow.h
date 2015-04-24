#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QLabel>
#include <QGraphicsView>
#include <QTime>
#include <QDebug>
#include <QTimer>
#include <QGraphicsScene>
#include "rectitem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:

private slots:

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
