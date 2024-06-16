#pragma once

 

// Package: RespawnHUD

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function RespawnHUD.RespawnHUD_C.ExecuteUbergraph_RespawnHUD
// 0x0050 (0x0050 - 0x0000)
struct RespawnHUD_C_ExecuteUbergraph_RespawnHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCountdownUI_C*                         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECountdownResult                              K2Node_CustomEvent_Result;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41BA[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ECountdownResult Result)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_41BB[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41BC[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCountdownUI_C*                         CallFunc_Create_ReturnValue_1;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerUIComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD) == 0x000008, "Wrong alignment on RespawnHUD_C_ExecuteUbergraph_RespawnHUD");
static_assert(sizeof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD) == 0x000050, "Wrong size on RespawnHUD_C_ExecuteUbergraph_RespawnHUD");
static_assert(offsetof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD, EntryPoint) == 0x000000, "Member 'RespawnHUD_C_ExecuteUbergraph_RespawnHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD, CallFunc_Create_ReturnValue) == 0x000008, "Member 'RespawnHUD_C_ExecuteUbergraph_RespawnHUD::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD, K2Node_CustomEvent_Result) == 0x000010, "Member 'RespawnHUD_C_ExecuteUbergraph_RespawnHUD::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'RespawnHUD_C_ExecuteUbergraph_RespawnHUD::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'RespawnHUD_C_ExecuteUbergraph_RespawnHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'RespawnHUD_C_ExecuteUbergraph_RespawnHUD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000030, "Member 'RespawnHUD_C_ExecuteUbergraph_RespawnHUD::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'RespawnHUD_C_ExecuteUbergraph_RespawnHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD, CallFunc_Create_ReturnValue_1) == 0x000040, "Member 'RespawnHUD_C_ExecuteUbergraph_RespawnHUD::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ExecuteUbergraph_RespawnHUD, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'RespawnHUD_C_ExecuteUbergraph_RespawnHUD::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function RespawnHUD.RespawnHUD_C.EndCounddownDynamicDlegate_Event
// 0x0001 (0x0001 - 0x0000)
struct RespawnHUD_C_EndCounddownDynamicDlegate_Event final
{
public:
	ECountdownResult                              Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnHUD_C_EndCounddownDynamicDlegate_Event) == 0x000001, "Wrong alignment on RespawnHUD_C_EndCounddownDynamicDlegate_Event");
static_assert(sizeof(RespawnHUD_C_EndCounddownDynamicDlegate_Event) == 0x000001, "Wrong size on RespawnHUD_C_EndCounddownDynamicDlegate_Event");
static_assert(offsetof(RespawnHUD_C_EndCounddownDynamicDlegate_Event, Result) == 0x000000, "Member 'RespawnHUD_C_EndCounddownDynamicDlegate_Event::Result' has a wrong offset!");

// Function RespawnHUD.RespawnHUD_C.ShowRespawn
// 0x0038 (0x0038 - 0x0000)
struct RespawnHUD_C_ShowRespawn final
{
public:
	float                                         InTime;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41BD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41BE[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState*                           K2Node_DynamicCast_AsSBGame_State;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNoWaitSelfRespawnInput_ReturnValue;     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41BF[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildIndex_ReturnValue;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChildAt_ReturnValue;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RespawnHUD_C_ShowRespawn) == 0x000008, "Wrong alignment on RespawnHUD_C_ShowRespawn");
static_assert(sizeof(RespawnHUD_C_ShowRespawn) == 0x000038, "Wrong size on RespawnHUD_C_ShowRespawn");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, InTime) == 0x000000, "Member 'RespawnHUD_C_ShowRespawn::InTime' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'RespawnHUD_C_ShowRespawn::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, CallFunc_FCeil_ReturnValue) == 0x000008, "Member 'RespawnHUD_C_ShowRespawn::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'RespawnHUD_C_ShowRespawn::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, CallFunc_Max_ReturnValue) == 0x000010, "Member 'RespawnHUD_C_ShowRespawn::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'RespawnHUD_C_ShowRespawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'RespawnHUD_C_ShowRespawn::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, K2Node_DynamicCast_AsSBGame_State) == 0x000020, "Member 'RespawnHUD_C_ShowRespawn::K2Node_DynamicCast_AsSBGame_State' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'RespawnHUD_C_ShowRespawn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, CallFunc_IsNoWaitSelfRespawnInput_ReturnValue) == 0x000029, "Member 'RespawnHUD_C_ShowRespawn::CallFunc_IsNoWaitSelfRespawnInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, CallFunc_GetChildIndex_ReturnValue) == 0x00002C, "Member 'RespawnHUD_C_ShowRespawn::CallFunc_GetChildIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_ShowRespawn, CallFunc_RemoveChildAt_ReturnValue) == 0x000030, "Member 'RespawnHUD_C_ShowRespawn::CallFunc_RemoveChildAt_ReturnValue' has a wrong offset!");

// Function RespawnHUD.RespawnHUD_C.GetResurrectionRemainTimeRate
// 0x0040 (0x0040 - 0x0000)
struct RespawnHUD_C_GetResurrectionRemainTimeRate final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41C0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41C1[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetResurrectionTime_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41C2[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerResurrectionComponent*         CallFunc_GetPlayerResurrectionComponent_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41C3[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnHUD_C_GetResurrectionRemainTimeRate) == 0x000008, "Wrong alignment on RespawnHUD_C_GetResurrectionRemainTimeRate");
static_assert(sizeof(RespawnHUD_C_GetResurrectionRemainTimeRate) == 0x000040, "Wrong size on RespawnHUD_C_GetResurrectionRemainTimeRate");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, Rate) == 0x000000, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::Rate' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_GetPlayerManager_ReturnValue) == 0x000008, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000010, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_GetResurrectionTime_ReturnValue) == 0x000018, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_GetResurrectionTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00001C, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000020, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_GetPlayerResurrectionComponent_ReturnValue) == 0x000028, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_GetPlayerResurrectionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000034, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000038, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_GetResurrectionRemainTimeRate, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00003C, "Member 'RespawnHUD_C_GetResurrectionRemainTimeRate::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function RespawnHUD.RespawnHUD_C.UpdateRespawnGauge
// 0x0010 (0x0010 - 0x0000)
struct RespawnHUD_C_UpdateRespawnGauge final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41C4[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetResurrectionRemainTimeRate_Rate;       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnHUD_C_UpdateRespawnGauge) == 0x000008, "Wrong alignment on RespawnHUD_C_UpdateRespawnGauge");
static_assert(sizeof(RespawnHUD_C_UpdateRespawnGauge) == 0x000010, "Wrong size on RespawnHUD_C_UpdateRespawnGauge");
static_assert(offsetof(RespawnHUD_C_UpdateRespawnGauge, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000000, "Member 'RespawnHUD_C_UpdateRespawnGauge::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_UpdateRespawnGauge, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'RespawnHUD_C_UpdateRespawnGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnHUD_C_UpdateRespawnGauge, CallFunc_GetResurrectionRemainTimeRate_Rate) == 0x00000C, "Member 'RespawnHUD_C_UpdateRespawnGauge::CallFunc_GetResurrectionRemainTimeRate_Rate' has a wrong offset!");

}

