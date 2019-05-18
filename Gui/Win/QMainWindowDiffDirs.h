#ifndef QMAINWINDOWDIFFDIRS_H
#define QMAINWINDOWDIFFDIRS_H

#include <QMainWindow>

#include "Collections/Interfaces.h"

namespace Ui {
class QMainWindowDiffDirs;
}

class QMainWindowDiffDirs : public QMainWindow, public IGui
{
	Q_OBJECT
	
public:
	explicit QMainWindowDiffDirs(QWidget *parent = 0);
	~QMainWindowDiffDirs();
	// ======================================================================
	void init();
	void show();
	
private:
	Ui::QMainWindowDiffDirs *ui;
};

#endif // QMAINWINDOWDIFFDIRS_H
