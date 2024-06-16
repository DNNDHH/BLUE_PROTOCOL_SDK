#pragma once

 

// Package: StackBInhelitPerkView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function StackBInhelitPerkView.StackBInhelitPerkView_C.SetPerk
// 0x01B0 (0x01B0 - 0x0000)
struct StackBInhelitPerkView_C_SetPerk final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         RemainCount;                                       // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68AE[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68AF[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBPerk                          K2Node_MakeStruct_SBStackBPerk;                    // 0x0130(0x0030)()
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68B0[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x0164(0x0018)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68B1[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInheritButtonViewPerkListItem_C*       K2Node_DynamicCast_AsInherit_Button_View_Perk_List_Item; // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68B2[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68B3[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBInhelitPerkView_C_SetPerk) == 0x000008, "Wrong alignment on StackBInhelitPerkView_C_SetPerk");
static_assert(sizeof(StackBInhelitPerkView_C_SetPerk) == 0x0001B0, "Wrong size on StackBInhelitPerkView_C_SetPerk");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, ItemInfo) == 0x000000, "Member 'StackBInhelitPerkView_C_SetPerk::ItemInfo' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, RemainCount) == 0x000118, "Member 'StackBInhelitPerkView_C_SetPerk::RemainCount' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, Temp_int_Variable) == 0x00011C, "Member 'StackBInhelitPerkView_C_SetPerk::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000120, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_Greater_IntInt_ReturnValue) == 0x000121, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, Temp_int_Variable_1) == 0x000124, "Member 'StackBInhelitPerkView_C_SetPerk::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000128, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, K2Node_MakeStruct_SBStackBPerk) == 0x000130, "Member 'StackBInhelitPerkView_C_SetPerk::K2Node_MakeStruct_SBStackBPerk' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_FindFusionItemMaster_IsValid) == 0x000160, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x000164, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_Add_IntInt_ReturnValue) == 0x00017C, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_GetChildAt_ReturnValue) == 0x000180, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_GetChildrenCount_ReturnValue) == 0x000188, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, K2Node_DynamicCast_AsInherit_Button_View_Perk_List_Item) == 0x000190, "Member 'StackBInhelitPerkView_C_SetPerk::K2Node_DynamicCast_AsInherit_Button_View_Perk_List_Item' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, K2Node_DynamicCast_bSuccess) == 0x000198, "Member 'StackBInhelitPerkView_C_SetPerk::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_Subtract_IntInt_ReturnValue) == 0x00019C, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001A0, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001A4, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetPerk, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0001A8, "Member 'StackBInhelitPerkView_C_SetPerk::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");

// Function StackBInhelitPerkView.StackBInhelitPerkView_C.SetDiff
// 0x0268 (0x0268 - 0x0000)
struct StackBInhelitPerkView_C_SetDiff final
{
public:
	struct FOwnItemInfo                           Prev;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           After;                                             // 0x0118(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         LocalLoopMax;                                      // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68B4[0x4];                                     // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68B5[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInheritButtonViewPerkListItem_C*       K2Node_DynamicCast_AsInherit_Button_View_Perk_List_Item; // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68B6[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWeaponPerkEqual_ReturnValue;            // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StackBInhelitPerkView_C_SetDiff) == 0x000008, "Wrong alignment on StackBInhelitPerkView_C_SetDiff");
static_assert(sizeof(StackBInhelitPerkView_C_SetDiff) == 0x000268, "Wrong size on StackBInhelitPerkView_C_SetDiff");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, Prev) == 0x000000, "Member 'StackBInhelitPerkView_C_SetDiff::Prev' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, After) == 0x000118, "Member 'StackBInhelitPerkView_C_SetDiff::After' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, LocalLoopMax) == 0x000230, "Member 'StackBInhelitPerkView_C_SetDiff::LocalLoopMax' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, Temp_int_Variable) == 0x000234, "Member 'StackBInhelitPerkView_C_SetDiff::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, CallFunc_Add_IntInt_ReturnValue) == 0x000238, "Member 'StackBInhelitPerkView_C_SetDiff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, CallFunc_GetChildAt_ReturnValue) == 0x000240, "Member 'StackBInhelitPerkView_C_SetDiff::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, CallFunc_GetChildrenCount_ReturnValue) == 0x000248, "Member 'StackBInhelitPerkView_C_SetDiff::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, K2Node_DynamicCast_AsInherit_Button_View_Perk_List_Item) == 0x000250, "Member 'StackBInhelitPerkView_C_SetDiff::K2Node_DynamicCast_AsInherit_Button_View_Perk_List_Item' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, K2Node_DynamicCast_bSuccess) == 0x000258, "Member 'StackBInhelitPerkView_C_SetDiff::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, CallFunc_Subtract_IntInt_ReturnValue) == 0x00025C, "Member 'StackBInhelitPerkView_C_SetDiff::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000260, "Member 'StackBInhelitPerkView_C_SetDiff::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, CallFunc_IsWeaponPerkEqual_ReturnValue) == 0x000261, "Member 'StackBInhelitPerkView_C_SetDiff::CallFunc_IsWeaponPerkEqual_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBInhelitPerkView_C_SetDiff, CallFunc_Not_PreBool_ReturnValue) == 0x000262, "Member 'StackBInhelitPerkView_C_SetDiff::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

