#pragma once

 

// Package: WBP_BattleImagineSkillInfoParts

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.ExecuteUbergraph_WBP_BattleImagineSkillInfoParts
// 0x0150 (0x0150 - 0x0000)
struct WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91F8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91F9[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       K2Node_CustomEvent_MasterImagine;                  // 0x0048(0x00B0)(ConstParm)
	class FString                                 K2Node_CustomEvent_UniqueId;                       // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Event_Color;                                // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SetTextColor_C>   CallFunc_SetTextColor_self_CastInput;              // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRecastTimeDefault_ReturnValue;         // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91FA[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBImagineSkillInfo*              CallFunc_GetImagineSkillInfo_BP_ReturnValue;       // 0x0140(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsVisible;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts) == 0x000008, "Wrong alignment on WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts");
static_assert(sizeof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts) == 0x000150, "Wrong size on WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, EntryPoint) == 0x000000, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, K2Node_MakeArray_Array) == 0x000008, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000020, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_Conv_StringToName_ReturnValue) == 0x000038, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_IsEmpty_ReturnValue) == 0x000040, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, Temp_byte_Variable) == 0x000041, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_IsValid_ReturnValue) == 0x000042, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, K2Node_CustomEvent_MasterImagine) == 0x000048, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::K2Node_CustomEvent_MasterImagine' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, K2Node_CustomEvent_UniqueId) == 0x0000F8, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, K2Node_Event_Color) == 0x000108, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::K2Node_Event_Color' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_SetTextColor_self_CastInput) == 0x000118, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_SetTextColor_self_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000128, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_GetPlayerManager_ReturnValue) == 0x000130, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_GetRecastTimeDefault_ReturnValue) == 0x000138, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_GetRecastTimeDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_GetImagineSkillInfo_BP_ReturnValue) == 0x000140, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_GetImagineSkillInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, K2Node_CustomEvent_InIsVisible) == 0x000148, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::K2Node_CustomEvent_InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, Temp_byte_Variable_1) == 0x000149, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, CallFunc_IsValid_ReturnValue_1) == 0x00014A, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, Temp_bool_Variable) == 0x00014B, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, K2Node_Select_Default) == 0x00014C, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts, K2Node_Event_IsDesignTime) == 0x00014D, "Member 'WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_BattleImagineSkillInfoParts_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_BattleImagineSkillInfoParts_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_BattleImagineSkillInfoParts_C_PreConstruct");
static_assert(sizeof(WBP_BattleImagineSkillInfoParts_C_PreConstruct) == 0x000001, "Wrong size on WBP_BattleImagineSkillInfoParts_C_PreConstruct");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_BattleImagineSkillInfoParts_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetPossessionInfoVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_BattleImagineSkillInfoParts_C_SetPossessionInfoVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_BattleImagineSkillInfoParts_C_SetPossessionInfoVisibility) == 0x000001, "Wrong alignment on WBP_BattleImagineSkillInfoParts_C_SetPossessionInfoVisibility");
static_assert(sizeof(WBP_BattleImagineSkillInfoParts_C_SetPossessionInfoVisibility) == 0x000001, "Wrong size on WBP_BattleImagineSkillInfoParts_C_SetPossessionInfoVisibility");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_SetPossessionInfoVisibility, InIsVisible) == 0x000000, "Member 'WBP_BattleImagineSkillInfoParts_C_SetPossessionInfoVisibility::InIsVisible' has a wrong offset!");

// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetTextColor
// 0x0010 (0x0010 - 0x0000)
struct WBP_BattleImagineSkillInfoParts_C_SetTextColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleImagineSkillInfoParts_C_SetTextColor) == 0x000004, "Wrong alignment on WBP_BattleImagineSkillInfoParts_C_SetTextColor");
static_assert(sizeof(WBP_BattleImagineSkillInfoParts_C_SetTextColor) == 0x000010, "Wrong size on WBP_BattleImagineSkillInfoParts_C_SetTextColor");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_SetTextColor, Color) == 0x000000, "Member 'WBP_BattleImagineSkillInfoParts_C_SetTextColor::Color' has a wrong offset!");

// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetMasterImagineData
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_BattleImagineSkillInfoParts_C_SetMasterImagineData final
{
public:
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 UniqueId;                                          // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleImagineSkillInfoParts_C_SetMasterImagineData) == 0x000008, "Wrong alignment on WBP_BattleImagineSkillInfoParts_C_SetMasterImagineData");
static_assert(sizeof(WBP_BattleImagineSkillInfoParts_C_SetMasterImagineData) == 0x0000C0, "Wrong size on WBP_BattleImagineSkillInfoParts_C_SetMasterImagineData");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_SetMasterImagineData, MasterImagine) == 0x000000, "Member 'WBP_BattleImagineSkillInfoParts_C_SetMasterImagineData::MasterImagine' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_SetMasterImagineData, UniqueId) == 0x0000B0, "Member 'WBP_BattleImagineSkillInfoParts_C_SetMasterImagineData::UniqueId' has a wrong offset!");

// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetSkillInfoIconActive
// 0x0004 (0x0004 - 0x0000)
struct WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsActive;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive) == 0x000001, "Wrong alignment on WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive");
static_assert(sizeof(WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive) == 0x000004, "Wrong size on WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive, InIsActive) == 0x000000, "Member 'WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive::InIsActive' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive, LocalIsActive) == 0x000001, "Member 'WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive::LocalIsActive' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive, CallFunc_IsValid_ReturnValue_1) == 0x000003, "Member 'WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetInfoMark
// 0x0001 (0x0001 - 0x0000)
struct WBP_BattleImagineSkillInfoParts_C_SetInfoMark final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_BattleImagineSkillInfoParts_C_SetInfoMark) == 0x000001, "Wrong alignment on WBP_BattleImagineSkillInfoParts_C_SetInfoMark");
static_assert(sizeof(WBP_BattleImagineSkillInfoParts_C_SetInfoMark) == 0x000001, "Wrong size on WBP_BattleImagineSkillInfoParts_C_SetInfoMark");
static_assert(offsetof(WBP_BattleImagineSkillInfoParts_C_SetInfoMark, Visible) == 0x000000, "Member 'WBP_BattleImagineSkillInfoParts_C_SetInfoMark::Visible' has a wrong offset!");

}

