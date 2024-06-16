#pragma once

 

// Package: UsedCheck_CheckBox

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.Initialize
// 0x0018 (0x0018 - 0x0000)
struct UsedCheck_CheckBox_C_Initialize final
{
public:
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6866[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableUsedCheckDialog_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UsedCheck_CheckBox_C_Initialize) == 0x000008, "Wrong alignment on UsedCheck_CheckBox_C_Initialize");
static_assert(sizeof(UsedCheck_CheckBox_C_Initialize) == 0x000018, "Wrong size on UsedCheck_CheckBox_C_Initialize");
static_assert(offsetof(UsedCheck_CheckBox_C_Initialize, CallFunc_GetConfigSaveManager_IsValid) == 0x000000, "Member 'UsedCheck_CheckBox_C_Initialize::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UsedCheck_CheckBox_C_Initialize, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'UsedCheck_CheckBox_C_Initialize::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UsedCheck_CheckBox_C_Initialize, CallFunc_IsEnableUsedCheckDialog_ReturnValue) == 0x000010, "Member 'UsedCheck_CheckBox_C_Initialize::CallFunc_IsEnableUsedCheckDialog_ReturnValue' has a wrong offset!");

// Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UsedCheck_CheckBox_C_BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UsedCheck_CheckBox_C_BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UsedCheck_CheckBox_C_BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(UsedCheck_CheckBox_C_BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on UsedCheck_CheckBox_C_BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(UsedCheck_CheckBox_C_BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UsedCheck_CheckBox_C_BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.ExecuteUbergraph_UsedCheck_CheckBox
// 0x0008 (0x0008 - 0x0000)
struct UsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox) == 0x000004, "Wrong alignment on UsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox");
static_assert(sizeof(UsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox) == 0x000008, "Wrong size on UsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox");
static_assert(offsetof(UsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox, EntryPoint) == 0x000000, "Member 'UsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(UsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox, K2Node_ComponentBoundEvent_bIsChecked) == 0x000004, "Member 'UsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");

// Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.OnChangeFlag__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct UsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature final
{
public:
	ESBUseCheckDialogType                         Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature) == 0x000001, "Wrong alignment on UsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature");
static_assert(sizeof(UsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature) == 0x000002, "Wrong size on UsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature");
static_assert(offsetof(UsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature, Type) == 0x000000, "Member 'UsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature::Type' has a wrong offset!");
static_assert(offsetof(UsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature, Enable) == 0x000001, "Member 'UsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature::Enable' has a wrong offset!");

}

