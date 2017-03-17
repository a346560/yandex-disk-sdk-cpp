#include <curl/curl.h>

#include <url/params.hpp>
#include <yadisk/client.hpp>
#include <boost/algorithm/string/join.hpp>

#include <sstream>
using std::stringstream;

#include "callbacks.hpp"
#include "quote.hpp"

int main () {
  
  url::path resource = "/2";
  auto info = client.unpublish(resource);
  auto href = info["href"].as_string();
  stdout 
}
