#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsView>
#include <QTime>
#include <QDebug>
#include <QTimer>
#include <QGraphicsScene>
#include "rectitem.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

     return a.exec();

//    QApplication app(argc,argv);

//       QGraphicsScene *scene = new QGraphicsScene;  //场景
//       MyItem *item =new MyItem;
//      // item->setCursor(Qt::OpenHandCursor);
//       scene->addItem(item);  //项添加到场景
//       QGraphicsView *view = new QGraphicsView; //视图
//       view->setScene(scene);  //视图关联场景
//       view->show();  //显示视图

//       return app.exec();

//    QApplication app(argc,argv);
//     qsrand(QTime(0,0,0).secsTo(QTime::currentTime())); //设置随机数初值
//       QGraphicsScene *scene = new QGraphicsScene;
//       for(int i=0; i<5; i++) //在不同位置新建5个圆形
//        {
//           MyItem *item = new MyItem;
//           item->setPos(i*50+20,100);
//           scene->addItem(item);
//           qDebug()<< item->shape();
//           qDebug()<< item->boundingRect();  //输出item的boundingRect信息
//        }
//        scene->setForegroundBrush(QColor(255,255,255,100));
//        scene->setBackgroundBrush(Qt::red);
//       scene->setBackgroundBrush(QPixmap(":/2012-07-19 08.48.01.jpg"));
//       scene->setSceneRect(0,0,600,300);
//       RectItem *rect = new RectItem; //新建矩形
//       rect->setPos(100,200);
//       scene->addItem(rect);
//       qDebug()<< rect->shape();
//       qDebug()<< rect->boundingRect();  //输出item的boundingRect信息
//       QGraphicsView *view = new QGraphicsView;
//       view->setScene(scene);
//       view->resize(400,300); //设置视图大小
//       view->show();

//       return app.exec();

     //  QApplication app(argc,argv);
     //   MyView *view = new MyView;
     //   view->show();
     //   return app.exec();
}
