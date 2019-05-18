#ifndef QDIFFDIRS_H
#define QDIFFDIRS_H

#include <QObject>

#include "Collections/Collections.h"

class QDiffDirs : public QObject
{
	Q_OBJECT
public:
	explicit QDiffDirs(QObject *parent = 0);
	~QDiffDirs();
	// ======================================================================
	void dirsCompare(const SDirs &dirs);
	
};

#endif // QDIFFDIRS_H
