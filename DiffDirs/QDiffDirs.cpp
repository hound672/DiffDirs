#include <QDebug>
#include <QDir>

#include "QDiffDirs.h"

// ======================================================================

QDiffDirs::QDiffDirs(QObject *parent) : QObject(parent)
{
	
}

// ======================================================================

QDiffDirs::~QDiffDirs()
{
	
}

// ======================================================================

// ======================================================================
//  public                        
// ======================================================================

/**
	* @brief  
	* @param  Start compare two dirs
	* @retval 
	*/
void QDiffDirs::dirsCompare(const SDirs &dirs)
{
	qInfo() << "Start compare. Dir1: " << dirs.mDir1
					<< ". Dir2: " << dirs.mDir2;
	
	QDir dir1(dirs.mDir1);
	QDir dir2(dirs.mDir2);
	
	if (!dir1.exists() || dir2.exists()) {
		qCritical() << "Error dirs";
		// TODO show error to user
		return;
	}
	
	qDebug() << dir1.exists();
	qDebug() << dir2.exists();
}

// ======================================================================
