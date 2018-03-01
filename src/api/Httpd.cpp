#include <microhttpd.h>
#include <string.h>
#include "api/Api.h"
#include "api/Httpd.h"
#include "log/Log.h"
Httpd::Httpd(int port, const char *accessToken) :
    m_accessToken(accessToken),
    m_port(port),
    m_daemon(nullptr)
{}
bool Httpd::start(){return 0;}
int Httpd::auth(const char *header){return 0;}
int Httpd::done(MHD_Connection *connection, int status, MHD_Response *rsp){return 0;}
int Httpd::handler(void *cls, struct MHD_Connection *connection, const char *url, const char *method, const char *version, const char *upload_data, size_t *upload_data_size, void **con_cls){return 0;}
