#pragma once

 

// Package: CmnBtn16

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function CmnBtn16.CmnBtn16_C.ExecuteUbergraph_CmnBtn16
// 0x0220 (0x0220 - 0x0000)
struct CmnBtn16_C_ExecuteUbergraph_CmnBtn16 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C86[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetUICancelText_ReturnValue;              // 0x0008(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C87[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBPadKeySkinType SkinType)>   K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C88[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0078(0x0028)()
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x00A0(0x0088)(HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C89[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_ActionName;                     // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUISupportKey_OutGamePadMode;           // 0x014E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C8A[0x1];                                     // 0x014F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetUISupportKey_ReturnValue;              // 0x0150(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_2;          // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C8B[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x016C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C8C[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C8D[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             K2Node_CustomEvent_SkinType;                       // 0x01B0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C8E[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bShowCancelKey;                 // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C8F[0x6];                                     // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C90[0x5];                                     // 0x01D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_1;                           // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_2;                           // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0208(0x0018)()
};
static_assert(alignof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16) == 0x000008, "Wrong alignment on CmnBtn16_C_ExecuteUbergraph_CmnBtn16");
static_assert(sizeof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16) == 0x000220, "Wrong size on CmnBtn16_C_ExecuteUbergraph_CmnBtn16");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, EntryPoint) == 0x000000, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetUICancelText_ReturnValue) == 0x000008, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetUICancelText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, Temp_bool_Variable) == 0x000018, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, Temp_bool_Variable_1) == 0x000019, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, Temp_bool_Variable_2) == 0x00003C, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_Event_IsDesignTime) == 0x00003D, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_MakeStruct_SlateColor_1) == 0x000078, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_MakeStruct_SlateFontInfo) == 0x0000A0, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_IsHovered_ReturnValue) == 0x000128, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000130, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_CustomEvent_ActionName) == 0x000140, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_CustomEvent_ActionName' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_NotEqual_NameName_ReturnValue) == 0x000148, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetIsEnabled_ReturnValue) == 0x000149, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_IsVisible_ReturnValue) == 0x00014A, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x00014B, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_BooleanAND_ReturnValue) == 0x00014C, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_BooleanAND_ReturnValue_1) == 0x00014D, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetUISupportKey_OutGamePadMode) == 0x00014E, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetUISupportKey_OutGamePadMode' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetUISupportKey_ReturnValue) == 0x000150, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetUISupportKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_NotEqual_NameName_ReturnValue_2) == 0x000168, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_NotEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_CreateDelegate_OutputDelegate_2) == 0x00016C, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00017C, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000180, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_Select_Default) == 0x000190, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetConfigSaveManager_IsValid) == 0x0001A0, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0001A8, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_CustomEvent_SkinType) == 0x0001B0, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_CustomEvent_SkinType' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0001B1, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0001B8, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_CustomEvent_bShowCancelKey) == 0x0001C0, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_CustomEvent_bShowCancelKey' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetConfigSaveManager_IsValid_2) == 0x0001C1, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x0001C8, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_GetOperateMode_ReturnValue) == 0x0001D0, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001D1, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_BooleanAND_ReturnValue_2) == 0x0001D2, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_Select_Default_1) == 0x0001D8, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_Concat_StrStr_ReturnValue) == 0x0001E8, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, K2Node_Select_Default_2) == 0x0001F8, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CmnBtn16_C_ExecuteUbergraph_CmnBtn16, CallFunc_Conv_StringToText_ReturnValue) == 0x000208, "Member 'CmnBtn16_C_ExecuteUbergraph_CmnBtn16::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CmnBtn16.CmnBtn16_C.ShowCancelKey
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn16_C_ShowCancelKey final
{
public:
	bool                                          Param_bShowCancelKey;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn16_C_ShowCancelKey) == 0x000001, "Wrong alignment on CmnBtn16_C_ShowCancelKey");
static_assert(sizeof(CmnBtn16_C_ShowCancelKey) == 0x000001, "Wrong size on CmnBtn16_C_ShowCancelKey");
static_assert(offsetof(CmnBtn16_C_ShowCancelKey, Param_bShowCancelKey) == 0x000000, "Member 'CmnBtn16_C_ShowCancelKey::Param_bShowCancelKey' has a wrong offset!");

// Function CmnBtn16.CmnBtn16_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn16_C_CustomEvent_1 final
{
public:
	ESBPadKeySkinType                             SkinType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn16_C_CustomEvent_1) == 0x000001, "Wrong alignment on CmnBtn16_C_CustomEvent_1");
static_assert(sizeof(CmnBtn16_C_CustomEvent_1) == 0x000001, "Wrong size on CmnBtn16_C_CustomEvent_1");
static_assert(offsetof(CmnBtn16_C_CustomEvent_1, SkinType) == 0x000000, "Member 'CmnBtn16_C_CustomEvent_1::SkinType' has a wrong offset!");

// Function CmnBtn16.CmnBtn16_C.SetClickInputAction
// 0x0008 (0x0008 - 0x0000)
struct CmnBtn16_C_SetClickInputAction final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn16_C_SetClickInputAction) == 0x000004, "Wrong alignment on CmnBtn16_C_SetClickInputAction");
static_assert(sizeof(CmnBtn16_C_SetClickInputAction) == 0x000008, "Wrong size on CmnBtn16_C_SetClickInputAction");
static_assert(offsetof(CmnBtn16_C_SetClickInputAction, ActionName) == 0x000000, "Member 'CmnBtn16_C_SetClickInputAction::ActionName' has a wrong offset!");

// Function CmnBtn16.CmnBtn16_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn16_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn16_C_PreConstruct) == 0x000001, "Wrong alignment on CmnBtn16_C_PreConstruct");
static_assert(sizeof(CmnBtn16_C_PreConstruct) == 0x000001, "Wrong size on CmnBtn16_C_PreConstruct");
static_assert(offsetof(CmnBtn16_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnBtn16_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnBtn16.CmnBtn16_C.SetTextId
// 0x0004 (0x0004 - 0x0000)
struct CmnBtn16_C_SetTextId final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn16_C_SetTextId) == 0x000004, "Wrong alignment on CmnBtn16_C_SetTextId");
static_assert(sizeof(CmnBtn16_C_SetTextId) == 0x000004, "Wrong size on CmnBtn16_C_SetTextId");
static_assert(offsetof(CmnBtn16_C_SetTextId, TextId) == 0x000000, "Member 'CmnBtn16_C_SetTextId::TextId' has a wrong offset!");

// Function CmnBtn16.CmnBtn16_C.SetTextName
// 0x0008 (0x0008 - 0x0000)
struct CmnBtn16_C_SetTextName final
{
public:
	class FName                                   Param_InTextName;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn16_C_SetTextName) == 0x000004, "Wrong alignment on CmnBtn16_C_SetTextName");
static_assert(sizeof(CmnBtn16_C_SetTextName) == 0x000008, "Wrong size on CmnBtn16_C_SetTextName");
static_assert(offsetof(CmnBtn16_C_SetTextName, Param_InTextName) == 0x000000, "Member 'CmnBtn16_C_SetTextName::Param_InTextName' has a wrong offset!");

// Function CmnBtn16.CmnBtn16_C.Set Sound ID
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn16_C_Set_Sound_ID final
{
public:
	ESystemSE                                     SoundId;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBtn16_C_Set_Sound_ID) == 0x000001, "Wrong alignment on CmnBtn16_C_Set_Sound_ID");
static_assert(sizeof(CmnBtn16_C_Set_Sound_ID) == 0x000001, "Wrong size on CmnBtn16_C_Set_Sound_ID");
static_assert(offsetof(CmnBtn16_C_Set_Sound_ID, SoundId) == 0x000000, "Member 'CmnBtn16_C_Set_Sound_ID::SoundId' has a wrong offset!");

}

