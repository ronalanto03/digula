#ifndef SIGNAL_H
#define SIGNAL_H
/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */
#include"baseconnector.h"

/**
 * @brief The Signal class
 */
class Signal : public BaseConnector
{
public:

    /**
     * @brief Signal
     */
    Signal();
    /**
     * @brief Signal
     */
    Signal(QString, QString);

    ~Signal();

    /**
    * @brief getName
    * @return QString name port or signal
    */
    QString getName();
    /**
    * @brief getTypeData
    * @return QString type data port or signal
    */

    QString getTypeData();

    /**
    * @brief setName
    * @param name
    */

     void setName(QString name);
     /**
     * @brief setTypeData
     * @param typeData
     */

     void setTypeData(QString typeData);

};

#endif // SIGNAL_H
