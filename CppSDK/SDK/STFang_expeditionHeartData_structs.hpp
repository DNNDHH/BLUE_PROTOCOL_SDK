#pragma once

 

// Package: STFang_expeditionHeartData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct STFang_expeditionHeartData.STFang_expeditionHeartData
// 0x0004 (0x0004 - 0x0000)
struct FSTFang_expeditionHeartData final
{
public:
	int32                                         HeartNum_2_1FAA2F15409CC048EB03C0A71A121AF4;       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSTFang_expeditionHeartData) == 0x000004, "Wrong alignment on FSTFang_expeditionHeartData");
static_assert(sizeof(FSTFang_expeditionHeartData) == 0x000004, "Wrong size on FSTFang_expeditionHeartData");
static_assert(offsetof(FSTFang_expeditionHeartData, HeartNum_2_1FAA2F15409CC048EB03C0A71A121AF4) == 0x000000, "Member 'FSTFang_expeditionHeartData::HeartNum_2_1FAA2F15409CC048EB03C0A71A121AF4' has a wrong offset!");

}

