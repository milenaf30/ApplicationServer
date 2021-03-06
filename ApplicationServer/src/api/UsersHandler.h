#ifndef APPLICATIONSERVER_USERSHANDLER_H
#define APPLICATIONSERVER_USERSHANDLER_H

#include "Handler.h"

class UsersHandler : public Handler {
public:
    UsersHandler();
    ~UsersHandler();

    Response* handlePostRequest(http_message* httpMessage);
    Response* handleGetRequest(http_message* httpMessage, string url);
    Response* handleDeleteRequest(http_message* httpMessage);
    Response* handlePutRequest(http_message* httpMessage);

private:
    string getUserId(string url);
};

#endif //APPLICATIONSERVER_USERSHANDLER_H
