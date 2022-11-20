#include "categoriesflat.h"
#include "ui_categoriesflat.h"

categoriesFlat::categoriesFlat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::categoriesFlat)
{
    ui->setupUi(this);
}

categoriesFlat::~categoriesFlat()
{
    delete ui;
}
