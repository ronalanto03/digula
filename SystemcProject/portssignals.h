/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */

#ifndef PORTSSIGNALS_H
#define PORTSSIGNALS_H
#include <QString>
/**
 * @brief The PortsSignals class
 */
class PortsSignals

{

public:
    enum  type {sc_in, sc_out, sc_inout};
        /**
       * @brief The type enum
       */


private:

    /**
     * \note Declaration Variables
     * @brief name
     * @brief type
     * @brief typeData
     *
     */

    QString name;

    QString typeData;

    type typePs;

public:

    /**
     * @brief PortsSignals
     */
    PortsSignals();
    /**
     * @brief PortsSignals
     */
    PortsSignals(QString,type, QString);

    ~PortsSignals();

    /**
    * @brief getName
    * @return QString name port or signal
    */
    QString getName();
    /**
    * @brief getType
    * @return QString type port or signal
    */

    QString getTypeData();

    /**
    * @brief setName
    * @param name
    */
    type getType();
    /**
    * @brief getTypeData
    * @return TypeData ports or signal
    */
    void setName(QString name);

    /**
    * @brief setType
    * @param type
    */

    void setType(type);

    /**
    * @brief setTypeData
    * @param typeData
    */

    void setTypeData(QString typeData);


};

#endif // PORTSSIGNALS_H
