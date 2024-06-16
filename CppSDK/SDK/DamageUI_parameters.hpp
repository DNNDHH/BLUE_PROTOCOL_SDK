#pragma once

 

// Package: DamageUI

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "DamageUI_NumberData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DamageUI_DamageCorrectionIconData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DamageUI.DamageUI_C.ExecuteUbergraph_DamageUI
// 0x0048 (0x0048 - 0x0000)
struct DamageUI_C_ExecuteUbergraph_DamageUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71A4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71A5[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71A6[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0038(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DamageUI_C_ExecuteUbergraph_DamageUI) == 0x000008, "Wrong alignment on DamageUI_C_ExecuteUbergraph_DamageUI");
static_assert(sizeof(DamageUI_C_ExecuteUbergraph_DamageUI) == 0x000048, "Wrong size on DamageUI_C_ExecuteUbergraph_DamageUI");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, EntryPoint) == 0x000000, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, Temp_bool_Variable) == 0x000004, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, Temp_byte_Variable) == 0x000018, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, Temp_byte_Variable_1) == 0x000019, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000020, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, K2Node_CustomEvent_InUIType) == 0x000028, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, K2Node_CustomEvent_bInVisibility) == 0x000029, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, K2Node_CustomEvent_bInInstantly) == 0x00002A, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002B, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, K2Node_Select_Default) == 0x00002C, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000030, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, K2Node_Event_Animation) == 0x000038, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(DamageUI_C_ExecuteUbergraph_DamageUI, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x000040, "Member 'DamageUI_C_ExecuteUbergraph_DamageUI::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");

// Function DamageUI.DamageUI_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct DamageUI_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DamageUI_C_OnAnimationFinished) == 0x000008, "Wrong alignment on DamageUI_C_OnAnimationFinished");
static_assert(sizeof(DamageUI_C_OnAnimationFinished) == 0x000008, "Wrong size on DamageUI_C_OnAnimationFinished");
static_assert(offsetof(DamageUI_C_OnAnimationFinished, Animation) == 0x000000, "Member 'DamageUI_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function DamageUI.DamageUI_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct DamageUI_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DamageUI_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on DamageUI_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(DamageUI_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on DamageUI_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(DamageUI_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'DamageUI_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(DamageUI_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'DamageUI_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(DamageUI_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'DamageUI_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function DamageUI.DamageUI_C.SetMiss
// 0x0028 (0x0028 - 0x0000)
struct DamageUI_C_SetMiss final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDamageUI_Miss_C*                       CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DamageUI_C_SetMiss) == 0x000008, "Wrong alignment on DamageUI_C_SetMiss");
static_assert(sizeof(DamageUI_C_SetMiss) == 0x000028, "Wrong size on DamageUI_C_SetMiss");
static_assert(offsetof(DamageUI_C_SetMiss, K2Node_MakeStruct_Margin) == 0x000000, "Member 'DamageUI_C_SetMiss::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetMiss, CallFunc_Create_ReturnValue) == 0x000010, "Member 'DamageUI_C_SetMiss::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetMiss, CallFunc_MakeVector2D_ReturnValue) == 0x000018, "Member 'DamageUI_C_SetMiss::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetMiss, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000020, "Member 'DamageUI_C_SetMiss::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function DamageUI.DamageUI_C.SetNumber
// 0x0100 (0x0100 - 0x0000)
struct DamageUI_C_SetNumber final
{
public:
	class FString                                 NumberString;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FDamageUI_NumberData                   NumberData;                                        // 0x0010(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UDamageUI_Number_C*                     CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDamageUI_Number_C*                     CallFunc_Create_ReturnValue_1;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDamage_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71A7[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumberDataIndex_ReturnValue;           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDamageUIRequestInfo                 CallFunc_GetRequestInfo_ReturnValue;               // 0x0058(0x0020)(ConstParm, NoDestructor)
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71A8[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCriticalHit_ReturnValue;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71A9[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x00A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71AA[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71AB[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71AC[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDamageUI_NumberData>           K2Node_Select_Default;                             // 0x00E0(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetCharacterAsNumber_ReturnValue;         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item_1;                         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DamageUI_C_SetNumber) == 0x000008, "Wrong alignment on DamageUI_C_SetNumber");
static_assert(sizeof(DamageUI_C_SetNumber) == 0x000100, "Wrong size on DamageUI_C_SetNumber");
static_assert(offsetof(DamageUI_C_SetNumber, NumberString) == 0x000000, "Member 'DamageUI_C_SetNumber::NumberString' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, NumberData) == 0x000010, "Member 'DamageUI_C_SetNumber::NumberData' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Create_ReturnValue) == 0x000028, "Member 'DamageUI_C_SetNumber::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, K2Node_MakeStruct_Margin) == 0x000030, "Member 'DamageUI_C_SetNumber::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Create_ReturnValue_1) == 0x000040, "Member 'DamageUI_C_SetNumber::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, Temp_int_Variable) == 0x000048, "Member 'DamageUI_C_SetNumber::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'DamageUI_C_SetNumber::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_IsDamage_ReturnValue) == 0x000050, "Member 'DamageUI_C_SetNumber::CallFunc_IsDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Not_PreBool_ReturnValue) == 0x000051, "Member 'DamageUI_C_SetNumber::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_GetNumberDataIndex_ReturnValue) == 0x000054, "Member 'DamageUI_C_SetNumber::CallFunc_GetNumberDataIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_GetRequestInfo_ReturnValue) == 0x000058, "Member 'DamageUI_C_SetNumber::CallFunc_GetRequestInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Abs_Int_ReturnValue) == 0x000078, "Member 'DamageUI_C_SetNumber::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_MakeVector2D_ReturnValue) == 0x00007C, "Member 'DamageUI_C_SetNumber::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Conv_IntToString_ReturnValue) == 0x000088, "Member 'DamageUI_C_SetNumber::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Array_Get_Item) == 0x000098, "Member 'DamageUI_C_SetNumber::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_IsCriticalHit_ReturnValue) == 0x0000A0, "Member 'DamageUI_C_SetNumber::CallFunc_IsCriticalHit_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, K2Node_MakeStruct_Margin_1) == 0x0000A4, "Member 'DamageUI_C_SetNumber::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0000B8, "Member 'DamageUI_C_SetNumber::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Len_ReturnValue) == 0x0000C0, "Member 'DamageUI_C_SetNumber::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000C4, "Member 'DamageUI_C_SetNumber::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'DamageUI_C_SetNumber::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x0000D0, "Member 'DamageUI_C_SetNumber::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, Temp_bool_Variable) == 0x0000D8, "Member 'DamageUI_C_SetNumber::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, K2Node_Select_Default) == 0x0000E0, "Member 'DamageUI_C_SetNumber::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_GetCharacterAsNumber_ReturnValue) == 0x0000F0, "Member 'DamageUI_C_SetNumber::CallFunc_GetCharacterAsNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000F4, "Member 'DamageUI_C_SetNumber::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetNumber, CallFunc_Array_Get_Item_1) == 0x0000F8, "Member 'DamageUI_C_SetNumber::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function DamageUI.DamageUI_C.SetDamageCorrectionIcon
// 0x0098 (0x0098 - 0x0000)
struct DamageUI_C_SetDamageCorrectionIcon final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AttributeScale;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TextureIndex;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71AD[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageUIRequestInfo                 CallFunc_GetRequestInfo_ReturnValue;               // 0x0018(0x0020)(ConstParm, NoDestructor)
	struct FDamageUI_DamageCorrectionIconData     CallFunc_Array_Get_Item;                           // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71AE[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71AF[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDamageUI_DamageCorrectionIcon_C*       CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDamageUI_DamageCorrectionIconData     CallFunc_Array_Get_Item_1;                         // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDamageUI_DamageCorrectionIconData     CallFunc_Array_Get_Item_2;                         // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DamageUI_C_SetDamageCorrectionIcon) == 0x000008, "Wrong alignment on DamageUI_C_SetDamageCorrectionIcon");
static_assert(sizeof(DamageUI_C_SetDamageCorrectionIcon) == 0x000098, "Wrong size on DamageUI_C_SetDamageCorrectionIcon");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, Texture) == 0x000000, "Member 'DamageUI_C_SetDamageCorrectionIcon::Texture' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, AttributeScale) == 0x000008, "Member 'DamageUI_C_SetDamageCorrectionIcon::AttributeScale' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, TextureIndex) == 0x00000C, "Member 'DamageUI_C_SetDamageCorrectionIcon::TextureIndex' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, Temp_int_Array_Index_Variable) == 0x000010, "Member 'DamageUI_C_SetDamageCorrectionIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_GetRequestInfo_ReturnValue) == 0x000018, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_GetRequestInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_Array_Get_Item) == 0x000038, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_Less_FloatFloat_ReturnValue) == 0x000048, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_Create_ReturnValue) == 0x000058, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, Temp_int_Loop_Counter_Variable) == 0x000060, "Member 'DamageUI_C_SetDamageCorrectionIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000078, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_Array_Get_Item_2) == 0x000080, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_Array_Length_ReturnValue_1) == 0x000090, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetDamageCorrectionIcon, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000095, "Member 'DamageUI_C_SetDamageCorrectionIcon::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function DamageUI.DamageUI_C.PlayAnim
// 0x0018 (0x0018 - 0x0000)
struct DamageUI_C_PlayAnim final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCriticalHit_ReturnValue;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHeal_ReturnValue;                       // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDamage_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCriticalHit_ReturnValue_1;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidgetAnimation*                       K2Node_Select_Default_1;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DamageUI_C_PlayAnim) == 0x000008, "Wrong alignment on DamageUI_C_PlayAnim");
static_assert(sizeof(DamageUI_C_PlayAnim) == 0x000018, "Wrong size on DamageUI_C_PlayAnim");
static_assert(offsetof(DamageUI_C_PlayAnim, Temp_bool_Variable) == 0x000000, "Member 'DamageUI_C_PlayAnim::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DamageUI_C_PlayAnim, Temp_bool_Variable_1) == 0x000001, "Member 'DamageUI_C_PlayAnim::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_PlayAnim, CallFunc_IsCriticalHit_ReturnValue) == 0x000002, "Member 'DamageUI_C_PlayAnim::CallFunc_IsCriticalHit_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_PlayAnim, CallFunc_IsHeal_ReturnValue) == 0x000003, "Member 'DamageUI_C_PlayAnim::CallFunc_IsHeal_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_PlayAnim, CallFunc_IsDamage_ReturnValue) == 0x000004, "Member 'DamageUI_C_PlayAnim::CallFunc_IsDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_PlayAnim, CallFunc_IsCriticalHit_ReturnValue_1) == 0x000005, "Member 'DamageUI_C_PlayAnim::CallFunc_IsCriticalHit_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_PlayAnim, CallFunc_BooleanOR_ReturnValue) == 0x000006, "Member 'DamageUI_C_PlayAnim::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_PlayAnim, K2Node_Select_Default) == 0x000007, "Member 'DamageUI_C_PlayAnim::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DamageUI_C_PlayAnim, K2Node_Select_Default_1) == 0x000008, "Member 'DamageUI_C_PlayAnim::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'DamageUI_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function DamageUI.DamageUI_C.SetBorderAlignment
// 0x0028 (0x0028 - 0x0000)
struct DamageUI_C_SetBorderAlignment final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71B0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDamage_ReturnValue;                     // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71B1[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DamageUI_C_SetBorderAlignment) == 0x000008, "Wrong alignment on DamageUI_C_SetBorderAlignment");
static_assert(sizeof(DamageUI_C_SetBorderAlignment) == 0x000028, "Wrong size on DamageUI_C_SetBorderAlignment");
static_assert(offsetof(DamageUI_C_SetBorderAlignment, Temp_bool_Variable) == 0x000000, "Member 'DamageUI_C_SetBorderAlignment::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetBorderAlignment, Temp_struct_Variable) == 0x000004, "Member 'DamageUI_C_SetBorderAlignment::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetBorderAlignment, Temp_struct_Variable_1) == 0x00000C, "Member 'DamageUI_C_SetBorderAlignment::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetBorderAlignment, CallFunc_IsDamage_ReturnValue) == 0x000014, "Member 'DamageUI_C_SetBorderAlignment::CallFunc_IsDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetBorderAlignment, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'DamageUI_C_SetBorderAlignment::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageUI_C_SetBorderAlignment, K2Node_Select_Default) == 0x000020, "Member 'DamageUI_C_SetBorderAlignment::K2Node_Select_Default' has a wrong offset!");

}

