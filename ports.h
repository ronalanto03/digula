/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */

#ifndef Ports_H
#define Ports_H
#include <QString>
#include"baseconnector.h"
/**
 * @brief The Ports class
 */
class Ports : public BaseConnector

{

public:
    enum  type {sc_in, sc_out, sc_inout};
        /**
       * @brief The type enum
       */


private:

    /**
     * \note Declaration Variables
     * @brief type
     */

    type typePs;

public:

    /**
     * @brief Ports
     */
    Ports();
    /**
     * @brief Ports
     */
    Ports(QString,type, QString);

    ~Ports();

    /**
    * @brief getName
    * @return QString name port or signal
    */
    QString getName();


    /**
    * @brief getTypeData
    * @return TypeData ports or signal
    */
    QString getTypeData();



     /**
     * @brief getType
     * @return QString type port or signal
     */

     type getType();
     /**
     * @brief setName
     * @param name
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

#endif // Ports_H
