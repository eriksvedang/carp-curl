#include <stdbool.h>
#include <curl/curl.h>

bool Curl_Code__EQ_(CURLcode a, CURLcode b) {
    return a == b;
}
