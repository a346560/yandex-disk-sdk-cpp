#include 

int main () {
  
  url::path resource = "/2";
  auto info = client.publish(resource);
  auto href = info["href"].as_string();
  
}
