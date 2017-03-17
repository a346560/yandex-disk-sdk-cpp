#include <curl/curl.h>
#include <url/params.hpp>
#include <yadisk/client.hpp>
#include <boost/algorithm/string/join.hpp>
#include <sstream>
#include "callbacks.hpp"
#include "quote.hpp"

int main () {
  
  url::path resource = "existed_file";
  auto info = client.unpublish(resource);
  auto href = info["href"].as_string();
  cout << href << endl;
  
  url::path resource = "not_existed_file";
  auto info = client.unpublish(resource);
  auto code = info["error"].as_string();
  cout << code << endl;
  
  url::path resource = "existed_dir_no_full";
  auto info = client.unpublish(resource);
  auto code = info["error"].as_string();
  auto href = info["href"].as_string();
  cout << code << href <<endl;
  
}
