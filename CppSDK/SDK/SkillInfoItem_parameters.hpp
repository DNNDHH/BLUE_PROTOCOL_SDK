#pragma once

 

// Package: SkillInfoItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoItem.SkillInfoItem_C.ExecuteUbergraph_SkillInfoItem
// 0x00B8 (0x00B8 - 0x0000)
struct SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESkillActionPosition SkillPosition)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBPadKeySkinType SkinType)>   K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	ESkillActionPosition                          K2Node_CustomEvent_SkillPosition;                  // 0x0044(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66AE[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66AF[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66B0[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66B1[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_Init;                                 // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66B2[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66B3[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             K2Node_CustomEvent_SkinType;                       // 0x00B0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem) == 0x000008, "Wrong alignment on SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem");
static_assert(sizeof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem) == 0x0000B8, "Wrong size on SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, EntryPoint) == 0x000000, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_CustomEvent_SkillPosition) == 0x000044, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_CustomEvent_SkillPosition' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000048, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000050, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000060, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000068, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, CallFunc_GetPlayerManager_ReturnValue) == 0x000078, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_Event_IsDesignTime) == 0x000080, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, CallFunc_GetPlayerManager_ReturnValue_1) == 0x000088, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000090, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_Event_Init) == 0x000091, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_Event_Init' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, CallFunc_GetSBPlayerController_ReturnValue) == 0x000098, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_CustomEvent_Result) == 0x0000A0, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, CallFunc_GetConfigSaveManager_IsValid) == 0x0000A1, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0000A8, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem, K2Node_CustomEvent_SkinType) == 0x0000B0, "Member 'SkillInfoItem_C_ExecuteUbergraph_SkillInfoItem::K2Node_CustomEvent_SkinType' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.OnPadSkinChange
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItem_C_OnPadSkinChange final
{
public:
	ESBPadKeySkinType                             SkinType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoItem_C_OnPadSkinChange) == 0x000001, "Wrong alignment on SkillInfoItem_C_OnPadSkinChange");
static_assert(sizeof(SkillInfoItem_C_OnPadSkinChange) == 0x000001, "Wrong size on SkillInfoItem_C_OnPadSkinChange");
static_assert(offsetof(SkillInfoItem_C_OnPadSkinChange, SkinType) == 0x000000, "Member 'SkillInfoItem_C_OnPadSkinChange::SkinType' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItem_C_CustomEvent_1 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_CustomEvent_1) == 0x000001, "Wrong alignment on SkillInfoItem_C_CustomEvent_1");
static_assert(sizeof(SkillInfoItem_C_CustomEvent_1) == 0x000001, "Wrong size on SkillInfoItem_C_CustomEvent_1");
static_assert(offsetof(SkillInfoItem_C_CustomEvent_1, Result) == 0x000000, "Member 'SkillInfoItem_C_CustomEvent_1::Result' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimUse
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItem_C_OnPlayAnimUse final
{
public:
	bool                                          Init;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_OnPlayAnimUse) == 0x000001, "Wrong alignment on SkillInfoItem_C_OnPlayAnimUse");
static_assert(sizeof(SkillInfoItem_C_OnPlayAnimUse) == 0x000001, "Wrong size on SkillInfoItem_C_OnPlayAnimUse");
static_assert(offsetof(SkillInfoItem_C_OnPlayAnimUse, Init) == 0x000000, "Member 'SkillInfoItem_C_OnPlayAnimUse::Init' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_PreConstruct) == 0x000001, "Wrong alignment on SkillInfoItem_C_PreConstruct");
static_assert(sizeof(SkillInfoItem_C_PreConstruct) == 0x000001, "Wrong size on SkillInfoItem_C_PreConstruct");
static_assert(offsetof(SkillInfoItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillInfoItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.OnSkillAnimationStartDelegate_Event_0
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItem_C_OnSkillAnimationStartDelegate_Event_0 final
{
public:
	ESkillActionPosition                          SkillPosition;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoItem_C_OnSkillAnimationStartDelegate_Event_0) == 0x000001, "Wrong alignment on SkillInfoItem_C_OnSkillAnimationStartDelegate_Event_0");
static_assert(sizeof(SkillInfoItem_C_OnSkillAnimationStartDelegate_Event_0) == 0x000001, "Wrong size on SkillInfoItem_C_OnSkillAnimationStartDelegate_Event_0");
static_assert(offsetof(SkillInfoItem_C_OnSkillAnimationStartDelegate_Event_0, SkillPosition) == 0x000000, "Member 'SkillInfoItem_C_OnSkillAnimationStartDelegate_Event_0::SkillPosition' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.UpdateKeyText
// 0x00B0 (0x00B0 - 0x0000)
struct SkillInfoItem_C_UpdateKeyText final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66B4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayShortTextByAction_ReturnValue;  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ReplaceFunctionText_Result;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_UpdateKeyText) == 0x000008, "Wrong alignment on SkillInfoItem_C_UpdateKeyText");
static_assert(sizeof(SkillInfoItem_C_UpdateKeyText) == 0x0000B0, "Wrong size on SkillInfoItem_C_UpdateKeyText");
static_assert(offsetof(SkillInfoItem_C_UpdateKeyText, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'SkillInfoItem_C_UpdateKeyText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdateKeyText, CallFunc_GetDisplayShortTextByAction_ReturnValue) == 0x000008, "Member 'SkillInfoItem_C_UpdateKeyText::CallFunc_GetDisplayShortTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdateKeyText, CallFunc_ReplaceFunctionText_Result) == 0x000018, "Member 'SkillInfoItem_C_UpdateKeyText::CallFunc_ReplaceFunctionText_Result' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdateKeyText, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'SkillInfoItem_C_UpdateKeyText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdateKeyText, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'SkillInfoItem_C_UpdateKeyText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdateKeyText, K2Node_MakeArray_Array) == 0x000080, "Member 'SkillInfoItem_C_UpdateKeyText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdateKeyText, CallFunc_Format_ReturnValue) == 0x000090, "Member 'SkillInfoItem_C_UpdateKeyText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdateKeyText, CallFunc_NotEqual_TextText_ReturnValue) == 0x0000A8, "Member 'SkillInfoItem_C_UpdateKeyText::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.InitKeyText
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItem_C_InitKeyText final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_InitKeyText) == 0x000001, "Wrong alignment on SkillInfoItem_C_InitKeyText");
static_assert(sizeof(SkillInfoItem_C_InitKeyText) == 0x000001, "Wrong size on SkillInfoItem_C_InitKeyText");
static_assert(offsetof(SkillInfoItem_C_InitKeyText, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'SkillInfoItem_C_InitKeyText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.UpdatePercent
// 0x0014 (0x0014 - 0x0000)
struct SkillInfoItem_C_UpdatePercent final
{
public:
	float                                         CurPercent;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66B5[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_UpdatePercent) == 0x000004, "Wrong alignment on SkillInfoItem_C_UpdatePercent");
static_assert(sizeof(SkillInfoItem_C_UpdatePercent) == 0x000014, "Wrong size on SkillInfoItem_C_UpdatePercent");
static_assert(offsetof(SkillInfoItem_C_UpdatePercent, CurPercent) == 0x000000, "Member 'SkillInfoItem_C_UpdatePercent::CurPercent' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdatePercent, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000004, "Member 'SkillInfoItem_C_UpdatePercent::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdatePercent, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'SkillInfoItem_C_UpdatePercent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdatePercent, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'SkillInfoItem_C_UpdatePercent::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdatePercent, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00000C, "Member 'SkillInfoItem_C_UpdatePercent::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_UpdatePercent, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000010, "Member 'SkillInfoItem_C_UpdatePercent::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.ReplaceFunctionText
// 0x0060 (0x0060 - 0x0000)
struct SkillInfoItem_C_ReplaceFunctionText final
{
public:
	class FString                                 InBaseString;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Result;                                            // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_1;     // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoItem_C_ReplaceFunctionText) == 0x000008, "Wrong alignment on SkillInfoItem_C_ReplaceFunctionText");
static_assert(sizeof(SkillInfoItem_C_ReplaceFunctionText) == 0x000060, "Wrong size on SkillInfoItem_C_ReplaceFunctionText");
static_assert(offsetof(SkillInfoItem_C_ReplaceFunctionText, InBaseString) == 0x000000, "Member 'SkillInfoItem_C_ReplaceFunctionText::InBaseString' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ReplaceFunctionText, Result) == 0x000010, "Member 'SkillInfoItem_C_ReplaceFunctionText::Result' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ReplaceFunctionText, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x000020, "Member 'SkillInfoItem_C_ReplaceFunctionText::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ReplaceFunctionText, CallFunc_GetDisplayTextByAction_ReturnValue_1) == 0x000030, "Member 'SkillInfoItem_C_ReplaceFunctionText::CallFunc_GetDisplayTextByAction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ReplaceFunctionText, CallFunc_Replace_ReturnValue) == 0x000040, "Member 'SkillInfoItem_C_ReplaceFunctionText::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_ReplaceFunctionText, CallFunc_Replace_ReturnValue_1) == 0x000050, "Member 'SkillInfoItem_C_ReplaceFunctionText::CallFunc_Replace_ReturnValue_1' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.PlayAnimUse
// 0x0002 (0x0002 - 0x0000)
struct SkillInfoItem_C_PlayAnimUse final
{
public:
	bool                                          bInit;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_PlayAnimUse) == 0x000001, "Wrong alignment on SkillInfoItem_C_PlayAnimUse");
static_assert(sizeof(SkillInfoItem_C_PlayAnimUse) == 0x000002, "Wrong size on SkillInfoItem_C_PlayAnimUse");
static_assert(offsetof(SkillInfoItem_C_PlayAnimUse, bInit) == 0x000000, "Member 'SkillInfoItem_C_PlayAnimUse::bInit' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_PlayAnimUse, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'SkillInfoItem_C_PlayAnimUse::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.PlayAnimChargeEnd
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItem_C_PlayAnimChargeEnd final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_PlayAnimChargeEnd) == 0x000001, "Wrong alignment on SkillInfoItem_C_PlayAnimChargeEnd");
static_assert(sizeof(SkillInfoItem_C_PlayAnimChargeEnd) == 0x000001, "Wrong size on SkillInfoItem_C_PlayAnimChargeEnd");
static_assert(offsetof(SkillInfoItem_C_PlayAnimChargeEnd, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'SkillInfoItem_C_PlayAnimChargeEnd::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.SetSwitchGauge
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItem_C_SetSwitchGauge final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_SetSwitchGauge) == 0x000001, "Wrong alignment on SkillInfoItem_C_SetSwitchGauge");
static_assert(sizeof(SkillInfoItem_C_SetSwitchGauge) == 0x000001, "Wrong size on SkillInfoItem_C_SetSwitchGauge");
static_assert(offsetof(SkillInfoItem_C_SetSwitchGauge, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'SkillInfoItem_C_SetSwitchGauge::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.SetEnable
// 0x0002 (0x0002 - 0x0000)
struct SkillInfoItem_C_SetEnable final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_SetEnable) == 0x000001, "Wrong alignment on SkillInfoItem_C_SetEnable");
static_assert(sizeof(SkillInfoItem_C_SetEnable) == 0x000002, "Wrong size on SkillInfoItem_C_SetEnable");
static_assert(offsetof(SkillInfoItem_C_SetEnable, bEnabled) == 0x000000, "Member 'SkillInfoItem_C_SetEnable::bEnabled' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_SetEnable, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'SkillInfoItem_C_SetEnable::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.CheckShieldBreak
// 0x0028 (0x0028 - 0x0000)
struct SkillInfoItem_C_CheckShieldBreak final
{
public:
	bool                                          bCheck;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66B6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66B7[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_CheckShieldBreak) == 0x000008, "Wrong alignment on SkillInfoItem_C_CheckShieldBreak");
static_assert(sizeof(SkillInfoItem_C_CheckShieldBreak) == 0x000028, "Wrong size on SkillInfoItem_C_CheckShieldBreak");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, bCheck) == 0x000000, "Member 'SkillInfoItem_C_CheckShieldBreak::bCheck' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'SkillInfoItem_C_CheckShieldBreak::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'SkillInfoItem_C_CheckShieldBreak::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000011, "Member 'SkillInfoItem_C_CheckShieldBreak::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, K2Node_DynamicCast_AsSBPlayer_State) == 0x000018, "Member 'SkillInfoItem_C_CheckShieldBreak::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SkillInfoItem_C_CheckShieldBreak::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000021, "Member 'SkillInfoItem_C_CheckShieldBreak::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, CallFunc_GetClassType_ReturnValue) == 0x000022, "Member 'SkillInfoItem_C_CheckShieldBreak::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, CallFunc_BooleanOR_ReturnValue) == 0x000023, "Member 'SkillInfoItem_C_CheckShieldBreak::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000024, "Member 'SkillInfoItem_C_CheckShieldBreak::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, CallFunc_BooleanOR_ReturnValue_1) == 0x000025, "Member 'SkillInfoItem_C_CheckShieldBreak::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_CheckShieldBreak, CallFunc_BooleanAND_ReturnValue) == 0x000026, "Member 'SkillInfoItem_C_CheckShieldBreak::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.PlayAnimChargeStart
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItem_C_PlayAnimChargeStart final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_PlayAnimChargeStart) == 0x000001, "Wrong alignment on SkillInfoItem_C_PlayAnimChargeStart");
static_assert(sizeof(SkillInfoItem_C_PlayAnimChargeStart) == 0x000001, "Wrong size on SkillInfoItem_C_PlayAnimChargeStart");
static_assert(offsetof(SkillInfoItem_C_PlayAnimChargeStart, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'SkillInfoItem_C_PlayAnimChargeStart::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.GetGaugeImagine
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoItem_C_GetGaugeImagine final
{
public:
	ESkillActionPosition                          InGaugeImagineSAP;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsVaild;                                        // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66B8[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeImagine_C*               OutGaugeImagine;                                   // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_GetGaugeImagine) == 0x000008, "Wrong alignment on SkillInfoItem_C_GetGaugeImagine");
static_assert(sizeof(SkillInfoItem_C_GetGaugeImagine) == 0x000018, "Wrong size on SkillInfoItem_C_GetGaugeImagine");
static_assert(offsetof(SkillInfoItem_C_GetGaugeImagine, InGaugeImagineSAP) == 0x000000, "Member 'SkillInfoItem_C_GetGaugeImagine::InGaugeImagineSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeImagine, OutIsVaild) == 0x000001, "Member 'SkillInfoItem_C_GetGaugeImagine::OutIsVaild' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeImagine, OutGaugeImagine) == 0x000008, "Member 'SkillInfoItem_C_GetGaugeImagine::OutGaugeImagine' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeImagine, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'SkillInfoItem_C_GetGaugeImagine::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeImagine, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'SkillInfoItem_C_GetGaugeImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeImagine, CallFunc_IsValid_ReturnValue_1) == 0x000012, "Member 'SkillInfoItem_C_GetGaugeImagine::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.GetGaugeActive
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoItem_C_GetGaugeActive final
{
public:
	ESkillActionPosition                          InGaugeActiveSAP;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66B9[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeActive_C*                OutGaugeActive;                                    // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_GetGaugeActive) == 0x000008, "Wrong alignment on SkillInfoItem_C_GetGaugeActive");
static_assert(sizeof(SkillInfoItem_C_GetGaugeActive) == 0x000018, "Wrong size on SkillInfoItem_C_GetGaugeActive");
static_assert(offsetof(SkillInfoItem_C_GetGaugeActive, InGaugeActiveSAP) == 0x000000, "Member 'SkillInfoItem_C_GetGaugeActive::InGaugeActiveSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeActive, OutIsValid) == 0x000001, "Member 'SkillInfoItem_C_GetGaugeActive::OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeActive, OutGaugeActive) == 0x000008, "Member 'SkillInfoItem_C_GetGaugeActive::OutGaugeActive' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeActive, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'SkillInfoItem_C_GetGaugeActive::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeActive, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'SkillInfoItem_C_GetGaugeActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.GetGaugeMain
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoItem_C_GetGaugeMain final
{
public:
	bool                                          OutIsValid;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66BA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeMainDefHeal_C*           OutGaugeMain;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_GetGaugeMain) == 0x000008, "Wrong alignment on SkillInfoItem_C_GetGaugeMain");
static_assert(sizeof(SkillInfoItem_C_GetGaugeMain) == 0x000018, "Wrong size on SkillInfoItem_C_GetGaugeMain");
static_assert(offsetof(SkillInfoItem_C_GetGaugeMain, OutIsValid) == 0x000000, "Member 'SkillInfoItem_C_GetGaugeMain::OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeMain, OutGaugeMain) == 0x000008, "Member 'SkillInfoItem_C_GetGaugeMain::OutGaugeMain' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeMain, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoItem_C_GetGaugeMain::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.GetGaugeDef
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoItem_C_GetGaugeDef final
{
public:
	bool                                          OutIsValid;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66BB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeMainDefHeal_C*           OutGaugeDef;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_GetGaugeDef) == 0x000008, "Wrong alignment on SkillInfoItem_C_GetGaugeDef");
static_assert(sizeof(SkillInfoItem_C_GetGaugeDef) == 0x000018, "Wrong size on SkillInfoItem_C_GetGaugeDef");
static_assert(offsetof(SkillInfoItem_C_GetGaugeDef, OutIsValid) == 0x000000, "Member 'SkillInfoItem_C_GetGaugeDef::OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeDef, OutGaugeDef) == 0x000008, "Member 'SkillInfoItem_C_GetGaugeDef::OutGaugeDef' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeDef, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoItem_C_GetGaugeDef::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.GetGaugeSpecial
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoItem_C_GetGaugeSpecial final
{
public:
	bool                                          OutIsValid;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66BC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeSpecial_C*               OutGaugeSpecial;                                   // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_GetGaugeSpecial) == 0x000008, "Wrong alignment on SkillInfoItem_C_GetGaugeSpecial");
static_assert(sizeof(SkillInfoItem_C_GetGaugeSpecial) == 0x000018, "Wrong size on SkillInfoItem_C_GetGaugeSpecial");
static_assert(offsetof(SkillInfoItem_C_GetGaugeSpecial, OutIsValid) == 0x000000, "Member 'SkillInfoItem_C_GetGaugeSpecial::OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeSpecial, OutGaugeSpecial) == 0x000008, "Member 'SkillInfoItem_C_GetGaugeSpecial::OutGaugeSpecial' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetGaugeSpecial, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoItem_C_GetGaugeSpecial::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.SetKeyVisibilityPermanent
// 0x0003 (0x0003 - 0x0000)
struct SkillInfoItem_C_SetKeyVisibilityPermanent final
{
public:
	bool                                          InIsVisibilityPermanent;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsVisibilityPermanent;                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_SetKeyVisibilityPermanent) == 0x000001, "Wrong alignment on SkillInfoItem_C_SetKeyVisibilityPermanent");
static_assert(sizeof(SkillInfoItem_C_SetKeyVisibilityPermanent) == 0x000003, "Wrong size on SkillInfoItem_C_SetKeyVisibilityPermanent");
static_assert(offsetof(SkillInfoItem_C_SetKeyVisibilityPermanent, InIsVisibilityPermanent) == 0x000000, "Member 'SkillInfoItem_C_SetKeyVisibilityPermanent::InIsVisibilityPermanent' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_SetKeyVisibilityPermanent, LocalIsVisibilityPermanent) == 0x000001, "Member 'SkillInfoItem_C_SetKeyVisibilityPermanent::LocalIsVisibilityPermanent' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_SetKeyVisibilityPermanent, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'SkillInfoItem_C_SetKeyVisibilityPermanent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.SwitchSkillBg
// 0x0003 (0x0003 - 0x0000)
struct SkillInfoItem_C_SwitchSkillBg final
{
public:
	bool                                          bHud;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bBehind;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAnim;                                             // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_SwitchSkillBg) == 0x000001, "Wrong alignment on SkillInfoItem_C_SwitchSkillBg");
static_assert(sizeof(SkillInfoItem_C_SwitchSkillBg) == 0x000003, "Wrong size on SkillInfoItem_C_SwitchSkillBg");
static_assert(offsetof(SkillInfoItem_C_SwitchSkillBg, bHud) == 0x000000, "Member 'SkillInfoItem_C_SwitchSkillBg::bHud' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_SwitchSkillBg, bBehind) == 0x000001, "Member 'SkillInfoItem_C_SwitchSkillBg::bBehind' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_SwitchSkillBg, bAnim) == 0x000002, "Member 'SkillInfoItem_C_SwitchSkillBg::bAnim' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.GetSkillInfoItemSize
// 0x0028 (0x0028 - 0x0000)
struct SkillInfoItem_C_GetSkillInfoItemSize final
{
public:
	ESkillActionPosition                          InSAP;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66BD[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              OutSize;                                           // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66BE[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               LocalSizeBox;                                      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66BF[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoItem_C_GetSkillInfoItemSize) == 0x000008, "Wrong alignment on SkillInfoItem_C_GetSkillInfoItemSize");
static_assert(sizeof(SkillInfoItem_C_GetSkillInfoItemSize) == 0x000028, "Wrong size on SkillInfoItem_C_GetSkillInfoItemSize");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, InSAP) == 0x000000, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::InSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, OutIsValid) == 0x000001, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, OutSize) == 0x000004, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::OutSize' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, LocalSizeBox) == 0x000010, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::LocalSizeBox' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, CallFunc_IsValid_ReturnValue_1) == 0x00001A, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, CallFunc_IsValid_ReturnValue_2) == 0x00001B, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, CallFunc_IsValid_ReturnValue_3) == 0x00001C, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, CallFunc_IsValid_ReturnValue_4) == 0x00001D, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, CallFunc_IsValid_ReturnValue_5) == 0x00001E, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSkillInfoItemSize, CallFunc_MakeVector2D_ReturnValue) == 0x000020, "Member 'SkillInfoItem_C_GetSkillInfoItemSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.GetRecastTimeBP
// 0x0040 (0x0040 - 0x0000)
struct SkillInfoItem_C_GetRecastTimeBP final
{
public:
	float                                         MaxRecastTime;                                     // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecastTime;                                        // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowInfo;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66C0[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSpecialSkillRecastTime_MaxTime;        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSpecialSkillRecastTime_CurTime;        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66C1[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66C2[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSkillRecastTime_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBSkillInfoClass*                CallFunc_GetSkillInfo_ReturnValue;                 // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRecastTime_ReturnValue;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItem_C_GetRecastTimeBP) == 0x000008, "Wrong alignment on SkillInfoItem_C_GetRecastTimeBP");
static_assert(sizeof(SkillInfoItem_C_GetRecastTimeBP) == 0x000040, "Wrong size on SkillInfoItem_C_GetRecastTimeBP");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, MaxRecastTime) == 0x000000, "Member 'SkillInfoItem_C_GetRecastTimeBP::MaxRecastTime' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, RecastTime) == 0x000004, "Member 'SkillInfoItem_C_GetRecastTimeBP::RecastTime' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, bShowInfo) == 0x000008, "Member 'SkillInfoItem_C_GetRecastTimeBP::bShowInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, CallFunc_GetSpecialSkillRecastTime_MaxTime) == 0x00000C, "Member 'SkillInfoItem_C_GetRecastTimeBP::CallFunc_GetSpecialSkillRecastTime_MaxTime' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, CallFunc_GetSpecialSkillRecastTime_CurTime) == 0x000010, "Member 'SkillInfoItem_C_GetRecastTimeBP::CallFunc_GetSpecialSkillRecastTime_CurTime' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000014, "Member 'SkillInfoItem_C_GetRecastTimeBP::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000018, "Member 'SkillInfoItem_C_GetRecastTimeBP::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000020, "Member 'SkillInfoItem_C_GetRecastTimeBP::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SkillInfoItem_C_GetRecastTimeBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, CallFunc_GetSkillRecastTime_ReturnValue) == 0x00002C, "Member 'SkillInfoItem_C_GetRecastTimeBP::CallFunc_GetSkillRecastTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, CallFunc_GetSkillInfo_ReturnValue) == 0x000030, "Member 'SkillInfoItem_C_GetRecastTimeBP::CallFunc_GetSkillInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, CallFunc_GetRecastTime_ReturnValue) == 0x000038, "Member 'SkillInfoItem_C_GetRecastTimeBP::CallFunc_GetRecastTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'SkillInfoItem_C_GetRecastTimeBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetRecastTimeBP, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x00003D, "Member 'SkillInfoItem_C_GetRecastTimeBP::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function SkillInfoItem.SkillInfoItem_C.GetSpecialSkillRecastTime
// 0x0048 (0x0048 - 0x0000)
struct SkillInfoItem_C_GetSpecialSkillRecastTime final
{
public:
	float                                         MaxTime;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurTime;                                           // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66C3[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSpecialSkill*                  CallFunc_GetPlayerSpecialSkillComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxGauge_ReturnValue;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66C4[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGaugeTimeChargeAmount_ReturnValue;     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentGauge_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoItem_C_GetSpecialSkillRecastTime) == 0x000008, "Wrong alignment on SkillInfoItem_C_GetSpecialSkillRecastTime");
static_assert(sizeof(SkillInfoItem_C_GetSpecialSkillRecastTime) == 0x000048, "Wrong size on SkillInfoItem_C_GetSpecialSkillRecastTime");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, MaxTime) == 0x000000, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::MaxTime' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CurTime) == 0x000004, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CurTime' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CallFunc_GetPlayerSpecialSkillComponent_ReturnValue) == 0x000020, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CallFunc_GetPlayerSpecialSkillComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CallFunc_GetMaxGauge_ReturnValue) == 0x000028, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CallFunc_GetMaxGauge_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CallFunc_GetGaugeTimeChargeAmount_ReturnValue) == 0x000030, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CallFunc_GetGaugeTimeChargeAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000034, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CallFunc_GetCurrentGauge_ReturnValue) == 0x000038, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CallFunc_GetCurrentGauge_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00003C, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CallFunc_FMax_ReturnValue) == 0x000040, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItem_C_GetSpecialSkillRecastTime, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000044, "Member 'SkillInfoItem_C_GetSpecialSkillRecastTime::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");

}

