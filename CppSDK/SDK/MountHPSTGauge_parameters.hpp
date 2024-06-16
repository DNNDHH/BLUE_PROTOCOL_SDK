#pragma once

 

// Package: MountHPSTGauge

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MountHPSTGauge.MountHPSTGauge_C.ExecuteUbergraph_MountHPSTGauge
// 0x0308 (0x0308 - 0x0000)
struct MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7405[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0048(0x0018)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_1;                    // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7406[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMounting_ReturnValue;                   // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7407[0x1];                                     // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7408[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00B0(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7409[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_740A[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x00D8(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue_1;          // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740B[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_2;                    // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerCurrentHp_ReturnValue;           // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_3;                              // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x011E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x011F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsEdit;                        // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_740C[0x6];                                     // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMounting_ReturnValue_1;                 // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          K2Node_Select_Default_1;                           // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_740D[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0158(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0174(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740E[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x01C0(0x0018)()
	struct FVector2D                              CallFunc_GetSize_ReturnValue_3;                    // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_4;                        // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_4;                        // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740F[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_2;                    // 0x0200(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue_2;          // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue_1;        // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7410[0x2];                                     // 0x021A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x021C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7411[0x4];                                     // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_3;                    // 0x0228(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue_3;          // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7412[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0244(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7413[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_4;                    // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_5;                    // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_5;           // 0x0278(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_5;                        // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_5;                        // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerCurrentHp_ReturnValue_1;         // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerMaxHp_ReturnValue;               // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_2;         // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7414[0x6];                                     // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput;            // 0x02A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue;               // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue; // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7415[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x02C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerCurrentHp_ReturnValue_2;         // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_2;                     // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMountEnergy_ReturnValue;               // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMountEnergyMax_ReturnValue;            // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_1;                      // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7416[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGaugeBaseWidget*               CallFunc_GetPlayerGaugeBaseWidget_ReturnValue;     // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerHPGauge_C*                       K2Node_DynamicCast_AsPlayer_HPGauge;               // 0x02F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge) == 0x000008, "Wrong alignment on MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge");
static_assert(sizeof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge) == 0x000308, "Wrong size on MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, EntryPoint) == 0x000000, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, Temp_byte_Variable) == 0x000004, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, Temp_bool_Variable) == 0x000005, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, Temp_byte_Variable_1) == 0x000006, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, Temp_byte_Variable_2) == 0x000007, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000038, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00003C, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000040, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Greater_IntInt_ReturnValue) == 0x000044, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000048, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000060, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetSize_ReturnValue) == 0x000068, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetSize_ReturnValue_1) == 0x000070, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_X) == 0x000078, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_Y) == 0x00007C, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_X_1) == 0x000080, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_Y_1) == 0x000084, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000088, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000090, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000098, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_IsValid_ReturnValue) == 0x0000A1, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_IsMounting_ReturnValue) == 0x0000A2, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_IsMounting_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_FClamp_ReturnValue) == 0x0000A4, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000A8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetText_ReturnValue) == 0x0000B0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_NotEqual_TextText_ReturnValue) == 0x0000C8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x0000C9, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_MakeVector2D_ReturnValue) == 0x0000CC, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetText_ReturnValue_1) == 0x0000D8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_NotEqual_TextText_ReturnValue_1) == 0x0000F0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_NotEqual_TextText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x0000F8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetSize_ReturnValue_2) == 0x000100, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000108, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_X_2) == 0x000110, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_Y_2) == 0x000114, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetPlayerCurrentHp_ReturnValue) == 0x000118, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetPlayerCurrentHp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, Temp_byte_Variable_3) == 0x00011C, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x00011D, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00011E, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x00011F, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_CustomEvent_bIsEdit) == 0x000120, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_CustomEvent_bIsEdit' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_Select_Default) == 0x000121, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_PlayAnimation_ReturnValue) == 0x000128, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_PlayAnimation_ReturnValue_1) == 0x000130, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000138, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000140, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_DynamicCast_bSuccess_1) == 0x000148, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, Temp_bool_Variable_1) == 0x000149, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_IsMounting_ReturnValue_1) == 0x00014A, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_IsMounting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_Select_Default_1) == 0x00014B, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_PlayAnimation_ReturnValue_2) == 0x000150, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000158, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000170, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_Event_MyGeometry) == 0x000174, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_Event_InDeltaTime) == 0x0001AC, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x0001B0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0001B4, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0001B8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0001C0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetSize_ReturnValue_3) == 0x0001D8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetSize_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_X_3) == 0x0001E0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_Y_3) == 0x0001E4, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_X_4) == 0x0001E8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_X_4' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_Y_4) == 0x0001EC, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_Y_4' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0001F0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_FClamp_ReturnValue_1) == 0x0001F4, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x0001F8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetText_ReturnValue_2) == 0x000200, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_NotEqual_TextText_ReturnValue_2) == 0x000218, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_NotEqual_TextText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_NotEqual_FloatFloat_ReturnValue_1) == 0x000219, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_NotEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_MakeVector2D_ReturnValue_1) == 0x00021C, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetText_ReturnValue_3) == 0x000228, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_NotEqual_TextText_ReturnValue_3) == 0x000240, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_NotEqual_TextText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000244, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000258, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetSize_ReturnValue_4) == 0x000260, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetSize_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x000268, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetSize_ReturnValue_5) == 0x000270, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetSize_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_SlotAsCanvasSlot_ReturnValue_5) == 0x000278, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_SlotAsCanvasSlot_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_X_5) == 0x000280, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_X_5' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_BreakVector2D_Y_5) == 0x000284, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_BreakVector2D_Y_5' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetPlayerCurrentHp_ReturnValue_1) == 0x000288, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetPlayerCurrentHp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetPlayerMaxHp_ReturnValue) == 0x00028C, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetPlayerMaxHp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x000290, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_DynamicCast_AsSBPlayer_Character_2) == 0x000298, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_DynamicCast_AsSBPlayer_Character_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_DynamicCast_bSuccess_2) == 0x0002A0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_IsValid_ReturnValue_1) == 0x0002A1, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetMaxHitPoint_self_CastInput) == 0x0002A8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetMaxHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetMaxHitPoint_ReturnValue) == 0x0002B8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue) == 0x0002BC, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x0002C0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0002C8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetPlayerCurrentHp_ReturnValue_2) == 0x0002D0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetPlayerCurrentHp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x0002D4, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_FClamp_ReturnValue_2) == 0x0002D8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetMountEnergy_ReturnValue) == 0x0002DC, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetMountEnergy_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetMountEnergyMax_ReturnValue) == 0x0002E0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetMountEnergyMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Round_ReturnValue) == 0x0002E4, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_Round_ReturnValue_1) == 0x0002E8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_GetPlayerGaugeBaseWidget_ReturnValue) == 0x0002F0, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_GetPlayerGaugeBaseWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_DynamicCast_AsPlayer_HPGauge) == 0x0002F8, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_DynamicCast_AsPlayer_HPGauge' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, K2Node_DynamicCast_bSuccess_3) == 0x000300, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000301, "Member 'MountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MountHPSTGauge.MountHPSTGauge_C.Tick
// 0x003C (0x003C - 0x0000)
struct MountHPSTGauge_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountHPSTGauge_C_Tick) == 0x000004, "Wrong alignment on MountHPSTGauge_C_Tick");
static_assert(sizeof(MountHPSTGauge_C_Tick) == 0x00003C, "Wrong size on MountHPSTGauge_C_Tick");
static_assert(offsetof(MountHPSTGauge_C_Tick, MyGeometry) == 0x000000, "Member 'MountHPSTGauge_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_Tick, InDeltaTime) == 0x000038, "Member 'MountHPSTGauge_C_Tick::InDeltaTime' has a wrong offset!");

// Function MountHPSTGauge.MountHPSTGauge_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct MountHPSTGauge_C_SetEditMode final
{
public:
	bool                                          bIsEdit;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountHPSTGauge_C_SetEditMode) == 0x000001, "Wrong alignment on MountHPSTGauge_C_SetEditMode");
static_assert(sizeof(MountHPSTGauge_C_SetEditMode) == 0x000001, "Wrong size on MountHPSTGauge_C_SetEditMode");
static_assert(offsetof(MountHPSTGauge_C_SetEditMode, bIsEdit) == 0x000000, "Member 'MountHPSTGauge_C_SetEditMode::bIsEdit' has a wrong offset!");

// Function MountHPSTGauge.MountHPSTGauge_C.SetBgVisibility
// 0x0001 (0x0001 - 0x0000)
struct MountHPSTGauge_C_SetBgVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountHPSTGauge_C_SetBgVisibility) == 0x000001, "Wrong alignment on MountHPSTGauge_C_SetBgVisibility");
static_assert(sizeof(MountHPSTGauge_C_SetBgVisibility) == 0x000001, "Wrong size on MountHPSTGauge_C_SetBgVisibility");
static_assert(offsetof(MountHPSTGauge_C_SetBgVisibility, Param_IsVisible) == 0x000000, "Member 'MountHPSTGauge_C_SetBgVisibility::Param_IsVisible' has a wrong offset!");

// Function MountHPSTGauge.MountHPSTGauge_C.AdjustENGGaugeSize
// 0x0048 (0x0048 - 0x0000)
struct MountHPSTGauge_C_AdjustENGGaugeSize final
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
	uint8                                         Pad_7417[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountHPSTGauge_C_AdjustENGGaugeSize) == 0x000008, "Wrong alignment on MountHPSTGauge_C_AdjustENGGaugeSize");
static_assert(sizeof(MountHPSTGauge_C_AdjustENGGaugeSize) == 0x000048, "Wrong size on MountHPSTGauge_C_AdjustENGGaugeSize");
static_assert(offsetof(MountHPSTGauge_C_AdjustENGGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'MountHPSTGauge_C_AdjustENGGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustENGGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000008, "Member 'MountHPSTGauge_C_AdjustENGGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustENGGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000010, "Member 'MountHPSTGauge_C_AdjustENGGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustENGGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000018, "Member 'MountHPSTGauge_C_AdjustENGGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustENGGaugeSize, CallFunc_GetSize_ReturnValue) == 0x000020, "Member 'MountHPSTGauge_C_AdjustENGGaugeSize::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustENGGaugeSize, CallFunc_BreakVector2D_X) == 0x000028, "Member 'MountHPSTGauge_C_AdjustENGGaugeSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustENGGaugeSize, CallFunc_BreakVector2D_Y) == 0x00002C, "Member 'MountHPSTGauge_C_AdjustENGGaugeSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustENGGaugeSize, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000030, "Member 'MountHPSTGauge_C_AdjustENGGaugeSize::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustENGGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x000038, "Member 'MountHPSTGauge_C_AdjustENGGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustENGGaugeSize, CallFunc_MakeVector2D_ReturnValue) == 0x000040, "Member 'MountHPSTGauge_C_AdjustENGGaugeSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function MountHPSTGauge.MountHPSTGauge_C.AdjustPlayerHPGaugeSize
// 0x0048 (0x0048 - 0x0000)
struct MountHPSTGauge_C_AdjustPlayerHPGaugeSize final
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
	uint8                                         Pad_7418[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize) == 0x000008, "Wrong alignment on MountHPSTGauge_C_AdjustPlayerHPGaugeSize");
static_assert(sizeof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize) == 0x000048, "Wrong size on MountHPSTGauge_C_AdjustPlayerHPGaugeSize");
static_assert(offsetof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'MountHPSTGauge_C_AdjustPlayerHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000008, "Member 'MountHPSTGauge_C_AdjustPlayerHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000010, "Member 'MountHPSTGauge_C_AdjustPlayerHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000018, "Member 'MountHPSTGauge_C_AdjustPlayerHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize, CallFunc_GetSize_ReturnValue) == 0x000020, "Member 'MountHPSTGauge_C_AdjustPlayerHPGaugeSize::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize, CallFunc_BreakVector2D_X) == 0x000028, "Member 'MountHPSTGauge_C_AdjustPlayerHPGaugeSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize, CallFunc_BreakVector2D_Y) == 0x00002C, "Member 'MountHPSTGauge_C_AdjustPlayerHPGaugeSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000030, "Member 'MountHPSTGauge_C_AdjustPlayerHPGaugeSize::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x000038, "Member 'MountHPSTGauge_C_AdjustPlayerHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_AdjustPlayerHPGaugeSize, CallFunc_MakeVector2D_ReturnValue) == 0x000040, "Member 'MountHPSTGauge_C_AdjustPlayerHPGaugeSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function MountHPSTGauge.MountHPSTGauge_C.UpdatePrevENG
// 0x0040 (0x0040 - 0x0000)
struct MountHPSTGauge_C_UpdatePrevENG final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7419[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountHPSTGauge_C_UpdatePrevENG) == 0x000004, "Wrong alignment on MountHPSTGauge_C_UpdatePrevENG");
static_assert(sizeof(MountHPSTGauge_C_UpdatePrevENG) == 0x000040, "Wrong size on MountHPSTGauge_C_UpdatePrevENG");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, DeltaTime) == 0x000000, "Member 'MountHPSTGauge_C_UpdatePrevENG::DeltaTime' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, K2Node_MathExpression_ReturnValue) == 0x000004, "Member 'MountHPSTGauge_C_UpdatePrevENG::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_GetSize_ReturnValue) == 0x000008, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_FTrunc_ReturnValue) == 0x000010, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000018, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x00001C, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_BreakVector2D_X) == 0x000024, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_BreakVector2D_Y) == 0x000028, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00002C, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_FClamp_ReturnValue) == 0x000030, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_MakeVector2D_ReturnValue) == 0x000034, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevENG, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00003C, "Member 'MountHPSTGauge_C_UpdatePrevENG::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

// Function MountHPSTGauge.MountHPSTGauge_C.UpdatePrevPlayerHP
// 0x0058 (0x0058 - 0x0000)
struct MountHPSTGauge_C_UpdatePrevPlayerHP final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_741A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_MathExpression_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGaugeBaseWidget*               CallFunc_GetPlayerGaugeBaseWidget_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerHPGauge_C*                       K2Node_DynamicCast_AsPlayer_HPGauge;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_741B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_741C[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountHPSTGauge_C_UpdatePrevPlayerHP) == 0x000008, "Wrong alignment on MountHPSTGauge_C_UpdatePrevPlayerHP");
static_assert(sizeof(MountHPSTGauge_C_UpdatePrevPlayerHP) == 0x000058, "Wrong size on MountHPSTGauge_C_UpdatePrevPlayerHP");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, DeltaTime) == 0x000000, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::DeltaTime' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000004, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, K2Node_MathExpression_ReturnValue) == 0x000008, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_FTrunc_ReturnValue) == 0x00000C, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_GetPlayerGaugeBaseWidget_ReturnValue) == 0x000010, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_GetPlayerGaugeBaseWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, K2Node_DynamicCast_AsPlayer_HPGauge) == 0x000018, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::K2Node_DynamicCast_AsPlayer_HPGauge' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_GetSize_ReturnValue) == 0x000024, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000030, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x000034, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000038, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_BreakVector2D_X) == 0x00003C, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_BreakVector2D_Y) == 0x000040, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000044, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_FClamp_ReturnValue) == 0x000048, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_MakeVector2D_ReturnValue) == 0x00004C, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdatePrevPlayerHP, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000054, "Member 'MountHPSTGauge_C_UpdatePrevPlayerHP::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

// Function MountHPSTGauge.MountHPSTGauge_C.UpdateHPLossGaunge
// 0x00A0 (0x00A0 - 0x0000)
struct MountHPSTGauge_C_UpdateHPLossGaunge final
{
public:
	bool                                          bIsHpLoss;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsVisible;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_741D[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxHitPoint;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableHealMaxHitPoint;                             // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_741E[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidDsState_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_741F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7420[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7421[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7422[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7423[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEnableHealMaxHitPoint_ReturnValue;     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput;            // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountHPSTGauge_C_UpdateHPLossGaunge) == 0x000008, "Wrong alignment on MountHPSTGauge_C_UpdateHPLossGaunge");
static_assert(sizeof(MountHPSTGauge_C_UpdateHPLossGaunge) == 0x0000A0, "Wrong size on MountHPSTGauge_C_UpdateHPLossGaunge");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, bIsHpLoss) == 0x000000, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::bIsHpLoss' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, bIsVisible) == 0x000001, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::bIsVisible' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, MaxHitPoint) == 0x000004, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::MaxHitPoint' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, EnableHealMaxHitPoint) == 0x000008, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::EnableHealMaxHitPoint' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_FTrunc_ReturnValue) == 0x00000C, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_FTrunc_ReturnValue_1) == 0x000010, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_IsVisible_ReturnValue) == 0x000015, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_ValidDsState_ReturnValue) == 0x000020, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_ValidDsState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000028, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_GetSize_ReturnValue) == 0x000030, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_BreakVector2D_X) == 0x000038, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_BreakVector2D_Y) == 0x00003C, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_Less_FloatFloat_ReturnValue) == 0x000040, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000048, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000050, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000058, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000060, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000068, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_MakeVector2D_ReturnValue) == 0x000074, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_GetEnableHealMaxHitPoint_ReturnValue) == 0x00007C, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_GetEnableHealMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_GetMaxHitPoint_self_CastInput) == 0x000080, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_GetMaxHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_GetMaxHitPoint_ReturnValue) == 0x000090, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_GetMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000094, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountHPSTGauge_C_UpdateHPLossGaunge, CallFunc_MakeVector2D_ReturnValue_1) == 0x000098, "Member 'MountHPSTGauge_C_UpdateHPLossGaunge::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

}

