#pragma once

 

// Package: PlayerSTGauge

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PlayerSTGauge.PlayerSTGauge_C.ExecuteUbergraph_PlayerSTGauge
// 0x0290 (0x0290 - 0x0000)
struct PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_726E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_726F[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsShow)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_2;                              // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7270[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0038(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerMaxStamina_ReturnValue;          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerCurrentStamina_ReturnValue;      // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7271[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0088(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7272[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00B0(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7273[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x00D0(0x0018)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00F8(0x0018)()
	float                                         CallFunc_BreakVector2D_X;                          // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_TextText_ReturnValue_1;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7274[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7275[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput;            // 0x0140(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue; // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7276[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_1;                    // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7277[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7278[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPlayerCurrentStamina_ReturnValue_1;    // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7279[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClimbing_ReturnValue;                   // 0x019B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetPlayerCurrentStamina_ReturnValue_2;    // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_727A[0x2];                                     // 0x01A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_4;            // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_5;            // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_727B[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_727C[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_2;         // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_4;                              // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_727D[0x1];                                     // 0x01EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x01F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x01F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_727E[0x1];                                     // 0x01F7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x01F8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsEdit;                        // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_727F[0x5];                                     // 0x020B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_3;         // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7280[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_3;         // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7281[0x6];                                     // 0x0232(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAlwaysShowFieldHUD_ReturnValue;         // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsShow;                        // 0x0252(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7282[0x5];                                     // 0x0253(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Forward;                        // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x026B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default_1;                           // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7283[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bForward;                             // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          K2Node_Select_Default_2;                           // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7284[0x6];                                     // 0x027A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_4;             // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x028A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x028B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge) == 0x000008, "Wrong alignment on PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge");
static_assert(sizeof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge) == 0x000290, "Wrong size on PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, EntryPoint) == 0x000000, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, Temp_byte_Variable) == 0x000010, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, Temp_bool_Variable) == 0x000034, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, Temp_byte_Variable_1) == 0x000035, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, Temp_byte_Variable_2) == 0x000036, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_Event_MyGeometry) == 0x000038, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_Event_InDeltaTime) == 0x000070, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_MathExpression_ReturnValue) == 0x000074, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetPlayerMaxStamina_ReturnValue) == 0x000078, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetPlayerMaxStamina_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_FTrunc_ReturnValue) == 0x00007C, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetPlayerCurrentStamina_ReturnValue) == 0x000080, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetPlayerCurrentStamina_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Conv_IntToText_ReturnValue) == 0x000088, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x0000A0, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x0000A4, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A8, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Greater_IntInt_ReturnValue) == 0x0000AC, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetText_ReturnValue) == 0x0000B0, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_NotEqual_TextText_ReturnValue) == 0x0000C8, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetText_ReturnValue_1) == 0x0000D0, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000E8, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetSize_ReturnValue) == 0x0000F0, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000F8, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_BreakVector2D_X) == 0x000110, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_BreakVector2D_Y) == 0x000114, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_NotEqual_TextText_ReturnValue_1) == 0x000118, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_NotEqual_TextText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00011C, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_MakeVector2D_ReturnValue) == 0x000120, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000128, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000130, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_IsValid_ReturnValue_1) == 0x000139, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetMaxHitPoint_self_CastInput) == 0x000140, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetMaxHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetMaxHitPoint_ReturnValue) == 0x000150, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue) == 0x000154, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000158, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00015C, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetSize_ReturnValue_1) == 0x000160, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_BreakVector2D_X_1) == 0x000168, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_BreakVector2D_Y_1) == 0x00016C, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000170, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000174, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_FClamp_ReturnValue) == 0x000178, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00017C, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetPlayerCurrentStamina_ReturnValue_1) == 0x000180, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetPlayerCurrentStamina_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000188, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000190, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_DynamicCast_bSuccess_1) == 0x000198, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_IsValid_ReturnValue_2) == 0x000199, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Not_PreBool_ReturnValue_1) == 0x00019A, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_IsClimbing_ReturnValue) == 0x00019B, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_IsClimbing_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetPlayerCurrentStamina_ReturnValue_2) == 0x00019C, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetPlayerCurrentStamina_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Not_PreBool_ReturnValue_2) == 0x0001A0, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0001A1, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Conv_IntToFloat_ReturnValue_4) == 0x0001A4, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Conv_IntToFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_BreakVector2D_X_2) == 0x0001A8, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_BreakVector2D_Y_2) == 0x0001AC, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Conv_IntToFloat_ReturnValue_5) == 0x0001B0, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Conv_IntToFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x0001B8, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x0001C0, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x0001C4, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_MakeVector2D_ReturnValue_1) == 0x0001C8, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x0001D0, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_IsValid_ReturnValue_3) == 0x0001D8, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_DynamicCast_AsSBPlayer_Character_2) == 0x0001E0, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_DynamicCast_AsSBPlayer_Character_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_DynamicCast_bSuccess_2) == 0x0001E8, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, Temp_byte_Variable_3) == 0x0001E9, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, Temp_byte_Variable_4) == 0x0001EA, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x0001EC, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_FMax_ReturnValue) == 0x0001F0, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, Temp_bool_Variable_1) == 0x0001F4, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001F5, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0001F6, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001F8, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Greater_IntInt_ReturnValue_3) == 0x000208, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_CustomEvent_bIsEdit) == 0x000209, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_CustomEvent_bIsEdit' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_IsValid_ReturnValue_4) == 0x00020A, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_PlayAnimation_ReturnValue) == 0x000210, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetPlayerCharacter_ReturnValue_3) == 0x000218, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetPlayerCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_IsValid_ReturnValue_5) == 0x000220, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_DynamicCast_AsSBPlayer_Character_3) == 0x000228, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_DynamicCast_AsSBPlayer_Character_3' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_DynamicCast_bSuccess_3) == 0x000230, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetConfigSaveManager_IsValid) == 0x000231, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000238, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetPlayerId_ReturnValue) == 0x000240, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_IsAlwaysShowFieldHUD_ReturnValue) == 0x000250, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_IsAlwaysShowFieldHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, Temp_byte_Variable_5) == 0x000251, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_CustomEvent_bIsShow) == 0x000252, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_CustomEvent_bIsShow' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_PlayAnimationForward_ReturnValue) == 0x000258, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_GetSBPlayerController_ReturnValue) == 0x000260, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_CustomEvent_Result) == 0x000268, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, Temp_bool_Variable_2) == 0x000269, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_CustomEvent_Forward) == 0x00026A, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_CustomEvent_Forward' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_Select_Default) == 0x00026B, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_Select_Default_1) == 0x00026C, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_PlayAnimation_ReturnValue_1) == 0x000270, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_Event_bForward) == 0x000278, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_Event_bForward' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, K2Node_Select_Default_2) == 0x000279, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_PlayAnimation_ReturnValue_2) == 0x000280, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Greater_IntInt_ReturnValue_4) == 0x000288, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Greater_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_Not_PreBool_ReturnValue_3) == 0x000289, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_BooleanOR_ReturnValue) == 0x00028A, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge, CallFunc_BooleanAND_ReturnValue) == 0x00028B, "Member 'PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function PlayerSTGauge.PlayerSTGauge_C.OnInAnimation
// 0x0001 (0x0001 - 0x0000)
struct PlayerSTGauge_C_OnInAnimation final
{
public:
	bool                                          bForward;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerSTGauge_C_OnInAnimation) == 0x000001, "Wrong alignment on PlayerSTGauge_C_OnInAnimation");
static_assert(sizeof(PlayerSTGauge_C_OnInAnimation) == 0x000001, "Wrong size on PlayerSTGauge_C_OnInAnimation");
static_assert(offsetof(PlayerSTGauge_C_OnInAnimation, bForward) == 0x000000, "Member 'PlayerSTGauge_C_OnInAnimation::bForward' has a wrong offset!");

// Function PlayerSTGauge.PlayerSTGauge_C.OnAnimation
// 0x0001 (0x0001 - 0x0000)
struct PlayerSTGauge_C_OnAnimation final
{
public:
	bool                                          Forward;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerSTGauge_C_OnAnimation) == 0x000001, "Wrong alignment on PlayerSTGauge_C_OnAnimation");
static_assert(sizeof(PlayerSTGauge_C_OnAnimation) == 0x000001, "Wrong size on PlayerSTGauge_C_OnAnimation");
static_assert(offsetof(PlayerSTGauge_C_OnAnimation, Forward) == 0x000000, "Member 'PlayerSTGauge_C_OnAnimation::Forward' has a wrong offset!");

// Function PlayerSTGauge.PlayerSTGauge_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct PlayerSTGauge_C_CustomEvent_1 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerSTGauge_C_CustomEvent_1) == 0x000001, "Wrong alignment on PlayerSTGauge_C_CustomEvent_1");
static_assert(sizeof(PlayerSTGauge_C_CustomEvent_1) == 0x000001, "Wrong size on PlayerSTGauge_C_CustomEvent_1");
static_assert(offsetof(PlayerSTGauge_C_CustomEvent_1, Result) == 0x000000, "Member 'PlayerSTGauge_C_CustomEvent_1::Result' has a wrong offset!");

// Function PlayerSTGauge.PlayerSTGauge_C.OnChangeShowAlwaysHUD_event
// 0x0001 (0x0001 - 0x0000)
struct PlayerSTGauge_C_OnChangeShowAlwaysHUD_event final
{
public:
	bool                                          bIsShow;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerSTGauge_C_OnChangeShowAlwaysHUD_event) == 0x000001, "Wrong alignment on PlayerSTGauge_C_OnChangeShowAlwaysHUD_event");
static_assert(sizeof(PlayerSTGauge_C_OnChangeShowAlwaysHUD_event) == 0x000001, "Wrong size on PlayerSTGauge_C_OnChangeShowAlwaysHUD_event");
static_assert(offsetof(PlayerSTGauge_C_OnChangeShowAlwaysHUD_event, bIsShow) == 0x000000, "Member 'PlayerSTGauge_C_OnChangeShowAlwaysHUD_event::bIsShow' has a wrong offset!");

// Function PlayerSTGauge.PlayerSTGauge_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct PlayerSTGauge_C_SetEditMode final
{
public:
	bool                                          bIsEdit;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerSTGauge_C_SetEditMode) == 0x000001, "Wrong alignment on PlayerSTGauge_C_SetEditMode");
static_assert(sizeof(PlayerSTGauge_C_SetEditMode) == 0x000001, "Wrong size on PlayerSTGauge_C_SetEditMode");
static_assert(offsetof(PlayerSTGauge_C_SetEditMode, bIsEdit) == 0x000000, "Member 'PlayerSTGauge_C_SetEditMode::bIsEdit' has a wrong offset!");

// Function PlayerSTGauge.PlayerSTGauge_C.Tick
// 0x003C (0x003C - 0x0000)
struct PlayerSTGauge_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerSTGauge_C_Tick) == 0x000004, "Wrong alignment on PlayerSTGauge_C_Tick");
static_assert(sizeof(PlayerSTGauge_C_Tick) == 0x00003C, "Wrong size on PlayerSTGauge_C_Tick");
static_assert(offsetof(PlayerSTGauge_C_Tick, MyGeometry) == 0x000000, "Member 'PlayerSTGauge_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(PlayerSTGauge_C_Tick, InDeltaTime) == 0x000038, "Member 'PlayerSTGauge_C_Tick::InDeltaTime' has a wrong offset!");

// Function PlayerSTGauge.PlayerSTGauge_C.SetBgVisibility
// 0x0001 (0x0001 - 0x0000)
struct PlayerSTGauge_C_SetBgVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerSTGauge_C_SetBgVisibility) == 0x000001, "Wrong alignment on PlayerSTGauge_C_SetBgVisibility");
static_assert(sizeof(PlayerSTGauge_C_SetBgVisibility) == 0x000001, "Wrong size on PlayerSTGauge_C_SetBgVisibility");
static_assert(offsetof(PlayerSTGauge_C_SetBgVisibility, Param_IsVisible) == 0x000000, "Member 'PlayerSTGauge_C_SetBgVisibility::Param_IsVisible' has a wrong offset!");

// Function PlayerSTGauge.PlayerSTGauge_C.PlaySTGaugeRecoverAnim
// 0x0008 (0x0008 - 0x0000)
struct PlayerSTGauge_C_PlaySTGaugeRecoverAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerSTGauge_C_PlaySTGaugeRecoverAnim) == 0x000008, "Wrong alignment on PlayerSTGauge_C_PlaySTGaugeRecoverAnim");
static_assert(sizeof(PlayerSTGauge_C_PlaySTGaugeRecoverAnim) == 0x000008, "Wrong size on PlayerSTGauge_C_PlaySTGaugeRecoverAnim");
static_assert(offsetof(PlayerSTGauge_C_PlaySTGaugeRecoverAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'PlayerSTGauge_C_PlaySTGaugeRecoverAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

