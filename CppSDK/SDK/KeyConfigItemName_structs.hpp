#pragma once

 

// Package: KeyConfigItemName

#include "Basic.hpp"

#include "Config_KeyconfigItems_structs.hpp"


namespace SDK
{

// UserDefinedStruct KeyConfigItemName.KeyConfigItemName
// 0x0008 (0x0008 - 0x0000)
struct FKeyConfigItemName final
{
public:
	EConfig_KeyconfigItems                        Items_2_41F502F1459B2716225AFDB4082318CF;          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7225[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId_5_0FEE44EE49CEBCFEC3A93DB88D4CEE12;         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FKeyConfigItemName) == 0x000004, "Wrong alignment on FKeyConfigItemName");
static_assert(sizeof(FKeyConfigItemName) == 0x000008, "Wrong size on FKeyConfigItemName");
static_assert(offsetof(FKeyConfigItemName, Items_2_41F502F1459B2716225AFDB4082318CF) == 0x000000, "Member 'FKeyConfigItemName::Items_2_41F502F1459B2716225AFDB4082318CF' has a wrong offset!");
static_assert(offsetof(FKeyConfigItemName, TextId_5_0FEE44EE49CEBCFEC3A93DB88D4CEE12) == 0x000004, "Member 'FKeyConfigItemName::TextId_5_0FEE44EE49CEBCFEC3A93DB88D4CEE12' has a wrong offset!");

}

