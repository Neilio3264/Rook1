#include "blackstone.h"
#include "ui_blackstone.h"

Blackstone::Blackstone(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Blackstone)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->IDInput->clear();
    ui->passwordInput->clear();
    flavorTown flav;
    for (std::string s: flav.flavorType){
        ui->comboBox->addItem(QString::fromStdString(s));
    }
    for (std::string s: flav.sweetType){
        ui->comboBox_2->addItem(QString::fromStdString(s));
    }
    addUser("Kesha", "$$$");
    computUser.at(0).points = 500;


}

Blackstone::~Blackstone()
{
    delete ui;
}

void Blackstone::setUser(int num){
    current = num;
}

void Blackstone::reset(){
    ui->IDInput->clear();
    ui->passwordInput->clear();
    ui->LogLable->setText("Enter your Information to Continue");
}

bool Blackstone::pushLogin(){
    // If the input matches both the user's data
    // Then, The next screen will show
    // Otherwise, a lable will tell the user that the login has failed
    bool hasLogin = false;
    std::string theName = ui->IDInput->text().toStdString();
    std::string thePword = ui->passwordInput->text().toStdString();
    for (int i = 0; i < computUser.size(); i++){
        UserData r = computUser.at(i);
        if (theName == r.getName() && thePword == r.getPword()){
            if (!hasLogin){

                setUser(i);
            }
            hasLogin = true;

        }
    }
    if (hasLogin){
            ui->LogLable->setText("Login Success");
    }else{
            ui->LogLable->setText("Login Failed");
        }
    return hasLogin;


}
void Blackstone::swap(int index1, int  index2){
    UserData temp = computUser.at(index1);
    computUser.at(index1) = computUser.at(index2);
    computUser.at(index2) = temp;
}

void Blackstone::sortBy(){
    int theSize = computUser.size();
    int i, j, imin = 1;
    for (i = 0; i <= theSize && imin; i++) {
        imin = 0;
        for (j = 0; j < theSize - 1; j++){
            if(computUser.at(j+1).points > computUser.at(j).points){
                swap(j, j+1);
                imin = 1;
            }
        }

        }
}

void Blackstone::displayList(){
    ui->listWidget->clear();

    for (UserData u : computUser){
        bool displayInfo = true;
        if (ui->lightCheck->isChecked() && (u.color >= 50)){
            displayInfo = false;
        }
        if (ui->DarkCheck->isChecked() && (u.color < 50)){
            displayInfo = false;
        }if (ui->hotCheck->isChecked() && u.temperature <= 200){
            displayInfo = false;
        }if (ui->coldCheck->isChecked() && u.temperature > 200){
            displayInfo = false;
        }if (ui->nodairyCheck->isChecked() && u.kind != "None"){
            displayInfo = false;
        }if (ui->skimCheck->isChecked() && u.kind != "Skim"){
            displayInfo = false;
        }if (ui->wholeCheck->isChecked() && u.kind != "Whole Fat"){
            displayInfo = false;
        }
        if (displayInfo == true){
            ui->listWidget->addItem(QString::fromStdString(u.getName()));
        }

    }

}

void Blackstone::addUser(std::string name, std::string pword){
    // Debugger
    computUser.push_back(UserData(name,pword));
}

void Blackstone::setValues(){
    ui->horizontalSlider->setValue(computUser.at(current).color);
    ui->horizontalSlider_2->setValue(computUser.at(current).temperature);
}

void Blackstone::setButtonPressed(){

}

void Blackstone::on_loginButton_clicked()
{
    if(pushLogin()){
        ui->stackedWidget->setCurrentIndex(1); // The Selection Screen
        std::string var = computUser.at(current).getName();
        QString qstr = QString::fromStdString(var);
        ui->userLable2->setText("Welcome " + qstr);
    }
}

void Blackstone::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    setValues();// The Combo Screen
    //ui->comboBox->setc
}

void Blackstone::on_ContinueBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3); // Wallet Screen
}

void Blackstone::on_pushButton_5_clicked()
{
    computUser.at(current).points += 1;
    ui->stackedWidget->setCurrentIndex(4); // Thank You Screen

    ui->stackedWidget->setCurrentIndex(0); // Back to login screen
    reset();
}

void Blackstone::on_ContinueBtn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Blackstone::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    reset();
}

void Blackstone::on_noneButton_clicked()
{
    computUser.at(current).kind = "None";
}

void Blackstone::on_skimButton_clicked()
{
    computUser.at(current).kind = "Skim";
}


void Blackstone::on_fatButton_clicked()
{
    computUser.at(current).kind = "Whole Fat";
}

void Blackstone::on_horizontalSlider_sliderMoved(int position)
{
    computUser.at(current).color = position;
}

void Blackstone::on_horizontalSlider_2_sliderMoved(int position)
{
    computUser.at(current).temperature = position;
}

void Blackstone::on_comboBox_activated(const QString &arg1)
{
    computUser.at(current).flavor = arg1.toStdString();
}


void Blackstone::on_comboBox_2_activated(const QString &arg1)
{
    computUser.at(current).sweet = arg1.toStdString();
}


void Blackstone::on_CoffeePop_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    sortBy();
    displayList();
}

void Blackstone::on_lightCheck_clicked()
{
    if(ui->lightCheck->isChecked()){
        if (ui->DarkCheck->isChecked()){
            ui->DarkCheck->toggle();
        }
    }
}

void Blackstone::on_DarkCheck_clicked()
{
    if (ui->DarkCheck->isChecked()){
         if(ui->lightCheck->isChecked()){
             ui->lightCheck->toggle();
         }
    }
}

void Blackstone::on_coldCheck_clicked()
{
    if (ui->coldCheck->isChecked()){
        if (ui->hotCheck->isChecked()){
            ui->hotCheck->toggle();
        }
    }

}


void Blackstone::on_hotCheck_clicked()
{
    if (ui->hotCheck->isChecked()){
        if (ui->coldCheck->isChecked()){
            ui->coldCheck->toggle();
        }
    }
}



void Blackstone::on_nodairyCheck_clicked()
{
    if(ui->nodairyCheck->isChecked()){
        if(ui->skimCheck->isChecked()){
            ui->skimCheck->toggle();
        }if(ui->wholeCheck->isChecked()){
            ui->wholeCheck->toggle();
        }
    }
}

void Blackstone::on_skimCheck_clicked()
{
    if(ui->skimCheck->isChecked()){
        if(ui->nodairyCheck->isChecked()){
            ui->nodairyCheck->toggle();
        }if(ui->wholeCheck->isChecked()){
            ui->wholeCheck->toggle();
        }
    }
}

void Blackstone::on_wholeCheck_clicked()
{
    if(ui->wholeCheck->isChecked()){
        if(ui->nodairyCheck->isChecked()){
            ui->nodairyCheck->toggle();
        }if(ui->skimCheck->isChecked()){
            ui->skimCheck->toggle();
        }
    }
}

void Blackstone::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Blackstone::on_pushButton_clicked()
{
    displayList();
}

void Blackstone::on_listWidget_itemClicked(QListWidgetItem *item)
{
    //
    ui->stackedWidget->setCurrentIndex(3);
}
