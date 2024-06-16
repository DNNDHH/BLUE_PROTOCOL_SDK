#pragma once

 

// Package: GuildDissolutionCheckDialog

#include "Basic.hpp"


namespace SDK::Params
{

// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.ExecuteUbergraph_GuildDissolutionCheckDialog
// 0x0028 (0x0028 - 0x0000)
struct GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A3C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_ComponentBoundEvent_InButtonWidget_1;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_InButtonWidget;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog) == 0x000008, "Wrong alignment on GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog");
static_assert(sizeof(GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog) == 0x000028, "Wrong size on GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog");
static_assert(offsetof(GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog, EntryPoint) == 0x000000, "Member 'GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog, K2Node_ComponentBoundEvent_bIsChecked) == 0x000004, "Member 'GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog, K2Node_ComponentBoundEvent_InButtonWidget_1) == 0x000008, "Member 'GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog::K2Node_ComponentBoundEvent_InButtonWidget_1' has a wrong offset!");
static_assert(offsetof(GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog, K2Node_ComponentBoundEvent_InButtonWidget) == 0x000010, "Member 'GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog::K2Node_ComponentBoundEvent_InButtonWidget' has a wrong offset!");
static_assert(offsetof(GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'GuildDissolutionCheckDialog_C_ExecuteUbergraph_GuildDissolutionCheckDialog::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GuildDissolutionCheckDialog_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDissolutionCheckDialog_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on GuildDissolutionCheckDialog_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
static_assert(sizeof(GuildDissolutionCheckDialog_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature) == 0x000008, "Wrong size on GuildDissolutionCheckDialog_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
static_assert(offsetof(GuildDissolutionCheckDialog_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature, InButtonWidget) == 0x000000, "Member 'GuildDissolutionCheckDialog_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature::InButtonWidget' has a wrong offset!");

// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GuildDissolutionCheckDialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDissolutionCheckDialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on GuildDissolutionCheckDialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
static_assert(sizeof(GuildDissolutionCheckDialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature) == 0x000008, "Wrong size on GuildDissolutionCheckDialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
static_assert(offsetof(GuildDissolutionCheckDialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature, InButtonWidget) == 0x000000, "Member 'GuildDissolutionCheckDialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature::InButtonWidget' has a wrong offset!");

// Function GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C.BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GuildDissolutionCheckDialog_C_BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDissolutionCheckDialog_C_BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GuildDissolutionCheckDialog_C_BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GuildDissolutionCheckDialog_C_BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GuildDissolutionCheckDialog_C_BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GuildDissolutionCheckDialog_C_BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GuildDissolutionCheckDialog_C_BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

}

