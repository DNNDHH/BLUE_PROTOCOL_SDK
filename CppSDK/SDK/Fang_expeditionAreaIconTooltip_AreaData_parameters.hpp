#pragma once

 

// Package: Fang_expeditionAreaIconTooltip_AreaData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Fang_expeditionAreaIconTooltip_AreaData.Fang_expeditionAreaIconTooltip_AreaData_C.SetData
// 0x0040 (0x0040 - 0x0000)
struct Fang_expeditionAreaIconTooltip_AreaData_C_SetData final
{
public:
	ESBFang_expeditionStatus                      Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EDB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AreaName;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          TimeLimited;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EDC[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData) == 0x000008, "Wrong alignment on Fang_expeditionAreaIconTooltip_AreaData_C_SetData");
static_assert(sizeof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData) == 0x000040, "Wrong size on Fang_expeditionAreaIconTooltip_AreaData_C_SetData");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData, Status) == 0x000000, "Member 'Fang_expeditionAreaIconTooltip_AreaData_C_SetData::Status' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData, AreaName) == 0x000008, "Member 'Fang_expeditionAreaIconTooltip_AreaData_C_SetData::AreaName' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData, TimeLimited) == 0x000018, "Member 'Fang_expeditionAreaIconTooltip_AreaData_C_SetData::TimeLimited' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData, Temp_bool_Variable) == 0x000019, "Member 'Fang_expeditionAreaIconTooltip_AreaData_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'Fang_expeditionAreaIconTooltip_AreaData_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData, Temp_byte_Variable) == 0x000038, "Member 'Fang_expeditionAreaIconTooltip_AreaData_C_SetData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData, Temp_byte_Variable_1) == 0x000039, "Member 'Fang_expeditionAreaIconTooltip_AreaData_C_SetData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData, K2Node_Select_Default) == 0x00003A, "Member 'Fang_expeditionAreaIconTooltip_AreaData_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expeditionAreaIconTooltip_AreaData_C_SetData, K2Node_SwitchEnum_CmpSuccess) == 0x00003B, "Member 'Fang_expeditionAreaIconTooltip_AreaData_C_SetData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

