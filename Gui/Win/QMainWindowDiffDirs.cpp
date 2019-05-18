#include "QMainWindowDiffDirs.h"
#include "ui_QMainWindowDiffDirs.h"

QMainWindowDiffDirs::QMainWindowDiffDirs(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::QMainWindowDiffDirs)
{
	ui->setupUi(this);
}

QMainWindowDiffDirs::~QMainWindowDiffDirs()
{
	delete ui;
}

// ======================================================================

// ======================================================================
//  public                       
// ======================================================================

/**
	* @brief  Init main window
	* @param  
	* @retval 
	*/
void QMainWindowDiffDirs::init()
{
	
}

// ======================================================================

/**
	* @brief  Show main window
	* @param  
	* @retval 
	*/
void QMainWindowDiffDirs::show()
{
	QMainWindow::show();
}

// ======================================================================

