#pragma once

 

// Package: BattleContentsStruct

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct BattleContentsStruct.BattleContentsStruct
// 0x0030 (0x0030 - 0x0000)
struct FBattleContentsStruct final
{
public:
	EBattleContentsHUDType                        Type_2_FEEE6F114E8C3435E3539EAAD19FAE4E;           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E04[0x7];                                      // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Asset_11_7B492B0C4FB38EED25209BA1D4C1E9A2;         // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FBattleContentsStruct) == 0x000008, "Wrong alignment on FBattleContentsStruct");
static_assert(sizeof(FBattleContentsStruct) == 0x000030, "Wrong size on FBattleContentsStruct");
static_assert(offsetof(FBattleContentsStruct, Type_2_FEEE6F114E8C3435E3539EAAD19FAE4E) == 0x000000, "Member 'FBattleContentsStruct::Type_2_FEEE6F114E8C3435E3539EAAD19FAE4E' has a wrong offset!");
static_assert(offsetof(FBattleContentsStruct, Asset_11_7B492B0C4FB38EED25209BA1D4C1E9A2) == 0x000008, "Member 'FBattleContentsStruct::Asset_11_7B492B0C4FB38EED25209BA1D4C1E9A2' has a wrong offset!");

}

