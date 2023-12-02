#include "IgoChessmanFactory.h"

namespace FlyweightNS {

IgoChessmanFactory* IgoChessmanFactory::instance = new IgoChessmanFactory();

std::map<std::string, IgoChessman*> IgoChessmanFactory::pool = {
    {"b", new BlackIgoChessman()}, {"w", new WhiteIgoChessman()}};

}  // namespace FlyweightNS