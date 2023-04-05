#ifndef INTERFACE_H
#define INTERFACE_H

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

#include <opencv4/opencv2/imgproc.hpp>
#include <opencv4/opencv2/highgui.hpp>
#include <opencv4/opencv2/opencv.hpp>


using namespace cv;
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class interface; }
QT_END_NAMESPACE

class interface : public QMainWindow
{
    Q_OBJECT

public:
    interface(QWidget *parent = nullptr);
    ~interface();
    QString fileName;
    QGraphicsScene* scene;
    int gv_width;
    int gv_height;



private slots:
    void on_pb_exit_clicked();

    void on_pb_loadImage_clicked();

private:
    Ui::interface *ui;
};
#endif // INTERFACE_H
