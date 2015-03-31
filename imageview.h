#ifndef IMAGEVIEW_H
#define IMAGEVIEW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QtWidgets>
#include <QWidget>

class ImageView : public QGraphicsView
{
public:
    ImageView(QWidget* parent = 0);
    ~ImageView();
protected:
    virtual void wheelEvent(QWheelEvent *event);
};

#endif // IMAGEVIEW_H
