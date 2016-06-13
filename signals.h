#ifndef SIGNALS_H
#define SIGNALS_H
/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */
#include"baseconnector.h"

/**
 * @brief The Signals class
 */
class Signals : public BaseConnector
{
public:

    /**
     * @brief Signals
     */
    Signals();
    /**
     * @brief Signals
     */
    Signals(QString, QString);

    ~Signals();

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

#endif // SIGNALS_H
