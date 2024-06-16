#pragma once

 

// Package: SkillInfoGaugeSpecial

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.ExecuteUbergraph_SkillInfoGaugeSpecial
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bVisible;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_inbActive;                            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81E6[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial) == 0x000008, "Wrong alignment on SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial");
static_assert(sizeof(SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial) == 0x000018, "Wrong size on SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial");
static_assert(offsetof(SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial, EntryPoint) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial, K2Node_Event_bVisible) == 0x000004, "Member 'SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000006, "Member 'SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial, Temp_bool_Variable) == 0x000007, "Member 'SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial, K2Node_Select_Default) == 0x000008, "Member 'SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial, K2Node_Event_inbActive) == 0x000009, "Member 'SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial::K2Node_Event_inbActive' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.OnIconDisableChange
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeSpecial_C_OnIconDisableChange final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_OnIconDisableChange) == 0x000001, "Wrong alignment on SkillInfoGaugeSpecial_C_OnIconDisableChange");
static_assert(sizeof(SkillInfoGaugeSpecial_C_OnIconDisableChange) == 0x000001, "Wrong size on SkillInfoGaugeSpecial_C_OnIconDisableChange");
static_assert(offsetof(SkillInfoGaugeSpecial_C_OnIconDisableChange, bVisible) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_OnIconDisableChange::bVisible' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.OnUpdateIconTexture
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeSpecial_C_OnUpdateIconTexture final
{
public:
	bool                                          InbActive;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_OnUpdateIconTexture) == 0x000001, "Wrong alignment on SkillInfoGaugeSpecial_C_OnUpdateIconTexture");
static_assert(sizeof(SkillInfoGaugeSpecial_C_OnUpdateIconTexture) == 0x000001, "Wrong size on SkillInfoGaugeSpecial_C_OnUpdateIconTexture");
static_assert(offsetof(SkillInfoGaugeSpecial_C_OnUpdateIconTexture, InbActive) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_OnUpdateIconTexture::InbActive' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Set Gauge Value
// 0x0088 (0x0088 - 0x0000)
struct SkillInfoGaugeSpecial_C_Set_Gauge_Value final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InRecastTime;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutCheckDebugMode_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81E7[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81E8[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0058(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_Set_Gauge_Value) == 0x000008, "Wrong alignment on SkillInfoGaugeSpecial_C_Set_Gauge_Value");
static_assert(sizeof(SkillInfoGaugeSpecial_C_Set_Gauge_Value) == 0x000088, "Wrong size on SkillInfoGaugeSpecial_C_Set_Gauge_Value");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, InValue) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::InValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, InRecastTime) == 0x000004, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::InRecastTime' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_IsOutCheckDebugMode_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_IsOutCheckDebugMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_Conv_FloatToString_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_FCeil_ReturnValue) == 0x000030, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_Conv_IntToString_ReturnValue) == 0x000048, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_Conv_IntToText_ReturnValue) == 0x000058, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000070, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_FClamp_ReturnValue) == 0x000080, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000084, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_Less_FloatFloat_ReturnValue) == 0x000085, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Set_Gauge_Value, CallFunc_BooleanAND_ReturnValue) == 0x000086, "Member 'SkillInfoGaugeSpecial_C_Set_Gauge_Value::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoGaugeSpecial_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_SetText) == 0x000008, "Wrong alignment on SkillInfoGaugeSpecial_C_SetText");
static_assert(sizeof(SkillInfoGaugeSpecial_C_SetText) == 0x000018, "Wrong size on SkillInfoGaugeSpecial_C_SetText");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetText, InText) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_SetText::InText' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimUse
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeSpecial_C_PlayAnimUse final
{
public:
	bool                                          bInit;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81E9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_PlayAnimUse) == 0x000008, "Wrong alignment on SkillInfoGaugeSpecial_C_PlayAnimUse");
static_assert(sizeof(SkillInfoGaugeSpecial_C_PlayAnimUse) == 0x000010, "Wrong size on SkillInfoGaugeSpecial_C_PlayAnimUse");
static_assert(offsetof(SkillInfoGaugeSpecial_C_PlayAnimUse, bInit) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_PlayAnimUse::bInit' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_PlayAnimUse, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'SkillInfoGaugeSpecial_C_PlayAnimUse::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_PlayAnimUse, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeSpecial_C_PlayAnimUse::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimChargeEnd
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeSpecial_C_PlayAnimChargeEnd final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81EA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_PlayAnimChargeEnd) == 0x000008, "Wrong alignment on SkillInfoGaugeSpecial_C_PlayAnimChargeEnd");
static_assert(sizeof(SkillInfoGaugeSpecial_C_PlayAnimChargeEnd) == 0x000010, "Wrong size on SkillInfoGaugeSpecial_C_PlayAnimChargeEnd");
static_assert(offsetof(SkillInfoGaugeSpecial_C_PlayAnimChargeEnd, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_PlayAnimChargeEnd::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_PlayAnimChargeEnd, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeSpecial_C_PlayAnimChargeEnd::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetEnabled
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeSpecial_C_SetEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_SetEnabled) == 0x000001, "Wrong alignment on SkillInfoGaugeSpecial_C_SetEnabled");
static_assert(sizeof(SkillInfoGaugeSpecial_C_SetEnabled) == 0x000001, "Wrong size on SkillInfoGaugeSpecial_C_SetEnabled");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetEnabled, bEnabled) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_SetEnabled::bEnabled' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimChargeStart
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeSpecial_C_PlayAnimChargeStart final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_PlayAnimChargeStart) == 0x000008, "Wrong alignment on SkillInfoGaugeSpecial_C_PlayAnimChargeStart");
static_assert(sizeof(SkillInfoGaugeSpecial_C_PlayAnimChargeStart) == 0x000010, "Wrong size on SkillInfoGaugeSpecial_C_PlayAnimChargeStart");
static_assert(offsetof(SkillInfoGaugeSpecial_C_PlayAnimChargeStart, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_PlayAnimChargeStart::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_PlayAnimChargeStart, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeSpecial_C_PlayAnimChargeStart::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Update Icon Texture
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeSpecial_C_Update_Icon_Texture final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_Update_Icon_Texture) == 0x000001, "Wrong alignment on SkillInfoGaugeSpecial_C_Update_Icon_Texture");
static_assert(sizeof(SkillInfoGaugeSpecial_C_Update_Icon_Texture) == 0x000001, "Wrong size on SkillInfoGaugeSpecial_C_Update_Icon_Texture");
static_assert(offsetof(SkillInfoGaugeSpecial_C_Update_Icon_Texture, Active) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_Update_Icon_Texture::Active' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetKeyGuideVisible
// 0x0030 (0x0030 - 0x0000)
struct SkillInfoGaugeSpecial_C_SetKeyGuideVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81EB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_SetKeyGuideVisible) == 0x000008, "Wrong alignment on SkillInfoGaugeSpecial_C_SetKeyGuideVisible");
static_assert(sizeof(SkillInfoGaugeSpecial_C_SetKeyGuideVisible) == 0x000030, "Wrong size on SkillInfoGaugeSpecial_C_SetKeyGuideVisible");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetKeyGuideVisible, Param_IsVisible) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_SetKeyGuideVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetKeyGuideVisible, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeSpecial_C_SetKeyGuideVisible::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetKeyGuideVisible, CallFunc_GetHUD_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeSpecial_C_SetKeyGuideVisible::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetKeyGuideVisible, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000018, "Member 'SkillInfoGaugeSpecial_C_SetKeyGuideVisible::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetKeyGuideVisible, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SkillInfoGaugeSpecial_C_SetKeyGuideVisible::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetIsEmpty
// 0x0014 (0x0014 - 0x0000)
struct SkillInfoGaugeSpecial_C_SetIsEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81EC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81ED[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_SetIsEmpty) == 0x000004, "Wrong alignment on SkillInfoGaugeSpecial_C_SetIsEmpty");
static_assert(sizeof(SkillInfoGaugeSpecial_C_SetIsEmpty) == 0x000014, "Wrong size on SkillInfoGaugeSpecial_C_SetIsEmpty");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetIsEmpty, InIsEmpty) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_SetIsEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetIsEmpty, Temp_int_Variable) == 0x000004, "Member 'SkillInfoGaugeSpecial_C_SetIsEmpty::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetIsEmpty, Temp_int_Variable_1) == 0x000008, "Member 'SkillInfoGaugeSpecial_C_SetIsEmpty::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetIsEmpty, Temp_bool_Variable) == 0x00000C, "Member 'SkillInfoGaugeSpecial_C_SetIsEmpty::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetIsEmpty, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'SkillInfoGaugeSpecial_C_SetIsEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetIsEmpty, K2Node_Select_Default) == 0x000010, "Member 'SkillInfoGaugeSpecial_C_SetIsEmpty::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetEmptyColor
// 0x0014 (0x0014 - 0x0000)
struct SkillInfoGaugeSpecial_C_SetEmptyColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeSpecial_C_SetEmptyColor) == 0x000004, "Wrong alignment on SkillInfoGaugeSpecial_C_SetEmptyColor");
static_assert(sizeof(SkillInfoGaugeSpecial_C_SetEmptyColor) == 0x000014, "Wrong size on SkillInfoGaugeSpecial_C_SetEmptyColor");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetEmptyColor, InColor) == 0x000000, "Member 'SkillInfoGaugeSpecial_C_SetEmptyColor::InColor' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeSpecial_C_SetEmptyColor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeSpecial_C_SetEmptyColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

