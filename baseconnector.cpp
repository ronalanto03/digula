/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */
#include "baseconnector.h"

/**
 * @brief BaseConnector::BaseConnector
 * \note initialisation data vacuum
 */
BaseConnector::BaseConnector()
{
    this->name="";
    this->typeData="";

}

/**
 * @brief BaseConnector copy contstuctor
 * @param name
 * @param typeData
 */

BaseConnector::BaseConnector(QString name, QString typeData){
    this->name=name;
    this->typeData=typeData;
}
/**
 * @brief BaseConnector::~BaseConnector Destroyer
 */

BaseConnector::~BaseConnector()
{    }
/**
 * @brief BaseConnector::getName
 * @return QString name data
 */
QString BaseConnector::getName()
{
    return this->name;
}
/**
 * @brief BaseConnector::getTypeData
 * @return QString type data
 */

QString BaseConnector::getTypeData()
{
    return this->typeData;
}
/**
 * @brief BaseConnector::setName Add name to the data
 * @param name
 */
void BaseConnector::setName(QString name)
{
    this->name=name;
}
/**
 * @brief BaseConnector::setTypeData Add type data
 * @param typeData
 */
void BaseConnector::setTypeData(QString typeData)
{
    this->typeData=typeData;
}
