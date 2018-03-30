// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MOTION_QT_MOTIONADDRESSVALIDATOR_H
#define MOTION_QT_MOTIONADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class MotionAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MotionAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Motion address widget validator, checks for a valid motion address.
 */
class MotionAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MotionAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // MOTION_QT_MOTIONADDRESSVALIDATOR_H
