#ifndef QMAINCLASS_H
#define QMAINCLASS_H

#include <QObject>

#include "Core/QSetupClass.h"

#include "Collections/Interfaces.h"
#include "DiffDirs/QDiffDirs.h"

class QMainClass : public QSetupClass
{
	Q_OBJECT

private:
	explicit QMainClass(int argc, char *argv[]);
	
// ======================================================================
	
public:
	~QMainClass();
	static void setArgs(int argc, char **argv);
	static QMainClass *getMainClass();
	// ======================================================================
	IGui *getGui() {return mGui;}
	QDiffDirs *getDiffDirs() {return mDiffDirs;}
	
// ======================================================================
	
protected:
	IGui *mGui;
	QDiffDirs *mDiffDirs;
	
protected:
	void makeSignalSlots();
	int setup();
	int start();
	
// ======================================================================
	
};

#endif // QMAINCLASS_H
