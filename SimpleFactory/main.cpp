#include <iostream>

#include "ChartFactory.h"

using namespace std;

int main(int argc, char** argv) {
  printf("I'm Simple Factory Pattern!\n");
  // begin test
  SimpleFactoryNS::Chart* chart =
      SimpleFactoryNS::ChartFactory::getChart("柱状图");
  chart->display();

  chart = SimpleFactoryNS::ChartFactory::getChart("折线图");
  chart->display();

  chart = SimpleFactoryNS::ChartFactory::getChart("饼状图");
  chart->display();

  // end test
  return 0;
}