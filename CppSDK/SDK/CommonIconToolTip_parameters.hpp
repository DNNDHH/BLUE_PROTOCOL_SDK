#pragma once

 

// Package: CommonIconToolTip

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTip.CommonIconToolTip_C.ExecuteUbergraph_CommonIconToolTip
// 0x0038 (0x0038 - 0x0000)
struct CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C3D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C3E[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip) == 0x000008, "Wrong alignment on CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip");
static_assert(sizeof(CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip) == 0x000038, "Wrong size on CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip");
static_assert(offsetof(CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip, EntryPoint) == 0x000000, "Member 'CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip, CallFunc_GetAllChildren_ReturnValue) == 0x000008, "Member 'CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip, Temp_int_Array_Index_Variable) == 0x000018, "Member 'CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip, CallFunc_Array_Get_Item) == 0x000020, "Member 'CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateContentsInfo
// 0x0080 (0x0080 - 0x0000)
struct CommonIconToolTip_C_CreateContentsInfo final
{
public:
	struct FST_ToolTipInfo                        InToolTipInfo;                                     // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTip_C_CreateContentsInfo) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateContentsInfo");
static_assert(sizeof(CommonIconToolTip_C_CreateContentsInfo) == 0x000080, "Wrong size on CommonIconToolTip_C_CreateContentsInfo");
static_assert(offsetof(CommonIconToolTip_C_CreateContentsInfo, InToolTipInfo) == 0x000000, "Member 'CommonIconToolTip_C_CreateContentsInfo::InToolTipInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateContentsInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000078, "Member 'CommonIconToolTip_C_CreateContentsInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipItem
// 0x0038 (0x0038 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipItem final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUnidentified;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C3F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       Swap;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Item_C*       K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C40[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipItem) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipItem");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipItem) == 0x000038, "Wrong size on CommonIconToolTip_C_CreateToolTipItem");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItem, InItemIndex) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipItem::InItemIndex' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItem, bUnidentified) == 0x000004, "Member 'CommonIconToolTip_C_CreateToolTipItem::bUnidentified' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItem, Swap) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipItem::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItem, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'CommonIconToolTip_C_CreateToolTipItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItem, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipItem::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItem, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItem, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'CommonIconToolTip_C_CreateToolTipItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItem, CallFunc_Create_ReturnValue) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItem, CallFunc_AddChildToCanvas_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipItem::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipWeapon
// 0x0050 (0x0050 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipWeapon final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C41[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InUniqueId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C42[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       Swap;                                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Item_C*       CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Item_C*       K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C43[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipWeapon) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipWeapon");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipWeapon) == 0x000050, "Wrong size on CommonIconToolTip_C_CreateToolTipWeapon");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon, InItemIndex) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipWeapon::InItemIndex' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon, InUniqueId) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipWeapon::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon, InStorageNumber) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipWeapon::InStorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon, Swap) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipWeapon::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon, CallFunc_Create_ReturnValue) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipWeapon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon, CallFunc_GetChildAt_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipWeapon::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item) == 0x000038, "Member 'CommonIconToolTip_C_CreateToolTipWeapon::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'CommonIconToolTip_C_CreateToolTipWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'CommonIconToolTip_C_CreateToolTipWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon, CallFunc_AddChildToCanvas_ReturnValue) == 0x000048, "Member 'CommonIconToolTip_C_CreateToolTipWeapon::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipWeapon_Details
// 0x0110 (0x0110 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipWeapon_Details final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C44[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InItemUniqueId;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageId;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InForceLevelSyncOff;                               // 0x001D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C45[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Weapon_C*     Swap;                                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Weapon_C*     CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Weapon_C*     K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Weapon; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C46[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C47[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0060(0x00B0)()
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipWeapon_Details) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipWeapon_Details");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipWeapon_Details) == 0x000110, "Wrong size on CommonIconToolTip_C_CreateToolTipWeapon_Details");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, InItemIndex) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::InItemIndex' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, InItemUniqueId) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, InStorageId) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::InStorageId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, IsEffectiveDisplay) == 0x00001C, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, InForceLevelSyncOff) == 0x00001D, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::InForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, Swap) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, CallFunc_Create_ReturnValue) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, CallFunc_GetChildAt_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Weapon) == 0x000038, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Weapon' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, CallFunc_GetMasterDataManager_IsValid) == 0x000042, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, CallFunc_GetMasterDataManager_ReturnValue) == 0x000048, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, CallFunc_AddChildToCanvas_ReturnValue) == 0x000050, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, CallFunc_GetWeaponMasterData_IsExists) == 0x000058, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipWeapon_Details, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000060, "Member 'CommonIconToolTip_C_CreateToolTipWeapon_Details::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCostume
// 0x0038 (0x0038 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipCostume final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C48[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       Swap;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Item_C*       CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Item_C*       K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C49[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipCostume) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipCostume");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipCostume) == 0x000038, "Wrong size on CommonIconToolTip_C_CreateToolTipCostume");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCostume, InItemIndex) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipCostume::InItemIndex' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCostume, Swap) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipCostume::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCostume, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'CommonIconToolTip_C_CreateToolTipCostume::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCostume, CallFunc_Create_ReturnValue) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipCostume::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCostume, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipCostume::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCostume, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipCostume::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCostume, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'CommonIconToolTip_C_CreateToolTipCostume::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCostume, CallFunc_AddChildToCanvas_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipCostume::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipMoney
// 0x0068 (0x0068 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipMoney final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C4A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OptionText;                                        // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InAmountText;                                      // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonIconToolTipContent_Money_C*      Swap;                                              // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Money_C*      K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Money; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C4B[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Money_C*      CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipMoney) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipMoney");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipMoney) == 0x000068, "Wrong size on CommonIconToolTip_C_CreateToolTipMoney");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMoney, InAmount) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipMoney::InAmount' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMoney, OptionText) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipMoney::OptionText' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMoney, InAmountText) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipMoney::InAmountText' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMoney, Swap) == 0x000038, "Member 'CommonIconToolTip_C_CreateToolTipMoney::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMoney, CallFunc_GetChildAt_ReturnValue) == 0x000040, "Member 'CommonIconToolTip_C_CreateToolTipMoney::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMoney, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Money) == 0x000048, "Member 'CommonIconToolTip_C_CreateToolTipMoney::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Money' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMoney, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'CommonIconToolTip_C_CreateToolTipMoney::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMoney, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'CommonIconToolTip_C_CreateToolTipMoney::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMoney, CallFunc_Create_ReturnValue) == 0x000058, "Member 'CommonIconToolTip_C_CreateToolTipMoney::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMoney, CallFunc_AddChildToCanvas_ReturnValue) == 0x000060, "Member 'CommonIconToolTip_C_CreateToolTipMoney::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipEmotion
// 0x00A0 (0x00A0 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipEmotion final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIndex;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C4C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipText_Variable_C*      Swap;                                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue;    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindEmoteMaster_bIsValid;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C4D[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEmoteMasterData                     CallFunc_FindEmoteMaster_EmoteMaster;              // 0x0020(0x0028)()
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C4E[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipText_Variable_C*      CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C4F[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipText_Variable_C*      K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C50[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default;                             // 0x0088(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C51[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipEmotion) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipEmotion");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipEmotion) == 0x0000A0, "Wrong size on CommonIconToolTip_C_CreateToolTipEmotion");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, InId) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::InId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, InIndex) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::InIndex' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, Swap) == 0x000010, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, CallFunc_ValidStampEmoteTermUpdate_ReturnValue) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::CallFunc_ValidStampEmoteTermUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, CallFunc_FindEmoteMaster_bIsValid) == 0x000019, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::CallFunc_FindEmoteMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, CallFunc_FindEmoteMaster_EmoteMaster) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::CallFunc_FindEmoteMaster_EmoteMaster' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, CallFunc_DateTimeMinValue_ReturnValue) == 0x000048, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000050, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000058, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, CallFunc_Create_ReturnValue) == 0x000060, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, CallFunc_GetChildAt_ReturnValue) == 0x000068, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, Temp_bool_Variable) == 0x000070, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable) == 0x000078, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, K2Node_Select_Default) == 0x000088, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipEmotion, CallFunc_AddChildToCanvas_ReturnValue) == 0x000098, "Member 'CommonIconToolTip_C_CreateToolTipEmotion::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipStamp
// 0x00C0 (0x00C0 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipStamp final
{
public:
	int32                                         InStampId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C52[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipText_Variable_C*      Swap;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipText_Variable_C*      CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetStampIDToCategoryNameAndStampI_ReturnValue; // 0x0018(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C53[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindStampDataByStampId_IsExists;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C54[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampMasterData                     CallFunc_FindStampDataByStampId_ReturnValue;       // 0x0068(0x0020)()
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue;    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C55[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default;                             // 0x0098(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipText_Variable_C*      K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable; // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C56[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipStamp) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipStamp");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipStamp) == 0x0000C0, "Wrong size on CommonIconToolTip_C_CreateToolTipStamp");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, InStampId) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipStamp::InStampId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, Swap) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipStamp::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_Create_ReturnValue) == 0x000010, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_GetStampIDToCategoryNameAndStampI_ReturnValue) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_GetStampIDToCategoryNameAndStampI_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_GetMasterDataManager_IsValid) == 0x000048, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_GetMasterDataManager_ReturnValue) == 0x000050, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_DateTimeMinValue_ReturnValue) == 0x000058, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_FindStampDataByStampId_IsExists) == 0x000060, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_FindStampDataByStampId_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_FindStampDataByStampId_ReturnValue) == 0x000068, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_FindStampDataByStampId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000088, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000090, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_ValidStampEmoteTermUpdate_ReturnValue) == 0x000091, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_ValidStampEmoteTermUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, Temp_bool_Variable) == 0x000092, "Member 'CommonIconToolTip_C_CreateToolTipStamp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, K2Node_Select_Default) == 0x000098, "Member 'CommonIconToolTip_C_CreateToolTipStamp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_GetChildAt_ReturnValue) == 0x0000A0, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable) == 0x0000A8, "Member 'CommonIconToolTip_C_CreateToolTipStamp::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Text_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'CommonIconToolTip_C_CreateToolTipStamp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_IsValid_ReturnValue) == 0x0000B1, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipStamp, CallFunc_AddChildToCanvas_ReturnValue) == 0x0000B8, "Member 'CommonIconToolTip_C_CreateToolTipStamp::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipContributionPoint
// 0x0038 (0x0038 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipContributionPoint final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C57[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Single_C*     Swap;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Single_C*     CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Single_C*     K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Single; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C58[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipContributionPoint) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipContributionPoint");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipContributionPoint) == 0x000038, "Wrong size on CommonIconToolTip_C_CreateToolTipContributionPoint");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipContributionPoint, InAmount) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipContributionPoint::InAmount' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipContributionPoint, Swap) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipContributionPoint::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipContributionPoint, CallFunc_Create_ReturnValue) == 0x000010, "Member 'CommonIconToolTip_C_CreateToolTipContributionPoint::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipContributionPoint, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipContributionPoint::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipContributionPoint, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Single) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipContributionPoint::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Single' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipContributionPoint, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipContributionPoint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipContributionPoint, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'CommonIconToolTip_C_CreateToolTipContributionPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipContributionPoint, CallFunc_AddChildToCanvas_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipContributionPoint::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine
// 0x0058 (0x0058 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipImagine final
{
public:
	int32                                         InImagineItemId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C59[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InUniqueId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C5A[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       Swap;                                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Widget;                                            // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Item_C*       K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C5B[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipImagine) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipImagine");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipImagine) == 0x000058, "Wrong size on CommonIconToolTip_C_CreateToolTipImagine");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, InImagineItemId) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipImagine::InImagineItemId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, InUniqueId) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipImagine::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, InStorageNumber) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipImagine::InStorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, Swap) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipImagine::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, Widget) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipImagine::Widget' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, CallFunc_GetChildAt_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipImagine::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item) == 0x000038, "Member 'CommonIconToolTip_C_CreateToolTipImagine::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'CommonIconToolTip_C_CreateToolTipImagine::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'CommonIconToolTip_C_CreateToolTipImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, CallFunc_Create_ReturnValue) == 0x000048, "Member 'CommonIconToolTip_C_CreateToolTipImagine::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine, CallFunc_AddChildToCanvas_ReturnValue) == 0x000050, "Member 'CommonIconToolTip_C_CreateToolTipImagine::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine_AcDetails
// 0x0118 (0x0118 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipImagine_AcDetails final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C5C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InUniqueId;                                        // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bInIsImageIconActive;                              // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInUseClassTypeForLevelSync;                       // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassTypeForLevelSync;                           // 0x001A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x001B(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bForceLevelSyncOff;                                // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C5D[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_ActiveImagine_C* Swap;                                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C5E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C5F[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0048(0x00B0)()
	class UCommonIconToolTipContent_ActiveImagine_C* K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Active_Imagine; // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C60[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_ActiveImagine_C* CallFunc_Create_ReturnValue;                       // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipImagine_AcDetails");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails) == 0x000118, "Wrong size on CommonIconToolTip_C_CreateToolTipImagine_AcDetails");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, InId) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::InId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, InUniqueId) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, bInIsImageIconActive) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::bInIsImageIconActive' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, bInUseClassTypeForLevelSync) == 0x000019, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::bInUseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, InClassTypeForLevelSync) == 0x00001A, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::InClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, IsEffectiveDisplay) == 0x00001B, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, bForceLevelSyncOff) == 0x00001C, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::bForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, Swap) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, CallFunc_GetMasterDataManager_IsValid) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, CallFunc_GetChildAt_ReturnValue) == 0x000038, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, CallFunc_FindMasterImagineData_IsExists) == 0x000040, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, CallFunc_FindMasterImagineData_ReturnValue) == 0x000048, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Active_Imagine) == 0x0000F8, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Active_Imagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, CallFunc_IsValid_ReturnValue) == 0x000101, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, CallFunc_Create_ReturnValue) == 0x000108, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_AcDetails, CallFunc_AddChildToCanvas_ReturnValue) == 0x000110, "Member 'CommonIconToolTip_C_CreateToolTipImagine_AcDetails::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine_PaDetails
// 0x0118 (0x0118 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipImagine_PaDetails final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C61[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InUniqueId;                                        // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bInUseClassTypeForLevelSync;                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassTypeForLevelSync;                           // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x001A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bForceLevelSyncOff;                                // 0x001B(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C62[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_PassiveImagine_C* Swap;                                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C63[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_PassiveImagine_C* K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Passive_Imagine; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C64[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0050(0x00B0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C65[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_PassiveImagine_C* CallFunc_Create_ReturnValue;                       // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipImagine_PaDetails");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails) == 0x000118, "Wrong size on CommonIconToolTip_C_CreateToolTipImagine_PaDetails");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, InId) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::InId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, InUniqueId) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, bInUseClassTypeForLevelSync) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::bInUseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, InClassTypeForLevelSync) == 0x000019, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::InClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, IsEffectiveDisplay) == 0x00001A, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, bForceLevelSyncOff) == 0x00001B, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::bForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, Swap) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, CallFunc_GetMasterDataManager_IsValid) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Passive_Imagine) == 0x000040, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Passive_Imagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, CallFunc_FindMasterImagineData_IsExists) == 0x000049, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, CallFunc_FindMasterImagineData_ReturnValue) == 0x000050, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, CallFunc_IsValid_ReturnValue) == 0x000100, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, CallFunc_Create_ReturnValue) == 0x000108, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipImagine_PaDetails, CallFunc_AddChildToCanvas_ReturnValue) == 0x000110, "Member 'CommonIconToolTip_C_CreateToolTipImagine_PaDetails::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipBrokenData
// 0x0030 (0x0030 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipBrokenData final
{
public:
	class UCommonIconToolTipContent_Single_C*     Swap;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Single_C*     K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Single; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C66[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Single_C*     CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipBrokenData) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipBrokenData");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipBrokenData) == 0x000030, "Wrong size on CommonIconToolTip_C_CreateToolTipBrokenData");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipBrokenData, Swap) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipBrokenData::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipBrokenData, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipBrokenData::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipBrokenData, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Single) == 0x000010, "Member 'CommonIconToolTip_C_CreateToolTipBrokenData::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Single' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipBrokenData, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipBrokenData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipBrokenData, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'CommonIconToolTip_C_CreateToolTipBrokenData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipBrokenData, CallFunc_Create_ReturnValue) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipBrokenData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipBrokenData, CallFunc_AddChildToCanvas_ReturnValue) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipBrokenData::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipLiquidMemory
// 0x0040 (0x0040 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipLiquidMemory final
{
public:
	int32                                         InLiquidMemoryId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C67[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_LiquidMemory_C* Swap;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_LiquidMemory_C* CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_LiquidMemory_C* K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Liquid_Memory; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C68[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipLiquidMemory) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipLiquidMemory");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipLiquidMemory) == 0x000040, "Wrong size on CommonIconToolTip_C_CreateToolTipLiquidMemory");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipLiquidMemory, InLiquidMemoryId) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipLiquidMemory::InLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipLiquidMemory, Swap) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipLiquidMemory::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipLiquidMemory, CallFunc_Create_ReturnValue) == 0x000010, "Member 'CommonIconToolTip_C_CreateToolTipLiquidMemory::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipLiquidMemory, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipLiquidMemory::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipLiquidMemory, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Liquid_Memory) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipLiquidMemory::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Liquid_Memory' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipLiquidMemory, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipLiquidMemory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipLiquidMemory, CallFunc_AddChildToCanvas_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipLiquidMemory::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipLiquidMemory, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'CommonIconToolTip_C_CreateToolTipLiquidMemory::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipMountImagine
// 0x01B0 (0x01B0 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipMountImagine final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C69[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InUniqueId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C6A[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       Swap;                                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalUniqueId;                                     // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalMountImagineIndex;                            // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C6B[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterMountImagineData           LocalMountImagine;                                 // 0x0040(0x0028)(Edit, BlueprintVisible)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_FindCharacterEquipment_OutResult;         // 0x0070(0x0118)()
	bool                                          CallFunc_FindCharacterEquipment_ReturnValue;       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C6C[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item; // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C6D[0x5];                                     // 0x019B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       CallFunc_Create_ReturnValue;                       // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipMountImagine) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipMountImagine");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipMountImagine) == 0x0001B0, "Wrong size on CommonIconToolTip_C_CreateToolTipMountImagine");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, InIndex) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::InIndex' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, InUniqueId) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, InStorageNumber) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::InStorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, Swap) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, LocalUniqueId) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, LocalMountImagineIndex) == 0x000038, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::LocalMountImagineIndex' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, LocalMountImagine) == 0x000040, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::LocalMountImagine' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, CallFunc_GetChildAt_ReturnValue) == 0x000068, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, CallFunc_FindCharacterEquipment_OutResult) == 0x000070, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::CallFunc_FindCharacterEquipment_OutResult' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, CallFunc_FindCharacterEquipment_ReturnValue) == 0x000188, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::CallFunc_FindCharacterEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item) == 0x000190, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, K2Node_DynamicCast_bSuccess) == 0x000198, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, CallFunc_IsValid_ReturnValue) == 0x000199, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00019A, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, CallFunc_Create_ReturnValue) == 0x0001A0, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipMountImagine, CallFunc_AddChildToCanvas_ReturnValue) == 0x0001A8, "Member 'CommonIconToolTip_C_CreateToolTipMountImagine::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipItemBox
// 0x00A8 (0x00A8 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipItemBox final
{
public:
	struct FST_ToolTipInfo                        Param_ToolTipInfo;                                 // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UCommonIconToolTipContent_ItemBox_C*    Swap;                                              // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_ItemBox_C*    K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item_Box; // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C6E[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_ItemBox_C*    CallFunc_Create_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipItemBox) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipItemBox");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipItemBox) == 0x0000A8, "Wrong size on CommonIconToolTip_C_CreateToolTipItemBox");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItemBox, Param_ToolTipInfo) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipItemBox::Param_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItemBox, Swap) == 0x000078, "Member 'CommonIconToolTip_C_CreateToolTipItemBox::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItemBox, CallFunc_GetChildAt_ReturnValue) == 0x000080, "Member 'CommonIconToolTip_C_CreateToolTipItemBox::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItemBox, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item_Box) == 0x000088, "Member 'CommonIconToolTip_C_CreateToolTipItemBox::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item_Box' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItemBox, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'CommonIconToolTip_C_CreateToolTipItemBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItemBox, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'CommonIconToolTip_C_CreateToolTipItemBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItemBox, CallFunc_Create_ReturnValue) == 0x000098, "Member 'CommonIconToolTip_C_CreateToolTipItemBox::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipItemBox, CallFunc_AddChildToCanvas_ReturnValue) == 0x0000A0, "Member 'CommonIconToolTip_C_CreateToolTipItemBox::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCommonNameAndType
// 0x00C0 (0x00C0 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipCommonNameAndType final
{
public:
	struct FST_ToolTipInfo                        Info;                                              // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         TmpAmountMin;                                      // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpAmount;                                         // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             TmpRewardType;                                     // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C6F[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpId;                                             // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Item_C*       TmpToolTip;                                        // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Item_C*       CallFunc_Create_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C70[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Item_C*       K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item; // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipCommonNameAndType) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipCommonNameAndType");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipCommonNameAndType) == 0x0000C0, "Wrong size on CommonIconToolTip_C_CreateToolTipCommonNameAndType");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, Info) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::Info' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, TmpAmountMin) == 0x000078, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::TmpAmountMin' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, TmpAmount) == 0x00007C, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::TmpAmount' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, TmpRewardType) == 0x000080, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::TmpRewardType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, TmpId) == 0x000084, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::TmpId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, TmpToolTip) == 0x000088, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::TmpToolTip' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, CallFunc_AddChildToCanvas_ReturnValue) == 0x000090, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, CallFunc_Create_ReturnValue) == 0x000098, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, CallFunc_GetChildAt_ReturnValue) == 0x0000A0, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item) == 0x0000B0, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Item' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonNameAndType, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'CommonIconToolTip_C_CreateToolTipCommonNameAndType::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCommonTypeOnly
// 0x01C0 (0x01C0 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipCommonTypeOnly final
{
public:
	struct FST_ToolTipInfo                        Info;                                              // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         TmpId;                                             // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C71[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Single_C*     TmpToolTipSingle;                                  // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             TmpRewardType;                                     // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C72[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Single_C*     CallFunc_Create_ReturnValue;                       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C73[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C74[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x00D0(0x00B0)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C75[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        Temp_byte_Variable;                                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C76[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_Single_C*     K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Single; // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipCommonTypeOnly");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly) == 0x0001C0, "Wrong size on CommonIconToolTip_C_CreateToolTipCommonTypeOnly");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, Info) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::Info' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, TmpId) == 0x000078, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::TmpId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, TmpToolTipSingle) == 0x000080, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::TmpToolTipSingle' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, TmpRewardType) == 0x000088, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::TmpRewardType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000090, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000A0, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_Create_ReturnValue) == 0x0000B0, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_GetMasterDataManager_IsValid) == 0x0000B8, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000C0, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_FindMasterImagineData_IsExists) == 0x0000C8, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_FindMasterImagineData_ReturnValue) == 0x0000D0, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000180, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_AddChildToCanvas_ReturnValue) == 0x000188, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, Temp_byte_Variable) == 0x000190, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_GetChildAt_ReturnValue) == 0x000198, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, K2Node_Select_Default) == 0x0001A0, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Single) == 0x0001B0, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Single' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipCommonTypeOnly, CallFunc_IsValid_ReturnValue) == 0x0001B9, "Member 'CommonIconToolTip_C_CreateToolTipCommonTypeOnly::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipRecipeSet
// 0x00B0 (0x00B0 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipRecipeSet final
{
public:
	struct FST_ToolTipInfo                        Param_ToolTipInfo;                                 // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          bCheckExisting;                                    // 0x0078(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C77[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_RecipeSet_C*  Swap;                                              // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_RecipeSet_C*  K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Recipe_Set; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C78[0x5];                                     // 0x009B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_RecipeSet_C*  CallFunc_Create_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipRecipeSet) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipRecipeSet");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipRecipeSet) == 0x0000B0, "Wrong size on CommonIconToolTip_C_CreateToolTipRecipeSet");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipRecipeSet, Param_ToolTipInfo) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipRecipeSet::Param_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipRecipeSet, bCheckExisting) == 0x000078, "Member 'CommonIconToolTip_C_CreateToolTipRecipeSet::bCheckExisting' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipRecipeSet, Swap) == 0x000080, "Member 'CommonIconToolTip_C_CreateToolTipRecipeSet::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipRecipeSet, CallFunc_GetChildAt_ReturnValue) == 0x000088, "Member 'CommonIconToolTip_C_CreateToolTipRecipeSet::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipRecipeSet, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Recipe_Set) == 0x000090, "Member 'CommonIconToolTip_C_CreateToolTipRecipeSet::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Recipe_Set' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipRecipeSet, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'CommonIconToolTip_C_CreateToolTipRecipeSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipRecipeSet, CallFunc_IsValid_ReturnValue) == 0x000099, "Member 'CommonIconToolTip_C_CreateToolTipRecipeSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipRecipeSet, CallFunc_BooleanAND_ReturnValue) == 0x00009A, "Member 'CommonIconToolTip_C_CreateToolTipRecipeSet::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipRecipeSet, CallFunc_Create_ReturnValue) == 0x0000A0, "Member 'CommonIconToolTip_C_CreateToolTipRecipeSet::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipRecipeSet, CallFunc_AddChildToCanvas_ReturnValue) == 0x0000A8, "Member 'CommonIconToolTip_C_CreateToolTipRecipeSet::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipFusionItem
// 0x0038 (0x0038 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipFusionItem final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUnidentified;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C79[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_FusionItemToolTip_C*               Swap;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_FusionItemToolTip_C*               K2Node_DynamicCast_AsWBP_Fusion_Item_Tool_Tip;     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C7A[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_FusionItemToolTip_C*               CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipFusionItem) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipFusionItem");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipFusionItem) == 0x000038, "Wrong size on CommonIconToolTip_C_CreateToolTipFusionItem");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipFusionItem, InItemIndex) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipFusionItem::InItemIndex' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipFusionItem, bUnidentified) == 0x000004, "Member 'CommonIconToolTip_C_CreateToolTipFusionItem::bUnidentified' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipFusionItem, Swap) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipFusionItem::Swap' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipFusionItem, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'CommonIconToolTip_C_CreateToolTipFusionItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipFusionItem, K2Node_DynamicCast_AsWBP_Fusion_Item_Tool_Tip) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipFusionItem::K2Node_DynamicCast_AsWBP_Fusion_Item_Tool_Tip' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipFusionItem, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CommonIconToolTip_C_CreateToolTipFusionItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipFusionItem, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'CommonIconToolTip_C_CreateToolTipFusionItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipFusionItem, CallFunc_Create_ReturnValue) == 0x000028, "Member 'CommonIconToolTip_C_CreateToolTipFusionItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipFusionItem, CallFunc_AddChildToCanvas_ReturnValue) == 0x000030, "Member 'CommonIconToolTip_C_CreateToolTipFusionItem::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.SetPlayerProfileWeaponData
// 0x0050 (0x0050 - 0x0000)
struct CommonIconToolTip_C_SetPlayerProfileWeaponData final
{
public:
	struct FSBWeaponItemData                      Param_PlayerProfileWeaponData;                     // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonIconToolTip_C_SetPlayerProfileWeaponData) == 0x000008, "Wrong alignment on CommonIconToolTip_C_SetPlayerProfileWeaponData");
static_assert(sizeof(CommonIconToolTip_C_SetPlayerProfileWeaponData) == 0x000050, "Wrong size on CommonIconToolTip_C_SetPlayerProfileWeaponData");
static_assert(offsetof(CommonIconToolTip_C_SetPlayerProfileWeaponData, Param_PlayerProfileWeaponData) == 0x000000, "Member 'CommonIconToolTip_C_SetPlayerProfileWeaponData::Param_PlayerProfileWeaponData' has a wrong offset!");

// Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipOrnament
// 0x0110 (0x0110 - 0x0000)
struct CommonIconToolTip_C_CreateToolTipOrnament final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C7B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Variable_C*    NewLocalVar_0;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindOrnamentMaster_valid;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C7C[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterOrnament                      CallFunc_FindOrnamentMaster_ReturnValue;           // 0x0018(0x0060)()
	class UWBP_CommonToolTipDetail_Variable_C*    CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C7D[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	class FString                                 CallFunc_GetOrnamentText_ReturnValue;              // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_Select_Default;                             // 0x00E8(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Variable; // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C7E[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTip_C_CreateToolTipOrnament) == 0x000008, "Wrong alignment on CommonIconToolTip_C_CreateToolTipOrnament");
static_assert(sizeof(CommonIconToolTip_C_CreateToolTipOrnament) == 0x000110, "Wrong size on CommonIconToolTip_C_CreateToolTipOrnament");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, ID) == 0x000000, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::ID' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, NewLocalVar_0) == 0x000008, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, Temp_bool_Variable) == 0x000010, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_FindOrnamentMaster_valid) == 0x000011, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_FindOrnamentMaster_valid' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_FindOrnamentMaster_ReturnValue) == 0x000018, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_FindOrnamentMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_Create_ReturnValue) == 0x000078, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000080, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000088, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_GetTextFromAsset_ReturnValue) == 0x000090, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_GetOrnamentText_ReturnValue) == 0x0000B8, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_GetOrnamentText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_DateTimeMinValue_ReturnValue) == 0x0000E0, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, K2Node_Select_Default) == 0x0000E8, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_GetChildAt_ReturnValue) == 0x0000F0, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Variable) == 0x0000F8, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Detail_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_IsValid_ReturnValue) == 0x000101, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTip_C_CreateToolTipOrnament, CallFunc_AddChildToCanvas_ReturnValue) == 0x000108, "Member 'CommonIconToolTip_C_CreateToolTipOrnament::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

}

