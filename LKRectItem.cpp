#include "LKRectItem.h"
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QBrush>
#include <QCoreApplication>
#include <QGraphicsScene>

LKRectItem::LKRectItem(QGraphicsItem* parent)
	: LKAgentItem<QGraphicsRectItem>(parent)
{
	 setAcceptDrops(true);  //���ý����Ϸ�

}

LKRectItem::LKRectItem(const  LKRectItem &srcItem)
{
	setRect(srcItem.rect());
}

LKRectItem::~LKRectItem()
{

}

QRectF LKRectItem::itemRectF()const
{
	return rect();
}

void  LKRectItem::setItemRectF(QRectF rect)
{
	setRect(rect);
}


QRectF LKRectItem::boundingRect()const
{
	QRectF reBounding = rect();
	reBounding.adjust(-pen().width()/2,-pen().width()/2,
		              pen().width()/2,pen().width()/2);
	return reBounding;
}

void LKRectItem::paint(QPainter *painter, 
					   const QStyleOptionGraphicsItem *option, 
                       QWidget *widget /* = 0 */)
{
	Q_UNUSED(widget);
	painter->drawRect(rect());
    QPointF rectF=scenePos();
    if(rectF.x()<=0)
        rectF.setX(0);
	//qDebug()<<mapToScene(rect().x(),rect().y());
   // qDebug()<<scenePos()<<boundingRect();
    //qDebug()<<rect().x()<<rect().y()<<rect().width()<<rect().height();
   // setRect(rectF.x(),rectF.y(),rect().width(),rect().height());
	LKBaseItem::paint(painter,option,widget);
	
}
void LKRectItem::dragEnterEvent(QGraphicsSceneDragDropEvent *event)
{
	qDebug()<<"EnterEvent";

	//  if(event->mimeData()->hasColor()) //����϶�������������ɫ���ݣ������
	if(event->mimeData()->hasFormat("text/uri-list"))
	{
		event->setAccepted(true);
		//dragOver = true;
		update();
	}
	else event->setAccepted(false);
}


void LKRectItem::dragLeaveEvent(QGraphicsSceneDragDropEvent *event)
{
	Q_UNUSED(event);
	//dragOver = false;
	qDebug()<<"dragLeaveEvent";
	update();

}
void LKRectItem::dropEvent(QGraphicsSceneDragDropEvent *event)
{
	//dragOver = false;
	qDebug()<<"dropEvent";
	//    if(event->mimeData()->hasColor())
	//   { //����ͨ������ת���������ɫ
	//      color = event->mimeData()->colorData().value<QColor>();
	//      qDebug()<<event->mimeData()->hasColor();

	//    }
	QList<QUrl> urls=event->mimeData()->urls();
	foreach(QUrl url,urls)
		qDebug()<<url.toLocalFile();

	update();
}
