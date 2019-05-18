#include <QDebug>

#include "QMainClass.h"

#include "Gui/Win/QMainWindowDiffDirs.h"

// ======================================================================
static int sArgc;
static char **sArgv;
// ======================================================================

QMainClass::QMainClass(int argc, char *argv[]) : 
	QSetupClass(argc, argv)
{
}

// ======================================================================

QMainClass::~QMainClass()
{
	delete mGui;
	delete mDiffDirs;	
}

// ======================================================================

/**
	* @brief  Сохраняет переданые при запуске программы аргументы
	* @param  
	* @retval 
	*/
void QMainClass::setArgs(int argc, char **argv)
{
	sArgc = argc;
	sArgv = argv;
}

QMainClass *QMainClass::getMainClass()
{
	static QMainClass *mainClass = NULL;
	if (!mainClass) {
		mainClass = new QMainClass(sArgc, sArgv);
	}
	return mainClass;
}

// ======================================================================

// ======================================================================
//  protected                       
// ======================================================================

/**
	* @brief  Создает связку сигналов-слотов
	* @param  
	* @retval 
	*/
void QMainClass::makeSignalSlots()
{
	qDebug() << "Make signal slots";
}

// ======================================================================

/**
	* @brief  Инициализация компонентов для запуска приложения
	* @param  
	* @retval 
	*/
int QMainClass::setup()
{
	mGui = new QMainWindowDiffDirs();
	mDiffDirs = new QDiffDirs(this);
	
	return 1;
}

// ======================================================================

/**
	* @brief  Запуск приложения
	* @param  
	* @retval 
	*/
int QMainClass::start()
{
	mGui->show();
	
	// TODO TEMP DEBUG
	SDirs dirs = {
		"d:\\!temp\\DIRCOMPARE\\dir1\\",
		"d:\\!temp\\DIRCOMPARE\\dir2\\"
	};
	mDiffDirs->dirsCompare(dirs);
	
	return 1;
}

// ======================================================================
