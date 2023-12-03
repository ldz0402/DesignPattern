#include <iostream>

#include "Proxy.h"

using namespace std;
using namespace ProxyNS;

int main(int argc, char** argv) {
  printf("I'm Proxy Pattern!\n");
  // begin test
  Searcher* search = new ProxySearcher();
  string msg = "";
  msg = search->doSearch("ldz", "xxx");
  printf("%s\n", msg.c_str());
  msg = search->doSearch("ldz", "yyy");
  printf("%s\n", msg.c_str());
  msg = search->doSearch("lll", "xxx");
  printf("%s\n", msg.c_str());
  // end test
  return 0;
}
