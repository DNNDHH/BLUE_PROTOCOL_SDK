#pragma once

 

// Package: ShopMenuDetails_ItemIconL

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_ItemIconData_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetails_ItemIconL.ShopMenuDetails_ItemIconL_C.ExecuteUbergraph_ShopMenuDetails_ItemIconL
// 0x0248 (0x0248 - 0x0000)
struct ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94E0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94E1[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94E2[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InItemIndex;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94E3[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0038(0x00D0)()
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
	ESBRewardItemType                             K2Node_CustomEvent_RewardType;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94E4[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94E5[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0130(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94E6[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_ByteToString_ReturnValue;            // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0178(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL) == 0x000008, "Wrong alignment on ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL");
static_assert(sizeof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL) == 0x000248, "Wrong size on ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, EntryPoint) == 0x000000, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, Temp_object_Variable) == 0x000008, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, K2Node_CustomEvent_InItemIndex) == 0x000024, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::K2Node_CustomEvent_InItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, K2Node_CustomEvent_Loaded) == 0x000028, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_FindItemMaster_bIsValid) == 0x000030, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_FindItemMaster_ItemMaster) == 0x000038, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, K2Node_CreateDelegate_OutputDelegate) == 0x000108, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, K2Node_CustomEvent_RewardType) == 0x000118, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::K2Node_CustomEvent_RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, K2Node_CustomEvent_ItemIndex) == 0x00011C, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000120, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_GetGender_ReturnValue) == 0x000128, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000129, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000130, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000158, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_Conv_ByteToString_ReturnValue) == 0x000160, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_Conv_ByteToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_Conv_StringToName_ReturnValue) == 0x000170, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_GetDataTableRowFromName_OutRow) == 0x000178, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000240, "Member 'ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function ShopMenuDetails_ItemIconL.ShopMenuDetails_ItemIconL_C.SetRewardData
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetails_ItemIconL_C_SetRewardData final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94E7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetails_ItemIconL_C_SetRewardData) == 0x000004, "Wrong alignment on ShopMenuDetails_ItemIconL_C_SetRewardData");
static_assert(sizeof(ShopMenuDetails_ItemIconL_C_SetRewardData) == 0x000008, "Wrong size on ShopMenuDetails_ItemIconL_C_SetRewardData");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_SetRewardData, RewardType) == 0x000000, "Member 'ShopMenuDetails_ItemIconL_C_SetRewardData::RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_SetRewardData, ItemIndex) == 0x000004, "Member 'ShopMenuDetails_ItemIconL_C_SetRewardData::ItemIndex' has a wrong offset!");

// Function ShopMenuDetails_ItemIconL.ShopMenuDetails_ItemIconL_C.SetItem
// 0x0004 (0x0004 - 0x0000)
struct ShopMenuDetails_ItemIconL_C_SetItem final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetails_ItemIconL_C_SetItem) == 0x000004, "Wrong alignment on ShopMenuDetails_ItemIconL_C_SetItem");
static_assert(sizeof(ShopMenuDetails_ItemIconL_C_SetItem) == 0x000004, "Wrong size on ShopMenuDetails_ItemIconL_C_SetItem");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_SetItem, InItemIndex) == 0x000000, "Member 'ShopMenuDetails_ItemIconL_C_SetItem::InItemIndex' has a wrong offset!");

// Function ShopMenuDetails_ItemIconL.ShopMenuDetails_ItemIconL_C.OnLoaded_F007825A4510AF00D498C5946084418E
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetails_ItemIconL_C_OnLoaded_F007825A4510AF00D498C5946084418E final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetails_ItemIconL_C_OnLoaded_F007825A4510AF00D498C5946084418E) == 0x000008, "Wrong alignment on ShopMenuDetails_ItemIconL_C_OnLoaded_F007825A4510AF00D498C5946084418E");
static_assert(sizeof(ShopMenuDetails_ItemIconL_C_OnLoaded_F007825A4510AF00D498C5946084418E) == 0x000008, "Wrong size on ShopMenuDetails_ItemIconL_C_OnLoaded_F007825A4510AF00D498C5946084418E");
static_assert(offsetof(ShopMenuDetails_ItemIconL_C_OnLoaded_F007825A4510AF00D498C5946084418E, Loaded) == 0x000000, "Member 'ShopMenuDetails_ItemIconL_C_OnLoaded_F007825A4510AF00D498C5946084418E::Loaded' has a wrong offset!");

}

