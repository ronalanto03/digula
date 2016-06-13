/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */
#ifndef BASECONNECTOR_H
#define BASECONNECTOR_H
#include <QString>


/** \class BaseConnector include <QString>
 *@brief Class BaseConnector
 *
 */
class BaseConnector
{

private:
    /**
     * @brief name
     */
    QString name;

    /**
     * @brief typeData
     */

    QString typeData;



public:
    /**
     * @brief BaseConnector
     */
    BaseConnector();
    /**
     * @brief BaseConnector
     */
    BaseConnector(QString, QString);
    /**
      *@brief Destructor
      */
    ~BaseConnector();

    /**
     * @brief getName
     * @return QString name
     */
    QString getName();
    /**
     * @brief getTypeData
     * @return QString typeData
     */
    QString getTypeData();

    /**
     * @brief setName
     * @param QString name
     */
    void setName(QString name);
    /**
     * @brief setTypeData
     * @param typeData
     */
    void setTypeData(QString typeData);
};

#endif // BASECONNECTOR_H
