#include "AppUser_Message.h"

AppUser_Message::AppUser_Message(QObject *parent):EtherCAT_Message(parent)
{
    m_isAppRun = false;
    m_isHideRight = true;
    m_displayNum = 1024;
}

AppUser_Message::~AppUser_Message()
{

}
