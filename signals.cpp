/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */
#include "signals.h"

/**
 * @brief Signals::Signals
 */
Signals::Signals():BaseConnector()
{
}
/**
 * @brief Signals::Signals
 * @param name
 * @param typeData
 */
Signals::Signals(QString name,QString typeData): BaseConnector(name,typeData)
{
}

Signals::~Signals()
{   }
/**
 * @brief Signals::getName
 * @return QString name port or signal
 */
QString Signals::getName(){
    return BaseConnector::getName();
}
/**
 * @brief Signals::getTypeData
 * @return QString typeData
 */
QString Signals::getTypeData(){
    return BaseConnector::getTypeData();
}

/**
 * @brief Signals::setName
 * @param name
 */
void Signals::setName(QString name)
{
    BaseConnector::setName(name);
}
/**
 * @brief Signals::setTypeData
 * @param typeData
 */
void Signals::setTypeData(QString typeData)
{
    BaseConnector::setTypeData(typeData);

}
