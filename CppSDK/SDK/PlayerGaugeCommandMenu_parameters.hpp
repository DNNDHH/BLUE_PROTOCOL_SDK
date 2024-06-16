#pragma once

 

// Package: PlayerGaugeCommandMenu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.ExecuteUbergraph_PlayerGaugeCommandMenu
// 0x01A0 (0x01A0 - 0x0000)
struct PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89E6[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89E7[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89E8[0x1];                                     // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPlayerMaxHp_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerCurrentHp_ReturnValue;           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerMaxStamina_ReturnValue;          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerCurrentStamina_ReturnValue;      // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89E9[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89EA[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput;            // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue; // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_1;                    // 0x00BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89EB[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_2;                    // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default_1;                           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_5;           // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_6;           // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_7;           // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_8;           // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_9;           // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_10;          // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_11;          // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_12;          // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_4;               // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_5;               // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_6;               // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_7;               // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default_2;                           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default_3;                           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_13;          // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_14;          // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu) == 0x000008, "Wrong alignment on PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu");
static_assert(sizeof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu) == 0x0001A0, "Wrong size on PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, EntryPoint) == 0x000000, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, Temp_bool_Variable) == 0x000004, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, Temp_bool_Variable_1) == 0x000005, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, K2Node_Event_MyGeometry) == 0x000008, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, K2Node_Event_InDeltaTime) == 0x000040, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000048, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000050, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, Temp_bool_Variable_2) == 0x00005A, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetPlayerMaxHp_ReturnValue) == 0x00005C, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetPlayerMaxHp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetPlayerCurrentHp_ReturnValue) == 0x000060, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetPlayerCurrentHp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetPlayerMaxStamina_ReturnValue) == 0x000064, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetPlayerMaxStamina_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetPlayerCurrentStamina_ReturnValue) == 0x000068, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetPlayerCurrentStamina_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, Temp_bool_Variable_3) == 0x00006C, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000070, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000078, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_IsValid_ReturnValue_2) == 0x000081, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetMaxHitPoint_self_CastInput) == 0x000088, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetMaxHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetMaxHitPoint_ReturnValue) == 0x000098, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue) == 0x00009C, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetMaxHitPointWithoutResurrectionAdjust_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A0, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetSize_ReturnValue) == 0x0000A4, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000AC, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x0000B0, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_FClamp_ReturnValue) == 0x0000B8, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetSize_ReturnValue_1) == 0x0000BC, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_BreakVector2D_X) == 0x0000C4, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_BreakVector2D_Y) == 0x0000C8, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, K2Node_Event_IsDesignTime) == 0x0000CC, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x0000D0, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x0000D8, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_GetSize_ReturnValue_2) == 0x0000E0, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_GetSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, K2Node_Select_Default) == 0x0000E8, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, K2Node_Select_Default_1) == 0x0000F0, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_5) == 0x0000F8, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_6) == 0x000100, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_7) == 0x000108, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_8) == 0x000110, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_9) == 0x000118, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_10) == 0x000120, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_11) == 0x000128, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_12) == 0x000130, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_MakeVector2D_ReturnValue) == 0x000138, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_MakeVector2D_ReturnValue_1) == 0x000140, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_MakeVector2D_ReturnValue_2) == 0x000148, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_MakeVector2D_ReturnValue_3) == 0x000150, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_MakeVector2D_ReturnValue_4) == 0x000158, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_MakeVector2D_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_MakeVector2D_ReturnValue_5) == 0x000160, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_MakeVector2D_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_MakeVector2D_ReturnValue_6) == 0x000168, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_MakeVector2D_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_MakeVector2D_ReturnValue_7) == 0x000170, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_MakeVector2D_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, K2Node_Select_Default_2) == 0x000178, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, K2Node_Select_Default_3) == 0x000180, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_13) == 0x000188, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue_14) == 0x000190, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000198, "Member 'PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PlayerGaugeCommandMenu_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerGaugeCommandMenu_C_PreConstruct) == 0x000001, "Wrong alignment on PlayerGaugeCommandMenu_C_PreConstruct");
static_assert(sizeof(PlayerGaugeCommandMenu_C_PreConstruct) == 0x000001, "Wrong size on PlayerGaugeCommandMenu_C_PreConstruct");
static_assert(offsetof(PlayerGaugeCommandMenu_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PlayerGaugeCommandMenu_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.Tick
// 0x003C (0x003C - 0x0000)
struct PlayerGaugeCommandMenu_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerGaugeCommandMenu_C_Tick) == 0x000004, "Wrong alignment on PlayerGaugeCommandMenu_C_Tick");
static_assert(sizeof(PlayerGaugeCommandMenu_C_Tick) == 0x00003C, "Wrong size on PlayerGaugeCommandMenu_C_Tick");
static_assert(offsetof(PlayerGaugeCommandMenu_C_Tick, MyGeometry) == 0x000000, "Member 'PlayerGaugeCommandMenu_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_Tick, InDeltaTime) == 0x000038, "Member 'PlayerGaugeCommandMenu_C_Tick::InDeltaTime' has a wrong offset!");

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.AdjustHPGaugeSize
// 0x0040 (0x0040 - 0x0000)
struct PlayerGaugeCommandMenu_C_AdjustHPGaugeSize final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize) == 0x000008, "Wrong alignment on PlayerGaugeCommandMenu_C_AdjustHPGaugeSize");
static_assert(sizeof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize) == 0x000040, "Wrong size on PlayerGaugeCommandMenu_C_AdjustHPGaugeSize");
static_assert(offsetof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'PlayerGaugeCommandMenu_C_AdjustHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000008, "Member 'PlayerGaugeCommandMenu_C_AdjustHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000010, "Member 'PlayerGaugeCommandMenu_C_AdjustHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize, CallFunc_GetSize_ReturnValue) == 0x000018, "Member 'PlayerGaugeCommandMenu_C_AdjustHPGaugeSize::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize, CallFunc_BreakVector2D_X) == 0x000020, "Member 'PlayerGaugeCommandMenu_C_AdjustHPGaugeSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize, CallFunc_BreakVector2D_Y) == 0x000024, "Member 'PlayerGaugeCommandMenu_C_AdjustHPGaugeSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000028, "Member 'PlayerGaugeCommandMenu_C_AdjustHPGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize, CallFunc_MakeVector2D_ReturnValue) == 0x000030, "Member 'PlayerGaugeCommandMenu_C_AdjustHPGaugeSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_AdjustHPGaugeSize, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000038, "Member 'PlayerGaugeCommandMenu_C_AdjustHPGaugeSize::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetCurrHpGaugeWidth
// 0x0004 (0x0004 - 0x0000)
struct PlayerGaugeCommandMenu_C_SetCurrHpGaugeWidth final
{
public:
	float                                         InHpGaugeWidth;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerGaugeCommandMenu_C_SetCurrHpGaugeWidth) == 0x000004, "Wrong alignment on PlayerGaugeCommandMenu_C_SetCurrHpGaugeWidth");
static_assert(sizeof(PlayerGaugeCommandMenu_C_SetCurrHpGaugeWidth) == 0x000004, "Wrong size on PlayerGaugeCommandMenu_C_SetCurrHpGaugeWidth");
static_assert(offsetof(PlayerGaugeCommandMenu_C_SetCurrHpGaugeWidth, InHpGaugeWidth) == 0x000000, "Member 'PlayerGaugeCommandMenu_C_SetCurrHpGaugeWidth::InHpGaugeWidth' has a wrong offset!");

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateHPLossGaunge
// 0x0090 (0x0090 - 0x0000)
struct PlayerGaugeCommandMenu_C_UpdateHPLossGaunge final
{
public:
	bool                                          bIsHpLoss;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsVisible;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89EC[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxHitPoint;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableHealMaxHitPoint;                             // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89ED[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89EE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89EF[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidDsState_ReturnValue;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89F0[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89F1[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89F2[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEnableHealMaxHitPoint_ReturnValue;     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBBattleParamInterface> CallFunc_GetMaxHitPoint_self_CastInput;            // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetMaxHitPoint_ReturnValue;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge) == 0x000008, "Wrong alignment on PlayerGaugeCommandMenu_C_UpdateHPLossGaunge");
static_assert(sizeof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge) == 0x000090, "Wrong size on PlayerGaugeCommandMenu_C_UpdateHPLossGaunge");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, bIsHpLoss) == 0x000000, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::bIsHpLoss' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, bIsVisible) == 0x000001, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::bIsVisible' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, MaxHitPoint) == 0x000004, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::MaxHitPoint' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, EnableHealMaxHitPoint) == 0x000008, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::EnableHealMaxHitPoint' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_IsVisible_ReturnValue) == 0x000018, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_GetSize_ReturnValue) == 0x00001C, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_BreakVector2D_X) == 0x000024, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_BreakVector2D_Y) == 0x000028, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000030, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000038, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_Less_FloatFloat_ReturnValue) == 0x000040, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_ValidDsState_ReturnValue) == 0x000041, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_ValidDsState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000044, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000048, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000050, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000058, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_MakeVector2D_ReturnValue) == 0x000064, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_GetEnableHealMaxHitPoint_ReturnValue) == 0x00006C, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_GetEnableHealMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_GetMaxHitPoint_self_CastInput) == 0x000070, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_GetMaxHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_GetMaxHitPoint_ReturnValue) == 0x000080, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_GetMaxHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000084, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHPLossGaunge, CallFunc_MakeVector2D_ReturnValue_1) == 0x000088, "Member 'PlayerGaugeCommandMenu_C_UpdateHPLossGaunge::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateHpGauge
// 0x00C8 (0x00C8 - 0x0000)
struct PlayerGaugeCommandMenu_C_UpdateHpGauge final
{
public:
	int32                                         InCurrHp;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMaxHp;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0030(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0080(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_TextText_ReturnValue_1;          // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89F3[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89F4[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerGaugeCommandMenu_C_UpdateHpGauge) == 0x000008, "Wrong alignment on PlayerGaugeCommandMenu_C_UpdateHpGauge");
static_assert(sizeof(PlayerGaugeCommandMenu_C_UpdateHpGauge) == 0x0000C8, "Wrong size on PlayerGaugeCommandMenu_C_UpdateHpGauge");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, InCurrHp) == 0x000000, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::InCurrHp' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, InMaxHp) == 0x000004, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::InMaxHp' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_GetSize_ReturnValue) == 0x000008, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_BreakVector2D_X) == 0x000010, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_GetText_ReturnValue_1) == 0x000030, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_Conv_IntToString_ReturnValue) == 0x000048, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000058, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000080, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_NotEqual_TextText_ReturnValue) == 0x000098, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_NotEqual_TextText_ReturnValue_1) == 0x000099, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_NotEqual_TextText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_BreakVector2D_X_1) == 0x00009C, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_BreakVector2D_Y_1) == 0x0000A0, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000A4, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0000A8, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000AC, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_Greater_IntInt_ReturnValue) == 0x0000B0, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000B4, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_FClamp_ReturnValue) == 0x0000B8, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_MakeVector2D_ReturnValue) == 0x0000BC, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateHpGauge, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x0000C4, "Member 'PlayerGaugeCommandMenu_C_UpdateHpGauge::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateStGauge
// 0x00D0 (0x00D0 - 0x0000)
struct PlayerGaugeCommandMenu_C_UpdateStGauge final
{
public:
	int32                                         InCurrSt;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMaxSt;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0030(0x0018)()
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89F5[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89F6[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89F7[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue_1;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerGaugeCommandMenu_C_UpdateStGauge) == 0x000008, "Wrong alignment on PlayerGaugeCommandMenu_C_UpdateStGauge");
static_assert(sizeof(PlayerGaugeCommandMenu_C_UpdateStGauge) == 0x0000D0, "Wrong size on PlayerGaugeCommandMenu_C_UpdateStGauge");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, InCurrSt) == 0x000000, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::InCurrSt' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, InMaxSt) == 0x000004, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::InMaxSt' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_GetSize_ReturnValue) == 0x000008, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_BreakVector2D_X) == 0x000010, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_GetText_ReturnValue_1) == 0x000030, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_BreakVector2D_X_1) == 0x000048, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_BreakVector2D_Y_1) == 0x00004C, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000050, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000054, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00005C, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000060, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_MakeVector2D_ReturnValue) == 0x000064, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000098, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_NotEqual_TextText_ReturnValue) == 0x000099, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000A0, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeCommandMenu_C_UpdateStGauge, CallFunc_NotEqual_TextText_ReturnValue_1) == 0x0000C8, "Member 'PlayerGaugeCommandMenu_C_UpdateStGauge::CallFunc_NotEqual_TextText_ReturnValue_1' has a wrong offset!");

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetDhcBattleTopMenuMode
// 0x0001 (0x0001 - 0x0000)
struct PlayerGaugeCommandMenu_C_SetDhcBattleTopMenuMode final
{
public:
	bool                                          InIsDhcBattleTopMenuMode;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerGaugeCommandMenu_C_SetDhcBattleTopMenuMode) == 0x000001, "Wrong alignment on PlayerGaugeCommandMenu_C_SetDhcBattleTopMenuMode");
static_assert(sizeof(PlayerGaugeCommandMenu_C_SetDhcBattleTopMenuMode) == 0x000001, "Wrong size on PlayerGaugeCommandMenu_C_SetDhcBattleTopMenuMode");
static_assert(offsetof(PlayerGaugeCommandMenu_C_SetDhcBattleTopMenuMode, InIsDhcBattleTopMenuMode) == 0x000000, "Member 'PlayerGaugeCommandMenu_C_SetDhcBattleTopMenuMode::InIsDhcBattleTopMenuMode' has a wrong offset!");

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.GetDefaultHpGaugeWidth
// 0x0004 (0x0004 - 0x0000)
struct PlayerGaugeCommandMenu_C_GetDefaultHpGaugeWidth final
{
public:
	float                                         OutHpGaugeWidth;                                   // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerGaugeCommandMenu_C_GetDefaultHpGaugeWidth) == 0x000004, "Wrong alignment on PlayerGaugeCommandMenu_C_GetDefaultHpGaugeWidth");
static_assert(sizeof(PlayerGaugeCommandMenu_C_GetDefaultHpGaugeWidth) == 0x000004, "Wrong size on PlayerGaugeCommandMenu_C_GetDefaultHpGaugeWidth");
static_assert(offsetof(PlayerGaugeCommandMenu_C_GetDefaultHpGaugeWidth, OutHpGaugeWidth) == 0x000000, "Member 'PlayerGaugeCommandMenu_C_GetDefaultHpGaugeWidth::OutHpGaugeWidth' has a wrong offset!");

}

