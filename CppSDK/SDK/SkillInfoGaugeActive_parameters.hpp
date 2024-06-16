#pragma once

 

// Package: SkillInfoGaugeActive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.ExecuteUbergraph_SkillInfoGaugeActive
// 0x0060 (0x0060 - 0x0000)
struct SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillIconBgType                            Temp_byte_Variable;                                // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillElementIconType                       Temp_byte_Variable_1;                              // 0x0005(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_706D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_1;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_706E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Event_SkillIconSmall;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsVisible;                            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_InAttackUp;                           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_706F[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSkillActionComponent*          K2Node_Event_SkillActionComp;                      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7070[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bVisible;                             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive");
static_assert(sizeof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive) == 0x000060, "Wrong size on SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, EntryPoint) == 0x000000, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, Temp_byte_Variable) == 0x000004, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, Temp_byte_Variable_1) == 0x000005, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, CallFunc_MakeLiteralByte_ReturnValue) == 0x000006, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, Temp_bool_Variable) == 0x000007, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, CallFunc_Map_Find_Value) == 0x000010, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, CallFunc_Map_Find_ReturnValue) == 0x000018, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, CallFunc_Map_Find_Value_1) == 0x000020, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, CallFunc_Map_Find_ReturnValue_1) == 0x000028, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, K2Node_Event_SkillIconSmall) == 0x000030, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::K2Node_Event_SkillIconSmall' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, K2Node_Event_IsVisible) == 0x000038, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::K2Node_Event_IsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, K2Node_Event_InAttackUp) == 0x000039, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::K2Node_Event_InAttackUp' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, K2Node_Event_SkillActionComp) == 0x000040, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::K2Node_Event_SkillActionComp' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000048, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, K2Node_Event_bVisible) == 0x000058, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive, K2Node_Select_Default) == 0x000059, "Member 'SkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnIconDisableChange
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeActive_C_OnIconDisableChange final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeActive_C_OnIconDisableChange) == 0x000001, "Wrong alignment on SkillInfoGaugeActive_C_OnIconDisableChange");
static_assert(sizeof(SkillInfoGaugeActive_C_OnIconDisableChange) == 0x000001, "Wrong size on SkillInfoGaugeActive_C_OnIconDisableChange");
static_assert(offsetof(SkillInfoGaugeActive_C_OnIconDisableChange, bVisible) == 0x000000, "Member 'SkillInfoGaugeActive_C_OnIconDisableChange::bVisible' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnAttackUpChange
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeActive_C_OnAttackUpChange final
{
public:
	bool                                          InAttackUp;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7071[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSkillActionComponent*          Param_SkillActionComp;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_OnAttackUpChange) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_OnAttackUpChange");
static_assert(sizeof(SkillInfoGaugeActive_C_OnAttackUpChange) == 0x000010, "Wrong size on SkillInfoGaugeActive_C_OnAttackUpChange");
static_assert(offsetof(SkillInfoGaugeActive_C_OnAttackUpChange, InAttackUp) == 0x000000, "Member 'SkillInfoGaugeActive_C_OnAttackUpChange::InAttackUp' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_OnAttackUpChange, Param_SkillActionComp) == 0x000008, "Member 'SkillInfoGaugeActive_C_OnAttackUpChange::Param_SkillActionComp' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnSetKeyGuideVisible
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeActive_C_OnSetKeyGuideVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeActive_C_OnSetKeyGuideVisible) == 0x000001, "Wrong alignment on SkillInfoGaugeActive_C_OnSetKeyGuideVisible");
static_assert(sizeof(SkillInfoGaugeActive_C_OnSetKeyGuideVisible) == 0x000001, "Wrong size on SkillInfoGaugeActive_C_OnSetKeyGuideVisible");
static_assert(offsetof(SkillInfoGaugeActive_C_OnSetKeyGuideVisible, Param_IsVisible) == 0x000000, "Member 'SkillInfoGaugeActive_C_OnSetKeyGuideVisible::Param_IsVisible' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnUpdateIconTexture
// 0x0008 (0x0008 - 0x0000)
struct SkillInfoGaugeActive_C_OnUpdateIconTexture final
{
public:
	class UTexture2D*                             SkillIconSmall;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_OnUpdateIconTexture) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_OnUpdateIconTexture");
static_assert(sizeof(SkillInfoGaugeActive_C_OnUpdateIconTexture) == 0x000008, "Wrong size on SkillInfoGaugeActive_C_OnUpdateIconTexture");
static_assert(offsetof(SkillInfoGaugeActive_C_OnUpdateIconTexture, SkillIconSmall) == 0x000000, "Member 'SkillInfoGaugeActive_C_OnUpdateIconTexture::SkillIconSmall' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetGaugeValue
// 0x0038 (0x0038 - 0x0000)
struct SkillInfoGaugeActive_C_SetGaugeValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InRecastTime;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7072[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_SetGaugeValue) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_SetGaugeValue");
static_assert(sizeof(SkillInfoGaugeActive_C_SetGaugeValue) == 0x000038, "Wrong size on SkillInfoGaugeActive_C_SetGaugeValue");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, InValue) == 0x000000, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::InValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, InRecastTime) == 0x000004, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::InRecastTime' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, CallFunc_MakeLiteralByte_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, CallFunc_FCeil_ReturnValue) == 0x00000C, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, CallFunc_FClamp_ReturnValue) == 0x000028, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00002C, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, CallFunc_Less_FloatFloat_ReturnValue) == 0x00002D, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, CallFunc_BooleanAND_ReturnValue) == 0x00002E, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, CallFunc_Not_PreBool_ReturnValue) == 0x00002F, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, CallFunc_Not_PreBool_ReturnValue_1) == 0x000030, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000031, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, Temp_bool_Variable) == 0x000032, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetGaugeValue, K2Node_Select_Default) == 0x000033, "Member 'SkillInfoGaugeActive_C_SetGaugeValue::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoGaugeActive_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SkillInfoGaugeActive_C_SetText) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_SetText");
static_assert(sizeof(SkillInfoGaugeActive_C_SetText) == 0x000018, "Wrong size on SkillInfoGaugeActive_C_SetText");
static_assert(offsetof(SkillInfoGaugeActive_C_SetText, InText) == 0x000000, "Member 'SkillInfoGaugeActive_C_SetText::InText' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimUse
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeActive_C_PlayAnimUse final
{
public:
	bool                                          bInit;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7073[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_PlayAnimUse) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_PlayAnimUse");
static_assert(sizeof(SkillInfoGaugeActive_C_PlayAnimUse) == 0x000010, "Wrong size on SkillInfoGaugeActive_C_PlayAnimUse");
static_assert(offsetof(SkillInfoGaugeActive_C_PlayAnimUse, bInit) == 0x000000, "Member 'SkillInfoGaugeActive_C_PlayAnimUse::bInit' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_PlayAnimUse, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'SkillInfoGaugeActive_C_PlayAnimUse::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_PlayAnimUse, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeActive_C_PlayAnimUse::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimChargeEnd
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeActive_C_PlayAnimChargeEnd final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7074[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_PlayAnimChargeEnd) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_PlayAnimChargeEnd");
static_assert(sizeof(SkillInfoGaugeActive_C_PlayAnimChargeEnd) == 0x000010, "Wrong size on SkillInfoGaugeActive_C_PlayAnimChargeEnd");
static_assert(offsetof(SkillInfoGaugeActive_C_PlayAnimChargeEnd, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'SkillInfoGaugeActive_C_PlayAnimChargeEnd::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_PlayAnimChargeEnd, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeActive_C_PlayAnimChargeEnd::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetEnabled
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeActive_C_SetEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeActive_C_SetEnabled) == 0x000001, "Wrong alignment on SkillInfoGaugeActive_C_SetEnabled");
static_assert(sizeof(SkillInfoGaugeActive_C_SetEnabled) == 0x000001, "Wrong size on SkillInfoGaugeActive_C_SetEnabled");
static_assert(offsetof(SkillInfoGaugeActive_C_SetEnabled, bEnabled) == 0x000000, "Member 'SkillInfoGaugeActive_C_SetEnabled::bEnabled' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.UpdateIconTexture
// 0x0068 (0x0068 - 0x0000)
struct SkillInfoGaugeActive_C_UpdateIconTexture final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceUpdate;                                       // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IgnoreEquipActiveAbilityCheckForIconBgType;        // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7075[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillId;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7076[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     LocalPlayerCharacter;                              // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalForceUpdate;                                  // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillElementIconType                       NextElementType;                                   // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillIconBgType                            NextBgType;                                        // 0x0022(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7077[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7078[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7079[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_707A[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_1;                         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillElementIconType                       CallFunc_GetIconElementType_ElementType;           // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillIconBgType                            CallFunc_GetIconBgType_BgType;                     // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeActive_C_UpdateIconTexture) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_UpdateIconTexture");
static_assert(sizeof(SkillInfoGaugeActive_C_UpdateIconTexture) == 0x000068, "Wrong size on SkillInfoGaugeActive_C_UpdateIconTexture");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, Texture) == 0x000000, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::Texture' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, SkillId) == 0x000008, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::SkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, ForceUpdate) == 0x00000C, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::ForceUpdate' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, IgnoreEquipActiveAbilityCheckForIconBgType) == 0x00000D, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::IgnoreEquipActiveAbilityCheckForIconBgType' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, LocalSkillId) == 0x000010, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::LocalSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, LocalPlayerCharacter) == 0x000018, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::LocalPlayerCharacter' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, LocalForceUpdate) == 0x000020, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::LocalForceUpdate' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, NextElementType) == 0x000021, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::NextElementType' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, NextBgType) == 0x000022, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::NextBgType' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, PlayerCharacter) == 0x000028, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000038, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_Map_Find_Value) == 0x000048, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_Map_Find_ReturnValue) == 0x000050, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000051, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_Map_Find_Value_1) == 0x000058, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_Map_Find_ReturnValue_1) == 0x000060, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000061, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_GetIconElementType_ElementType) == 0x000062, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_GetIconElementType_ElementType' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_Not_PreBool_ReturnValue) == 0x000063, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_GetIconBgType_BgType) == 0x000064, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_GetIconBgType_BgType' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000065, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateIconTexture, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000066, "Member 'SkillInfoGaugeActive_C_UpdateIconTexture::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimChargeStart
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeActive_C_PlayAnimChargeStart final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeActive_C_PlayAnimChargeStart) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_PlayAnimChargeStart");
static_assert(sizeof(SkillInfoGaugeActive_C_PlayAnimChargeStart) == 0x000010, "Wrong size on SkillInfoGaugeActive_C_PlayAnimChargeStart");
static_assert(offsetof(SkillInfoGaugeActive_C_PlayAnimChargeStart, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'SkillInfoGaugeActive_C_PlayAnimChargeStart::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_PlayAnimChargeStart, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeActive_C_PlayAnimChargeStart::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetKeyGuideVisible
// 0x0030 (0x0030 - 0x0000)
struct SkillInfoGaugeActive_C_SetKeyGuideVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_707B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeActive_C_SetKeyGuideVisible) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_SetKeyGuideVisible");
static_assert(sizeof(SkillInfoGaugeActive_C_SetKeyGuideVisible) == 0x000030, "Wrong size on SkillInfoGaugeActive_C_SetKeyGuideVisible");
static_assert(offsetof(SkillInfoGaugeActive_C_SetKeyGuideVisible, Param_IsVisible) == 0x000000, "Member 'SkillInfoGaugeActive_C_SetKeyGuideVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetKeyGuideVisible, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeActive_C_SetKeyGuideVisible::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetKeyGuideVisible, CallFunc_GetHUD_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeActive_C_SetKeyGuideVisible::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetKeyGuideVisible, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000018, "Member 'SkillInfoGaugeActive_C_SetKeyGuideVisible::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetKeyGuideVisible, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SkillInfoGaugeActive_C_SetKeyGuideVisible::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetIconOpacity
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeActive_C_SetIconOpacity final
{
public:
	bool                                          IsEquipped;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_707C[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_SetIconOpacity) == 0x000004, "Wrong alignment on SkillInfoGaugeActive_C_SetIconOpacity");
static_assert(sizeof(SkillInfoGaugeActive_C_SetIconOpacity) == 0x000010, "Wrong size on SkillInfoGaugeActive_C_SetIconOpacity");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIconOpacity, IsEquipped) == 0x000000, "Member 'SkillInfoGaugeActive_C_SetIconOpacity::IsEquipped' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIconOpacity, Temp_bool_Variable) == 0x000001, "Member 'SkillInfoGaugeActive_C_SetIconOpacity::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIconOpacity, Temp_float_Variable) == 0x000004, "Member 'SkillInfoGaugeActive_C_SetIconOpacity::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIconOpacity, Temp_float_Variable_1) == 0x000008, "Member 'SkillInfoGaugeActive_C_SetIconOpacity::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIconOpacity, K2Node_Select_Default) == 0x00000C, "Member 'SkillInfoGaugeActive_C_SetIconOpacity::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.GetIconBgType
// 0x0038 (0x0038 - 0x0000)
struct SkillInfoGaugeActive_C_GetIconBgType final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_707D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     InPlayerCharacter;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInIgnoreEquipActiveAbilityCheck;                  // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillIconBgType                            BgType;                                            // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_707E[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkillId;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_707F[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEqipedActiveAbility_OutSkillID;        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEqipedActiveAbility_ReturnValue;       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7080[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillIconBgType                            CallFunc_GetSkillIconBgType_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_GetIconBgType) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_GetIconBgType");
static_assert(sizeof(SkillInfoGaugeActive_C_GetIconBgType) == 0x000038, "Wrong size on SkillInfoGaugeActive_C_GetIconBgType");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconBgType, InSkillId) == 0x000000, "Member 'SkillInfoGaugeActive_C_GetIconBgType::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconBgType, InPlayerCharacter) == 0x000008, "Member 'SkillInfoGaugeActive_C_GetIconBgType::InPlayerCharacter' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconBgType, bInIgnoreEquipActiveAbilityCheck) == 0x000010, "Member 'SkillInfoGaugeActive_C_GetIconBgType::bInIgnoreEquipActiveAbilityCheck' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconBgType, BgType) == 0x000011, "Member 'SkillInfoGaugeActive_C_GetIconBgType::BgType' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconBgType, SkillId) == 0x000014, "Member 'SkillInfoGaugeActive_C_GetIconBgType::SkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconBgType, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'SkillInfoGaugeActive_C_GetIconBgType::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconBgType, CallFunc_GetEqipedActiveAbility_OutSkillID) == 0x00001C, "Member 'SkillInfoGaugeActive_C_GetIconBgType::CallFunc_GetEqipedActiveAbility_OutSkillID' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconBgType, CallFunc_GetEqipedActiveAbility_ReturnValue) == 0x000020, "Member 'SkillInfoGaugeActive_C_GetIconBgType::CallFunc_GetEqipedActiveAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconBgType, CallFunc_GetPlayerManager_ReturnValue) == 0x000028, "Member 'SkillInfoGaugeActive_C_GetIconBgType::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconBgType, CallFunc_GetSkillIconBgType_ReturnValue) == 0x000030, "Member 'SkillInfoGaugeActive_C_GetIconBgType::CallFunc_GetSkillIconBgType_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.UpdateAttackUp
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoGaugeActive_C_UpdateAttackUp final
{
public:
	bool                                          InAttackUp;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7081[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSkillActionComponent*          Param_SkillActionComp;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAttackUpRank_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_UpdateAttackUp) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_UpdateAttackUp");
static_assert(sizeof(SkillInfoGaugeActive_C_UpdateAttackUp) == 0x000018, "Wrong size on SkillInfoGaugeActive_C_UpdateAttackUp");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateAttackUp, InAttackUp) == 0x000000, "Member 'SkillInfoGaugeActive_C_UpdateAttackUp::InAttackUp' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateAttackUp, Param_SkillActionComp) == 0x000008, "Member 'SkillInfoGaugeActive_C_UpdateAttackUp::Param_SkillActionComp' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateAttackUp, CallFunc_GetAttackUpRank_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeActive_C_UpdateAttackUp::CallFunc_GetAttackUpRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_UpdateAttackUp, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'SkillInfoGaugeActive_C_UpdateAttackUp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.GetIconElementType
// 0x0098 (0x0098 - 0x0000)
struct SkillInfoGaugeActive_C_GetIconElementType final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7082[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     InPlayerCharacter;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillElementIconType                       ElementType;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7083[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkillId;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7084[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillElementIconType                       CallFunc_GetSkillIconElementType_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7085[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0038(0x0058)()
	bool                                          CallFunc_IsEquipedArtsSkillId_ReturnValue;         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipedArtsSkillId_ReturnValue_1;       // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeActive_C_GetIconElementType) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_GetIconElementType");
static_assert(sizeof(SkillInfoGaugeActive_C_GetIconElementType) == 0x000098, "Wrong size on SkillInfoGaugeActive_C_GetIconElementType");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, InSkillId) == 0x000000, "Member 'SkillInfoGaugeActive_C_GetIconElementType::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, InPlayerCharacter) == 0x000008, "Member 'SkillInfoGaugeActive_C_GetIconElementType::InPlayerCharacter' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, ElementType) == 0x000010, "Member 'SkillInfoGaugeActive_C_GetIconElementType::ElementType' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, SkillId) == 0x000014, "Member 'SkillInfoGaugeActive_C_GetIconElementType::SkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, CallFunc_GetPlayerManager_ReturnValue) == 0x000018, "Member 'SkillInfoGaugeActive_C_GetIconElementType::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'SkillInfoGaugeActive_C_GetIconElementType::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'SkillInfoGaugeActive_C_GetIconElementType::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, CallFunc_GetSkillIconElementType_ReturnValue) == 0x000030, "Member 'SkillInfoGaugeActive_C_GetIconElementType::CallFunc_GetSkillIconElementType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000031, "Member 'SkillInfoGaugeActive_C_GetIconElementType::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000038, "Member 'SkillInfoGaugeActive_C_GetIconElementType::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, CallFunc_IsEquipedArtsSkillId_ReturnValue) == 0x000090, "Member 'SkillInfoGaugeActive_C_GetIconElementType::CallFunc_IsEquipedArtsSkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_GetIconElementType, CallFunc_IsEquipedArtsSkillId_ReturnValue_1) == 0x000091, "Member 'SkillInfoGaugeActive_C_GetIconElementType::CallFunc_IsEquipedArtsSkillId_ReturnValue_1' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.CheckBerserkModeSkill
// 0x0048 (0x0048 - 0x0000)
struct SkillInfoGaugeActive_C_CheckBerserkModeSkill final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Ret;                                               // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7086[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7087[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7088[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSkillActionComponent*          CallFunc_GetSkillActionComponent_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBActiveArtsID>                CallFunc_GetBerserkModePowerupSkillArray_OutPowerupSkillArray; // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBActiveArtsID                        CallFunc_Array_Get_Item;                           // 0x003C(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeActive_C_CheckBerserkModeSkill) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_CheckBerserkModeSkill");
static_assert(sizeof(SkillInfoGaugeActive_C_CheckBerserkModeSkill) == 0x000048, "Wrong size on SkillInfoGaugeActive_C_CheckBerserkModeSkill");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, NewParam) == 0x000000, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::NewParam' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, Ret) == 0x000001, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::Ret' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, Temp_bool_True_if_break_was_hit_Variable) == 0x000002, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, Temp_int_Array_Index_Variable) == 0x000004, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000018, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, CallFunc_GetSkillActionComponent_ReturnValue) == 0x000020, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::CallFunc_GetSkillActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, CallFunc_GetBerserkModePowerupSkillArray_OutPowerupSkillArray) == 0x000028, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::CallFunc_GetBerserkModePowerupSkillArray_OutPowerupSkillArray' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, CallFunc_Array_Get_Item) == 0x00003C, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_CheckBerserkModeSkill, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000042, "Member 'SkillInfoGaugeActive_C_CheckBerserkModeSkill::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetIsEmpty
// 0x0014 (0x0014 - 0x0000)
struct SkillInfoGaugeActive_C_SetIsEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7089[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_708A[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_SetIsEmpty) == 0x000004, "Wrong alignment on SkillInfoGaugeActive_C_SetIsEmpty");
static_assert(sizeof(SkillInfoGaugeActive_C_SetIsEmpty) == 0x000014, "Wrong size on SkillInfoGaugeActive_C_SetIsEmpty");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIsEmpty, InIsEmpty) == 0x000000, "Member 'SkillInfoGaugeActive_C_SetIsEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIsEmpty, Temp_int_Variable) == 0x000004, "Member 'SkillInfoGaugeActive_C_SetIsEmpty::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIsEmpty, Temp_int_Variable_1) == 0x000008, "Member 'SkillInfoGaugeActive_C_SetIsEmpty::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIsEmpty, Temp_bool_Variable) == 0x00000C, "Member 'SkillInfoGaugeActive_C_SetIsEmpty::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIsEmpty, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'SkillInfoGaugeActive_C_SetIsEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetIsEmpty, K2Node_Select_Default) == 0x000010, "Member 'SkillInfoGaugeActive_C_SetIsEmpty::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetEmptyColor
// 0x0014 (0x0014 - 0x0000)
struct SkillInfoGaugeActive_C_SetEmptyColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeActive_C_SetEmptyColor) == 0x000004, "Wrong alignment on SkillInfoGaugeActive_C_SetEmptyColor");
static_assert(sizeof(SkillInfoGaugeActive_C_SetEmptyColor) == 0x000014, "Wrong size on SkillInfoGaugeActive_C_SetEmptyColor");
static_assert(offsetof(SkillInfoGaugeActive_C_SetEmptyColor, InColor) == 0x000000, "Member 'SkillInfoGaugeActive_C_SetEmptyColor::InColor' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetEmptyColor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeActive_C_SetEmptyColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetKeyVisibilityPermanent
// 0x0005 (0x0005 - 0x0000)
struct SkillInfoGaugeActive_C_SetKeyVisibilityPermanent final
{
public:
	bool                                          InIsVisibilityPermanent;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_SetKeyVisibilityPermanent) == 0x000001, "Wrong alignment on SkillInfoGaugeActive_C_SetKeyVisibilityPermanent");
static_assert(sizeof(SkillInfoGaugeActive_C_SetKeyVisibilityPermanent) == 0x000005, "Wrong size on SkillInfoGaugeActive_C_SetKeyVisibilityPermanent");
static_assert(offsetof(SkillInfoGaugeActive_C_SetKeyVisibilityPermanent, InIsVisibilityPermanent) == 0x000000, "Member 'SkillInfoGaugeActive_C_SetKeyVisibilityPermanent::InIsVisibilityPermanent' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetKeyVisibilityPermanent, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'SkillInfoGaugeActive_C_SetKeyVisibilityPermanent::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetKeyVisibilityPermanent, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'SkillInfoGaugeActive_C_SetKeyVisibilityPermanent::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetKeyVisibilityPermanent, Temp_bool_Variable) == 0x000003, "Member 'SkillInfoGaugeActive_C_SetKeyVisibilityPermanent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SetKeyVisibilityPermanent, K2Node_Select_Default) == 0x000004, "Member 'SkillInfoGaugeActive_C_SetKeyVisibilityPermanent::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SwitchSkillBg
// 0x0028 (0x0028 - 0x0000)
struct SkillInfoGaugeActive_C_SwitchSkillBg final
{
public:
	bool                                          bHud;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bBehind;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAnim;                                             // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_708B[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeActive_C_SwitchSkillBg) == 0x000008, "Wrong alignment on SkillInfoGaugeActive_C_SwitchSkillBg");
static_assert(sizeof(SkillInfoGaugeActive_C_SwitchSkillBg) == 0x000028, "Wrong size on SkillInfoGaugeActive_C_SwitchSkillBg");
static_assert(offsetof(SkillInfoGaugeActive_C_SwitchSkillBg, bHud) == 0x000000, "Member 'SkillInfoGaugeActive_C_SwitchSkillBg::bHud' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SwitchSkillBg, bBehind) == 0x000001, "Member 'SkillInfoGaugeActive_C_SwitchSkillBg::bBehind' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SwitchSkillBg, bAnim) == 0x000002, "Member 'SkillInfoGaugeActive_C_SwitchSkillBg::bAnim' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SwitchSkillBg, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeActive_C_SwitchSkillBg::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SwitchSkillBg, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeActive_C_SwitchSkillBg::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SwitchSkillBg, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000018, "Member 'SkillInfoGaugeActive_C_SwitchSkillBg::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeActive_C_SwitchSkillBg, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000020, "Member 'SkillInfoGaugeActive_C_SwitchSkillBg::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

}

