#include "rectitem.h"
#include <QTimeLine>
#include <QGraphicsItemAnimation>
#include <QKeyEvent>
RectItem::RectItem()

{
   setAcceptDrops(true);  //设置接收拖放
   color = QColor(Qt::lightGray);
   //setFlag(QGraphicsItem::ItemIsFocusable);
 //  setFlag(QGraphicsItem::ItemIsSelectable);
   //setFlag(QGraphicsItem::ItemIsMovable);
   setFlags(  QGraphicsItem::ItemIsMovable |
               QGraphicsItem::ItemSendsGeometryChanges
               | QGraphicsItem::ItemIsSelectable);
   // setAcceptHoverEvents(true);

//   // m_rect=QRectF(0,0,100,100);
//     m_cursor=new QCursor;
//     direction=0;
//     pdashRectShap_=0;
//     cScale=false;
//    shapType_=SHAP_RECT;
//     move_=false;
//     curPane_=NULL;
//     framRect_=sceneBoundingRect();
//     framRect_.adjust(-4,-4,4,4);
//     switch(shapType_)
//     {
//     case SHAP_RECT:
//         {
//             pdashRectShap_ = new QGraphicsRectItem(this);
//             pdashRectShap_->setPen(QPen(Qt::green,0,Qt::DashLine));
//             pdashRectShap_->show();
//         }
//         break;
//     }

//     if(shapType_==SHAP_RECT||shapType_==SHAP_ELLIPSE)
//     {
//         for(int i=0;i<8;++i)
//         {
//             QGraphicsRectItem *pPane = new QGraphicsRectItem(this);
//             pPane->setCursor(Qt::SizeFDiagCursor);
//             pPane->setPen(QPen(QColor(0,128,0)));
//             pPane->setBrush(QBrush(QColor(173,235,173)));
//             pPane->setRect(0,0,8,8);
//             pPane->setData(0,10+i);
//             panes_.insert(i,pPane);
//             if(i==0 || i==7)
//                 pPane->setCursor(Qt::SizeFDiagCursor);
//             else if(i==1 || i== 6)
//                 pPane->setCursor(Qt::SizeHorCursor);
//             else if(i==2 || i==5)
//                 pPane->setCursor(Qt::SizeBDiagCursor);
//             else if(i==3 || i==4)
//                 pPane->setCursor(Qt::SizeVerCursor);
//         }
//         QRectF rectf=boundingRect();
//         adjustPanesPos(rectf);
//     }


}
void RectItem::adjustPanesPos(QRectF &re)
{
//    const QRectF parentRect = re;
//    qreal x = 0, y = 0;
//    x = parentRect.width() / 2 - 4+re.left();
//    y = 0+re.top();
//    panes_[TOP]->setPos(x,y);


//    x = parentRect.width() / 2 - 4+re.left();
//    y = parentRect.height() - 8+re.top();
//    panes_[BOTTOM]->setPos(x,y);

//    x = parentRect.width() - 8+re.left();
//    y = parentRect.height()/2 - 4+re.top();
//    panes_[RIGHT]->setPos(x,y);

//    x = 0+re.left();
//    y = parentRect.height() / 2 - 4+re.top();
//    panes_[LEFT]->setPos(x,y);

//    x = 0+re.left();
//    y = 0+re.top();
//    panes_[LEFT_TOP]->setPos(x,y);

//    x = parentRect.width()- 8+re.left();
//    y = parentRect.height() - 8+re.top();
//    panes_[RIGHT_BOTTOM]->setPos(x,y);

//    x = parentRect.width() - 8+re.left();
//    y = 0+re.top();
//    panes_[RIGHT_TOP]->setPos(x,y);

//    x = 0+re.left();
//    y = parentRect.height()- 8+re.top();
//    panes_[LEFT_BOTTOM]->setPos(x,y);

}
//void RectItem::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
//{
//   QMenu menu;
//   QAction *action = menu.addAction("moveTo(0,0)");
//  connect(action,SIGNAL(triggered()),this,SLOT(moveTo()));
//   menu.exec(event->screenPos()); //在按下鼠标左键的地方弹出菜单
//}
QRectF RectItem::boundingRect() const
{
   // return framRect_;

 return   QRectF(0, 0, 50, 50);
}
//QPainterPath RectItem::shape()const{
//    QPainterPath path;
//    path.addRect(m_rect);
//    return path;
//}
void RectItem::paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  //  if(this->isSelected())
    //     painter->setBrush(Qt::gray);
    painter->setBrush(dragOver?color.light(130):color);  //如果其上有拖动，颜色变亮
   // painter->setBrush(!collidingItems().isEmpty()?Qt::red : Qt::green);
     painter->drawRect(0,0,50,50);
//    QPointF originF=pos();
//      qDebug()<<originF.x()<<originF.y()<<pos().rx()<<pos().ry();
//      if(pos().x()<=0)
//      {
//          originF.setX(0);

//          setPos(originF);

//      }
//      if(pos().y()<=0)
//      {    originF.setY(0);
//          setPos(originF);
//         return;
//      }
    if(!collidingItems().isEmpty())

    {
       // setPos(originF);

        qDebug()<<"collidingItems";
        return;
    }

}

void RectItem::updateFrameRect(QRectF re,qreal penWidth)
{
//    framRect_ = boundingRect();
//    setPos(scenePos());
//    if(type()==c_rect)
//        framRect_.adjust(1+penWidth,1+penWidth,-1-penWidth,-1-penWidth);
//    else
//        framRect_.adjust(-4,-4,4,4);
//    QRectF rectf=boundingRect();
//    adjustPanesPos(rectf);

}
//void RectItem::dragEnterEvent(QGraphicsSceneDragDropEvent *event)
//{
//    qDebug()<<"EnterEvent";
// //  if(event->mimeData()->hasColor()) //如果拖动的数据中有颜色数据，便接收
//     if(event->mimeData()->hasFormat("text/uri-list"))
//    {
//       event->setAccepted(true);
//       dragOver = true;
//       update();
//    }
//   else event->setAccepted(false);
//}

//void RectItem::dragLeaveEvent(QGraphicsSceneDragDropEvent *event)
//{
//   Q_UNUSED(event);
//   dragOver = false;
//   qDebug()<<"dragLeaveEvent";
//   update();

//}

//void RectItem::dropEvent(QGraphicsSceneDragDropEvent *event)
//{
//   dragOver = false;
//     qDebug()<<"dropEvent";

//     QList<QUrl> urls=event->mimeData()->urls();
//     foreach(QUrl url,urls)
//        qDebug()<<url.toLocalFile();

//       update();
//}
//void RectItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
//{
//    qDebug()<<"mousePressEvent";
 // if(Qt::LeftButton==event->button())
 //   {
    //  qDebug()<<pos().x()<<pos().y();
//      QPointF originF=pos();
//      if(pos().x()<0)
//      {
//            originF.setX(0);
//          setPos(originF);
//      }
   // }
//    QTransform transform;
//    curPane_ = this;//qgraphicsitem_cast<QGraphicsItem*>(scene()->itemAt(event->scenePos(),transform));
//    int cellId = curPane_->data(0).toInt();
//    if(curPane_ && cellId>=10)
//    {
//        move_=true;
//        lastPoint_.setX(event->scenePos().x());
//        lastPoint_.setY(event->scenePos().y());
//        QRectF boundRect = boundingRect();
//        switch(shapType_)
//        {
//        case SHAP_RECT:
//            {
//                pdashRectShap_->setRect(boundRect.left()+4,boundRect.top()+4,
//                                        boundRect.width()-8,boundRect.height()-8);
//                pdashRectShap_->show();
//            }
//            break;
//        }


//    }
//    else
      //  return QGraphicsItem::mousePressEvent(event);

//}
//void RectItem::keyPressEvent(QKeyEvent * event)
//{
//    QPointF orginF=pos();

//    switch (event->key()) {
//    case  Qt::Key_Left :
//         qDebug()<<pos().x()<<pos().y()<<pos().rx()<<pos().ry();
//       if(pos().x()-1<=0)
//       {    orginF.setX(0);
//           setPos(orginF);
//           return;
//       }

//        moveBy(-1, 0);  //相对现在的位置移动
//        break;
//    case Qt::Key_Up  :
//       qDebug()<<pos().x()<<pos().y()<<pos().rx()<<pos().ry();
//      if(pos().y()-1<=0)
//      {    orginF.setY(0);
//          setPos(orginF);
//          return;
//      }
//          moveBy(0, -1);  //相对现在的位置移动
//        break;
//    case Qt::Key_Right:
//        qDebug()<<pos().x()<<pos().y()<<pos().rx()<<pos().ry();
//      if(pos().rx()+1>800)
//      {
//          orginF.setX(800);

//          setPos(orginF);
//          return;
//      }
//        moveBy(1, 0);  //相对现在的位置移动
//        break;
//    case   Qt::Key_Down  :
//        qDebug()<<pos().x()<<pos().y()<<pos().rx()<<pos().ry();
//      if(pos().ry()+1>=550)
//      {
//          orginF.setY(550);

//          setPos(orginF);
//          return;
//      }
//        moveBy(0, 1);  //相对现在的位置移动
//        break;
//    default:
//        break;
//    }


//}
//void RectItem::dragMoveEvent ( QGraphicsSceneDragDropEvent * event )
//{   qDebug()<<"dragMoveEvent";
//    event->setDropAction(Qt::MoveAction);
//    event->accept();
//    QPointF originF=pos();
//    if(pos().x()<0)
//    {
//        setPos(originF);
//    }
//}
//void RectItem::mouseMoveEvent ( QGraphicsSceneMouseEvent * event )
//{
//    qDebug()<<"mouseMoveEvent";
//  //  event->accept();
// //   moveBy(1,0);
//   // event->accept();
//  //  event->setDropAction(Qt::MoveAction);
//    QPointF originF=rect();
//    if(rect().x()<0)
//    {
//        setPos(originF);
//    }
//}
//void RectItem::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
//    QPointF pos1=event->scenePos();
//    QPointF lt=this->scenePos()+QPointF(m_rect.x(),m_rect.y());
//    QPointF lb=this->scenePos()+QPointF(m_rect.x(),m_rect.y()+m_rect.height());
//    QPointF rt=this->scenePos()+QPointF(m_rect.x()+m_rect.width(),m_rect.y());
//    QPointF rb=this->scenePos()+QPointF(m_rect.x()+m_rect.width(),m_rect.y()+m_rect.height());
//    if((pos1.x()<=lt.x()+2&&pos1.y()<=lt.y()+2)
//     ||(pos1.x()>=rb.x()-2&&pos1.y()>=rb.y()-2)){
//        m_cursor->setShape(Qt::SizeFDiagCursor);
//        if(pos1.x()<=lt.x()+2)direction=8;
//        else direction=4;
//    }else if((pos1.x()<=lb.x()+2&&pos1.y()>=lb.y()-2)
//             ||(pos1.x()>=rt.x()-2&&pos1.y()<=rt.y()+2)){
//        m_cursor->setShape(Qt::SizeBDiagCursor);
//        if(pos1.x()<=lb.x()+2)direction=6;
//        else direction=2;
//    }else if((pos1.x()<=lt.x()+2||pos1.x()>=rt.x()-2)
//             &&(pos1.y()<=lb.y()&&pos1.y()>=lt.y())){
//        m_cursor->setShape(Qt::SizeHorCursor);
//        if(pos1.x()<=lt.x()+2)direction=7;
//        else direction=3;
//    }else if((pos1.y()<=lt.y()+2||pos1.y()>=lb.y()-2)
//             &&(pos1.x()>=lt.x()&&pos1.x()<=rt.x())){
//        m_cursor->setShape(Qt::SizeVerCursor);
//        if(pos1.y()<=lt.y()+2)direction=1;
//        else direction=5;
//    }else{
//        cScale=false;
//        m_cursor->setShape(Qt::ArrowCursor);
//    }
//    this->setCursor(*m_cursor);
//    update();
//    QGraphicsItem::hoverEnterEvent(event);
//}

//void RectItem::hoverMoveEvent(QGraphicsSceneHoverEvent *event){
//    QPointF pos1=event->scenePos();
//    QPointF lt=this->scenePos()+QPointF(m_rect.x(),m_rect.y());
//    QPointF lb=this->scenePos()+QPointF(m_rect.x(),m_rect.y()+m_rect.height());
//    QPointF rt=this->scenePos()+QPointF(m_rect.x()+m_rect.width(),m_rect.y());
//    QPointF rb=this->scenePos()+QPointF(m_rect.x()+m_rect.width(),m_rect.y()+m_rect.height());
//    if((pos1.x()<=lt.x()+2&&pos1.y()<=lt.y()+2)
//     ||(pos1.x()>=rb.x()-2&&pos1.y()>=rb.y()-2)){
//        m_cursor->setShape(Qt::SizeFDiagCursor);
//        if(pos1.x()<=lt.x()+2)direction=8;
//        else direction=4;
//    }else if((pos1.x()<=lb.x()+2&&pos1.y()>=lb.y()-2)
//             ||(pos1.x()>=rt.x()-2&&pos1.y()<=rt.y()+2)){
//        m_cursor->setShape(Qt::SizeBDiagCursor);
//        if(pos1.x()<=lb.x()+2)direction=6;
//        else direction=2;
//    }else if((pos1.x()<=lt.x()+2||pos1.x()>=rt.x()-2)
//             &&(pos1.y()<=lb.y()&&pos1.y()>=lt.y())){
//        m_cursor->setShape(Qt::SizeHorCursor);
//        if(pos1.x()<=lt.x()+2)direction=7;
//        else direction=3;
//    }else if((pos1.y()<=lt.y()+2||pos1.y()>=lb.y()-2)
//             &&(pos1.x()>=lt.x()&&pos1.x()<=rt.x())){
//        m_cursor->setShape(Qt::SizeVerCursor);
//        if(pos1.y()<=lt.y()+2)direction=1;
//        else direction=5;
//    }else{
//        cScale=false;
//        m_cursor->setShape(Qt::ArrowCursor);
//    }
//    this->setCursor(*m_cursor);
//    update();
//    QGraphicsItem::hoverMoveEvent(event);
//}

//void RectItem::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
//    m_cursor->setShape(Qt::ArrowCursor);
//    cScale=false;
//    this->setCursor(*m_cursor);
//    update();
//    QGraphicsItem::hoverLeaveEvent(event);
//}
QVariant RectItem::itemChange(GraphicsItemChange change, const QVariant &value)
{
    qDebug()<<"itemChange"<<change;
    if (change == ItemPositionChange && scene()) {
        // value is the new position.
        QPointF newPos = value.toPointF();
          QRectF newPosF = value.toRectF();
        QRectF rect = scene()->sceneRect();
        qDebug()<<rect;
//        if (!rect.contains(newPos)) {
//            // Keep the item inside the scene rect.
//            newPos.setX(qMin(rect.right(), qMax(newPos.x(), rect.left())));
//            newPos.setY(qMin(rect.bottom(), qMax(newPos.y(), rect.top())));
//            qDebug()<<newPos<<rect.right();
//            return newPos;
//        }
                if (!rect.contains(newPosF)) {
                     qDebug()<<qMin(rect.right(), qMax(newPos.x(), rect.left()));
                      qDebug()<<qMin(rect.bottom(), qMax(newPos.y(), rect.top()));
                    // Keep the item inside the scene rect.
                  //  newPosF.setX(qMin(rect.right(), qMax(newPos.x(), rect.left())));
                  //  newPosF.setY(qMin(rect.bottom(), qMax(newPos.y(), rect.top())));
                  //  newPosF.setWidth(qMin(rect.right(), qMax(newPos.x(), rect.left())));
                   //  newPosF.setHeight(qMin(rect.bottom(), qMax(newPos.y(), rect.top())));
                    qDebug()<<newPos<<rect.right();
                    return newPos;
                }
    }
    return QGraphicsItem::itemChange(change, value);
}
