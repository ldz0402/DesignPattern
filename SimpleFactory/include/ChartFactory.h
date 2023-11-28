#ifndef __CHART_FACTORY_H__
#define __CHART_FACTORY_H__

#include <string>

#include "Chart.h"

namespace SimpleFactoryNS {
class ChartFactory {
 public:
  static Chart* getChart(std::string type);
};
}  // namespace SimpleFactoryNS
#endif