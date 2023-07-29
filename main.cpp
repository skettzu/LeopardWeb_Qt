// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QApplication>

#include "../connection.h"
#include "tableeditor.h"
#include "login.h"

//! [0]
int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    Login LB;
    LB.show();

    return app.exec();
    /*if (!createConnection())
        return 1;

    TableEditor editor("person");
    editor.show();
    return app.exec();
    */
}
//! [0]
