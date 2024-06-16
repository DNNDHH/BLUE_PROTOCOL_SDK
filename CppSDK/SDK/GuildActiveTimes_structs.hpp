#pragma once

 

// Package: GuildActiveTimes

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct GuildActiveTimes.GuildActiveTimes
// 0x0038 (0x0038 - 0x0000)
struct FGuildActiveTimes final
{
public:
	ESBGuildActivityTime                          ActiveTime_3_3E0C88644CBA40A5E7ACB79BFECB3B1F;     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D50[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Icon_6_627450344E160D6EDCE2D69395B7EF3D;           // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         TextId_9_5DFBD4C14F69E8436CACC8B6A92C7400;         // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FGuildActiveTimes) == 0x000008, "Wrong alignment on FGuildActiveTimes");
static_assert(sizeof(FGuildActiveTimes) == 0x000038, "Wrong size on FGuildActiveTimes");
static_assert(offsetof(FGuildActiveTimes, ActiveTime_3_3E0C88644CBA40A5E7ACB79BFECB3B1F) == 0x000000, "Member 'FGuildActiveTimes::ActiveTime_3_3E0C88644CBA40A5E7ACB79BFECB3B1F' has a wrong offset!");
static_assert(offsetof(FGuildActiveTimes, Icon_6_627450344E160D6EDCE2D69395B7EF3D) == 0x000008, "Member 'FGuildActiveTimes::Icon_6_627450344E160D6EDCE2D69395B7EF3D' has a wrong offset!");
static_assert(offsetof(FGuildActiveTimes, TextId_9_5DFBD4C14F69E8436CACC8B6A92C7400) == 0x000030, "Member 'FGuildActiveTimes::TextId_9_5DFBD4C14F69E8436CACC8B6A92C7400' has a wrong offset!");

}

