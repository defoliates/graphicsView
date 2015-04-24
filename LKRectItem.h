#ifndef LKRECTITEM_H
#define LKRECTITEM_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneDragDropEvent>
#include <QMenu>
#include <QPen>
#include <QUrl>
#include <QDebug>
#include <QMessageBox>
#include <QMimeData>
#include "LKBaseItem.h"
#include "ItemDefine.h"
#include "LKAgentItem.h"

class LKRectItem : public LKAgentItem<QGraphicsRectItem>
{

public:
	LKRectItem(QGraphicsItem* parent=NULL);
	LKRectItem(const  LKRectItem &srcItem);
	~LKRectItem();
	enum { Type = c_rect };
	int type() const{ return Type; }
	QString  typeName()const{return "Rect";}
	QRectF itemRectF()const;
	void   setItemRectF(QRectF rect);
	QRectF boundingRect()const;
public:
	virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget /* = 0 */);
protected:
	void dragEnterEvent(QGraphicsSceneDragDropEvent *event); //�϶������¼�
	void dragLeaveEvent(QGraphicsSceneDragDropEvent *event); //�϶��뿪�¼�
	void dropEvent(QGraphicsSceneDragDropEvent *event);  //�����¼�	
};

#endif // LKRECTITEM_H
