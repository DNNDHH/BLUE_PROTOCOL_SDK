#pragma once

 

// Package: Fang_expeditionAreaIconTooltip

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expeditionAreaIconTooltip.Fang_expeditionAreaIconTooltip_C.AddData
// 0x0030 (0x0030 - 0x0000)
struct Fang_expeditionAreaIconTooltip_C_AddData final
{
public:
	ESBFang_expeditionStatus                      Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EDD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AreaName;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Limited;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EDE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expeditionAreaIconTooltip_AreaData_C* CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expeditionAreaIconTooltip_C_AddData) == 0x000008, "Wrong alignment on Fang_expeditionAreaIconTooltip_C_AddData");
static_assert(sizeof(Fang_expeditionAreaIconTooltip_C_AddData) == 0x000030, "Wrong size on Fang_expeditionAreaIconTooltip_C_AddData");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_C_AddData, Status) == 0x000000, "Member 'Fang_expeditionAreaIconTooltip_C_AddData::Status' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_C_AddData, AreaName) == 0x000008, "Member 'Fang_expeditionAreaIconTooltip_C_AddData::AreaName' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_C_AddData, Limited) == 0x000018, "Member 'Fang_expeditionAreaIconTooltip_C_AddData::Limited' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_C_AddData, CallFunc_Create_ReturnValue) == 0x000020, "Member 'Fang_expeditionAreaIconTooltip_C_AddData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_C_AddData, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'Fang_expeditionAreaIconTooltip_C_AddData::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}

