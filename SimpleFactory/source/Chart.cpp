#include "Chart.h"

#include <iostream>

namespace SimpleFactoryNS {
HistogramChart::HistogramChart() { printf("创建柱状图！\n"); }

void HistogramChart::display() {
  printf("展示柱状图！\n");
  return;
}

PieChart::PieChart() { printf("创建饼状图！\n"); }

void PieChart::display() {
  printf("展示饼状图！\n");
  return;
}

LineChart::LineChart() { printf("创建折线图！\n"); }

void LineChart::display() {
  printf("展示折线图！\n");
  return;
}
}  // namespace SimpleFactoryNS