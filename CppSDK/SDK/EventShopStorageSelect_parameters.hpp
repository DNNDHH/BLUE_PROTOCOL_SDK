#pragma once

 

// Package: EventShopStorageSelect

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function EventShopStorageSelect.EventShopStorageSelect_C.ExecuteUbergraph_EventShopStorageSelect
// 0x0058 (0x0058 - 0x0000)
struct EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEventShopStorage                           CallFunc_GetEventShopStorageData_ReturnValue;      // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63FB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCheckBox_C*                          K2Node_CustomEvent_On;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCheckBox_C*                          K2Node_CustomEvent_Off1;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCheckBox_C*                          K2Node_CustomEvent_Off2;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEventShopStorage                           K2Node_CustomEvent_Index;                          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63FC[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_2;           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63FD[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect) == 0x000008, "Wrong alignment on EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect");
static_assert(sizeof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect) == 0x000058, "Wrong size on EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, EntryPoint) == 0x000000, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, CallFunc_GetEventShopStorageData_ReturnValue) == 0x000004, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::CallFunc_GetEventShopStorageData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, K2Node_CustomEvent_On) == 0x000008, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::K2Node_CustomEvent_On' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, K2Node_CustomEvent_Off1) == 0x000010, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::K2Node_CustomEvent_Off1' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, K2Node_CustomEvent_Off2) == 0x000018, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::K2Node_CustomEvent_Off2' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, K2Node_CustomEvent_Index) == 0x000020, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, K2Node_ComponentBoundEvent_bIsChecked_2) == 0x000034, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::K2Node_ComponentBoundEvent_bIsChecked_2' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x000035, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, K2Node_ComponentBoundEvent_bIsChecked) == 0x000036, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, CallFunc_GetCharacterId_ReturnValue) == 0x000038, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000050, "Member 'EventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'EventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function EventShopStorageSelect.EventShopStorageSelect_C.UpdateCheckState
// 0x0020 (0x0020 - 0x0000)
struct EventShopStorageSelect_C_UpdateCheckState final
{
public:
	class USBCheckBox_C*                          On;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCheckBox_C*                          Off1;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCheckBox_C*                          Off2;                                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEventShopStorage                           Param_Index;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopStorageSelect_C_UpdateCheckState) == 0x000008, "Wrong alignment on EventShopStorageSelect_C_UpdateCheckState");
static_assert(sizeof(EventShopStorageSelect_C_UpdateCheckState) == 0x000020, "Wrong size on EventShopStorageSelect_C_UpdateCheckState");
static_assert(offsetof(EventShopStorageSelect_C_UpdateCheckState, On) == 0x000000, "Member 'EventShopStorageSelect_C_UpdateCheckState::On' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_UpdateCheckState, Off1) == 0x000008, "Member 'EventShopStorageSelect_C_UpdateCheckState::Off1' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_UpdateCheckState, Off2) == 0x000010, "Member 'EventShopStorageSelect_C_UpdateCheckState::Off2' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_UpdateCheckState, Param_Index) == 0x000018, "Member 'EventShopStorageSelect_C_UpdateCheckState::Param_Index' has a wrong offset!");

// Function EventShopStorageSelect.EventShopStorageSelect_C.ResetCkeckState
// 0x0010 (0x0010 - 0x0000)
struct EventShopStorageSelect_C_ResetCkeckState final
{
public:
	ESBEventShopStorage                           Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEventShopStorage                           Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63FE[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCheckBox_C*                          K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopStorageSelect_C_ResetCkeckState) == 0x000008, "Wrong alignment on EventShopStorageSelect_C_ResetCkeckState");
static_assert(sizeof(EventShopStorageSelect_C_ResetCkeckState) == 0x000010, "Wrong size on EventShopStorageSelect_C_ResetCkeckState");
static_assert(offsetof(EventShopStorageSelect_C_ResetCkeckState, Active) == 0x000000, "Member 'EventShopStorageSelect_C_ResetCkeckState::Active' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ResetCkeckState, Temp_byte_Variable) == 0x000001, "Member 'EventShopStorageSelect_C_ResetCkeckState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventShopStorageSelect_C_ResetCkeckState, K2Node_Select_Default) == 0x000008, "Member 'EventShopStorageSelect_C_ResetCkeckState::K2Node_Select_Default' has a wrong offset!");

}

