#include "Response.h"

Response::Response() {
    this->header = "";
    this->body = "";
}

Response::~Response() {}

const char *Response::getHeader() {
    return this->header;
}

const char *Response::getBody() {
    return this->body;
}

void Response::setHeader(const char* header) {
    this->header = header;
}

void Response::setBody(const char* body) {
    this->body = body;
}

void Response::setErrorBody(const char* errorDetails) {
    string body = "{\"successful\":false,\"error\":\"" + string(errorDetails) + "\"}";
    this->body = body.c_str();
}

void Response::setSuccessfulBody() {
    string body = "{\"successful\":true\"}";
    this->body = body.c_str();
}

void Response::setSuccessfulHeader() {
    this->header = "HTTP/1.1 200 OK\r\nTransfer-Encoding: chunked\r\n\r\n";
}

void Response::setBadRequestHeader() {
    this->header = "HTTP/1.1 400 Bad Request\r\nTransfer-Encoding: chunked\r\n\r\n";
}

void Response::setNotFoundHeader() {
    this->header = "HTTP/1.1 404 Not Found\r\nTransfer-Encoding: chunked\r\n\r\n";
}

void Response::setNotImplementedHeader() {
    this->header = "HTTP/1.0 501 Not Implemented\r\n"
            "Content-Length: 0\r\n\r\n";
}
