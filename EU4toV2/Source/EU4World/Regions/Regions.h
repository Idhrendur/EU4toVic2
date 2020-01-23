#ifndef EU4_REGIONS_H
#define EU4_REGIONS_H

#include "newParser.h"
#include "Region.h"
#include "Areas.h"
#include "SuperRegions.h"
#include <map>

namespace EU4
{
	class Regions: commonItems::parser
	{
	public:
		Regions() = default;
		Regions(const SuperRegions& sRegions, const EU4::Areas& areas, std::istream& regionsFile);
		Regions(const EU4::Areas& areas);
		bool provinceInRegion(int province, const std::string& regionName) const;
		bool regionIsValid(const std::string& regionName) const;

	private:
		std::map<std::string, Region> regions;
		std::map<std::string, std::vector<std::string>> superRegions;
	};
}

#endif //EU4_REGIONS_H
