#include "uimatchform.h"
#include "ui_uimatchform.h"

UIMatchForm::UIMatchForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UIMatchForm)
{
    ui->setupUi(this);

}

UIMatchForm::~UIMatchForm()
{
    delete ui;
}

void UIMatchForm::UIMatchForms() {



}
