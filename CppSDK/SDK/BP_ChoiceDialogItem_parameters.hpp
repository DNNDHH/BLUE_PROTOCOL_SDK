#pragma once

 

// Package: BP_ChoiceDialogItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_ChoiceDialogItem_C_OnClicked__DelegateSignature final
{
public:
	class UBP_ChoiceDialogItem_C*                 Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChoiceDialogItem_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_ChoiceDialogItem_C_OnClicked__DelegateSignature");
static_assert(sizeof(BP_ChoiceDialogItem_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on BP_ChoiceDialogItem_C_OnClicked__DelegateSignature");
static_assert(offsetof(BP_ChoiceDialogItem_C_OnClicked__DelegateSignature, Widget) == 0x000000, "Member 'BP_ChoiceDialogItem_C_OnClicked__DelegateSignature::Widget' has a wrong offset!");

// Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.ExecuteUbergraph_BP_ChoiceDialogItem
// 0x000C (0x000C - 0x0000)
struct BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem) == 0x000004, "Wrong alignment on BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem");
static_assert(sizeof(BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem) == 0x00000C, "Wrong size on BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem");
static_assert(offsetof(BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem, EntryPoint) == 0x000000, "Member 'BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem, CallFunc_PlaySE_ReturnValue_1) == 0x000008, "Member 'BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");

}

