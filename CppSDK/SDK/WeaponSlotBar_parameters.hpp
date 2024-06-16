#pragma once

 

// Package: WeaponSlotBar

#include "Basic.hpp"

#include "WeaponSlotType_structs.hpp"


namespace SDK::Params
{

// Function WeaponSlotBar.WeaponSlotBar_C.ExecuteUbergraph_WeaponSlotBar
// 0x0060 (0x0060 - 0x0000)
struct WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponSlotType                               Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EWeaponSlotType                               Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponSlotType                               Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41C5[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OpenSlot;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_UseSlot;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41C6[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSlotItem_C*>              K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWeaponSlotItem_C*                      CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSlotItem_C*                      CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41C7[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EWeaponSlotType                               K2Node_Select_Default;                             // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponSlotType                               K2Node_Select_Default_1;                           // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar) == 0x000008, "Wrong alignment on WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar");
static_assert(sizeof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar) == 0x000060, "Wrong size on WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, EntryPoint) == 0x000000, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, Temp_byte_Variable) == 0x000004, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, Temp_bool_Variable) == 0x000005, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, Temp_byte_Variable_1) == 0x000006, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, Temp_byte_Variable_2) == 0x000007, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, Temp_bool_Variable_1) == 0x00000C, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, K2Node_CustomEvent_OpenSlot) == 0x00001C, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::K2Node_CustomEvent_OpenSlot' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, K2Node_CustomEvent_UseSlot) == 0x000020, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::K2Node_CustomEvent_UseSlot' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, K2Node_MakeArray_Array) == 0x000028, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, CallFunc_Array_Get_Item) == 0x000038, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, Temp_int_Loop_Counter_Variable_1) == 0x000044, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, CallFunc_Less_IntInt_ReturnValue_1) == 0x000055, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, CallFunc_Add_IntInt_ReturnValue_1) == 0x000058, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, CallFunc_Less_IntInt_ReturnValue_2) == 0x00005C, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, CallFunc_Less_IntInt_ReturnValue_3) == 0x00005D, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, K2Node_Select_Default) == 0x00005E, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar, K2Node_Select_Default_1) == 0x00005F, "Member 'WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar::K2Node_Select_Default_1' has a wrong offset!");

// Function WeaponSlotBar.WeaponSlotBar_C.SetSlotData
// 0x0008 (0x0008 - 0x0000)
struct WeaponSlotBar_C_SetSlotData final
{
public:
	int32                                         Param_OpenSlot;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_UseSlot;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSlotBar_C_SetSlotData) == 0x000004, "Wrong alignment on WeaponSlotBar_C_SetSlotData");
static_assert(sizeof(WeaponSlotBar_C_SetSlotData) == 0x000008, "Wrong size on WeaponSlotBar_C_SetSlotData");
static_assert(offsetof(WeaponSlotBar_C_SetSlotData, Param_OpenSlot) == 0x000000, "Member 'WeaponSlotBar_C_SetSlotData::Param_OpenSlot' has a wrong offset!");
static_assert(offsetof(WeaponSlotBar_C_SetSlotData, Param_UseSlot) == 0x000004, "Member 'WeaponSlotBar_C_SetSlotData::Param_UseSlot' has a wrong offset!");

}

