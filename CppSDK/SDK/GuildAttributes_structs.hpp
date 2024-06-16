#pragma once

 

// Package: GuildAttributes

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct GuildAttributes.GuildAttributes
// 0x0030 (0x0030 - 0x0000)
struct FGuildAttributes final
{
public:
	TSoftObjectPtr<class UTexture2D>              Icon_2_2BA25C46492E790AE593A1855ADB44E8;           // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	EGuildAttribute                               Attribute_5_04CFF23F446804C47ABE4299BFFB6C58;      // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B61[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextID_8_DABD7063410626BBA80294B9B5616B73;         // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FGuildAttributes) == 0x000008, "Wrong alignment on FGuildAttributes");
static_assert(sizeof(FGuildAttributes) == 0x000030, "Wrong size on FGuildAttributes");
static_assert(offsetof(FGuildAttributes, Icon_2_2BA25C46492E790AE593A1855ADB44E8) == 0x000000, "Member 'FGuildAttributes::Icon_2_2BA25C46492E790AE593A1855ADB44E8' has a wrong offset!");
static_assert(offsetof(FGuildAttributes, Attribute_5_04CFF23F446804C47ABE4299BFFB6C58) == 0x000028, "Member 'FGuildAttributes::Attribute_5_04CFF23F446804C47ABE4299BFFB6C58' has a wrong offset!");
static_assert(offsetof(FGuildAttributes, TextID_8_DABD7063410626BBA80294B9B5616B73) == 0x00002C, "Member 'FGuildAttributes::TextID_8_DABD7063410626BBA80294B9B5616B73' has a wrong offset!");

}

