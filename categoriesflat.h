#ifndef CATEGORIESFLAT_H
#define CATEGORIESFLAT_H

#include <QDialog>

namespace Ui {
class categoriesFlat;
}

class categoriesFlat : public QDialog
{
    Q_OBJECT

public:
    explicit categoriesFlat(QWidget *parent = nullptr);
    ~categoriesFlat();

private:
    Ui::categoriesFlat *ui;
};

#endif // CATEGORIESFLAT_H
