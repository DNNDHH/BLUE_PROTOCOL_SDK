#pragma once

 

// Package: ImaginePassiveResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ImaginePassiveResult.ImaginePassiveResult_C.ExecuteUbergraph_ImaginePassiveResult
// 0x0120 (0x0120 - 0x0000)
struct ImaginePassiveResult_C_ExecuteUbergraph_ImaginePassiveResult final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A6F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_Info;                           // 0x0008(0x0118)()
};
static_assert(alignof(ImaginePassiveResult_C_ExecuteUbergraph_ImaginePassiveResult) == 0x000008, "Wrong alignment on ImaginePassiveResult_C_ExecuteUbergraph_ImaginePassiveResult");
static_assert(sizeof(ImaginePassiveResult_C_ExecuteUbergraph_ImaginePassiveResult) == 0x000120, "Wrong size on ImaginePassiveResult_C_ExecuteUbergraph_ImaginePassiveResult");
static_assert(offsetof(ImaginePassiveResult_C_ExecuteUbergraph_ImaginePassiveResult, EntryPoint) == 0x000000, "Member 'ImaginePassiveResult_C_ExecuteUbergraph_ImaginePassiveResult::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImaginePassiveResult_C_ExecuteUbergraph_ImaginePassiveResult, K2Node_CustomEvent_Info) == 0x000008, "Member 'ImaginePassiveResult_C_ExecuteUbergraph_ImaginePassiveResult::K2Node_CustomEvent_Info' has a wrong offset!");

// Function ImaginePassiveResult.ImaginePassiveResult_C.Set ItemData
// 0x0118 (0x0118 - 0x0000)
struct ImaginePassiveResult_C_Set_ItemData final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImaginePassiveResult_C_Set_ItemData) == 0x000008, "Wrong alignment on ImaginePassiveResult_C_Set_ItemData");
static_assert(sizeof(ImaginePassiveResult_C_Set_ItemData) == 0x000118, "Wrong size on ImaginePassiveResult_C_Set_ItemData");
static_assert(offsetof(ImaginePassiveResult_C_Set_ItemData, Info) == 0x000000, "Member 'ImaginePassiveResult_C_Set_ItemData::Info' has a wrong offset!");

}

