/*
 * @Author: weick
 * @Date: 2024-05-26 08:30:54
 * @Last Modified by: weick
 * @Last Modified time: 2024-08-06 00:36:26
 */

#include "mainwindow.h"
#include <QVBoxLayout>
#include <QPushbutton>
#include <QMap>
#include "../awidget/inc/aflowlayout.h"
// #include "qtwidget/painter.h"

using QCoreDemo = enum {
    _QCoreDemo000 = 0,
    _QCoreDemo111,
    _QCoreDemo222,
    _QCoreDemo333,
    _QCoreDemo444,
    _QCoreDemo555,
    _QCoreDemo666,
    _QCoreDemo777,
    _QCoreDemo888,
    _QCoreDemo999,
};

using QWidgetDemo = enum {
    _QWidgetDemo000 = 0,
    _QWidgetDemo111,
    _QWidgetDemo222,
    _QWidgetDemo333,
    _QWidgetDemo444,
    _QWidgetDemo555,
    _QWidgetDemo666,
    _QWidgetDemo777,
    _QWidgetDemo888,
    _QWidgetDemo999,
};

using QGuiDemo = enum {
    _QGuiDemo000 = 0,
    _QGuiDemo111,
    _QGuiDemo222,
    _QGuiDemo333,
    _QGuiDemo444,
    _QGuiDemo555,
    _QGuiDemo666,
    _QGuiDemo777,
    _QGuiDemo888,
    _QGuiDemo999,
};

using QmlDemo = enum {
    _QmlDemo000 = 0,
    _QmlDemo111,
    _QmlDemo222,
    _QmlDemo333,
    _QmlDemo444,
    _QmlDemo555,
    _QmlDemo666,
    _QmlDemo777,
    _QmlDemo888,
    _QmlDemo999,
};

using ACoreDemo = enum {
    _ACoreDemo000 = 0,
    _ACoreDemo111,
    _ACoreDemo222,
    _ACoreDemo333,
    _ACoreDemo444,
    _ACoreDemo555,
    _ACoreDemo666,
    _ACoreDemo777,
    _ACoreDemo888,
    _ACoreDemo999,
};

using AWidgetDemo = enum {
    _AWidgetDemo000 = 0,
    _AWidgetDemo111,
    _AWidgetDemo222,
    _AWidgetDemo333,
    _AWidgetDemo444,
    _AWidgetDemo555,
    _AWidgetDemo666,
    _AWidgetDemo777,
    _AWidgetDemo888,
    _AWidgetDemo999,
};

using AGuiDemo = enum {
    _AGuiDemo000 = 0,
    _AGuiDemo111,
    _AGuiDemo222,
    _AGuiDemo333,
    _AGuiDemo444,
    _AGuiDemo555,
    _AGuiDemo666,
    _AGuiDemo777,
    _AGuiDemo888,
    _AGuiDemo999,
};

using AmlDemo = enum {
    _AmlDemo000 = 0,
    _AmlDemo111,
    _AmlDemo222,
    _AmlDemo333,
    _AmlDemo444,
    _AmlDemo555,
    _AmlDemo666,
    _AmlDemo777,
    _AmlDemo888,
    _AmlDemo999,
};

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent) {
    createUi();
    sigConnect();
}

MainWindow::~MainWindow() {
}

void MainWindow::sigConnect() {
    // connect(painter_btn_, &QPushButton::clicked, this, &MainWindow::painterShow);
    // connect(tab_btn_, &QPushButton::clicked, this, &MainWindow::tabShow);
    // connect(translucent_btn_, &QPushButton::clicked, this, &MainWindow::translucentShow);
}

void MainWindow::createUi() {
    // setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    setMinimumSize(1096, 680);
    auto *layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);

    tab_widget_ = new QTabWidget();
    layout->addWidget(tab_widget_);

    tab_test_widget_ = new QTabWidget();

    tab_test_qcore_widget_ = new QWidget();
    tab_test_qwidget_widget_ = new QWidget();
    tab_test_qgui_widget_ = new QWidget();
    tab_test_qml_widget_ = new QWidget();

    tab_acore_widget_ = new QWidget();
    tab_awidget_widget_ = new QWidget();
    tab_agui_widget_ = new QWidget();
    tab_aml_widget_ = new QWidget();

    tab_widget_->addTab(tab_test_widget_, "test");
    tab_test_widget_->addTab(tab_test_qcore_widget_, "qcore");
    tab_test_widget_->addTab(tab_test_qwidget_widget_, "qwidget");
    tab_test_widget_->addTab(tab_test_qgui_widget_, "qgui");
    tab_test_widget_->addTab(tab_test_qml_widget_, "qml");

    tab_widget_->addTab(tab_acore_widget_, "acore");
    tab_widget_->addTab(tab_awidget_widget_, "awidget");
    tab_widget_->addTab(tab_agui_widget_, "agui");
    tab_widget_->addTab(tab_aml_widget_, "aml");

    setQCoreDemoBtns(tab_test_qcore_widget_);
    setQWidgetDemoBtns(tab_test_qwidget_widget_);
    setQGuiDemoBtns(tab_test_qgui_widget_);
    setQmlDemoBtns(tab_test_qml_widget_);

    setACoreDemoBtns(tab_acore_widget_);
    setAWidgetDemoBtns(tab_awidget_widget_);
    setAGuiDemoBtns(tab_agui_widget_);
    setAmlDemoBtns(tab_aml_widget_);

    // painter_btn_ = new QPushButton(this);
    // painter_btn_->setFixedSize(100, 32);
    // painter_btn_->setText("painter test");
    // layout->addWidget(painter_btn_);
    // painter_widget_ = new PainterWidget();


    // tab_btn_ = new QPushButton(this);
    // tab_btn_->setFixedSize(100, 32);
    // tab_btn_->setText("tab test");
    // layout->addWidget(tab_btn_);
    // tab_widget_ = new TabWidget();

    // translucent_btn_ = new QPushButton(this);
    // translucent_btn_->setFixedSize(100, 32);
    // translucent_btn_->setText("translucent test");
    // layout->addWidget(translucent_btn_);
    // translucent_widget_ = new TranslucentBackgroundWidget();
}

void MainWindow::setQCoreDemoBtns(QWidget *w) {
    auto testDemoFlowLayout = new AFlowLayout(w, 4, 4, 4);
    QMap<int, QString> testDemoMap;
    testDemoMap.insert(QCoreDemo::_QCoreDemo000, "000");
    testDemoMap.insert(QCoreDemo::_QCoreDemo111, "111");
    testDemoMap.insert(QCoreDemo::_QCoreDemo222, "222");
    testDemoMap.insert(QCoreDemo::_QCoreDemo333, "333");
    testDemoMap.insert(QCoreDemo::_QCoreDemo444, "444");
    testDemoMap.insert(QCoreDemo::_QCoreDemo555, "555");
    testDemoMap.insert(QCoreDemo::_QCoreDemo666, "666");
    testDemoMap.insert(QCoreDemo::_QCoreDemo777, "777");
    testDemoMap.insert(QCoreDemo::_QCoreDemo888, "888");
    testDemoMap.insert(QCoreDemo::_QCoreDemo999, "999");

    QMap<int, QString>::Iterator iter;
    for (iter = testDemoMap.begin(); iter != testDemoMap.end(); ++iter) {
        QPushButton *btn = new QPushButton(this);
        btn->setFixedSize(160, 24);
        btn->setText(iter.value());
        btn->setProperty("qcore_id", iter.key());
        connect(btn, &QPushButton::clicked, this, [btn]() {
            int id = btn->property("qcore_id").toInt();
        });
        testDemoFlowLayout->addWidget(btn);
    }
}

void MainWindow::setQWidgetDemoBtns(QWidget *w) {
    auto testDemoFlowLayout = new AFlowLayout(w, 4, 4, 4);
    QMap<int, QString> testDemoMap;
    testDemoMap.insert(QWidgetDemo::_QWidgetDemo000, "000");
    testDemoMap.insert(QWidgetDemo::_QWidgetDemo111, "111");
    testDemoMap.insert(QWidgetDemo::_QWidgetDemo222, "222");
    testDemoMap.insert(QWidgetDemo::_QWidgetDemo333, "333");
    testDemoMap.insert(QWidgetDemo::_QWidgetDemo444, "444");
    testDemoMap.insert(QWidgetDemo::_QWidgetDemo555, "555");
    testDemoMap.insert(QWidgetDemo::_QWidgetDemo666, "666");
    testDemoMap.insert(QWidgetDemo::_QWidgetDemo777, "777");
    testDemoMap.insert(QWidgetDemo::_QWidgetDemo888, "888");
    testDemoMap.insert(QWidgetDemo::_QWidgetDemo999, "999");

    QMap<int, QString>::Iterator iter;
    for (iter = testDemoMap.begin(); iter != testDemoMap.end(); ++iter) {
        QPushButton *btn = new QPushButton(this);
        btn->setFixedSize(160, 24);
        btn->setText(iter.value());
        btn->setProperty("qwidget_id", iter.key());
        connect(btn, &QPushButton::clicked, this, [btn]() {
            int id = btn->property("qwidget_id").toInt();
        });
        testDemoFlowLayout->addWidget(btn);
    }
}

void MainWindow::setQGuiDemoBtns(QWidget *w) {
    auto testDemoFlowLayout = new AFlowLayout(w, 4, 4, 4);
    QMap<int, QString> testDemoMap;
    testDemoMap.insert(QGuiDemo::_QGuiDemo000, "000");
    testDemoMap.insert(QGuiDemo::_QGuiDemo111, "111");
    testDemoMap.insert(QGuiDemo::_QGuiDemo222, "222");
    testDemoMap.insert(QGuiDemo::_QGuiDemo333, "333");
    testDemoMap.insert(QGuiDemo::_QGuiDemo444, "444");
    testDemoMap.insert(QGuiDemo::_QGuiDemo555, "555");
    testDemoMap.insert(QGuiDemo::_QGuiDemo666, "666");
    testDemoMap.insert(QGuiDemo::_QGuiDemo777, "777");
    testDemoMap.insert(QGuiDemo::_QGuiDemo888, "888");
    testDemoMap.insert(QGuiDemo::_QGuiDemo999, "999");

    QMap<int, QString>::Iterator iter;
    for (iter = testDemoMap.begin(); iter != testDemoMap.end(); ++iter) {
        QPushButton *btn = new QPushButton(this);
        btn->setFixedSize(160, 24);
        btn->setText(iter.value());
        btn->setProperty("qgui_id", iter.key());
        connect(btn, &QPushButton::clicked, this, [btn]() {
            int id = btn->property("qgui_id").toInt();
        });
        testDemoFlowLayout->addWidget(btn);
    }
}

void MainWindow::setQmlDemoBtns(QWidget *w) {
    auto testDemoFlowLayout = new AFlowLayout(w, 4, 4, 4);
    QMap<int, QString> testDemoMap;
    testDemoMap.insert(QmlDemo::_QmlDemo000, "000");
    testDemoMap.insert(QmlDemo::_QmlDemo111, "111");
    testDemoMap.insert(QmlDemo::_QmlDemo222, "222");
    testDemoMap.insert(QmlDemo::_QmlDemo333, "333");
    testDemoMap.insert(QmlDemo::_QmlDemo444, "444");
    testDemoMap.insert(QmlDemo::_QmlDemo555, "555");
    testDemoMap.insert(QmlDemo::_QmlDemo666, "666");
    testDemoMap.insert(QmlDemo::_QmlDemo777, "777");
    testDemoMap.insert(QmlDemo::_QmlDemo888, "888");
    testDemoMap.insert(QmlDemo::_QmlDemo999, "999");

    QMap<int, QString>::Iterator iter;
    for (iter = testDemoMap.begin(); iter != testDemoMap.end(); ++iter) {
        QPushButton *btn = new QPushButton(this);
        btn->setFixedSize(160, 24);
        btn->setText(iter.value());
        btn->setProperty("qml_id", iter.key());
        connect(btn, &QPushButton::clicked, this, [btn]() {
            int id = btn->property("qml_id").toInt();
        });
        testDemoFlowLayout->addWidget(btn);
    }
}

void MainWindow::setACoreDemoBtns(QWidget *w) {
    auto aCoreDemoFlowLayout = new AFlowLayout(w, 4, 4, 4);
    QMap<int, QString> aCoreDemoMap;
    aCoreDemoMap.insert(ACoreDemo::_ACoreDemo000, "000");
    aCoreDemoMap.insert(ACoreDemo::_ACoreDemo111, "111");
    aCoreDemoMap.insert(ACoreDemo::_ACoreDemo222, "222");
    aCoreDemoMap.insert(ACoreDemo::_ACoreDemo333, "333");
    aCoreDemoMap.insert(ACoreDemo::_ACoreDemo444, "444");
    aCoreDemoMap.insert(ACoreDemo::_ACoreDemo555, "555");
    aCoreDemoMap.insert(ACoreDemo::_ACoreDemo666, "666");
    aCoreDemoMap.insert(ACoreDemo::_ACoreDemo777, "777");
    aCoreDemoMap.insert(ACoreDemo::_ACoreDemo888, "888");
    aCoreDemoMap.insert(ACoreDemo::_ACoreDemo999, "999");

    QMap<int, QString>::Iterator iter;
    for (iter = aCoreDemoMap.begin(); iter != aCoreDemoMap.end(); ++iter) {
        QPushButton *btn = new QPushButton(this);
        btn->setFixedSize(160, 24);
        btn->setText(iter.value());
        btn->setProperty("acore_id", iter.key());
        connect(btn, &QPushButton::clicked, this, [btn]() {
            int id = btn->property("acore_id").toInt();
        });
        aCoreDemoFlowLayout->addWidget(btn);
    }
}

void MainWindow::setAWidgetDemoBtns(QWidget *w) {
    auto aWidgetDemoFlowLayout = new AFlowLayout(w, 4, 4, 4);
    QMap<int, QString> aWidgetDemoMap;
    aWidgetDemoMap.insert(AWidgetDemo::_AWidgetDemo000, "000");
    aWidgetDemoMap.insert(AWidgetDemo::_AWidgetDemo111, "111");
    aWidgetDemoMap.insert(AWidgetDemo::_AWidgetDemo222, "222");
    aWidgetDemoMap.insert(AWidgetDemo::_AWidgetDemo333, "333");
    aWidgetDemoMap.insert(AWidgetDemo::_AWidgetDemo444, "444");
    aWidgetDemoMap.insert(AWidgetDemo::_AWidgetDemo555, "555");
    aWidgetDemoMap.insert(AWidgetDemo::_AWidgetDemo666, "666");
    aWidgetDemoMap.insert(AWidgetDemo::_AWidgetDemo777, "777");
    aWidgetDemoMap.insert(AWidgetDemo::_AWidgetDemo888, "888");
    aWidgetDemoMap.insert(AWidgetDemo::_AWidgetDemo999, "999");

    QMap<int, QString>::Iterator iter;
    for (iter = aWidgetDemoMap.begin(); iter != aWidgetDemoMap.end(); ++iter) {
        QPushButton *btn = new QPushButton(this);
        btn->setFixedSize(160, 24);
        btn->setText(iter.value());
        btn->setProperty("awidget_id", iter.key());
        connect(btn, &QPushButton::clicked, this, [btn]() {
            int id = btn->property("awidget_id").toInt();
        });
        aWidgetDemoFlowLayout->addWidget(btn);
    }
}

void MainWindow::setAGuiDemoBtns(QWidget *w) {
    auto aGuiDemoFlowLayout = new AFlowLayout(w, 4, 4, 4);
    QMap<int, QString> aGuiDemoMap;
    aGuiDemoMap.insert(AGuiDemo::_AGuiDemo000, "000");
    aGuiDemoMap.insert(AGuiDemo::_AGuiDemo111, "111");
    aGuiDemoMap.insert(AGuiDemo::_AGuiDemo222, "222");
    aGuiDemoMap.insert(AGuiDemo::_AGuiDemo333, "333");
    aGuiDemoMap.insert(AGuiDemo::_AGuiDemo444, "444");
    aGuiDemoMap.insert(AGuiDemo::_AGuiDemo555, "555");
    aGuiDemoMap.insert(AGuiDemo::_AGuiDemo666, "666");
    aGuiDemoMap.insert(AGuiDemo::_AGuiDemo777, "777");
    aGuiDemoMap.insert(AGuiDemo::_AGuiDemo888, "888");
    aGuiDemoMap.insert(AGuiDemo::_AGuiDemo999, "999");

    QMap<int, QString>::Iterator iter;
    for (iter = aGuiDemoMap.begin(); iter != aGuiDemoMap.end(); ++iter) {
        QPushButton *btn = new QPushButton(this);
        btn->setFixedSize(160, 24);
        btn->setText(iter.value());
        btn->setProperty("agui_id", iter.key());
        connect(btn, &QPushButton::clicked, this, [btn]() {
            int id = btn->property("agui_id").toInt();
        });
        aGuiDemoFlowLayout->addWidget(btn);
    }
}

void MainWindow::setAmlDemoBtns(QWidget *w) {
    auto aMLDemoFlowLayout = new AFlowLayout(w, 4, 4, 4);
    QMap<int, QString> aMLDemoMap;
    aMLDemoMap.insert(AmlDemo::_AmlDemo000, "000");
    aMLDemoMap.insert(AmlDemo::_AmlDemo111, "111");
    aMLDemoMap.insert(AmlDemo::_AmlDemo222, "222");
    aMLDemoMap.insert(AmlDemo::_AmlDemo333, "333");
    aMLDemoMap.insert(AmlDemo::_AmlDemo444, "444");
    aMLDemoMap.insert(AmlDemo::_AmlDemo555, "555");
    aMLDemoMap.insert(AmlDemo::_AmlDemo666, "666");
    aMLDemoMap.insert(AmlDemo::_AmlDemo777, "777");
    aMLDemoMap.insert(AmlDemo::_AmlDemo888, "888");
    aMLDemoMap.insert(AmlDemo::_AmlDemo999, "999");

    QMap<int, QString>::Iterator iter;
    for (iter = aMLDemoMap.begin(); iter != aMLDemoMap.end(); ++iter) {
        QPushButton *btn = new QPushButton(this);
        btn->setFixedSize(160, 24);
        btn->setText(iter.value());
        btn->setProperty("aml_id", iter.key());
        connect(btn, &QPushButton::clicked, this, [btn]() {
            int id = btn->property("aml_id").toInt();
        });
        aMLDemoFlowLayout->addWidget(btn);
    }
}

// void MainWindow::painterShow() {
//     painter_widget_->show();
// }

// void MainWindow::tabShow() {
//     tab_widget_->show();
// }

// void MainWindow::translucentShow() {
//     translucent_widget_->show();
// }