#include <QtTest>
#include <QCoreApplication>

// add necessary includes here
#include  "../retro80/i8257.h"

class Test_i8257 : public QObject
{
    Q_OBJECT

public:
    Test_i8257();
    ~Test_i8257();

private slots:
    void test_init();

};

Test_i8257::Test_i8257()
{

}

Test_i8257::~Test_i8257()
{

}

void Test_i8257::test_init()
{

}



QTEST_MAIN(Test_i8257)

#include "Test_i8257.moc"
