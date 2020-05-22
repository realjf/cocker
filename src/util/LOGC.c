
#include "LOGC.h"

// 设置日志文件名
void SetLogcFile(char *format, ...)
{
    va_list valist;

    va_start(valist, format);
    SetLogcFileV();
    va_end(valist);

    return;
}

void SetLogcFileV( char *format , va_list valist )
{
	VSNPRINTF( _g_logc_pathfilename , sizeof(_g_logc_pathfilename)-1 , format , valist );
	_g_logc_pid = getpid() ;
	return;
}



