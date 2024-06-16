#pragma once

 

// Package: HudCustomApplySelect

#include "Basic.hpp"


namespace SDK::Params
{

// Function HudCustomApplySelect.HudCustomApplySelect_C.OnClose__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct HudCustomApplySelect_C_OnClose__DelegateSignature final
{
public:
	bool                                          bIsCancel;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HudCustomApplySelect_C_OnClose__DelegateSignature) == 0x000001, "Wrong alignment on HudCustomApplySelect_C_OnClose__DelegateSignature");
static_assert(sizeof(HudCustomApplySelect_C_OnClose__DelegateSignature) == 0x000001, "Wrong size on HudCustomApplySelect_C_OnClose__DelegateSignature");
static_assert(offsetof(HudCustomApplySelect_C_OnClose__DelegateSignature, bIsCancel) == 0x000000, "Member 'HudCustomApplySelect_C_OnClose__DelegateSignature::bIsCancel' has a wrong offset!");

// Function HudCustomApplySelect.HudCustomApplySelect_C.ExecuteUbergraph_HudCustomApplySelect
// 0x0020 (0x0020 - 0x0000)
struct HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D8B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect) == 0x000008, "Wrong alignment on HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect");
static_assert(sizeof(HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect) == 0x000020, "Wrong size on HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect");
static_assert(offsetof(HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect, EntryPoint) == 0x000000, "Member 'HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'HudCustomApplySelect_C_ExecuteUbergraph_HudCustomApplySelect::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

}

