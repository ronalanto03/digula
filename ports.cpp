/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */
#include "ports.h"
#include <QString>


/**
 * @brief Ports::Ports
 */
Ports::Ports():BaseConnector()
{
}
/**
 * @brief Ports::Ports
 * @param name
 * @param t
 * @param typeData
 */
Ports::Ports(QString name,type t,QString typeData): BaseConnector(name,typeData)
{
    this->typePs=t;
}

Ports::~Ports()
{   }
/**
 * @brief Ports::getName
 * @return QString name port or signal
 */
QString Ports::getName(){
    return BaseConnector::getName();
}
/**
 * @brief Ports::getTypeData
 * @return QString typeData
 */
QString Ports::getTypeData(){
    return BaseConnector::getTypeData();
}

/**
 * @brief Ports::getType
 * @return enum type{sc_in,sc_out,_sc_inout ...}
 */

Ports::type Ports::getType()
{
    return this->typePs;
}
/**
 * @brief Ports::setName
 * @param name
 */
void Ports::setName(QString name)
{
    BaseConnector::setName(name);
}
/**
 * @brief Ports::setTypeData
 * @param typeData
 */
void Ports::setTypeData(QString typeData)
{
    BaseConnector::setTypeData(typeData);

}
/**
 * @brief Ports::setType
 * @param t
 */
void Ports::setType(type t)
{
    Ports::typePs=t;
}

