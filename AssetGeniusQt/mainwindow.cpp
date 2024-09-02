#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // 创建菜单栏
    menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    // 创建文件菜单
    fileMenu = new QMenu(tr("&File"), this);
    menuBar->addMenu(fileMenu);

    // 创建文件菜单中的动作
    openAction = new QAction(tr("&Open..."), this);
    saveAction = new QAction(tr("&Save..."), this);
    exitAction = new QAction(tr("E&xit"), this);

    // 将动作添加到文件菜单
    fileMenu->addAction(openAction);
    fileMenu->addAction(saveAction);
    fileMenu->addSeparator(); // 添加分隔符
    fileMenu->addAction(exitAction);

    // 连接动作到槽
    connect(openAction, &QAction::triggered, this, &MainWindow::openFile);
    connect(exitAction, &QAction::triggered, this, &QCoreApplication::quit);
}

MainWindow::~MainWindow() {}

void MainWindow::openFile()
{
    // 在这里实现打开文件的逻辑
    // 例如，使用QFileDialog让用户选择一个文件
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("All Files (*.*)"));
    if (!fileName.isEmpty()) {

    }
}
