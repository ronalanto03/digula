/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */
#include "port.h"
#include <QString>


/**
 * @brief Port::Port
 */
Port::Port():BaseConnector()
{
}
/**
 * @brief Port::Port
 * @param name
 * @param t
 * @param typeData
 */
Port::Port(QString name,type t,QString typeData): BaseConnector(name,typeData), typePs(t)
{

}

Port::~Port()
{   }


/**
 * @brief Port::getType
 * @return enum type{sc_in,sc_out,_sc_inout ...}
 */

Port::type Port::getType()
{
    return this->typePs;
}

/**
 * @brief Port::setType
 * @param t
 */
void Port::setType(type t)
{
    Port::typePs=t;
}

