/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */
#include "signal.h"

/**
 * @brief Signal::Signal
 */
Signal::Signal():BaseConnector()
{
}
/**
 * @brief Signal::Signal
 * @param name
 * @param typeData
 */
Signal::Signal(QString name,QString typeData): BaseConnector(name,typeData)
{
}
/**
 * @brief Signal::~Signal Destroyer
 */
Signal::~Signal()
{   }

