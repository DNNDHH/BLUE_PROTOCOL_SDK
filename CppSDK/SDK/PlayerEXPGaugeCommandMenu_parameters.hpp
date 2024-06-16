#pragma once

 

// Package: PlayerEXPGaugeCommandMenu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.ExecuteUbergraph_PlayerEXPGaugeCommandMenu
// 0x00F8 (0x00F8 - 0x0000)
struct PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89F8[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89F9[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89FA[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNowLevelClassExpMax_ReturnValue;       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNowLevelClassExpPoint_ReturnValue;     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNowLevelClassExpRatio_ReturnValue;     // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89FB[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetNowLevelClassExtraExpRatio_ReturnValue; // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassExtraExp_ReturnValue;             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89FC[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	int32                                         CallFunc_GetNowLevelClassExtraExpMax_ReturnValue;  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_1;                    // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E0(0x0018)()
};
static_assert(alignof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu) == 0x000008, "Wrong alignment on PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu");
static_assert(sizeof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu) == 0x0000F8, "Wrong size on PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, EntryPoint) == 0x000000, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, Temp_bool_Variable) == 0x000004, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, Temp_bool_Variable_1) == 0x000005, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, K2Node_Event_MyGeometry) == 0x000008, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, K2Node_Event_InDeltaTime) == 0x000040, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000048, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_BreakVector2D_X) == 0x000050, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_BreakVector2D_Y) == 0x000054, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_GetNowLevelClassExpMax_ReturnValue) == 0x00005C, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_GetNowLevelClassExpMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_GetNowLevelClassExpPoint_ReturnValue) == 0x000060, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_GetNowLevelClassExpPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_GetNowLevelClassExpRatio_ReturnValue) == 0x000064, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_GetNowLevelClassExpRatio_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_GetSize_ReturnValue) == 0x000068, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000070, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, Temp_bool_Variable_2) == 0x000071, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_GetNowLevelClassExtraExpRatio_ReturnValue) == 0x000074, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_GetNowLevelClassExtraExpRatio_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, K2Node_Select_Default) == 0x000078, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00007C, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_GetClassExtraExp_ReturnValue) == 0x000080, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_GetClassExtraExp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_MakeVector2D_ReturnValue) == 0x000084, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, K2Node_Select_Default_1) == 0x00008C, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_Conv_IntToString_ReturnValue) == 0x000090, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_NotEqual_Vector2DVector2D_ReturnValue) == 0x0000A0, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_NotEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_GetNowLevelClassExtraExpMax_ReturnValue) == 0x0000C0, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_GetNowLevelClassExtraExpMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, K2Node_Select_Default_2) == 0x0000C4, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_GetSize_ReturnValue_1) == 0x0000C8, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_GetSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000D0, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E0, "Member 'PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.Tick
// 0x003C (0x003C - 0x0000)
struct PlayerEXPGaugeCommandMenu_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerEXPGaugeCommandMenu_C_Tick) == 0x000004, "Wrong alignment on PlayerEXPGaugeCommandMenu_C_Tick");
static_assert(sizeof(PlayerEXPGaugeCommandMenu_C_Tick) == 0x00003C, "Wrong size on PlayerEXPGaugeCommandMenu_C_Tick");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_Tick, MyGeometry) == 0x000000, "Member 'PlayerEXPGaugeCommandMenu_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_Tick, InDeltaTime) == 0x000038, "Member 'PlayerEXPGaugeCommandMenu_C_Tick::InDeltaTime' has a wrong offset!");

// Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.SetGaugeUpdateStop
// 0x0001 (0x0001 - 0x0000)
struct PlayerEXPGaugeCommandMenu_C_SetGaugeUpdateStop final
{
public:
	bool                                          InIsUpdateStop;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerEXPGaugeCommandMenu_C_SetGaugeUpdateStop) == 0x000001, "Wrong alignment on PlayerEXPGaugeCommandMenu_C_SetGaugeUpdateStop");
static_assert(sizeof(PlayerEXPGaugeCommandMenu_C_SetGaugeUpdateStop) == 0x000001, "Wrong size on PlayerEXPGaugeCommandMenu_C_SetGaugeUpdateStop");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_SetGaugeUpdateStop, InIsUpdateStop) == 0x000000, "Member 'PlayerEXPGaugeCommandMenu_C_SetGaugeUpdateStop::InIsUpdateStop' has a wrong offset!");

// Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.SetExpOverflowMode
// 0x0038 (0x0038 - 0x0000)
struct PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode final
{
public:
	bool                                          bInIsExpOverflowMode;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89FD[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89FE[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode) == 0x000004, "Wrong alignment on PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode");
static_assert(sizeof(PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode) == 0x000038, "Wrong size on PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode, bInIsExpOverflowMode) == 0x000000, "Member 'PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode::bInIsExpOverflowMode' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode, Temp_bool_Variable) == 0x000001, "Member 'PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode, Temp_struct_Variable) == 0x000004, "Member 'PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode, Temp_struct_Variable_1) == 0x000014, "Member 'PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode, K2Node_Select_Default) == 0x000028, "Member 'PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode::K2Node_Select_Default' has a wrong offset!");

}

