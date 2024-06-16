#pragma once

 

// Package: PlayerHPGauge

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PlayerHPGauge.PlayerHPGauge_C.ExecuteUbergraph_PlayerHPGauge
// 0x01F0 (0x01F0 - 0x0000)
struct PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7287[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsShow)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7288[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0040(0x0018)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_1;                    // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7289[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_728A[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput;            // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue; // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_728B[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00C8(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_728C[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_728D[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x00F0(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue_1;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_728E[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_728F[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_2;                    // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerCurrentHp_ReturnValue;           // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerCurrentHp_ReturnValue_1;         // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsEdit;                        // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7290[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPlayerMaxHp_ReturnValue;               // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7291[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAlwaysShowFieldHUD_ReturnValue;         // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7292[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsShow;                        // 0x0188(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bForward;                             // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7293[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x018C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Forward;                        // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7294[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7295[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge) == 0x000008, "Wrong alignment on PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge");
static_assert(sizeof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge) == 0x0001F0, "Wrong size on PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, EntryPoint) == 0x000000, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, Temp_bool_Variable) == 0x000004, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, Temp_byte_Variable) == 0x000005, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, Temp_byte_Variable_1) == 0x000006, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000030, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000034, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000038, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Greater_IntInt_ReturnValue) == 0x00003C, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000040, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000058, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetSize_ReturnValue) == 0x000060, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetSize_ReturnValue_1) == 0x000068, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_BreakVector2D_X) == 0x000070, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_BreakVector2D_Y) == 0x000074, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000078, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_BreakVector2D_X_1) == 0x000080, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_BreakVector2D_Y_1) == 0x000084, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000088, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000094, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetMaxHitPoint_self_CastInput) == 0x0000A0, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetMaxHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetMaxHitPoint_ReturnValue) == 0x0000B0, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue) == 0x0000B4, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000B8, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_FClamp_ReturnValue) == 0x0000BC, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000C0, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetText_ReturnValue) == 0x0000C8, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_NotEqual_TextText_ReturnValue) == 0x0000E0, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x0000E1, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_MakeVector2D_ReturnValue) == 0x0000E4, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetText_ReturnValue_1) == 0x0000F0, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_NotEqual_TextText_ReturnValue_1) == 0x000108, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_NotEqual_TextText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00010C, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_FClamp_ReturnValue_1) == 0x000110, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000118, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetSize_ReturnValue_2) == 0x000120, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000128, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_BreakVector2D_X_2) == 0x000130, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_BreakVector2D_Y_2) == 0x000134, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetPlayerCurrentHp_ReturnValue) == 0x000138, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetPlayerCurrentHp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetPlayerCurrentHp_ReturnValue_1) == 0x00013C, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetPlayerCurrentHp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000140, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_CustomEvent_bIsEdit) == 0x000150, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_CustomEvent_bIsEdit' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetPlayerMaxHp_ReturnValue) == 0x000154, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetPlayerMaxHp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetConfigSaveManager_IsValid) == 0x000158, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000160, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetPlayerId_ReturnValue) == 0x000168, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_IsAlwaysShowFieldHUD_ReturnValue) == 0x000178, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_IsAlwaysShowFieldHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000180, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_CustomEvent_bIsShow) == 0x000188, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_CustomEvent_bIsShow' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_Event_bForward) == 0x000189, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_Event_bForward' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_Event_MyGeometry) == 0x00018C, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_Event_InDeltaTime) == 0x0001C4, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_CustomEvent_Forward) == 0x0001C8, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_CustomEvent_Forward' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, K2Node_Select_Default) == 0x0001C9, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_PlayAnimation_ReturnValue) == 0x0001D0, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0001D8, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0001E0, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_BooleanOR_ReturnValue) == 0x0001E8, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_IsValid_ReturnValue_1) == 0x0001E9, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Not_PreBool_ReturnValue) == 0x0001EA, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001EB, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge, CallFunc_BooleanAND_ReturnValue) == 0x0001EC, "Member 'PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function PlayerHPGauge.PlayerHPGauge_C.OnAnimation
// 0x0001 (0x0001 - 0x0000)
struct PlayerHPGauge_C_OnAnimation final
{
public:
	bool                                          Forward;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerHPGauge_C_OnAnimation) == 0x000001, "Wrong alignment on PlayerHPGauge_C_OnAnimation");
static_assert(sizeof(PlayerHPGauge_C_OnAnimation) == 0x000001, "Wrong size on PlayerHPGauge_C_OnAnimation");
static_assert(offsetof(PlayerHPGauge_C_OnAnimation, Forward) == 0x000000, "Member 'PlayerHPGauge_C_OnAnimation::Forward' has a wrong offset!");

// Function PlayerHPGauge.PlayerHPGauge_C.Tick
// 0x003C (0x003C - 0x0000)
struct PlayerHPGauge_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerHPGauge_C_Tick) == 0x000004, "Wrong alignment on PlayerHPGauge_C_Tick");
static_assert(sizeof(PlayerHPGauge_C_Tick) == 0x00003C, "Wrong size on PlayerHPGauge_C_Tick");
static_assert(offsetof(PlayerHPGauge_C_Tick, MyGeometry) == 0x000000, "Member 'PlayerHPGauge_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_Tick, InDeltaTime) == 0x000038, "Member 'PlayerHPGauge_C_Tick::InDeltaTime' has a wrong offset!");

// Function PlayerHPGauge.PlayerHPGauge_C.OnInAnimation
// 0x0001 (0x0001 - 0x0000)
struct PlayerHPGauge_C_OnInAnimation final
{
public:
	bool                                          bForward;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerHPGauge_C_OnInAnimation) == 0x000001, "Wrong alignment on PlayerHPGauge_C_OnInAnimation");
static_assert(sizeof(PlayerHPGauge_C_OnInAnimation) == 0x000001, "Wrong size on PlayerHPGauge_C_OnInAnimation");
static_assert(offsetof(PlayerHPGauge_C_OnInAnimation, bForward) == 0x000000, "Member 'PlayerHPGauge_C_OnInAnimation::bForward' has a wrong offset!");

// Function PlayerHPGauge.PlayerHPGauge_C.OnChangeShowAlwaysHUD_event
// 0x0001 (0x0001 - 0x0000)
struct PlayerHPGauge_C_OnChangeShowAlwaysHUD_event final
{
public:
	bool                                          bIsShow;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerHPGauge_C_OnChangeShowAlwaysHUD_event) == 0x000001, "Wrong alignment on PlayerHPGauge_C_OnChangeShowAlwaysHUD_event");
static_assert(sizeof(PlayerHPGauge_C_OnChangeShowAlwaysHUD_event) == 0x000001, "Wrong size on PlayerHPGauge_C_OnChangeShowAlwaysHUD_event");
static_assert(offsetof(PlayerHPGauge_C_OnChangeShowAlwaysHUD_event, bIsShow) == 0x000000, "Member 'PlayerHPGauge_C_OnChangeShowAlwaysHUD_event::bIsShow' has a wrong offset!");

// Function PlayerHPGauge.PlayerHPGauge_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct PlayerHPGauge_C_SetEditMode final
{
public:
	bool                                          bIsEdit;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerHPGauge_C_SetEditMode) == 0x000001, "Wrong alignment on PlayerHPGauge_C_SetEditMode");
static_assert(sizeof(PlayerHPGauge_C_SetEditMode) == 0x000001, "Wrong size on PlayerHPGauge_C_SetEditMode");
static_assert(offsetof(PlayerHPGauge_C_SetEditMode, bIsEdit) == 0x000000, "Member 'PlayerHPGauge_C_SetEditMode::bIsEdit' has a wrong offset!");

// Function PlayerHPGauge.PlayerHPGauge_C.SetBgVisibility
// 0x0001 (0x0001 - 0x0000)
struct PlayerHPGauge_C_SetBgVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerHPGauge_C_SetBgVisibility) == 0x000001, "Wrong alignment on PlayerHPGauge_C_SetBgVisibility");
static_assert(sizeof(PlayerHPGauge_C_SetBgVisibility) == 0x000001, "Wrong size on PlayerHPGauge_C_SetBgVisibility");
static_assert(offsetof(PlayerHPGauge_C_SetBgVisibility, Param_IsVisible) == 0x000000, "Member 'PlayerHPGauge_C_SetBgVisibility::Param_IsVisible' has a wrong offset!");

// Function PlayerHPGauge.PlayerHPGauge_C.AdjustHPGaugeSize
// 0x0048 (0x0048 - 0x0000)
struct PlayerHPGauge_C_AdjustHPGaugeSize final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7296[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerHPGauge_C_AdjustHPGaugeSize) == 0x000008, "Wrong alignment on PlayerHPGauge_C_AdjustHPGaugeSize");
static_assert(sizeof(PlayerHPGauge_C_AdjustHPGaugeSize) == 0x000048, "Wrong size on PlayerHPGauge_C_AdjustHPGaugeSize");
static_assert(offsetof(PlayerHPGauge_C_AdjustHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'PlayerHPGauge_C_AdjustHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_AdjustHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000008, "Member 'PlayerHPGauge_C_AdjustHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_AdjustHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000010, "Member 'PlayerHPGauge_C_AdjustHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_AdjustHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000018, "Member 'PlayerHPGauge_C_AdjustHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_AdjustHPGaugeSize, CallFunc_GetSize_ReturnValue) == 0x000020, "Member 'PlayerHPGauge_C_AdjustHPGaugeSize::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_AdjustHPGaugeSize, CallFunc_BreakVector2D_X) == 0x000028, "Member 'PlayerHPGauge_C_AdjustHPGaugeSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_AdjustHPGaugeSize, CallFunc_BreakVector2D_Y) == 0x00002C, "Member 'PlayerHPGauge_C_AdjustHPGaugeSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_AdjustHPGaugeSize, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000030, "Member 'PlayerHPGauge_C_AdjustHPGaugeSize::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_AdjustHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x000038, "Member 'PlayerHPGauge_C_AdjustHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_AdjustHPGaugeSize, CallFunc_MakeVector2D_ReturnValue) == 0x000040, "Member 'PlayerHPGauge_C_AdjustHPGaugeSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function PlayerHPGauge.PlayerHPGauge_C.UpdatePrevHP
// 0x0060 (0x0060 - 0x0000)
struct PlayerHPGauge_C_UpdatePrevHP final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7297[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7298[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7299[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerInitialParametersLoadCompleted_ReturnValue; // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_729A[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_729B[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerHPGauge_C_UpdatePrevHP) == 0x000008, "Wrong alignment on PlayerHPGauge_C_UpdatePrevHP");
static_assert(sizeof(PlayerHPGauge_C_UpdatePrevHP) == 0x000060, "Wrong size on PlayerHPGauge_C_UpdatePrevHP");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, DeltaTime) == 0x000000, "Member 'PlayerHPGauge_C_UpdatePrevHP::DeltaTime' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, K2Node_MathExpression_ReturnValue) == 0x000010, "Member 'PlayerHPGauge_C_UpdatePrevHP::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'PlayerHPGauge_C_UpdatePrevHP::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'PlayerHPGauge_C_UpdatePrevHP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_FTrunc_ReturnValue) == 0x000024, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_IsPlayerInitialParametersLoadCompleted_ReturnValue) == 0x000029, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_IsPlayerInitialParametersLoadCompleted_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_GetSize_ReturnValue) == 0x00002C, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000038, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x00003C, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000040, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_BreakVector2D_X) == 0x000044, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_BreakVector2D_Y) == 0x000048, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00004C, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_FClamp_ReturnValue) == 0x000050, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_MakeVector2D_ReturnValue) == 0x000054, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdatePrevHP, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00005C, "Member 'PlayerHPGauge_C_UpdatePrevHP::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

// Function PlayerHPGauge.PlayerHPGauge_C.UpdateHPLossGaunge
// 0x00A0 (0x00A0 - 0x0000)
struct PlayerHPGauge_C_UpdateHPLossGaunge final
{
public:
	bool                                          bIsHpLoss;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsVisible;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_729C[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxHitPoint;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableHealMaxHitPoint;                             // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_729D[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_729E[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidDsState_ReturnValue;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_729F[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72A0[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72A1[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72A2[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEnableHealMaxHitPoint_ReturnValue;     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput;            // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerHPGauge_C_UpdateHPLossGaunge) == 0x000008, "Wrong alignment on PlayerHPGauge_C_UpdateHPLossGaunge");
static_assert(sizeof(PlayerHPGauge_C_UpdateHPLossGaunge) == 0x0000A0, "Wrong size on PlayerHPGauge_C_UpdateHPLossGaunge");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, bIsHpLoss) == 0x000000, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::bIsHpLoss' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, bIsVisible) == 0x000001, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::bIsVisible' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, MaxHitPoint) == 0x000004, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::MaxHitPoint' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, EnableHealMaxHitPoint) == 0x000008, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::EnableHealMaxHitPoint' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_FTrunc_ReturnValue) == 0x00000C, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_FTrunc_ReturnValue_1) == 0x000010, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_GetSize_ReturnValue) == 0x000020, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_BreakVector2D_X) == 0x000028, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_BreakVector2D_Y) == 0x00002C, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_IsVisible_ReturnValue) == 0x000030, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000038, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_ValidDsState_ReturnValue) == 0x000040, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_ValidDsState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_Less_FloatFloat_ReturnValue) == 0x000041, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000048, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000050, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000058, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000060, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000068, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_MakeVector2D_ReturnValue) == 0x000074, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_GetEnableHealMaxHitPoint_ReturnValue) == 0x00007C, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_GetEnableHealMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_GetMaxHitPoint_self_CastInput) == 0x000080, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_GetMaxHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_GetMaxHitPoint_ReturnValue) == 0x000090, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_GetMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000094, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerHPGauge_C_UpdateHPLossGaunge, CallFunc_MakeVector2D_ReturnValue_1) == 0x000098, "Member 'PlayerHPGauge_C_UpdateHPLossGaunge::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

}

