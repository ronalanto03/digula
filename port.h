/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */

#ifndef PORT_H
#define PORT_H
#include <QString>
#include"baseconnector.h"
/**
 * @brief The Port class
 */
class Port : public BaseConnector

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
     * @brief Port
     */
    Port();
    /**
     * @brief Port
     */
    Port(QString,type, QString);

    ~Port();



     /**
     * @brief getType
     * @return QString type port or signal
     */

     type getType();

    /**
    * @brief setType
    * @param type
    */

    void setType(type);



};

#endif // PORT_H
