#ifndef BLACKSTONE_H
#define BLACKSTONE_H

#include <QMainWindow>
#include <QPushButton>
#include <QListWidgetItem>
#include "userdata.h"
#include "flavortown.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Blackstone; }
QT_END_NAMESPACE

class Blackstone : public QMainWindow
{
    Q_OBJECT

public:
    int current;
    Blackstone(QWidget *parent = nullptr);
    ~Blackstone();
    std::vector<UserData> computUser;
    void addUser(std::string, std::string);
    void setUser(int);
    void reset();
    void setValues();
    void setButtonPressed();
    void swap(int, int);
    void displayList();

private slots:
    bool pushLogin();
    void sortBy();


    void on_loginButton_clicked();

    void on_pushButton_2_clicked();

    void on_ContinueBtn_clicked();

    void on_pushButton_5_clicked();


    void on_ContinueBtn_2_clicked();

    void on_pushButton_6_clicked();

    void on_noneButton_clicked();

    void on_skimButton_clicked();

    void on_fatButton_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_horizontalSlider_2_sliderMoved(int position);

    void on_comboBox_activated(const QString &arg1);


    void on_comboBox_2_activated(const QString &arg1);


    void on_CoffeePop_clicked();

    void on_lightCheck_clicked();

    void on_DarkCheck_clicked();

    void on_coldCheck_clicked();

    void on_hotCheck_clicked();

    void on_nodairyCheck_clicked();

    void on_skimCheck_clicked();

    void on_wholeCheck_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::Blackstone *ui;
};
#endif // BLACKSTONE_H
