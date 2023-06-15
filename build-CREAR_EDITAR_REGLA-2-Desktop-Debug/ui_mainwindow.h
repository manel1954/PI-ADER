/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lineEdit_active;
    QLineEdit *lineEdit_master;
    QLineEdit *lineEdit_callsign;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_reflector;
    QLineEdit *lineEdit_ip;
    QLineEdit *lineEdit_puerto;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_options;
    QLineEdit *lineEdit_tgt;
    QLineEdit *lineEdit_tgs;
    QLineEdit *lineEdit_tgc;
    QLineEdit *lineEdit_tgd;
    QLineEdit *lineEdit_rxf;
    QLineEdit *lineEdit_txf;
    QLineEdit *lineEdit_latitud;
    QLineEdit *lineEdit_longitud;
    QLineEdit *lineEdit_ciudad;
    QLineEdit *lineEdit_url;
    QPushButton *pushButton_crea_edita_regla;
    QLabel *label_by_ea3eiz;
    QPushButton *pushButton_salir;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(626, 524);
        MainWindow->setMinimumSize(QSize(626, 524));
        MainWindow->setMaximumSize(QSize(626, 528));
        MainWindow->setSizeIncrement(QSize(537, 568));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#000;\n"
"color#fff;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(62, 18, 497, 26));
        label->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label->setAlignment(Qt::AlignCenter);
        lineEdit_active = new QLineEdit(centralWidget);
        lineEdit_active->setObjectName(QString::fromUtf8("lineEdit_active"));
        lineEdit_active->setGeometry(QRect(400, 288, 159, 26));
        lineEdit_active->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_active->setAlignment(Qt::AlignCenter);
        lineEdit_master = new QLineEdit(centralWidget);
        lineEdit_master->setObjectName(QString::fromUtf8("lineEdit_master"));
        lineEdit_master->setGeometry(QRect(143, 61, 159, 26));
        lineEdit_master->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_master->setAlignment(Qt::AlignCenter);
        lineEdit_callsign = new QLineEdit(centralWidget);
        lineEdit_callsign->setObjectName(QString::fromUtf8("lineEdit_callsign"));
        lineEdit_callsign->setGeometry(QRect(400, 61, 159, 26));
        lineEdit_callsign->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_callsign->setAlignment(Qt::AlignCenter);
        lineEdit_id = new QLineEdit(centralWidget);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(143, 99, 159, 26));
        lineEdit_id->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_id->setAlignment(Qt::AlignCenter);
        lineEdit_reflector = new QLineEdit(centralWidget);
        lineEdit_reflector->setObjectName(QString::fromUtf8("lineEdit_reflector"));
        lineEdit_reflector->setGeometry(QRect(400, 99, 159, 26));
        lineEdit_reflector->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_reflector->setAlignment(Qt::AlignCenter);
        lineEdit_ip = new QLineEdit(centralWidget);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setGeometry(QRect(143, 137, 159, 26));
        lineEdit_ip->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_ip->setAlignment(Qt::AlignCenter);
        lineEdit_puerto = new QLineEdit(centralWidget);
        lineEdit_puerto->setObjectName(QString::fromUtf8("lineEdit_puerto"));
        lineEdit_puerto->setGeometry(QRect(400, 175, 159, 26));
        lineEdit_puerto->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_puerto->setAlignment(Qt::AlignCenter);
        lineEdit_password = new QLineEdit(centralWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(143, 175, 159, 26));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;\n"
""));
        lineEdit_password->setAlignment(Qt::AlignCenter);
        lineEdit_options = new QLineEdit(centralWidget);
        lineEdit_options->setObjectName(QString::fromUtf8("lineEdit_options"));
        lineEdit_options->setGeometry(QRect(143, 213, 418, 26));
        lineEdit_options->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_options->setAlignment(Qt::AlignCenter);
        lineEdit_tgt = new QLineEdit(centralWidget);
        lineEdit_tgt->setObjectName(QString::fromUtf8("lineEdit_tgt"));
        lineEdit_tgt->setGeometry(QRect(400, 137, 159, 26));
        lineEdit_tgt->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_tgt->setAlignment(Qt::AlignCenter);
        lineEdit_tgs = new QLineEdit(centralWidget);
        lineEdit_tgs->setObjectName(QString::fromUtf8("lineEdit_tgs"));
        lineEdit_tgs->setGeometry(QRect(143, 288, 159, 26));
        lineEdit_tgs->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_tgs->setAlignment(Qt::AlignCenter);
        lineEdit_tgc = new QLineEdit(centralWidget);
        lineEdit_tgc->setObjectName(QString::fromUtf8("lineEdit_tgc"));
        lineEdit_tgc->setGeometry(QRect(143, 251, 159, 26));
        lineEdit_tgc->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_tgc->setAlignment(Qt::AlignCenter);
        lineEdit_tgd = new QLineEdit(centralWidget);
        lineEdit_tgd->setObjectName(QString::fromUtf8("lineEdit_tgd"));
        lineEdit_tgd->setGeometry(QRect(400, 251, 159, 26));
        lineEdit_tgd->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_tgd->setAlignment(Qt::AlignCenter);
        lineEdit_rxf = new QLineEdit(centralWidget);
        lineEdit_rxf->setObjectName(QString::fromUtf8("lineEdit_rxf"));
        lineEdit_rxf->setGeometry(QRect(143, 326, 159, 26));
        lineEdit_rxf->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_rxf->setAlignment(Qt::AlignCenter);
        lineEdit_txf = new QLineEdit(centralWidget);
        lineEdit_txf->setObjectName(QString::fromUtf8("lineEdit_txf"));
        lineEdit_txf->setGeometry(QRect(400, 326, 159, 26));
        lineEdit_txf->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_txf->setAlignment(Qt::AlignCenter);
        lineEdit_latitud = new QLineEdit(centralWidget);
        lineEdit_latitud->setObjectName(QString::fromUtf8("lineEdit_latitud"));
        lineEdit_latitud->setGeometry(QRect(143, 364, 159, 26));
        lineEdit_latitud->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_latitud->setAlignment(Qt::AlignCenter);
        lineEdit_longitud = new QLineEdit(centralWidget);
        lineEdit_longitud->setObjectName(QString::fromUtf8("lineEdit_longitud"));
        lineEdit_longitud->setGeometry(QRect(400, 364, 159, 26));
        lineEdit_longitud->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_longitud->setAlignment(Qt::AlignCenter);
        lineEdit_ciudad = new QLineEdit(centralWidget);
        lineEdit_ciudad->setObjectName(QString::fromUtf8("lineEdit_ciudad"));
        lineEdit_ciudad->setGeometry(QRect(143, 402, 418, 26));
        lineEdit_ciudad->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_ciudad->setAlignment(Qt::AlignCenter);
        lineEdit_url = new QLineEdit(centralWidget);
        lineEdit_url->setObjectName(QString::fromUtf8("lineEdit_url"));
        lineEdit_url->setGeometry(QRect(143, 439, 418, 26));
        lineEdit_url->setStyleSheet(QString::fromUtf8("background:#272727;\n"
"color:#e8e8e8;\n"
"border:1px solid #fff;\n"
"border-radius:3px;"));
        lineEdit_url->setAlignment(Qt::AlignCenter);
        pushButton_crea_edita_regla = new QPushButton(centralWidget);
        pushButton_crea_edita_regla->setObjectName(QString::fromUtf8("pushButton_crea_edita_regla"));
        pushButton_crea_edita_regla->setGeometry(QRect(172, 478, 201, 32));
        QFont font;
        font.setPointSize(11);
        pushButton_crea_edita_regla->setFont(font);
        pushButton_crea_edita_regla->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"background-color: rgb(0, 170, 0);\n"
"color:#fff;"));
        label_by_ea3eiz = new QLabel(centralWidget);
        label_by_ea3eiz->setObjectName(QString::fromUtf8("label_by_ea3eiz"));
        label_by_ea3eiz->setGeometry(QRect(72, 478, 91, 24));
        QFont font1;
        font1.setPointSize(12);
        label_by_ea3eiz->setFont(font1);
        label_by_ea3eiz->setStyleSheet(QString::fromUtf8("color: #fff;;"));
        label_by_ea3eiz->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_salir = new QPushButton(centralWidget);
        pushButton_salir->setObjectName(QString::fromUtf8("pushButton_salir"));
        pushButton_salir->setGeometry(QRect(382, 478, 181, 32));
        pushButton_salir->setFont(font);
        pushButton_salir->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_salir->setFocusPolicy(Qt::NoFocus);
        pushButton_salir->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"background-color: rgb(255, 85, 0);\n"
"color:#fff;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(62, 59, 242, 30));
        label_2->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(62, 211, 501, 30));
        label_3->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(311, 59, 250, 30));
        label_4->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(62, 400, 501, 30));
        label_5->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(62, 437, 501, 30));
        label_6->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(62, 97, 242, 30));
        label_7->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(62, 135, 242, 30));
        label_8->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(62, 173, 242, 30));
        label_9->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(62, 249, 242, 30));
        label_10->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(62, 286, 242, 30));
        label_11->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(62, 324, 242, 30));
        label_12->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(62, 362, 242, 30));
        label_13->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(311, 135, 250, 30));
        label_14->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(311, 97, 250, 30));
        label_15->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(312, 173, 250, 30));
        label_16->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(312, 324, 250, 30));
        label_17->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(312, 362, 250, 30));
        label_18->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(312, 286, 250, 30));
        label_19->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(312, 249, 250, 30));
        label_20->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #000;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        pushButton_crea_edita_regla->raise();
        label_by_ea3eiz->raise();
        pushButton_salir->raise();
        label_2->raise();
        lineEdit_master->raise();
        label_3->raise();
        label_4->raise();
        lineEdit_callsign->raise();
        lineEdit_options->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_ciudad->raise();
        lineEdit_url->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        lineEdit_id->raise();
        lineEdit_ip->raise();
        lineEdit_password->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        lineEdit_rxf->raise();
        lineEdit_latitud->raise();
        lineEdit_tgc->raise();
        lineEdit_tgs->raise();
        label_14->raise();
        lineEdit_tgt->raise();
        label_15->raise();
        lineEdit_reflector->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        lineEdit_puerto->raise();
        lineEdit_txf->raise();
        lineEdit_longitud->raise();
        lineEdit_tgd->raise();
        lineEdit_active->raise();
        QWidget::setTabOrder(lineEdit_master, lineEdit_callsign);
        QWidget::setTabOrder(lineEdit_callsign, lineEdit_id);
        QWidget::setTabOrder(lineEdit_id, lineEdit_reflector);
        QWidget::setTabOrder(lineEdit_reflector, lineEdit_ip);
        QWidget::setTabOrder(lineEdit_ip, lineEdit_tgt);
        QWidget::setTabOrder(lineEdit_tgt, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, lineEdit_puerto);
        QWidget::setTabOrder(lineEdit_puerto, lineEdit_options);
        QWidget::setTabOrder(lineEdit_options, lineEdit_tgc);
        QWidget::setTabOrder(lineEdit_tgc, lineEdit_tgd);
        QWidget::setTabOrder(lineEdit_tgd, lineEdit_tgs);
        QWidget::setTabOrder(lineEdit_tgs, lineEdit_active);
        QWidget::setTabOrder(lineEdit_active, lineEdit_rxf);
        QWidget::setTabOrder(lineEdit_rxf, lineEdit_txf);
        QWidget::setTabOrder(lineEdit_txf, lineEdit_latitud);
        QWidget::setTabOrder(lineEdit_latitud, lineEdit_longitud);
        QWidget::setTabOrder(lineEdit_longitud, lineEdit_ciudad);
        QWidget::setTabOrder(lineEdit_ciudad, lineEdit_url);
        QWidget::setTabOrder(lineEdit_url, pushButton_crea_edita_regla);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CREAR \303\263 EDITAR REGLA", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CREAR \303\263 EDITAR REGLA-2", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_active->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>P para conexi\303\263n Permanente / D para conexi\303\263n a demanda</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_callsign->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Indicativo</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_id->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Id de 9 d\303\255gitos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_reflector->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Nombre de la regla ej: DMR+4370</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_ip->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Direcci\303\263n ip</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_puerto->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Para DMR+=55555  para BM=62031</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_password->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Para DMR+=PASSWORD para BM el tuyo personal</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_options->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Para DMR+ ej: StartRef=4370;RelinkTime=15;</p><p><span style=\" color:#ff0000;\">Para otros sistemas dejar esta casilla vacia</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_tgt->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>TG para transmitir ej: 4370</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_tgs->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>TG de salida , para DMR+ = 9  para BM el que queramos</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_tgc->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>TG para conectar ej: 4370</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_tgd->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>TG para desconectar ej: 84370</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_rxf->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Frecuencia con 9 d\303\255gitos y sin punto</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_txf->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Frecuencia con 9 d\303\255gitos y sin punto</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_ciudad->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Tu Ciudad</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_url->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Tu Web preferida</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_crea_edita_regla->setText(QCoreApplication::translate("MainWindow", "CONFIRMAR y GRABAR", nullptr));
        label_by_ea3eiz->setText(QCoreApplication::translate("MainWindow", "by EA3EIZ", nullptr));
        pushButton_salir->setText(QCoreApplication::translate("MainWindow", "SALIR SIN CAMBIOS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Master:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Options:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Callsign:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "URL:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Id:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Address:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "TG co:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "TG Sa:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "RXF:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Latitud:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "TG tr:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "N. Regla:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Puerto:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "TXF:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Longitud:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "D \303\263 P:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "TG dc:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
