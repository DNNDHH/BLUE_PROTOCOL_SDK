#pragma once

 

// Package: ImagineActiveResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ImagineActiveResult.ImagineActiveResult_C.ExecuteUbergraph_ImagineActiveResult
// 0x0120 (0x0120 - 0x0000)
struct ImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C6E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_Info;                           // 0x0008(0x0118)()
};
static_assert(alignof(ImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult) == 0x000008, "Wrong alignment on ImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult");
static_assert(sizeof(ImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult) == 0x000120, "Wrong size on ImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult");
static_assert(offsetof(ImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult, EntryPoint) == 0x000000, "Member 'ImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult, K2Node_CustomEvent_Info) == 0x000008, "Member 'ImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult::K2Node_CustomEvent_Info' has a wrong offset!");

// Function ImagineActiveResult.ImagineActiveResult_C.Set ItemData
// 0x0118 (0x0118 - 0x0000)
struct ImagineActiveResult_C_Set_ItemData final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineActiveResult_C_Set_ItemData) == 0x000008, "Wrong alignment on ImagineActiveResult_C_Set_ItemData");
static_assert(sizeof(ImagineActiveResult_C_Set_ItemData) == 0x000118, "Wrong size on ImagineActiveResult_C_Set_ItemData");
static_assert(offsetof(ImagineActiveResult_C_Set_ItemData, Info) == 0x000000, "Member 'ImagineActiveResult_C_Set_ItemData::Info' has a wrong offset!");

}

