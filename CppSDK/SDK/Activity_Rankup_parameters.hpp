#pragma once

 

// Package: Activity_Rankup

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Activity_Rankup.Activity_Rankup_C.ExecuteUbergraph_Activity_Rankup
// 0x0198 (0x0198 - 0x0000)
struct Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E9C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildActivity                         K2Node_Event_Other;                                // 0x0008(0x00E0)(ConstParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActivityRank_ReturnValue;              // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E9D[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0100(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0118(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0130(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0170(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0180(0x0018)()
};
static_assert(alignof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup) == 0x000008, "Wrong alignment on Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup");
static_assert(sizeof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup) == 0x000198, "Wrong size on Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup");
static_assert(offsetof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup, EntryPoint) == 0x000000, "Member 'Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup::EntryPoint' has a wrong offset!");
static_assert(offsetof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup, K2Node_Event_Other) == 0x000008, "Member 'Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000E8, "Member 'Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup, CallFunc_GetActivityRank_ReturnValue) == 0x0000F8, "Member 'Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup::CallFunc_GetActivityRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup, CallFunc_Conv_StringToText_ReturnValue) == 0x000100, "Member 'Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup, CallFunc_Conv_IntToText_ReturnValue) == 0x000118, "Member 'Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup, K2Node_MakeStruct_FormatArgumentData) == 0x000130, "Member 'Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup, K2Node_MakeArray_Array) == 0x000170, "Member 'Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup, CallFunc_Format_ReturnValue) == 0x000180, "Member 'Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Activity_Rankup.Activity_Rankup_C.SetActivity_Internal
// 0x00E0 (0x00E0 - 0x0000)
struct Activity_Rankup_C_SetActivity_Internal final
{
public:
	struct FGuildActivity                         Other;                                             // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_Rankup_C_SetActivity_Internal) == 0x000008, "Wrong alignment on Activity_Rankup_C_SetActivity_Internal");
static_assert(sizeof(Activity_Rankup_C_SetActivity_Internal) == 0x0000E0, "Wrong size on Activity_Rankup_C_SetActivity_Internal");
static_assert(offsetof(Activity_Rankup_C_SetActivity_Internal, Other) == 0x000000, "Member 'Activity_Rankup_C_SetActivity_Internal::Other' has a wrong offset!");

}

