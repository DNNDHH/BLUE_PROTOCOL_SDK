#pragma once

 

// Package: Map_MapBtn

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Map_MapBtn.Map_MapBtn_C.ExecuteUbergraph_Map_MapBtn
// 0x0140 (0x0140 - 0x0000)
struct Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUISupportKey_OutGamePadMode;           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_804F[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetUISupportKey_ReturnValue;              // 0x0008(0x0018)(HasGetValueTypeHash)
	TDelegate<void(ESBPadKeySkinType SkinType)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8050[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0058(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0080(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8051[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
	ESBPadKeySkinType                             K2Node_CustomEvent_SkinType;                       // 0x0120(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8052[0x6];                                     // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_ActionName;                     // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn) == 0x000008, "Wrong alignment on Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn");
static_assert(sizeof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn) == 0x000140, "Wrong size on Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, EntryPoint) == 0x000000, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, Temp_bool_Variable) == 0x000004, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_GetUISupportKey_OutGamePadMode) == 0x000005, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_GetUISupportKey_OutGamePadMode' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_GetUISupportKey_ReturnValue) == 0x000008, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_GetUISupportKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, K2Node_CreateDelegate_OutputDelegate_2) == 0x000040, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_NotEqual_NameName_ReturnValue) == 0x000050, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, K2Node_MakeStruct_SlateColor) == 0x000058, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, K2Node_MakeStruct_SlateColor_1) == 0x000080, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A8, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B8, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_GetKeyTextByKey_ReturnValue) == 0x0000C8, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D8, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_GetConfigSaveManager_IsValid) == 0x0000E8, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0000F0, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, K2Node_Select_Default) == 0x0000F8, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, K2Node_CustomEvent_SkinType) == 0x000120, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::K2Node_CustomEvent_SkinType' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000121, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000128, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, K2Node_CustomEvent_ActionName) == 0x000130, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::K2Node_CustomEvent_ActionName' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000138, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_GetIsEnabled_ReturnValue) == 0x000139, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_BooleanAND_ReturnValue) == 0x00013A, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_IsVisible_ReturnValue) == 0x00013B, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn, CallFunc_BooleanAND_ReturnValue_1) == 0x00013C, "Member 'Map_MapBtn_C_ExecuteUbergraph_Map_MapBtn::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function Map_MapBtn.Map_MapBtn_C.SetClickInputAction
// 0x0008 (0x0008 - 0x0000)
struct Map_MapBtn_C_SetClickInputAction final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Map_MapBtn_C_SetClickInputAction) == 0x000004, "Wrong alignment on Map_MapBtn_C_SetClickInputAction");
static_assert(sizeof(Map_MapBtn_C_SetClickInputAction) == 0x000008, "Wrong size on Map_MapBtn_C_SetClickInputAction");
static_assert(offsetof(Map_MapBtn_C_SetClickInputAction, ActionName) == 0x000000, "Member 'Map_MapBtn_C_SetClickInputAction::ActionName' has a wrong offset!");

// Function Map_MapBtn.Map_MapBtn_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct Map_MapBtn_C_CustomEvent_1 final
{
public:
	ESBPadKeySkinType                             SkinType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Map_MapBtn_C_CustomEvent_1) == 0x000001, "Wrong alignment on Map_MapBtn_C_CustomEvent_1");
static_assert(sizeof(Map_MapBtn_C_CustomEvent_1) == 0x000001, "Wrong size on Map_MapBtn_C_CustomEvent_1");
static_assert(offsetof(Map_MapBtn_C_CustomEvent_1, SkinType) == 0x000000, "Member 'Map_MapBtn_C_CustomEvent_1::SkinType' has a wrong offset!");

// Function Map_MapBtn.Map_MapBtn_C.SetPressedSoundId
// 0x0002 (0x0002 - 0x0000)
struct Map_MapBtn_C_SetPressedSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Map_MapBtn_C_SetPressedSoundId) == 0x000001, "Wrong alignment on Map_MapBtn_C_SetPressedSoundId");
static_assert(sizeof(Map_MapBtn_C_SetPressedSoundId) == 0x000002, "Wrong size on Map_MapBtn_C_SetPressedSoundId");
static_assert(offsetof(Map_MapBtn_C_SetPressedSoundId, InSoundId) == 0x000000, "Member 'Map_MapBtn_C_SetPressedSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_SetPressedSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'Map_MapBtn_C_SetPressedSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Map_MapBtn.Map_MapBtn_C.SetHoveredSoundId
// 0x0002 (0x0002 - 0x0000)
struct Map_MapBtn_C_SetHoveredSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Map_MapBtn_C_SetHoveredSoundId) == 0x000001, "Wrong alignment on Map_MapBtn_C_SetHoveredSoundId");
static_assert(sizeof(Map_MapBtn_C_SetHoveredSoundId) == 0x000002, "Wrong size on Map_MapBtn_C_SetHoveredSoundId");
static_assert(offsetof(Map_MapBtn_C_SetHoveredSoundId, InSoundId) == 0x000000, "Member 'Map_MapBtn_C_SetHoveredSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(Map_MapBtn_C_SetHoveredSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'Map_MapBtn_C_SetHoveredSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

