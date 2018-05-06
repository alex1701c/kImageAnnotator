/*
 * Copyright (C) 2018 Damir Porobic <damir.porobic@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef KIMAGEANNOTATOR_MOVECOMMANDTEST
#define KIMAGEANNOTATOR_MOVECOMMANDTEST

#include <QtTest>

#include "../../../src/annotations/undo/MoveCommand.h"
#include "../../../src/annotations/items/AnnotationLine.h"


class MoveCommandTest : public QObject
{
Q_OBJECT

private slots:
    void TestRedo_Should_MoveItemToNewPosition();
    void TestUndo_Should_MoveItemToInitialPosition();
    void TestMergeWith_Should_TakeNewPositrionFromLastMoveCommand();
    void TestMergeWith_Should_KeepInitialPositionFromFirstMoveCommand();
    void TestMergeWith_Should_NotMergeMoveCommandsWhenItemsAreNotTheSame();
};

#endif //KIMAGEANNOTATOR_MOVECOMMANDTEST
