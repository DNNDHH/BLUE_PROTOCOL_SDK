#pragma once

 

// Package: WeaponButtonViewPerkList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponButtonViewPerkList.WeaponButtonViewPerkList_C.SetPerkData
// 0x00E0 (0x00E0 - 0x0000)
struct WeaponButtonViewPerkList_C_SetPerkData final
{
public:
	struct FSBWeaponItemData                      WeaponData;                                        // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         SlotItr;                                           // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterFusionItem                    MasterFusionItem;                                  // 0x0054(0x0018)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Remainslot;                                        // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6947[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6948[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponButtonViewPerkListItem_C*> K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWeaponButtonViewPerkListItem_C*        CallFunc_Array_Get_Item;                           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6949[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x00B4(0x0018)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_694A[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponButtonViewPerkList_C_SetPerkData) == 0x000008, "Wrong alignment on WeaponButtonViewPerkList_C_SetPerkData");
static_assert(sizeof(WeaponButtonViewPerkList_C_SetPerkData) == 0x0000E0, "Wrong size on WeaponButtonViewPerkList_C_SetPerkData");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, WeaponData) == 0x000000, "Member 'WeaponButtonViewPerkList_C_SetPerkData::WeaponData' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, SlotItr) == 0x000050, "Member 'WeaponButtonViewPerkList_C_SetPerkData::SlotItr' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, MasterFusionItem) == 0x000054, "Member 'WeaponButtonViewPerkList_C_SetPerkData::MasterFusionItem' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, Remainslot) == 0x00006C, "Member 'WeaponButtonViewPerkList_C_SetPerkData::Remainslot' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, Temp_int_Array_Index_Variable) == 0x000070, "Member 'WeaponButtonViewPerkList_C_SetPerkData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000074, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000078, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'WeaponButtonViewPerkList_C_SetPerkData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, Temp_int_Variable) == 0x000088, "Member 'WeaponButtonViewPerkList_C_SetPerkData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, Temp_int_Variable_1) == 0x00008C, "Member 'WeaponButtonViewPerkList_C_SetPerkData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_Greater_IntInt_ReturnValue) == 0x000090, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, K2Node_MakeArray_Array) == 0x000098, "Member 'WeaponButtonViewPerkList_C_SetPerkData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_FindFusionItemMaster_IsValid) == 0x0000B0, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x0000B4, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000CC, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000D0, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_Array_Length_ReturnValue) == 0x0000D4, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkList_C_SetPerkData, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'WeaponButtonViewPerkList_C_SetPerkData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

