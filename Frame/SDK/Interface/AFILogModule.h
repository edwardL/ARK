// -------------------------------------------------------------------------
//    @FileName         :    AFILogModule.h
//    @Author           :    Ark Game Tech
//    @Date             :    2012-12-15
//    @Module           :    AFILogModule
//
// -------------------------------------------------------------------------

#pragma once

#include "AFIModule.h"

class AFILogModule
    : public AFIModule
{

public:
    enum NF_LOG_LEVEL
    {
        NFI_LOG_DEBUG,        // debug调试信息(Debug和Release版本都会打印)
        NFI_LOG_INFO,         // info级别
        NFI_LOG_WARNING,      // warning级别
        NFI_LOG_ERROR,        // error级别
        NFI_LOG_FATAL,        // fatal级别
        NFI_LOG_MAX,
    };

    virtual void LogDebug(const AFGUID self, const std::string& strDesc, const std::string& strInfo = NULL_STR, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogInfo(const AFGUID self, const std::string& strDesc, const std::string& strInfo = NULL_STR, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogWarning(const AFGUID self, const std::string& strDesc, const std::string& strInfo = NULL_STR, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogError(const AFGUID self, const std::string& strDesc, const std::string& strInfo = NULL_STR, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogFatal(const AFGUID self, const std::string& strDesc, const std::string& strInfo = NULL_STR, const char* pFunc = "", int nLine = 0) = 0;

    virtual void LogDebug(const AFGUID self, const std::string& strDesc, const AFINT64 nInfo, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogInfo(const AFGUID self, const std::string& strDesc, const AFINT64 nInfo, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogWarning(const AFGUID self, const std::string& strDesc, const AFINT64 nInfo, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogError(const AFGUID self, const std::string& strDesc, const AFINT64 nInfo, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogFatal(const AFGUID self, const std::string& strDesc, const AFINT64 nInfo, const char* pFunc = "", int nLine = 0) = 0;

    virtual void LogDebug(const AFGUID self, const std::ostringstream& strDesc, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogInfo(const AFGUID self, const std::ostringstream& strDesc, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogWarning(const AFGUID self, const std::ostringstream& strDesc, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogError(const AFGUID self, const std::ostringstream& strDesc, const char* pFunc = "", int nLine = 0) = 0;
    virtual void LogFatal(const AFGUID self, const std::ostringstream& strDesc, const char* pFunc = "", int nLine = 0) = 0;

    virtual bool LogDebugFunctionDump(const AFGUID ident, const int nMsg, const std::string& strArg, const char* pFunc = "", int nLine = 0) = 0;
    virtual bool ChangeLogLevel(const std::string& strLevel, const std::string& strStatus) = 0;
    virtual bool SetSwitchingValue(const bool bValue) = 0;
};