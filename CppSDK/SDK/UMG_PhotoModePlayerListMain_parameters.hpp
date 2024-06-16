#pragma once

 

// Package: UMG_PhotoModePlayerListMain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.OnListSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_PhotoModePlayerListMain_C_OnListSelected__DelegateSignature final
{
public:
	class ASBPlayerState*                         PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharacterId;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModePlayerListMain_C_OnListSelected__DelegateSignature) == 0x000008, "Wrong alignment on UMG_PhotoModePlayerListMain_C_OnListSelected__DelegateSignature");
static_assert(sizeof(UMG_PhotoModePlayerListMain_C_OnListSelected__DelegateSignature) == 0x000010, "Wrong size on UMG_PhotoModePlayerListMain_C_OnListSelected__DelegateSignature");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_OnListSelected__DelegateSignature, PlayerState) == 0x000000, "Member 'UMG_PhotoModePlayerListMain_C_OnListSelected__DelegateSignature::PlayerState' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_OnListSelected__DelegateSignature, CharacterId) == 0x000008, "Member 'UMG_PhotoModePlayerListMain_C_OnListSelected__DelegateSignature::CharacterId' has a wrong offset!");

// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.ExecuteUbergraph_UMG_PhotoModePlayerListMain
// 0x0118 (0x0118 - 0x0000)
struct UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89D4[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPhotoModeController*                 CallFunc_GetPhotoModeController_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89D5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class ASBPhotoModeController*                 CallFunc_GetPhotoModeController_ReturnValue_1;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOtherPlayerVisibility_ReturnValue;      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89D6[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_GetCloneCount_ReturnValue;                // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89D7[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPhotoModeController*                 CallFunc_GetPhotoModeController_ReturnValue_2;     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
	class ASBPhotoModeController*                 CallFunc_GetPhotoModeController_ReturnValue_3;     // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOtherPlayerVisibility_ReturnValue_1;    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowDebugUi_ReturnValue;                // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDebugValidAllPlayer_ReturnValue;        // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain) == 0x000008, "Wrong alignment on UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain");
static_assert(sizeof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain) == 0x000118, "Wrong size on UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, EntryPoint) == 0x000000, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, Temp_bool_Variable) == 0x000004, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_GetPhotoModeController_ReturnValue) == 0x000008, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_GetPhotoModeController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000010, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000020, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_GetPhotoModeController_ReturnValue_1) == 0x000040, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_GetPhotoModeController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x000048, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_IsOtherPlayerVisibility_ReturnValue) == 0x000049, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_IsOtherPlayerVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_GetCloneCount_ReturnValue) == 0x000090, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_GetCloneCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_GetPhotoModeController_ReturnValue_2) == 0x000098, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_GetPhotoModeController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A0, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, K2Node_MakeArray_Array) == 0x0000E0, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_GetPhotoModeController_ReturnValue_3) == 0x000108, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_GetPhotoModeController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_IsOtherPlayerVisibility_ReturnValue_1) == 0x000110, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_IsOtherPlayerVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_IsShowDebugUi_ReturnValue) == 0x000111, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_IsShowDebugUi_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, CallFunc_IsDebugValidAllPlayer_ReturnValue) == 0x000112, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::CallFunc_IsDebugValidAllPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, K2Node_Select_Default) == 0x000113, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain, K2Node_ComponentBoundEvent_bIsChecked) == 0x000114, "Member 'UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");

// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

}

