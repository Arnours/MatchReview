#ifndef UITEAMFORM_H
#define UITEAMFORM_H

#include <QDialog>

namespace Ui {
class UITeamForm;
}

class UITeamForm : public QDialog
{
    Q_OBJECT

public:
    explicit UITeamForm(QWidget *parent = nullptr);
    ~UITeamForm();

private:
    Ui::UITeamForm *ui;
};

#endif // UITEAMFORM_H
