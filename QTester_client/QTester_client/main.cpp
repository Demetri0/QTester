#include <QtCore/QCoreApplication>

#include "SQLiteMgr.h"


int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

    QMap<QString,QString> data;		
    data["fUne"]  = "inteder";
    data["fDue"]  = "integer";
    data["fTree"] = "float";
    data["fQuatro"] = "nvarchar[20]";

    QString name("tt");	// ��� �������, ������� ���
	SQLiteMgr *db = new SQLiteMgr("", "", "", "");	
									/*path  - ���� ���� ���� ����������� � �������� �����*/
	QSqlQuery q;

	db->

	db->createTable(name, data); // ��� ������� �������
	
	for (auto i = 0; i < 8; i++)	// �������� ������
	{
		auto it = i * 2;
		auto it1 = i * 50;
		q = db->insert(name, QStringList({ "fUne", "fDue", "fTree", "fQuatro" }), 
			QStringList({QString::number(i), QString::number(it), QString::number(it1), QString::number(i)+" text" }));
	}
	q = db->select(name,QStringList({"*"})); // ������� ��������� ������
									   
	QSqlRecord rec = q.record(); // ������� ��� ������ � �������
	int			nFUne = 0;	 // ��������������� ����������
	QString		strFDue;
	QString		strFTree;
	QString		strFQuatro;

	

	if (q.isActive())
		qDebug() << "ACTIVE " << rec << "\n";  // ��������� ��� ������ ������ 

	qDebug() << "fUne" << "| " << "fDue" << "|"
		<< "fTree" << "|" << "fQuatro" << "| \n"; // ��������� �������


	q.first();		// �� ������ ������ � ������ ������
	while (q.next()) {	  // ������� ���� ������ �� ����������
		
		nFUne =		 q.value(0).toInt();
		strFDue =	 q.value(1).toString();
		strFTree =	 q.value(2).toString();
		strFQuatro = q.value(3).toString();

		qDebug() << nFUne << "| " << strFDue << "|"
			<< strFTree << "|" << strFQuatro << "|  next\n"; // ��������������� ����� ������
	}
  
	return  /*0;*/ a.exec(); // �� ���� ��� � ���� ���������
}								
