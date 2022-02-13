#ifndef MAININTERFACE_H
#define MAININTERFACE_H

#include <QMainWindow>

#include <QFile>
#include <qfiledialog.h>
#include <QInputDialog>
#include <QStringListModel>
#include <QAbstractItemView>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QMouseEvent>

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include <opencv4/opencv2//imgproc.hpp>
#include <opencv4/opencv2//highgui.hpp>
#include <opencv4/opencv2/opencv.hpp>


using namespace cv;
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class maininterface; }
QT_END_NAMESPACE

class maininterface : public QMainWindow
{
    Q_OBJECT

public:
    maininterface(QWidget *parent = nullptr);
    ~maininterface();

    QString fileName;
    QGraphicsScene* scene;
    //QGraphicsView* view;

private slots:
    void on_pb_loadImage_clicked();


    void on_pb_close_clicked();

private:
    Ui::maininterface *ui;



};


#endif // MAININTERFACE_H






