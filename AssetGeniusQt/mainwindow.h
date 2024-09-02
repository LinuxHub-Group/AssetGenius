#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QCoreApplication>
#include <QFileDialog>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QAction *openAction;
    QAction *saveAction;
    QAction *exitAction;

private:
    void openFile();
};
#endif // MAINWINDOW_H
