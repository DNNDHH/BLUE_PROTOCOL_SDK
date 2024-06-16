#pragma once

 

// Package: WBP_StackB_M

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon MBase
// 0x0220 (0x0220 - 0x0000)
struct WBP_StackB_M_C_Set_Stack_BIcon_MBase final
{
public:
	int32                                         Param_StackNum;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BE2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BE3[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	int32                                         Temp_int_Variable_1;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BE4[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetCurrentMapInfo_OutMapInfo;             // 0x0038(0x01E0)()
	bool                                          CallFunc_GetCurrentMapInfo_ReturnValue;            // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BE5[0x3];                                     // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StackB_M_C_Set_Stack_BIcon_MBase) == 0x000008, "Wrong alignment on WBP_StackB_M_C_Set_Stack_BIcon_MBase");
static_assert(sizeof(WBP_StackB_M_C_Set_Stack_BIcon_MBase) == 0x000220, "Wrong size on WBP_StackB_M_C_Set_Stack_BIcon_MBase");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_MBase, Param_StackNum) == 0x000000, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_MBase::Param_StackNum' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_MBase, IsEffectiveDisplay) == 0x000004, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_MBase::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_MBase, Temp_int_Variable) == 0x000008, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_MBase::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_MBase, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_MBase::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_MBase, Temp_int_Variable_1) == 0x000028, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_MBase::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_MBase, Temp_int_Variable_2) == 0x00002C, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_MBase::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_MBase, Temp_byte_Variable) == 0x000030, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_MBase::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_MBase, CallFunc_GetCurrentMapInfo_OutMapInfo) == 0x000038, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_MBase::CallFunc_GetCurrentMapInfo_OutMapInfo' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_MBase, CallFunc_GetCurrentMapInfo_ReturnValue) == 0x000218, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_MBase::CallFunc_GetCurrentMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_MBase, K2Node_Select_Default) == 0x00021C, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_MBase::K2Node_Select_Default' has a wrong offset!");

// Function WBP_StackB_M.WBP_StackB_M_C.SetStackBIconEffect
// 0x0004 (0x0004 - 0x0000)
struct WBP_StackB_M_C_SetStackBIconEffect final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StackB_M_C_SetStackBIconEffect) == 0x000004, "Wrong alignment on WBP_StackB_M_C_SetStackBIconEffect");
static_assert(sizeof(WBP_StackB_M_C_SetStackBIconEffect) == 0x000004, "Wrong size on WBP_StackB_M_C_SetStackBIconEffect");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconEffect, Param_Index) == 0x000000, "Member 'WBP_StackB_M_C_SetStackBIconEffect::Param_Index' has a wrong offset!");

// Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon One Item
// 0x0128 (0x0128 - 0x0000)
struct WBP_StackB_M_C_Set_Stack_BIcon_One_Item final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsEffectiveDisplay;                                // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Visible;                                           // 0x0119(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BE6[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBMax_ReturnValue;                 // 0x0120(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStackBIconOneItemBase_Visible;         // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StackB_M_C_Set_Stack_BIcon_One_Item) == 0x000008, "Wrong alignment on WBP_StackB_M_C_Set_Stack_BIcon_One_Item");
static_assert(sizeof(WBP_StackB_M_C_Set_Stack_BIcon_One_Item) == 0x000128, "Wrong size on WBP_StackB_M_C_Set_Stack_BIcon_One_Item");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_Item, Info) == 0x000000, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_Item::Info' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_Item, IsEffectiveDisplay) == 0x000118, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_Item::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_Item, Visible) == 0x000119, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_Item::Visible' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_Item, CallFunc_GetStackBNum_ReturnValue) == 0x00011C, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_Item::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_Item, CallFunc_GetStackBMax_ReturnValue) == 0x000120, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_Item::CallFunc_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_Item, CallFunc_SetStackBIconOneItemBase_Visible) == 0x000124, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_Item::CallFunc_SetStackBIconOneItemBase_Visible' has a wrong offset!");

// Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon One ItembyWeaponData
// 0x0130 (0x0130 - 0x0000)
struct WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData final
{
public:
	struct FSBWeaponItemData                      Info;                                              // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsEffectiveDisplay;                                // 0x0050(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Visible;                                           // 0x0051(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EffectiveDisplay;                                  // 0x0052(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BE7[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0060(0x00B0)()
	int32                                         Temp_int_Variable_1;                               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BE8[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetStackBMax_ReturnValue;              // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0127(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select_Default;                             // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData) == 0x000008, "Wrong alignment on WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData");
static_assert(sizeof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData) == 0x000130, "Wrong size on WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, Info) == 0x000000, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::Info' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, IsEffectiveDisplay) == 0x000050, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, Visible) == 0x000051, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::Visible' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, EffectiveDisplay) == 0x000052, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::EffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, Temp_bool_Variable) == 0x000053, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, Temp_int_Variable) == 0x000054, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, CallFunc_FindWeaponMaster_bIsValid) == 0x000058, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000060, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, Temp_int_Variable_1) == 0x000110, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, CallFunc_GetMasterDataManager_IsValid) == 0x000114, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000118, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, CallFunc_BP_GetStackBMax_ReturnValue) == 0x000120, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::CallFunc_BP_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, CallFunc_GetVisibility_ReturnValue) == 0x000124, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000125, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000126, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000127, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, K2Node_Select_Default) == 0x000128, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00012C, "Member 'WBP_StackB_M_C_Set_Stack_BIcon_One_ItembyWeaponData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_StackB_M.WBP_StackB_M_C.SetStackBIconOneItemBase
// 0x0024 (0x0024 - 0x0000)
struct WBP_StackB_M_C_SetStackBIconOneItemBase final
{
public:
	int32                                         InStackBNum;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStackBMax;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsEffectiveDisplay;                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Visible;                                           // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalEffectiveDisplay;                            // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BE9[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BEA[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StackB_M_C_SetStackBIconOneItemBase) == 0x000004, "Wrong alignment on WBP_StackB_M_C_SetStackBIconOneItemBase");
static_assert(sizeof(WBP_StackB_M_C_SetStackBIconOneItemBase) == 0x000024, "Wrong size on WBP_StackB_M_C_SetStackBIconOneItemBase");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, InStackBNum) == 0x000000, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::InStackBNum' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, InStackBMax) == 0x000004, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::InStackBMax' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, InIsEffectiveDisplay) == 0x000008, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::InIsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, Visible) == 0x000009, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::Visible' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, bLocalEffectiveDisplay) == 0x00000A, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::bLocalEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, Temp_int_Variable) == 0x00000C, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, Temp_int_Variable_1) == 0x000010, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, Temp_bool_Variable) == 0x000014, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, CallFunc_GetVisibility_ReturnValue) == 0x000015, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000016, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000017, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, K2Node_Select_Default) == 0x00001C, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StackB_M_C_SetStackBIconOneItemBase, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000020, "Member 'WBP_StackB_M_C_SetStackBIconOneItemBase::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

}

