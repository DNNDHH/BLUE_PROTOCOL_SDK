#pragma once

 

// Package: KeyGuide_Gamepad2_OfflineBattle

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function KeyGuide_Gamepad2_OfflineBattle.KeyGuide_Gamepad2_OfflineBattle_C.ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle
// 0x02C8 (0x02C8 - 0x0000)
struct KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerClassKeyConfigData            K2Node_CustomEvent_KeyConfigData;                  // 0x0010(0x01C8)(ConstParm)
	class FText                                   CallFunc_KeyGuide_Gamepad2_MakeChangeLockText_ReturnValue; // 0x01D8(0x0018)()
	TArray<class UWidget*>                        CallFunc_KeyGuide_GetVerticalChildWidget_out;      // 0x01F0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class USBRuntimeTextBlock*>            CallFunc_KeyGuide_GetPareItems_outActionTextArray; // 0x0200(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<ESBKeyConfigAction>                    CallFunc_KeyGuide_GetPareItems_outActionConfigArray; // 0x0210(0x0010)(ReferenceParm)
	class FText                                   CallFunc_KeyGuide_Gamepad2_MakeMovesText_ReturnValue; // 0x0220(0x0018)()
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> CallFunc_KeyGuide_MakePare_Return_Value;           // 0x0238(0x0050)(ContainsInstancedReference)
	TArray<class USBRuntimeTextBlock*>            CallFunc_Map_Keys_Keys;                            // 0x0288(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            CallFunc_Map_Find_Value;                           // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B27[0x2];                                     // 0x02A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_KeyGuide_Gamepad2_MakeString_ReturnValue1; // 0x02A8(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle) == 0x000008, "Wrong alignment on KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle");
static_assert(sizeof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle) == 0x0002C8, "Wrong size on KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, EntryPoint) == 0x000000, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, Temp_int_Array_Index_Variable) == 0x000004, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, K2Node_CustomEvent_KeyConfigData) == 0x000010, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::K2Node_CustomEvent_KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_KeyGuide_Gamepad2_MakeChangeLockText_ReturnValue) == 0x0001D8, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_KeyGuide_Gamepad2_MakeChangeLockText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_KeyGuide_GetVerticalChildWidget_out) == 0x0001F0, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_KeyGuide_GetVerticalChildWidget_out' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_KeyGuide_GetPareItems_outActionTextArray) == 0x000200, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_KeyGuide_GetPareItems_outActionTextArray' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_KeyGuide_GetPareItems_outActionConfigArray) == 0x000210, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_KeyGuide_GetPareItems_outActionConfigArray' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_KeyGuide_Gamepad2_MakeMovesText_ReturnValue) == 0x000220, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_KeyGuide_Gamepad2_MakeMovesText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_KeyGuide_MakePare_Return_Value) == 0x000238, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_KeyGuide_MakePare_Return_Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_Map_Keys_Keys) == 0x000288, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_Array_Get_Item) == 0x000298, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_Map_Find_Value) == 0x0002A0, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_Map_Find_ReturnValue) == 0x0002A1, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_Array_Length_ReturnValue) == 0x0002A4, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_KeyGuide_Gamepad2_MakeString_ReturnValue1) == 0x0002A8, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_KeyGuide_Gamepad2_MakeString_ReturnValue1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle, CallFunc_Less_IntInt_ReturnValue) == 0x0002C0, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function KeyGuide_Gamepad2_OfflineBattle.KeyGuide_Gamepad2_OfflineBattle_C.ApplyKeyConfigData
// 0x01C8 (0x01C8 - 0x0000)
struct KeyGuide_Gamepad2_OfflineBattle_C_ApplyKeyConfigData final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(KeyGuide_Gamepad2_OfflineBattle_C_ApplyKeyConfigData) == 0x000008, "Wrong alignment on KeyGuide_Gamepad2_OfflineBattle_C_ApplyKeyConfigData");
static_assert(sizeof(KeyGuide_Gamepad2_OfflineBattle_C_ApplyKeyConfigData) == 0x0001C8, "Wrong size on KeyGuide_Gamepad2_OfflineBattle_C_ApplyKeyConfigData");
static_assert(offsetof(KeyGuide_Gamepad2_OfflineBattle_C_ApplyKeyConfigData, KeyConfigData) == 0x000000, "Member 'KeyGuide_Gamepad2_OfflineBattle_C_ApplyKeyConfigData::KeyConfigData' has a wrong offset!");

}

