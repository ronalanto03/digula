/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */
#include "portssignals.h"
#include <QString>


/**
 * @brief PortsSignals::PortsSignals
 */
PortsSignals::PortsSignals()
{
    this->name="";
    this->typeData="";

}
/**
 * @brief PortsSignals::PortsSignals
 * @param name
 * @param t
 * @param typeData
 */
PortsSignals::PortsSignals(QString name,type t,QString typeData)
{
    this->name= name;
    this->typeData=typeData;
    this->typePs=t;


}

PortsSignals::~PortsSignals()
{   }
/**
 * @brief PortsSignals::getName
 * @return QString name port or signal
 */
QString PortsSignals::getName(){
    return this->name;
}
/**
 * @brief PortsSignals::getTypeData
 * @return QString typeData
 */
QString PortsSignals::getTypeData(){
    return this->typeData;
}

/**
 * @brief PortsSignals::getType
 * @return enum type{sc_in,sc_out,_sc_inout ...}
 */

PortsSignals::type PortsSignals::getType()
{
    return this->typePs;
}
/**
 * @brief PortsSignals::setName
 * @param name
 */
void PortsSignals::setName(QString name)
{
    this->name=name = name;
}
/**
 * @brief PortsSignals::setTypeData
 * @param typeData
 */
void PortsSignals::setTypeData(QString typeData)
{
    this->typeData = typeData;

}
/**
 * @brief PortsSignals::setType
 * @param t
 */
void PortsSignals::setType(type t)
{
    PortsSignals::typePs=t;
}

