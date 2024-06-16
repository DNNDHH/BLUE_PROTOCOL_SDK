#pragma once

 

// Package: InstanceDungeonBattleinfoHUD

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.ExecuteUbergraph_InstanceDungeonBattleinfoHUD
// 0x0020 (0x0020 - 0x0000)
struct InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4618[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD) == 0x000008, "Wrong alignment on InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD");
static_assert(sizeof(InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD) == 0x000020, "Wrong size on InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD, EntryPoint) == 0x000000, "Member 'InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000010, "Member 'InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.SetPlayerReadyVisibility
// 0x0060 (0x0060 - 0x0000)
struct InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility final
{
public:
	class UHorizontalBox*                         InHorizonalBox;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMax;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InReadyNum;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4619[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_461A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 K2Node_DynamicCast_AsImage;                        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility) == 0x000008, "Wrong alignment on InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility");
static_assert(sizeof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility) == 0x000060, "Wrong size on InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, InHorizonalBox) == 0x000000, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::InHorizonalBox' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, InMax) == 0x000008, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::InMax' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, InReadyNum) == 0x00000C, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::InReadyNum' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, K2Node_MakeStruct_LinearColor) == 0x000014, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, K2Node_MakeStruct_LinearColor_1) == 0x000024, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, Temp_int_Variable) == 0x000034, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00003C, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00003D, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, CallFunc_GetChildAt_ReturnValue) == 0x000040, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, K2Node_DynamicCast_AsImage) == 0x000050, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::K2Node_DynamicCast_AsImage' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000059, "Member 'InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.UpdateDemoHUD
// 0x0040 (0x0040 - 0x0000)
struct InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD final
{
public:
	TArray<bool>                                  InDemoPlay;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UDemoHUD_C*>                     InHUD;                                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_461B[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_461C[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDemoHUD_C*                             CallFunc_Array_Get_Item_1;                         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD) == 0x000008, "Wrong alignment on InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD");
static_assert(sizeof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD) == 0x000040, "Wrong size on InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD, InDemoPlay) == 0x000000, "Member 'InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD::InDemoPlay' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD, InHUD) == 0x000010, "Member 'InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD::InHUD' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD, Temp_int_Array_Index_Variable) == 0x000024, "Member 'InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD, CallFunc_Array_Get_Item) == 0x00002C, "Member 'InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD, CallFunc_Array_Get_Item_1) == 0x000038, "Member 'InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.SetRootVisibility
// 0x0001 (0x0001 - 0x0000)
struct InstanceDungeonBattleinfoHUD_C_SetRootVisibility final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InstanceDungeonBattleinfoHUD_C_SetRootVisibility) == 0x000001, "Wrong alignment on InstanceDungeonBattleinfoHUD_C_SetRootVisibility");
static_assert(sizeof(InstanceDungeonBattleinfoHUD_C_SetRootVisibility) == 0x000001, "Wrong size on InstanceDungeonBattleinfoHUD_C_SetRootVisibility");
static_assert(offsetof(InstanceDungeonBattleinfoHUD_C_SetRootVisibility, InVisible) == 0x000000, "Member 'InstanceDungeonBattleinfoHUD_C_SetRootVisibility::InVisible' has a wrong offset!");

}

