#pragma once

 

// Package: SelectEditMode

#include "Basic.hpp"


namespace SDK::Params
{

// Function SelectEditMode.SelectEditMode_C.ExecuteUbergraph_SelectEditMode
// 0x0020 (0x0020 - 0x0000)
struct SelectEditMode_C_ExecuteUbergraph_SelectEditMode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7436[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectEditMode_C_ExecuteUbergraph_SelectEditMode) == 0x000008, "Wrong alignment on SelectEditMode_C_ExecuteUbergraph_SelectEditMode");
static_assert(sizeof(SelectEditMode_C_ExecuteUbergraph_SelectEditMode) == 0x000020, "Wrong size on SelectEditMode_C_ExecuteUbergraph_SelectEditMode");
static_assert(offsetof(SelectEditMode_C_ExecuteUbergraph_SelectEditMode, EntryPoint) == 0x000000, "Member 'SelectEditMode_C_ExecuteUbergraph_SelectEditMode::EntryPoint' has a wrong offset!");
static_assert(offsetof(SelectEditMode_C_ExecuteUbergraph_SelectEditMode, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SelectEditMode_C_ExecuteUbergraph_SelectEditMode::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectEditMode_C_ExecuteUbergraph_SelectEditMode, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SelectEditMode_C_ExecuteUbergraph_SelectEditMode::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectEditMode_C_ExecuteUbergraph_SelectEditMode, K2Node_SwitchInteger_CmpSuccess) == 0x000018, "Member 'SelectEditMode_C_ExecuteUbergraph_SelectEditMode::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}

