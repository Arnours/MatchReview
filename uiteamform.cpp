#include "uiteamform.h"
#include "ui_uiteamform.h"

UITeamForm::UITeamForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UITeamForm)
{
    ui->setupUi(this);
}

UITeamForm::~UITeamForm()
{
    delete ui;
}
