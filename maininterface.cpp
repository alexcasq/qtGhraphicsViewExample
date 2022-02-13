#include "maininterface.h"
#include "ui_maininterface.h"

maininterface::maininterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::maininterface)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    ui->gv_image->setScene(scene);


}

maininterface::~maininterface()
{
    delete ui;
}

//------------------------------------------------------------------------------
/**
 * @brief maininterface::on_pb_loadImage_clicked
 */
void maininterface::on_pb_loadImage_clicked()
{
    fileName = QFileDialog::getOpenFileName(this,
        tr("Open Image"), ".", tr("Image Files (*.png *.jpg *.bmp)"));

    QImage image(fileName);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    scene->addItem(item);
    ui->gv_image->show();
}
//------------------------------------------------------------------------------




//------------------------------------------------------------------------------
/**
 * @brief maininterface::on_pb_close_clicked
 */
void maininterface::on_pb_close_clicked()
{
    close();
}
//------------------------------------------------------------------------------
