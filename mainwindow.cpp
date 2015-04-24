#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QHBoxLayout"

#include "LKRectItem.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   ui->setupUi(this);

          QGraphicsScene *scene = new QGraphicsScene;
//          for(int i=0; i<5; i++) //在不同位置新建5个圆形
//           {
//              MyItem *item = new MyItem;
//              item->setPos(i*50+20,100);
//              scene->addItem(item);
//              qDebug()<< item->shape();
//              qDebug()<< item->boundingRect();  //输出item的boundingRect信息
//           }
           scene->setForegroundBrush(QColor(255,255,255,100));
           scene->setBackgroundBrush(Qt::red);
          scene->setBackgroundBrush(QPixmap(":/2012-07-19 08.48.01.jpg"));
          scene->setSceneRect(0,0,850,600);
          RectItem *rect = new RectItem; //新建矩形
          RectItem *rect2 = new RectItem; //新建矩形
          rect->setPos(50,50);
          rect2->setPos(100,200);

          scene->addItem(rect);
          scene->addItem(rect2);
          qDebug()<< rect2->shape();
          qDebug()<< rect2->boundingRect();  //输出item的boundingRect信息

//          LKRectItem *pRectItem0 = new LKRectItem();
//              pRectItem0->setItemRectF(QRectF(0,0,200,200));
//              scene->addItem(pRectItem0);
//              pRectItem0->setEnableEdit(true);


          QGraphicsView *view = new QGraphicsView(ui->widget);
          view->setScene(scene);
          view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
          view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


          view->resize(852,602); //设置视图大小



          view->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

