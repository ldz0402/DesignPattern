#include "ChartFactory.h"

#include <stdexcept>

using namespace std;

namespace SimpleFactoryNS {
Chart* ChartFactory::getChart(string type) {
  Chart* chart = nullptr;
  if ("柱状图" == type) {
    chart = new HistogramChart();
  } else if ("折线图" == type) {
    chart = new LineChart();
  } else if ("饼状图" == type) {
    chart = new PieChart();
  } else {
    throw runtime_error("不支持的类型");
  }
  return chart;
}
}  // namespace SimpleFactoryNS