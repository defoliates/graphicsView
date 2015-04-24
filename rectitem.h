#ifndef RECTITEM_H
#define RECTITEM_H



#include <QPainter>
//#include <QGraphicsSceneMouseEvent>
#include <QDrag>
//#include <QApplication>
#include <QMimeData>
#include <QGraphicsItem>
#include <QDebug>

#include <QMenu>
#include <QGraphicsScene>
#include <QWidget>
#include <QPainterPath>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneContextMenuEvent>
//#include "ItemDefine.h"
class RectItem :  public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    enum shap_type{SHAP_LINE,SHAP_ELLIPSE,SHAP_RECT,SHAP_POLYGON};
    enum pans_Pos{LEFT_TOP,LEFT,LEFT_BOTTOM,TOP,BOTTOM,RIGHT_TOP,RIGHT,RIGHT_BOTTOM};
   RectItem();
   QRectF boundingRect() const;
 // QPainterPath shape()const;
   void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget);
   //enum { Type = c_agent };
     int type() { return Type; }
     void       adjustPanesPos(QRectF &re);

     void       updateFrameRect(QRectF re,qreal penWidth=0);

protected:
   // void dragEnterEvent(QGraphicsSceneDragDropEvent *event); //拖动进入事件
  //  void dragLeaveEvent(QGraphicsSceneDragDropEvent *event); //拖动离开事件
  //  void dropEvent(QGraphicsSceneDragDropEvent *event);  //放入事件
 //   void keyPressEvent(QKeyEvent *event);
 //   void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);
  //  void mousePressEvent(QGraphicsSceneMouseEvent *event);
 //   void mouseMoveEvent ( QGraphicsSceneMouseEvent * event );

 //   void mouseReleaseEvent(QGraphicsSceneDragDropEvent * event);
  //   void dragMoveEvent ( QGraphicsSceneDragDropEvent * event );
    QVariant itemChange(GraphicsItemChange change, const QVariant &value);
  //  void mouseReleaseEvent ( QGraphicsSceneMouseEvent * event );
    //如果想进一步控制前景和背景层，我们可以重新实现drawForeground()函数和drawBackground()函数。
    //  mousePressEvent(), mouseMoveEvent(), mouseReleaseEvent(), and mouseDoubleClickEvent()处理鼠标按下，移动，松开，双击事件
//    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
//    void hoverMoveEvent(QGraphicsSceneHoverEvent *event);
//    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
private:
    QColor color;
 //   QRectF m_rect;
//    QPointF                      lastPoint_;
//    QCursor* m_cursor;
//    int direction;
//    shap_type                    shapType_;
//    bool    move_;
//    bool cScale;
//    QRectF                       framRect_;
//    QGraphicsItem                *curPane_;
//    QGraphicsRectItem            *pdashRectShap_;
//    QHash<int,QGraphicsItem*>    panes_;

    bool dragOver;  //标志是否有拖动进入
public slots:
   void moveTo(){setPos(0,0);}
};

#endif // RECTITEM_H
