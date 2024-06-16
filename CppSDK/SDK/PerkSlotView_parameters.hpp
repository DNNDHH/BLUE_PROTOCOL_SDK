#pragma once

 

// Package: PerkSlotView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PerkSlotView.PerkSlotView_C.ApplyData
// 0x0088 (0x0088 - 0x0000)
struct PerkSlotView_C_ApplyData final
{
public:
	int32                                         RemainCount;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_468B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponCustomPerkSlotItem_C*>    Slots;                                             // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_468C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_468D[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_468E[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponCustomPerkSlotItem_C*            CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_468F[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4690[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponCustomPerkSlotItem_C*>    K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4691[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x0064(0x0018)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkSlotView_C_ApplyData) == 0x000008, "Wrong alignment on PerkSlotView_C_ApplyData");
static_assert(sizeof(PerkSlotView_C_ApplyData) == 0x000088, "Wrong size on PerkSlotView_C_ApplyData");
static_assert(offsetof(PerkSlotView_C_ApplyData, RemainCount) == 0x000000, "Member 'PerkSlotView_C_ApplyData::RemainCount' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, Slots) == 0x000008, "Member 'PerkSlotView_C_ApplyData::Slots' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, Temp_bool_Variable) == 0x000018, "Member 'PerkSlotView_C_ApplyData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'PerkSlotView_C_ApplyData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'PerkSlotView_C_ApplyData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, Temp_int_Array_Index_Variable) == 0x000024, "Member 'PerkSlotView_C_ApplyData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, Temp_int_Variable) == 0x000028, "Member 'PerkSlotView_C_ApplyData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_MakeLiteralByte_ReturnValue) == 0x00002C, "Member 'PerkSlotView_C_ApplyData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00002D, "Member 'PerkSlotView_C_ApplyData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'PerkSlotView_C_ApplyData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000034, "Member 'PerkSlotView_C_ApplyData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_Array_Get_Item) == 0x000038, "Member 'PerkSlotView_C_ApplyData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, K2Node_Select_Default) == 0x000040, "Member 'PerkSlotView_C_ApplyData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'PerkSlotView_C_ApplyData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'PerkSlotView_C_ApplyData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, K2Node_MakeArray_Array) == 0x000050, "Member 'PerkSlotView_C_ApplyData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000060, "Member 'PerkSlotView_C_ApplyData::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_FindFusionItemMaster_IsValid) == 0x000061, "Member 'PerkSlotView_C_ApplyData::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x000064, "Member 'PerkSlotView_C_ApplyData::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00007C, "Member 'PerkSlotView_C_ApplyData::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_ApplyData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000080, "Member 'PerkSlotView_C_ApplyData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function PerkSlotView.PerkSlotView_C.SetData
// 0x0018 (0x0018 - 0x0000)
struct PerkSlotView_C_SetData final
{
public:
	TArray<struct FSBCharacterWeaponPerkData>     Param_Perks;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Param_UnlockSlotNum;                               // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkSlotView_C_SetData) == 0x000008, "Wrong alignment on PerkSlotView_C_SetData");
static_assert(sizeof(PerkSlotView_C_SetData) == 0x000018, "Wrong size on PerkSlotView_C_SetData");
static_assert(offsetof(PerkSlotView_C_SetData, Param_Perks) == 0x000000, "Member 'PerkSlotView_C_SetData::Param_Perks' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetData, Param_UnlockSlotNum) == 0x000010, "Member 'PerkSlotView_C_SetData::Param_UnlockSlotNum' has a wrong offset!");

// Function PerkSlotView.PerkSlotView_C.SetNewItem
// 0x0010 (0x0010 - 0x0000)
struct PerkSlotView_C_SetNewItem final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindEmptySlot_Exists;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4692[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponCustomPerkSlotItem_C*            CallFunc_FindEmptySlot_Slot;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkSlotView_C_SetNewItem) == 0x000008, "Wrong alignment on PerkSlotView_C_SetNewItem");
static_assert(sizeof(PerkSlotView_C_SetNewItem) == 0x000010, "Wrong size on PerkSlotView_C_SetNewItem");
static_assert(offsetof(PerkSlotView_C_SetNewItem, ItemId) == 0x000000, "Member 'PerkSlotView_C_SetNewItem::ItemId' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetNewItem, CallFunc_FindEmptySlot_Exists) == 0x000004, "Member 'PerkSlotView_C_SetNewItem::CallFunc_FindEmptySlot_Exists' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetNewItem, CallFunc_FindEmptySlot_Slot) == 0x000008, "Member 'PerkSlotView_C_SetNewItem::CallFunc_FindEmptySlot_Slot' has a wrong offset!");

// Function PerkSlotView.PerkSlotView_C.FindEmptySlot
// 0x0048 (0x0048 - 0x0000)
struct PerkSlotView_C_FindEmptySlot final
{
public:
	bool                                          Exists;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4693[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponCustomPerkSlotItem_C*            Param_Slot;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4694[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponCustomPerkSlotItem_C*>    K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4695[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponCustomPerkSlotItem_C*            CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_bIsEmpty;                         // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PerkSlotView_C_FindEmptySlot) == 0x000008, "Wrong alignment on PerkSlotView_C_FindEmptySlot");
static_assert(sizeof(PerkSlotView_C_FindEmptySlot) == 0x000048, "Wrong size on PerkSlotView_C_FindEmptySlot");
static_assert(offsetof(PerkSlotView_C_FindEmptySlot, Exists) == 0x000000, "Member 'PerkSlotView_C_FindEmptySlot::Exists' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_FindEmptySlot, Param_Slot) == 0x000008, "Member 'PerkSlotView_C_FindEmptySlot::Param_Slot' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_FindEmptySlot, Temp_int_Array_Index_Variable) == 0x000010, "Member 'PerkSlotView_C_FindEmptySlot::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_FindEmptySlot, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'PerkSlotView_C_FindEmptySlot::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_FindEmptySlot, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'PerkSlotView_C_FindEmptySlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_FindEmptySlot, K2Node_MakeArray_Array) == 0x000020, "Member 'PerkSlotView_C_FindEmptySlot::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_FindEmptySlot, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'PerkSlotView_C_FindEmptySlot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_FindEmptySlot, CallFunc_Array_Get_Item) == 0x000038, "Member 'PerkSlotView_C_FindEmptySlot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_FindEmptySlot, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'PerkSlotView_C_FindEmptySlot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_FindEmptySlot, CallFunc_IsEmpty_bIsEmpty) == 0x000041, "Member 'PerkSlotView_C_FindEmptySlot::CallFunc_IsEmpty_bIsEmpty' has a wrong offset!");

// Function PerkSlotView.PerkSlotView_C.SetDiffPerk
// 0x00A0 (0x00A0 - 0x0000)
struct PerkSlotView_C_SetDiffPerk final
{
public:
	TArray<struct FSBCharacterWeaponPerkData>     InWeaponPerks;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSBCharacterWeaponPerkData>     WeaponPerks;                                       // 0x0010(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4696[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWeaponCustomPerkSlotItem_C*>    K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWeaponCustomPerkSlotItem_C*            CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4697[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     K2Node_Select_Default;                             // 0x0058(0x0010)(ReferenceParm)
	TArray<struct FSBCharacterWeaponPerkData>     K2Node_Select_Default_1;                           // 0x0068(0x0010)(ReferenceParm)
	struct FSBCharacterWeaponPerkData             CallFunc_Array_Get_Item_1;                         // 0x0078(0x001C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PerkSlotView_C_SetDiffPerk) == 0x000008, "Wrong alignment on PerkSlotView_C_SetDiffPerk");
static_assert(sizeof(PerkSlotView_C_SetDiffPerk) == 0x0000A0, "Wrong size on PerkSlotView_C_SetDiffPerk");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, InWeaponPerks) == 0x000000, "Member 'PerkSlotView_C_SetDiffPerk::InWeaponPerks' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, WeaponPerks) == 0x000010, "Member 'PerkSlotView_C_SetDiffPerk::WeaponPerks' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, Temp_bool_Variable) == 0x000020, "Member 'PerkSlotView_C_SetDiffPerk::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, Temp_bool_Variable_1) == 0x000021, "Member 'PerkSlotView_C_SetDiffPerk::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, Temp_int_Array_Index_Variable) == 0x000024, "Member 'PerkSlotView_C_SetDiffPerk::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'PerkSlotView_C_SetDiffPerk::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'PerkSlotView_C_SetDiffPerk::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, K2Node_MakeArray_Array) == 0x000030, "Member 'PerkSlotView_C_SetDiffPerk::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, CallFunc_Array_Get_Item) == 0x000040, "Member 'PerkSlotView_C_SetDiffPerk::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'PerkSlotView_C_SetDiffPerk::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, CallFunc_Array_Length_ReturnValue_1) == 0x00004C, "Member 'PerkSlotView_C_SetDiffPerk::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'PerkSlotView_C_SetDiffPerk::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, K2Node_Select_Default) == 0x000058, "Member 'PerkSlotView_C_SetDiffPerk::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, K2Node_Select_Default_1) == 0x000068, "Member 'PerkSlotView_C_SetDiffPerk::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'PerkSlotView_C_SetDiffPerk::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, CallFunc_Array_Length_ReturnValue_2) == 0x000094, "Member 'PerkSlotView_C_SetDiffPerk::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000098, "Member 'PerkSlotView_C_SetDiffPerk::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_SetDiffPerk, CallFunc_Less_IntInt_ReturnValue) == 0x000099, "Member 'PerkSlotView_C_SetDiffPerk::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function PerkSlotView.PerkSlotView_C.Set Slot Image Color
// 0x0058 (0x0058 - 0x0000)
struct PerkSlotView_C_Set_Slot_Image_Color final
{
public:
	struct FLinearColor                           InColorAndOpacity;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LocalColor;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4698[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4699[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PerkSlotView_C_Set_Slot_Image_Color) == 0x000008, "Wrong alignment on PerkSlotView_C_Set_Slot_Image_Color");
static_assert(sizeof(PerkSlotView_C_Set_Slot_Image_Color) == 0x000058, "Wrong size on PerkSlotView_C_Set_Slot_Image_Color");
static_assert(offsetof(PerkSlotView_C_Set_Slot_Image_Color, InColorAndOpacity) == 0x000000, "Member 'PerkSlotView_C_Set_Slot_Image_Color::InColorAndOpacity' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_Slot_Image_Color, LocalColor) == 0x000010, "Member 'PerkSlotView_C_Set_Slot_Image_Color::LocalColor' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_Slot_Image_Color, Temp_int_Array_Index_Variable) == 0x000020, "Member 'PerkSlotView_C_Set_Slot_Image_Color::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_Slot_Image_Color, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'PerkSlotView_C_Set_Slot_Image_Color::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_Slot_Image_Color, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'PerkSlotView_C_Set_Slot_Image_Color::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_Slot_Image_Color, K2Node_MakeArray_Array) == 0x000030, "Member 'PerkSlotView_C_Set_Slot_Image_Color::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_Slot_Image_Color, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'PerkSlotView_C_Set_Slot_Image_Color::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_Slot_Image_Color, CallFunc_Array_Get_Item) == 0x000048, "Member 'PerkSlotView_C_Set_Slot_Image_Color::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_Slot_Image_Color, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'PerkSlotView_C_Set_Slot_Image_Color::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function PerkSlotView.PerkSlotView_C.UpdateNewItemSlotView
// 0x00B8 (0x00B8 - 0x0000)
struct PerkSlotView_C_UpdateNewItemSlotView final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_469A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponCustomPerkSlotItem_C*            PerkSlot;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Remain;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UseSlot;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponCustomPerkSlotItem_C*            SetPerkSlot;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFound;                                            // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_469B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponCustomPerkSlotItem_C*>    LocalSlotAry;                                      // 0x0028(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FSBMasterFusionItem                    LocalFusionMaster;                                 // 0x0038(0x0018)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_469C[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x0058(0x0018)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_469D[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponCustomPerkSlotItem_C*            CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_469E[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_469F[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponCustomPerkSlotItem_C*>    K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(PerkSlotView_C_UpdateNewItemSlotView) == 0x000008, "Wrong alignment on PerkSlotView_C_UpdateNewItemSlotView");
static_assert(sizeof(PerkSlotView_C_UpdateNewItemSlotView) == 0x0000B8, "Wrong size on PerkSlotView_C_UpdateNewItemSlotView");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, ItemId) == 0x000000, "Member 'PerkSlotView_C_UpdateNewItemSlotView::ItemId' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, PerkSlot) == 0x000008, "Member 'PerkSlotView_C_UpdateNewItemSlotView::PerkSlot' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, Remain) == 0x000010, "Member 'PerkSlotView_C_UpdateNewItemSlotView::Remain' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, UseSlot) == 0x000014, "Member 'PerkSlotView_C_UpdateNewItemSlotView::UseSlot' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, SetPerkSlot) == 0x000018, "Member 'PerkSlotView_C_UpdateNewItemSlotView::SetPerkSlot' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, bFound) == 0x000020, "Member 'PerkSlotView_C_UpdateNewItemSlotView::bFound' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, LocalSlotAry) == 0x000028, "Member 'PerkSlotView_C_UpdateNewItemSlotView::LocalSlotAry' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, LocalFusionMaster) == 0x000038, "Member 'PerkSlotView_C_UpdateNewItemSlotView::LocalFusionMaster' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, Temp_int_Array_Index_Variable) == 0x000050, "Member 'PerkSlotView_C_UpdateNewItemSlotView::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_FindFusionItemMaster_IsValid) == 0x000054, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x000058, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_Subtract_IntInt_ReturnValue) == 0x000070, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000074, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000078, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x00007C, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000080, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_Greater_IntInt_ReturnValue) == 0x000081, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000082, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_BooleanOR_ReturnValue) == 0x000083, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'PerkSlotView_C_UpdateNewItemSlotView::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000088, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_Array_Get_Item) == 0x000090, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00009D, "Member 'PerkSlotView_C_UpdateNewItemSlotView::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, Temp_int_Variable) == 0x0000A0, "Member 'PerkSlotView_C_UpdateNewItemSlotView::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_UpdateNewItemSlotView, K2Node_MakeArray_Array) == 0x0000A8, "Member 'PerkSlotView_C_UpdateNewItemSlotView::K2Node_MakeArray_Array' has a wrong offset!");

// Function PerkSlotView.PerkSlotView_C.Set CraftResult BigSuccess
// 0x0038 (0x0038 - 0x0000)
struct PerkSlotView_C_Set_CraftResult_BigSuccess final
{
public:
	bool                                          IsBigSuccess;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46A0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWeaponCustomPerkSlotItem_C*>    K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A1[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponCustomPerkSlotItem_C*            CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PerkSlotView_C_Set_CraftResult_BigSuccess) == 0x000008, "Wrong alignment on PerkSlotView_C_Set_CraftResult_BigSuccess");
static_assert(sizeof(PerkSlotView_C_Set_CraftResult_BigSuccess) == 0x000038, "Wrong size on PerkSlotView_C_Set_CraftResult_BigSuccess");
static_assert(offsetof(PerkSlotView_C_Set_CraftResult_BigSuccess, IsBigSuccess) == 0x000000, "Member 'PerkSlotView_C_Set_CraftResult_BigSuccess::IsBigSuccess' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_CraftResult_BigSuccess, Temp_int_Array_Index_Variable) == 0x000004, "Member 'PerkSlotView_C_Set_CraftResult_BigSuccess::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_CraftResult_BigSuccess, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'PerkSlotView_C_Set_CraftResult_BigSuccess::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_CraftResult_BigSuccess, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'PerkSlotView_C_Set_CraftResult_BigSuccess::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_CraftResult_BigSuccess, K2Node_MakeArray_Array) == 0x000010, "Member 'PerkSlotView_C_Set_CraftResult_BigSuccess::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_CraftResult_BigSuccess, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'PerkSlotView_C_Set_CraftResult_BigSuccess::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_CraftResult_BigSuccess, CallFunc_Array_Get_Item) == 0x000028, "Member 'PerkSlotView_C_Set_CraftResult_BigSuccess::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PerkSlotView_C_Set_CraftResult_BigSuccess, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'PerkSlotView_C_Set_CraftResult_BigSuccess::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

