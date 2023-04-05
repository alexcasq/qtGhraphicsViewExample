#include "interface.h"
#include "./ui_interface.h"

//------------------------------------------------------------------------------
/**
 * @brief interface::interface
 * @param parent
 */
interface::interface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::interface)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    ui->gv_image->setScene(scene);

    QSize size = ui->gv_image->size();
    gv_width = size.width();
    gv_height = size.height();

}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
/**
 * @brief interface::~interface
 */
interface::~interface()
{
    delete ui;
}
//------------------------------------------------------------------------------




//------------------------------------------------------------------------------
/**
 * @brief interface::on_pb_exit_clicked
 */
void interface::on_pb_exit_clicked()
{
    close();

} // exit click
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
/**
 * @brief interface::on_pb_loadImage_clicked
 */
void interface::on_pb_loadImage_clicked()
{
    fileName = QFileDialog::getOpenFileName(this,
                                            tr("Open Image"),
                                            ".",
                                            tr("Image Files (*.png *.jpg *.bmp)"));

    //---------------------------------------------------------------------------
    // load image in QImage and resize image in dependence the ui graphicsView gv
    QImage image(fileName);
    QSize newSize(gv_width, gv_height);
    QImage scaledImage = image.scaled(newSize);
    //---------------------------------------------------------------------------

    //---------------------------------------------------------------------------
    // Insert image in gv and visualaized
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(scaledImage));
    scene->addItem(item);
    ui->gv_image->show();
    //---------------------------------------------------------------------------


}
//------------------------------------------------------------------------------











