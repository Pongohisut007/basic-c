#include <stdio.h>
#include <curl/curl.h>
int main(){
  CURL *curl = curl_easy_init();
  if (curl){
    CURLcode res;
    curl_easy_setopt(curl, CURLOPT_URL, "https://ipinfo.io"));
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    printf("\n\n");
    printf("res = %d\n", res);
  }
  return 0;
}
