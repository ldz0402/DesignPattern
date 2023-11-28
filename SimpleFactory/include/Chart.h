#ifndef __CHART_H__
#define __CHART_H__

namespace SimpleFactoryNS {
/**
 * @brief 图表类接口
 *
 */
class Chart {
 public:
  virtual void display() = 0;
};

/**
 * @brief 柱状图
 *
 */
class HistogramChart : public Chart {
 public:
  HistogramChart();
  void display() override;
};

/**
 * @brief 饼状图
 *
 */
class PieChart : public Chart {
 public:
  PieChart();
  void display() override;
};

/**
 * @brief 折线图
 *
 */
class LineChart : public Chart {
 public:
  LineChart();
  void display() override;
};
}  // namespace SimpleFactoryNS
#endif