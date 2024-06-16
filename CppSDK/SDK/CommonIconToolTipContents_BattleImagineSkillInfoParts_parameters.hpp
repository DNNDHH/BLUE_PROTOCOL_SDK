#pragma once

 

// Package: CommonIconToolTipContents_BattleImagineSkillInfoParts

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts
// 0x0168 (0x0168 - 0x0000)
struct CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91E9[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       K2Node_CustomEvent_MasterImagine;                  // 0x0040(0x00B0)(ConstParm)
	struct FLinearColor                           K2Node_Event_Color;                                // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBImagineSkillInfo*              CallFunc_GetImagineSkillInfo_BP_ReturnValue;       // 0x0110(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91EA[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRecastTimeDefault_ReturnValue;         // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91EB[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SetTextColor_C>   CallFunc_SetTextColor_self_CastInput;              // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_SetTextColor_C>   CallFunc_SetTextColor_self_CastInput_1;            // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91EC[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SetTextColor_C>   CallFunc_SetTextColor_self_CastInput_2;            // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts) == 0x000008, "Wrong alignment on CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts");
static_assert(sizeof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts) == 0x000168, "Wrong size on CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, EntryPoint) == 0x000000, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, Temp_bool_Variable) == 0x000004, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_IsEmpty_ReturnValue) == 0x000005, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, K2Node_MakeArray_Array) == 0x000008, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_Array_Get_Item) == 0x000018, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000020, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_Conv_StringToName_ReturnValue) == 0x000038, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, K2Node_CustomEvent_MasterImagine) == 0x000040, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::K2Node_CustomEvent_MasterImagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, K2Node_Event_Color) == 0x0000F0, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::K2Node_Event_Color' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000100, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_GetPlayerManager_ReturnValue) == 0x000108, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_GetImagineSkillInfo_BP_ReturnValue) == 0x000110, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_GetImagineSkillInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_IsValid_ReturnValue) == 0x000118, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_GetRecastTimeDefault_ReturnValue) == 0x00011C, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_GetRecastTimeDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_MakeLiteralByte_ReturnValue) == 0x000120, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_SetTextColor_self_CastInput) == 0x000128, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_SetTextColor_self_CastInput' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_SetTextColor_self_CastInput_1) == 0x000138, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_SetTextColor_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000148, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, CallFunc_SetTextColor_self_CastInput_2) == 0x000150, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::CallFunc_SetTextColor_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts, K2Node_Select_Default) == 0x000160, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts::K2Node_Select_Default' has a wrong offset!");

// Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.SetTextColor
// 0x0010 (0x0010 - 0x0000)
struct CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetTextColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetTextColor) == 0x000004, "Wrong alignment on CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetTextColor");
static_assert(sizeof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetTextColor) == 0x000010, "Wrong size on CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetTextColor");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetTextColor, Color) == 0x000000, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetTextColor::Color' has a wrong offset!");

// Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.SetMasterImagineData
// 0x00B0 (0x00B0 - 0x0000)
struct CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetMasterImagineData final
{
public:
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetMasterImagineData) == 0x000008, "Wrong alignment on CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetMasterImagineData");
static_assert(sizeof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetMasterImagineData) == 0x0000B0, "Wrong size on CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetMasterImagineData");
static_assert(offsetof(CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetMasterImagineData, MasterImagine) == 0x000000, "Member 'CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetMasterImagineData::MasterImagine' has a wrong offset!");

}

