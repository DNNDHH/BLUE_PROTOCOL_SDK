#pragma once

 

// Package: CmnBtn01

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function CmnBtn01.CmnBtn01_C.ExecuteUbergraph_CmnBtn01
// 0x0160 (0x0160 - 0x0000)
struct CmnBtn01_C_ExecuteUbergraph_CmnBtn01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D68[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D69[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBPadKeySkinType SkinType)>   K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D6A[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0040(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0068(0x0028)()
	bool                                          CallFunc_GetUISupportKey_OutGamePadMode;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D6B[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetUISupportKey_ReturnValue;              // 0x0098(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D6C[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D6D[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_ActionName;                     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_2;          // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0143(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D6E[0x2];                                     // 0x0146(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             K2Node_CustomEvent_SkinType;                       // 0x0150(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D6F[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01) == 0x000008, "Wrong alignment on CmnBtn01_C_ExecuteUbergraph_CmnBtn01");
static_assert(sizeof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01) == 0x000160, "Wrong size on CmnBtn01_C_ExecuteUbergraph_CmnBtn01");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, EntryPoint) == 0x000000, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, Temp_bool_Variable) == 0x000004, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_NotEqual_NameName_ReturnValue) == 0x000018, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, K2Node_Event_IsDesignTime) == 0x00003C, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, K2Node_MakeStruct_SlateColor) == 0x000040, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, K2Node_MakeStruct_SlateColor_1) == 0x000068, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_GetUISupportKey_OutGamePadMode) == 0x000090, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_GetUISupportKey_OutGamePadMode' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_GetUISupportKey_ReturnValue) == 0x000098, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_GetUISupportKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x0000B0, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000B8, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000C8, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000D8, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, Temp_bool_Variable_1) == 0x0000D9, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, K2Node_Select_Default) == 0x0000E0, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_GetKeyTextByKey_ReturnValue) == 0x0000F0, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_Concat_StrStr_ReturnValue) == 0x000100, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, K2Node_CustomEvent_ActionName) == 0x000110, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::K2Node_CustomEvent_ActionName' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, K2Node_Select_Default_1) == 0x000118, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_NotEqual_NameName_ReturnValue_2) == 0x000140, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_NotEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_GetIsEnabled_ReturnValue) == 0x000141, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_IsVisible_ReturnValue) == 0x000142, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_BooleanAND_ReturnValue) == 0x000143, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_BooleanAND_ReturnValue_1) == 0x000144, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_GetConfigSaveManager_IsValid) == 0x000145, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000148, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, K2Node_CustomEvent_SkinType) == 0x000150, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::K2Node_CustomEvent_SkinType' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000151, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_ExecuteUbergraph_CmnBtn01, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000158, "Member 'CmnBtn01_C_ExecuteUbergraph_CmnBtn01::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");

// Function CmnBtn01.CmnBtn01_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn01_C_CustomEvent_1 final
{
public:
	ESBPadKeySkinType                             SkinType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn01_C_CustomEvent_1) == 0x000001, "Wrong alignment on CmnBtn01_C_CustomEvent_1");
static_assert(sizeof(CmnBtn01_C_CustomEvent_1) == 0x000001, "Wrong size on CmnBtn01_C_CustomEvent_1");
static_assert(offsetof(CmnBtn01_C_CustomEvent_1, SkinType) == 0x000000, "Member 'CmnBtn01_C_CustomEvent_1::SkinType' has a wrong offset!");

// Function CmnBtn01.CmnBtn01_C.SetClickInputAction
// 0x0008 (0x0008 - 0x0000)
struct CmnBtn01_C_SetClickInputAction final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn01_C_SetClickInputAction) == 0x000004, "Wrong alignment on CmnBtn01_C_SetClickInputAction");
static_assert(sizeof(CmnBtn01_C_SetClickInputAction) == 0x000008, "Wrong size on CmnBtn01_C_SetClickInputAction");
static_assert(offsetof(CmnBtn01_C_SetClickInputAction, ActionName) == 0x000000, "Member 'CmnBtn01_C_SetClickInputAction::ActionName' has a wrong offset!");

// Function CmnBtn01.CmnBtn01_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn01_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn01_C_PreConstruct) == 0x000001, "Wrong alignment on CmnBtn01_C_PreConstruct");
static_assert(sizeof(CmnBtn01_C_PreConstruct) == 0x000001, "Wrong size on CmnBtn01_C_PreConstruct");
static_assert(offsetof(CmnBtn01_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnBtn01_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnBtn01.CmnBtn01_C.Set Text
// 0x0018 (0x0018 - 0x0000)
struct CmnBtn01_C_Set_Text final
{
public:
	class USBTextTableAsset*                      Param_InTextTable;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_InTextID;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_InTextName;                                  // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     InPressedSound;                                    // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn01_C_Set_Text) == 0x000008, "Wrong alignment on CmnBtn01_C_Set_Text");
static_assert(sizeof(CmnBtn01_C_Set_Text) == 0x000018, "Wrong size on CmnBtn01_C_Set_Text");
static_assert(offsetof(CmnBtn01_C_Set_Text, Param_InTextTable) == 0x000000, "Member 'CmnBtn01_C_Set_Text::Param_InTextTable' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_Set_Text, Param_InTextID) == 0x000008, "Member 'CmnBtn01_C_Set_Text::Param_InTextID' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_Set_Text, Param_InTextName) == 0x00000C, "Member 'CmnBtn01_C_Set_Text::Param_InTextName' has a wrong offset!");
static_assert(offsetof(CmnBtn01_C_Set_Text, InPressedSound) == 0x000014, "Member 'CmnBtn01_C_Set_Text::InPressedSound' has a wrong offset!");

}

