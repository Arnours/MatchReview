#ifndef UIMATCHFORM_H
#define UIMATCHFORM_H

#include <QDialog>

namespace Ui {
class UIMatchForm;
}

class UIMatchForm : public QDialog
{
    Q_OBJECT

public:
    explicit UIMatchForm(QWidget *parent = nullptr);
    ~UIMatchForm();
    void UIMatchForms();

private:
    Ui::UIMatchForm *ui;
};

#endif // UIMATCHFORM_H
