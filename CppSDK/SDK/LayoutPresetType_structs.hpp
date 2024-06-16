#pragma once

 

// Package: LayoutPresetType

#include "Basic.hpp"

#include "LayoutPresetTypes_structs.hpp"


namespace SDK
{

// UserDefinedStruct LayoutPresetType.LayoutPresetType
// 0x0020 (0x0020 - 0x0000)
struct FLayoutPresetType final
{
public:
	ELayoutPresetTypes                            LayoutType_2_5660818D4F18BE24A8E14D933632A5E8;     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_558E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Value_5_93728B0949F102F249E6D7BC6CFBD9FE;          // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TextId_9_0EF371B14809AF2A7D10C4BD293F6A74;         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLayoutPresetType) == 0x000008, "Wrong alignment on FLayoutPresetType");
static_assert(sizeof(FLayoutPresetType) == 0x000020, "Wrong size on FLayoutPresetType");
static_assert(offsetof(FLayoutPresetType, LayoutType_2_5660818D4F18BE24A8E14D933632A5E8) == 0x000000, "Member 'FLayoutPresetType::LayoutType_2_5660818D4F18BE24A8E14D933632A5E8' has a wrong offset!");
static_assert(offsetof(FLayoutPresetType, Value_5_93728B0949F102F249E6D7BC6CFBD9FE) == 0x000008, "Member 'FLayoutPresetType::Value_5_93728B0949F102F249E6D7BC6CFBD9FE' has a wrong offset!");
static_assert(offsetof(FLayoutPresetType, TextId_9_0EF371B14809AF2A7D10C4BD293F6A74) == 0x000018, "Member 'FLayoutPresetType::TextId_9_0EF371B14809AF2A7D10C4BD293F6A74' has a wrong offset!");

}

