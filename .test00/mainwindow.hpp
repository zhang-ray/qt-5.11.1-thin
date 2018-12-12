#pragma once

#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:

	explicit MainWindow(QWidget *parent = 0) :QMainWindow(parent)
		, ui(new Ui::MainWindow)
	{
		ui->setupUi(this);
	}

	~MainWindow()
	{
		delete ui;
	}

private:
	Ui::MainWindow *ui = nullptr;

};

