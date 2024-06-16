#pragma once

 

// Package: InventoryTag

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "ToolTipType_structs.hpp"
#include "InventoryItemData_structs.hpp"


namespace SDK::Params
{

// Function InventoryTag.InventoryTag_C.ExecuteUbergraph_InventoryTag
// 0x0008 (0x0008 - 0x0000)
struct InventoryTag_C_ExecuteUbergraph_InventoryTag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_ExecuteUbergraph_InventoryTag) == 0x000004, "Wrong alignment on InventoryTag_C_ExecuteUbergraph_InventoryTag");
static_assert(sizeof(InventoryTag_C_ExecuteUbergraph_InventoryTag) == 0x000008, "Wrong size on InventoryTag_C_ExecuteUbergraph_InventoryTag");
static_assert(offsetof(InventoryTag_C_ExecuteUbergraph_InventoryTag, EntryPoint) == 0x000000, "Member 'InventoryTag_C_ExecuteUbergraph_InventoryTag::EntryPoint' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_ExecuteUbergraph_InventoryTag, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'InventoryTag_C_ExecuteUbergraph_InventoryTag::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_ExecuteUbergraph_InventoryTag, K2Node_Event_IsDesignTime) == 0x000005, "Member 'InventoryTag_C_ExecuteUbergraph_InventoryTag::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct InventoryTag_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_PreConstruct) == 0x000001, "Wrong alignment on InventoryTag_C_PreConstruct");
static_assert(sizeof(InventoryTag_C_PreConstruct) == 0x000001, "Wrong size on InventoryTag_C_PreConstruct");
static_assert(offsetof(InventoryTag_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'InventoryTag_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetPossibility
// 0x0003 (0x0003 - 0x0000)
struct InventoryTag_C_SetPossibility final
{
public:
	bool                                          bPossible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_SetPossibility) == 0x000001, "Wrong alignment on InventoryTag_C_SetPossibility");
static_assert(sizeof(InventoryTag_C_SetPossibility) == 0x000003, "Wrong size on InventoryTag_C_SetPossibility");
static_assert(offsetof(InventoryTag_C_SetPossibility, bPossible) == 0x000000, "Member 'InventoryTag_C_SetPossibility::bPossible' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetPossibility, CallFunc_ValidStackB_ReturnValue) == 0x000001, "Member 'InventoryTag_C_SetPossibility::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetPossibility, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'InventoryTag_C_SetPossibility::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetBppChange
// 0x0088 (0x0088 - 0x0000)
struct InventoryTag_C_SetBppChange final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92DE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_ItemId;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Used;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBppIrredeemable;                                 // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92DF[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E0[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E1[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E2[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E3[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists; // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E4[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBBPPtExchangeMasterData              CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue; // 0x006C(0x0018)(NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_SetBppChange) == 0x000008, "Wrong alignment on InventoryTag_C_SetBppChange");
static_assert(sizeof(InventoryTag_C_SetBppChange) == 0x000088, "Wrong size on InventoryTag_C_SetBppChange");
static_assert(offsetof(InventoryTag_C_SetBppChange, RewardType) == 0x000000, "Member 'InventoryTag_C_SetBppChange::RewardType' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, Param_ItemId) == 0x000004, "Member 'InventoryTag_C_SetBppChange::Param_ItemId' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, Used) == 0x000008, "Member 'InventoryTag_C_SetBppChange::Used' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, IsBppIrredeemable) == 0x000009, "Member 'InventoryTag_C_SetBppChange::IsBppIrredeemable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, K2Node_MakeArray_Array) == 0x000010, "Member 'InventoryTag_C_SetBppChange::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'InventoryTag_C_SetBppChange::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_Array_Get_Item) == 0x000028, "Member 'InventoryTag_C_SetBppChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_Not_PreBool_ReturnValue_1) == 0x000030, "Member 'InventoryTag_C_SetBppChange::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'InventoryTag_C_SetBppChange::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'InventoryTag_C_SetBppChange::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'InventoryTag_C_SetBppChange::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_IsEmpty_ReturnValue) == 0x000058, "Member 'InventoryTag_C_SetBppChange::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_GetMasterDataManager_IsValid) == 0x000059, "Member 'InventoryTag_C_SetBppChange::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_GetMasterDataManager_ReturnValue) == 0x000060, "Member 'InventoryTag_C_SetBppChange::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists) == 0x000068, "Member 'InventoryTag_C_SetBppChange::CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue) == 0x00006C, "Member 'InventoryTag_C_SetBppChange::CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetBppChange, CallFunc_BooleanAND_ReturnValue_1) == 0x000084, "Member 'InventoryTag_C_SetBppChange::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetItemMasterData
// 0x0118 (0x0118 - 0x0000)
struct InventoryTag_C_SetItemMasterData final
{
public:
	struct FItemMasterData                        ItemMasterData;                                    // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsBppIrredeemable;                                 // 0x00D0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E5[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E6[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_SetItemMasterData) == 0x000008, "Wrong alignment on InventoryTag_C_SetItemMasterData");
static_assert(sizeof(InventoryTag_C_SetItemMasterData) == 0x000118, "Wrong size on InventoryTag_C_SetItemMasterData");
static_assert(offsetof(InventoryTag_C_SetItemMasterData, ItemMasterData) == 0x000000, "Member 'InventoryTag_C_SetItemMasterData::ItemMasterData' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetItemMasterData, IsBppIrredeemable) == 0x0000D0, "Member 'InventoryTag_C_SetItemMasterData::IsBppIrredeemable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetItemMasterData, K2Node_MakeArray_Array) == 0x0000D8, "Member 'InventoryTag_C_SetItemMasterData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetItemMasterData, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'InventoryTag_C_SetItemMasterData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetItemMasterData, CallFunc_Not_PreBool_ReturnValue) == 0x0000F0, "Member 'InventoryTag_C_SetItemMasterData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetItemMasterData, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000F8, "Member 'InventoryTag_C_SetItemMasterData::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetItemMasterData, CallFunc_GetDisplayName_ReturnValue) == 0x000100, "Member 'InventoryTag_C_SetItemMasterData::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetItemMasterData, CallFunc_IsEmpty_ReturnValue) == 0x000110, "Member 'InventoryTag_C_SetItemMasterData::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetItemMasterData, K2Node_SwitchEnum_CmpSuccess) == 0x000111, "Member 'InventoryTag_C_SetItemMasterData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetWeaponMaster
// 0x00F0 (0x00F0 - 0x0000)
struct InventoryTag_C_SetWeaponMaster final
{
public:
	struct FSBWeaponMasterData                    WeaponMaster;                                      // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Used;                                              // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBppIrredeemable;                                 // 0x00B1(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E7[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_SetWeaponMaster) == 0x000008, "Wrong alignment on InventoryTag_C_SetWeaponMaster");
static_assert(sizeof(InventoryTag_C_SetWeaponMaster) == 0x0000F0, "Wrong size on InventoryTag_C_SetWeaponMaster");
static_assert(offsetof(InventoryTag_C_SetWeaponMaster, WeaponMaster) == 0x000000, "Member 'InventoryTag_C_SetWeaponMaster::WeaponMaster' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetWeaponMaster, Used) == 0x0000B0, "Member 'InventoryTag_C_SetWeaponMaster::Used' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetWeaponMaster, IsBppIrredeemable) == 0x0000B1, "Member 'InventoryTag_C_SetWeaponMaster::IsBppIrredeemable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetWeaponMaster, K2Node_MakeArray_Array) == 0x0000B8, "Member 'InventoryTag_C_SetWeaponMaster::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetWeaponMaster, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'InventoryTag_C_SetWeaponMaster::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetWeaponMaster, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000D0, "Member 'InventoryTag_C_SetWeaponMaster::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetWeaponMaster, CallFunc_GetDisplayName_ReturnValue) == 0x0000D8, "Member 'InventoryTag_C_SetWeaponMaster::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetWeaponMaster, CallFunc_IsEmpty_ReturnValue) == 0x0000E8, "Member 'InventoryTag_C_SetWeaponMaster::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetWeaponMaster, K2Node_SwitchEnum_CmpSuccess) == 0x0000E9, "Member 'InventoryTag_C_SetWeaponMaster::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetMasterCostume
// 0x00C8 (0x00C8 - 0x0000)
struct InventoryTag_C_SetMasterCostume final
{
public:
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Used;                                              // 0x0088(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBppIrredeemable;                                 // 0x0089(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E8[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_SetMasterCostume) == 0x000008, "Wrong alignment on InventoryTag_C_SetMasterCostume");
static_assert(sizeof(InventoryTag_C_SetMasterCostume) == 0x0000C8, "Wrong size on InventoryTag_C_SetMasterCostume");
static_assert(offsetof(InventoryTag_C_SetMasterCostume, MasterCostume) == 0x000000, "Member 'InventoryTag_C_SetMasterCostume::MasterCostume' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterCostume, Used) == 0x000088, "Member 'InventoryTag_C_SetMasterCostume::Used' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterCostume, IsBppIrredeemable) == 0x000089, "Member 'InventoryTag_C_SetMasterCostume::IsBppIrredeemable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterCostume, K2Node_MakeArray_Array) == 0x000090, "Member 'InventoryTag_C_SetMasterCostume::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterCostume, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'InventoryTag_C_SetMasterCostume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterCostume, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000A8, "Member 'InventoryTag_C_SetMasterCostume::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterCostume, CallFunc_GetDisplayName_ReturnValue) == 0x0000B0, "Member 'InventoryTag_C_SetMasterCostume::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterCostume, CallFunc_IsEmpty_ReturnValue) == 0x0000C0, "Member 'InventoryTag_C_SetMasterCostume::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterCostume, K2Node_SwitchEnum_CmpSuccess) == 0x0000C1, "Member 'InventoryTag_C_SetMasterCostume::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetMasterImagine
// 0x00B8 (0x00B8 - 0x0000)
struct InventoryTag_C_SetMasterImagine final
{
public:
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Used;                                              // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBppIrredeemable;                                 // 0x00B1(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_SetMasterImagine) == 0x000008, "Wrong alignment on InventoryTag_C_SetMasterImagine");
static_assert(sizeof(InventoryTag_C_SetMasterImagine) == 0x0000B8, "Wrong size on InventoryTag_C_SetMasterImagine");
static_assert(offsetof(InventoryTag_C_SetMasterImagine, MasterImagine) == 0x000000, "Member 'InventoryTag_C_SetMasterImagine::MasterImagine' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterImagine, Used) == 0x0000B0, "Member 'InventoryTag_C_SetMasterImagine::Used' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterImagine, IsBppIrredeemable) == 0x0000B1, "Member 'InventoryTag_C_SetMasterImagine::IsBppIrredeemable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterImagine, K2Node_SwitchEnum_CmpSuccess) == 0x0000B2, "Member 'InventoryTag_C_SetMasterImagine::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterImagine, CallFunc_Not_PreBool_ReturnValue) == 0x0000B3, "Member 'InventoryTag_C_SetMasterImagine::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterImagine, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000B4, "Member 'InventoryTag_C_SetMasterImagine::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetMasterMountImagine
// 0x00B0 (0x00B0 - 0x0000)
struct InventoryTag_C_SetMasterMountImagine final
{
public:
	struct FSBMasterMountImagine                  MasterMountImagine;                                // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Used;                                              // 0x0070(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBppIrredeemable;                                 // 0x0071(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92E9[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidMountStackB_ReturnValue;             // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_SetMasterMountImagine) == 0x000008, "Wrong alignment on InventoryTag_C_SetMasterMountImagine");
static_assert(sizeof(InventoryTag_C_SetMasterMountImagine) == 0x0000B0, "Wrong size on InventoryTag_C_SetMasterMountImagine");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, MasterMountImagine) == 0x000000, "Member 'InventoryTag_C_SetMasterMountImagine::MasterMountImagine' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, Used) == 0x000070, "Member 'InventoryTag_C_SetMasterMountImagine::Used' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, IsBppIrredeemable) == 0x000071, "Member 'InventoryTag_C_SetMasterMountImagine::IsBppIrredeemable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, K2Node_MakeArray_Array) == 0x000078, "Member 'InventoryTag_C_SetMasterMountImagine::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, CallFunc_Array_Get_Item) == 0x000088, "Member 'InventoryTag_C_SetMasterMountImagine::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000090, "Member 'InventoryTag_C_SetMasterMountImagine::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, CallFunc_GetDisplayName_ReturnValue) == 0x000098, "Member 'InventoryTag_C_SetMasterMountImagine::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, CallFunc_Not_PreBool_ReturnValue) == 0x0000A8, "Member 'InventoryTag_C_SetMasterMountImagine::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, CallFunc_IsEmpty_ReturnValue) == 0x0000A9, "Member 'InventoryTag_C_SetMasterMountImagine::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, CallFunc_ValidMountStackB_ReturnValue) == 0x0000AA, "Member 'InventoryTag_C_SetMasterMountImagine::CallFunc_ValidMountStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterMountImagine, K2Node_SwitchEnum_CmpSuccess) == 0x0000AB, "Member 'InventoryTag_C_SetMasterMountImagine::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetMasterOrnament
// 0x0068 (0x0068 - 0x0000)
struct InventoryTag_C_SetMasterOrnament final
{
public:
	struct FSBMasterOrnament                      Master;                                            // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Used;                                              // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBppIrredeemable;                                 // 0x0061(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_SetMasterOrnament) == 0x000008, "Wrong alignment on InventoryTag_C_SetMasterOrnament");
static_assert(sizeof(InventoryTag_C_SetMasterOrnament) == 0x000068, "Wrong size on InventoryTag_C_SetMasterOrnament");
static_assert(offsetof(InventoryTag_C_SetMasterOrnament, Master) == 0x000000, "Member 'InventoryTag_C_SetMasterOrnament::Master' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterOrnament, Used) == 0x000060, "Member 'InventoryTag_C_SetMasterOrnament::Used' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterOrnament, IsBppIrredeemable) == 0x000061, "Member 'InventoryTag_C_SetMasterOrnament::IsBppIrredeemable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterOrnament, K2Node_SwitchEnum_CmpSuccess) == 0x000062, "Member 'InventoryTag_C_SetMasterOrnament::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetMasterOrnament, CallFunc_Not_PreBool_ReturnValue) == 0x000063, "Member 'InventoryTag_C_SetMasterOrnament::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetInventoryItemData
// 0x04D0 (0x04D0 - 0x0000)
struct InventoryTag_C_SetInventoryItemData final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBppIrredeemable_ReturnValue;            // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92EA[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92EB[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92EC[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x00A8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x00C0(0x0010)(ReferenceParm)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92ED[0x5];                                     // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterOrnamentDataBP_bExists;         // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92EE[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterOrnament                      CallFunc_FindMasterOrnamentDataBP_ReturnValue;     // 0x0120(0x0060)()
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92EF[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0188(0x00B0)()
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92F0[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x0240(0x0070)()
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92F1[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x02B8(0x0088)()
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92F2[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0348(0x00B0)()
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92F3[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0400(0x00D0)()
};
static_assert(alignof(InventoryTag_C_SetInventoryItemData) == 0x000008, "Wrong alignment on InventoryTag_C_SetInventoryItemData");
static_assert(sizeof(InventoryTag_C_SetInventoryItemData) == 0x0004D0, "Wrong size on InventoryTag_C_SetInventoryItemData");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, InventoryItemData) == 0x000000, "Member 'InventoryTag_C_SetInventoryItemData::InventoryItemData' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000060, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_IsBppIrredeemable_ReturnValue) == 0x000061, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_IsBppIrredeemable_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_IsUsedItem_bUse) == 0x000062, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, K2Node_SwitchEnum_CmpSuccess) == 0x000063, "Member 'InventoryTag_C_SetInventoryItemData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_IsEmpty_ReturnValue) == 0x000064, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, K2Node_MakeArray_Array) == 0x000068, "Member 'InventoryTag_C_SetInventoryItemData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_Array_Get_Item) == 0x000078, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000080, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_IsEmpty_ReturnValue_1) == 0x000088, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_GetDisplayName_ReturnValue) == 0x000090, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, Temp_bool_Variable) == 0x0000A0, "Member 'InventoryTag_C_SetInventoryItemData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, K2Node_MakeArray_Array_1) == 0x0000A8, "Member 'InventoryTag_C_SetInventoryItemData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_Array_Get_Item_1) == 0x0000B8, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, K2Node_MakeArray_Array_2) == 0x0000C0, "Member 'InventoryTag_C_SetInventoryItemData::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x0000D0, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_Array_Get_Item_2) == 0x0000D8, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_GetDisplayName_ReturnValue_1) == 0x0000E0, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x0000F0, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_GetDisplayName_ReturnValue_2) == 0x0000F8, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_IsEmpty_ReturnValue_2) == 0x000108, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000109, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_GetMasterDataManager_IsValid) == 0x00010A, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000110, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, K2Node_Select_Default) == 0x000118, "Member 'InventoryTag_C_SetInventoryItemData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_FindMasterOrnamentDataBP_bExists) == 0x000119, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_FindMasterOrnamentDataBP_bExists' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_FindMasterOrnamentDataBP_ReturnValue) == 0x000120, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_FindMasterOrnamentDataBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_FindMasterImagineData_IsExists) == 0x000180, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_FindMasterImagineData_ReturnValue) == 0x000188, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x000238, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x000240, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0002B0, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0002B8, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_GetWeaponMasterData_IsExists) == 0x000340, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000348, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_GetItemMasterData_IsExists) == 0x0003F8, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetInventoryItemData, CallFunc_GetItemMasterData_ReturnValue) == 0x000400, "Member 'InventoryTag_C_SetInventoryItemData::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetStackBMax
// 0x0028 (0x0028 - 0x0000)
struct InventoryTag_C_SetStackBMax final
{
public:
	class FString                                 StackBId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92F4[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92F5[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetStackBMax_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryTag_C_SetStackBMax) == 0x000008, "Wrong alignment on InventoryTag_C_SetStackBMax");
static_assert(sizeof(InventoryTag_C_SetStackBMax) == 0x000028, "Wrong size on InventoryTag_C_SetStackBMax");
static_assert(offsetof(InventoryTag_C_SetStackBMax, StackBId) == 0x000000, "Member 'InventoryTag_C_SetStackBMax::StackBId' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMax, CallFunc_GetMasterDataManager_IsValid) == 0x000010, "Member 'InventoryTag_C_SetStackBMax::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMax, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'InventoryTag_C_SetStackBMax::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMax, CallFunc_IsEmpty_ReturnValue) == 0x000020, "Member 'InventoryTag_C_SetStackBMax::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMax, CallFunc_BP_GetStackBMax_ReturnValue) == 0x000024, "Member 'InventoryTag_C_SetStackBMax::CallFunc_BP_GetStackBMax_ReturnValue' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetStackBMaxValue
// 0x0020 (0x0020 - 0x0000)
struct InventoryTag_C_SetStackBMaxValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92F6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(InventoryTag_C_SetStackBMaxValue) == 0x000008, "Wrong alignment on InventoryTag_C_SetStackBMaxValue");
static_assert(sizeof(InventoryTag_C_SetStackBMaxValue) == 0x000020, "Wrong size on InventoryTag_C_SetStackBMaxValue");
static_assert(offsetof(InventoryTag_C_SetStackBMaxValue, Value) == 0x000000, "Member 'InventoryTag_C_SetStackBMaxValue::Value' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMaxValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'InventoryTag_C_SetStackBMaxValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetOwnItemInfo
// 0x0468 (0x0468 - 0x0000)
struct InventoryTag_C_SetOwnItemInfo final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         ItemIndex;                                         // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsUsed;                                           // 0x011C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindMountImagineMaster_bIsValid;          // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92F7[0x2];                                     // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_FindMountImagineMaster_MountImagineMaster; // 0x0120(0x0070)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92F8[0x6];                                     // 0x0192(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0198(0x00B0)()
	bool                                          CallFunc_FindCostumeMaster_bIsValid;               // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92F9[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_FindCostumeMaster_CostumeMaster;          // 0x0250(0x0088)()
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92FA[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x02E0(0x00B0)()
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92FB[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0398(0x00D0)()
};
static_assert(alignof(InventoryTag_C_SetOwnItemInfo) == 0x000008, "Wrong alignment on InventoryTag_C_SetOwnItemInfo");
static_assert(sizeof(InventoryTag_C_SetOwnItemInfo) == 0x000468, "Wrong size on InventoryTag_C_SetOwnItemInfo");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, Info) == 0x000000, "Member 'InventoryTag_C_SetOwnItemInfo::Info' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, ItemIndex) == 0x000118, "Member 'InventoryTag_C_SetOwnItemInfo::ItemIndex' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, bIsUsed) == 0x00011C, "Member 'InventoryTag_C_SetOwnItemInfo::bIsUsed' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, CallFunc_FindMountImagineMaster_bIsValid) == 0x00011D, "Member 'InventoryTag_C_SetOwnItemInfo::CallFunc_FindMountImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, CallFunc_FindMountImagineMaster_MountImagineMaster) == 0x000120, "Member 'InventoryTag_C_SetOwnItemInfo::CallFunc_FindMountImagineMaster_MountImagineMaster' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000190, "Member 'InventoryTag_C_SetOwnItemInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, CallFunc_FindImagineMaster_bIsValid) == 0x000191, "Member 'InventoryTag_C_SetOwnItemInfo::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, CallFunc_FindImagineMaster_ImagineMaster) == 0x000198, "Member 'InventoryTag_C_SetOwnItemInfo::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, CallFunc_FindCostumeMaster_bIsValid) == 0x000248, "Member 'InventoryTag_C_SetOwnItemInfo::CallFunc_FindCostumeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, CallFunc_FindCostumeMaster_CostumeMaster) == 0x000250, "Member 'InventoryTag_C_SetOwnItemInfo::CallFunc_FindCostumeMaster_CostumeMaster' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, CallFunc_FindWeaponMaster_bIsValid) == 0x0002D8, "Member 'InventoryTag_C_SetOwnItemInfo::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, CallFunc_FindWeaponMaster_WeaponMaster) == 0x0002E0, "Member 'InventoryTag_C_SetOwnItemInfo::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, CallFunc_FindItemMaster_bIsValid) == 0x000390, "Member 'InventoryTag_C_SetOwnItemInfo::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetOwnItemInfo, CallFunc_FindItemMaster_ItemMaster) == 0x000398, "Member 'InventoryTag_C_SetOwnItemInfo::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.Set Stack BMax Visible
// 0x0002 (0x0002 - 0x0000)
struct InventoryTag_C_Set_Stack_BMax_Visible final
{
public:
	bool                                          bStackBEnable;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_Set_Stack_BMax_Visible) == 0x000001, "Wrong alignment on InventoryTag_C_Set_Stack_BMax_Visible");
static_assert(sizeof(InventoryTag_C_Set_Stack_BMax_Visible) == 0x000002, "Wrong size on InventoryTag_C_Set_Stack_BMax_Visible");
static_assert(offsetof(InventoryTag_C_Set_Stack_BMax_Visible, bStackBEnable) == 0x000000, "Member 'InventoryTag_C_Set_Stack_BMax_Visible::bStackBEnable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_Set_Stack_BMax_Visible, CallFunc_ValidStackB_ReturnValue) == 0x000001, "Member 'InventoryTag_C_Set_Stack_BMax_Visible::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.SetStackBMaxToolTipCreateInfos
// 0x0178 (0x0178 - 0x0000)
struct InventoryTag_C_SetStackBMaxToolTipCreateInfos final
{
public:
	int32                                         Param_ItemId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EToolTipType                                  Param_ToolTipType;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92FC[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0008(0x00B0)()
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92FD[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x00C0(0x00B0)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_SetStackBMaxToolTipCreateInfos) == 0x000008, "Wrong alignment on InventoryTag_C_SetStackBMaxToolTipCreateInfos");
static_assert(sizeof(InventoryTag_C_SetStackBMaxToolTipCreateInfos) == 0x000178, "Wrong size on InventoryTag_C_SetStackBMaxToolTipCreateInfos");
static_assert(offsetof(InventoryTag_C_SetStackBMaxToolTipCreateInfos, Param_ItemId) == 0x000000, "Member 'InventoryTag_C_SetStackBMaxToolTipCreateInfos::Param_ItemId' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMaxToolTipCreateInfos, Param_ToolTipType) == 0x000004, "Member 'InventoryTag_C_SetStackBMaxToolTipCreateInfos::Param_ToolTipType' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMaxToolTipCreateInfos, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'InventoryTag_C_SetStackBMaxToolTipCreateInfos::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMaxToolTipCreateInfos, CallFunc_FindWeaponMaster_bIsValid) == 0x000006, "Member 'InventoryTag_C_SetStackBMaxToolTipCreateInfos::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMaxToolTipCreateInfos, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000008, "Member 'InventoryTag_C_SetStackBMaxToolTipCreateInfos::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMaxToolTipCreateInfos, CallFunc_FindImagineMaster_bIsValid) == 0x0000B8, "Member 'InventoryTag_C_SetStackBMaxToolTipCreateInfos::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMaxToolTipCreateInfos, CallFunc_FindImagineMaster_ImagineMaster) == 0x0000C0, "Member 'InventoryTag_C_SetStackBMaxToolTipCreateInfos::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_SetStackBMaxToolTipCreateInfos, K2Node_SwitchEnum_CmpSuccess_1) == 0x000170, "Member 'InventoryTag_C_SetStackBMaxToolTipCreateInfos::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.CreateToolTipWidgetifNeeded
// 0x0010 (0x0010 - 0x0000)
struct InventoryTag_C_CreateToolTipWidgetifNeeded final
{
public:
	class UUserWidget*                            OutTooltip;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_CreateToolTipWidgetifNeeded) == 0x000008, "Wrong alignment on InventoryTag_C_CreateToolTipWidgetifNeeded");
static_assert(sizeof(InventoryTag_C_CreateToolTipWidgetifNeeded) == 0x000010, "Wrong size on InventoryTag_C_CreateToolTipWidgetifNeeded");
static_assert(offsetof(InventoryTag_C_CreateToolTipWidgetifNeeded, OutTooltip) == 0x000000, "Member 'InventoryTag_C_CreateToolTipWidgetifNeeded::OutTooltip' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_CreateToolTipWidgetifNeeded, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'InventoryTag_C_CreateToolTipWidgetifNeeded::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.GetToolTipWidget_0
// 0x0020 (0x0020 - 0x0000)
struct InventoryTag_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92FE[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_CreateTooltipWidgetIfNeeded_OutTooltip;   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on InventoryTag_C_GetToolTipWidget_0");
static_assert(sizeof(InventoryTag_C_GetToolTipWidget_0) == 0x000020, "Wrong size on InventoryTag_C_GetToolTipWidget_0");
static_assert(offsetof(InventoryTag_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'InventoryTag_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_GetToolTipWidget_0, Temp_byte_Variable) == 0x000008, "Member 'InventoryTag_C_GetToolTipWidget_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_GetToolTipWidget_0, Temp_byte_Variable_1) == 0x000009, "Member 'InventoryTag_C_GetToolTipWidget_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_GetToolTipWidget_0, Temp_bool_Variable) == 0x00000A, "Member 'InventoryTag_C_GetToolTipWidget_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_GetToolTipWidget_0, CallFunc_CreateTooltipWidgetIfNeeded_OutTooltip) == 0x000010, "Member 'InventoryTag_C_GetToolTipWidget_0::CallFunc_CreateTooltipWidgetIfNeeded_OutTooltip' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_GetToolTipWidget_0, K2Node_Select_Default) == 0x000018, "Member 'InventoryTag_C_GetToolTipWidget_0::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_GetToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'InventoryTag_C_GetToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.UpdateImagineStackBMaxToolTip
// 0x0058 (0x0058 - 0x0000)
struct InventoryTag_C_UpdateImagineStackBMaxToolTip final
{
public:
	bool                                          IsCachedToolTip_Local;                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92FF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UExpectation_ImagineStackBMax_ToolTip_C* NewLocalToolTip;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9300[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UExpectation_ImagineStackBMax_ToolTip_C* CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9301[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9302[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetCachedToolTip_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9303[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UExpectation_ImagineStackBMax_ToolTip_C* K2Node_DynamicCast_AsExpectation_Imagine_Stack_BMax_Tool_Tip; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_UpdateImagineStackBMaxToolTip) == 0x000008, "Wrong alignment on InventoryTag_C_UpdateImagineStackBMaxToolTip");
static_assert(sizeof(InventoryTag_C_UpdateImagineStackBMaxToolTip) == 0x000058, "Wrong size on InventoryTag_C_UpdateImagineStackBMaxToolTip");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, IsCachedToolTip_Local) == 0x000000, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::IsCachedToolTip_Local' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, NewLocalToolTip) == 0x000008, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::NewLocalToolTip' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, CallFunc_Create_ReturnValue) == 0x000018, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, CallFunc_MakeLiteralByte_ReturnValue) == 0x000020, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, CallFunc_GetUIManager_IsValid) == 0x000021, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, CallFunc_GetUIManager_ReturnValue) == 0x000028, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000030, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, CallFunc_GetCachedToolTip_ReturnValue) == 0x000038, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::CallFunc_GetCachedToolTip_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, K2Node_DynamicCast_AsExpectation_Imagine_Stack_BMax_Tool_Tip) == 0x000048, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::K2Node_DynamicCast_AsExpectation_Imagine_Stack_BMax_Tool_Tip' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateImagineStackBMaxToolTip, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'InventoryTag_C_UpdateImagineStackBMaxToolTip::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.UpdateWeaponStackBMaxToolTip
// 0x0050 (0x0050 - 0x0000)
struct InventoryTag_C_UpdateWeaponStackBMaxToolTip final
{
public:
	class UExpectation_WeaponStackBMax_ToolTip_C* NewLocalToolTip;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCachedToolTip_Local;                             // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9304[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9305[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UExpectation_WeaponStackBMax_ToolTip_C* CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9306[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetCachedToolTip_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9307[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UExpectation_WeaponStackBMax_ToolTip_C* K2Node_DynamicCast_AsExpectation_Weapon_Stack_BMax_Tool_Tip; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryTag_C_UpdateWeaponStackBMaxToolTip) == 0x000008, "Wrong alignment on InventoryTag_C_UpdateWeaponStackBMaxToolTip");
static_assert(sizeof(InventoryTag_C_UpdateWeaponStackBMaxToolTip) == 0x000050, "Wrong size on InventoryTag_C_UpdateWeaponStackBMaxToolTip");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, NewLocalToolTip) == 0x000000, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::NewLocalToolTip' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, IsCachedToolTip_Local) == 0x000008, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::IsCachedToolTip_Local' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, CallFunc_MakeLiteralByte_ReturnValue) == 0x000009, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00000C, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, CallFunc_Create_ReturnValue) == 0x000018, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, CallFunc_GetUIManager_IsValid) == 0x000020, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, CallFunc_GetUIManager_ReturnValue) == 0x000028, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, CallFunc_GetCachedToolTip_ReturnValue) == 0x000030, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::CallFunc_GetCachedToolTip_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, K2Node_DynamicCast_AsExpectation_Weapon_Stack_BMax_Tool_Tip) == 0x000040, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::K2Node_DynamicCast_AsExpectation_Weapon_Stack_BMax_Tool_Tip' has a wrong offset!");
static_assert(offsetof(InventoryTag_C_UpdateWeaponStackBMaxToolTip, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'InventoryTag_C_UpdateWeaponStackBMaxToolTip::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function InventoryTag.InventoryTag_C.InitOwnItemInfos
// 0x0118 (0x0118 - 0x0000)
struct InventoryTag_C_InitOwnItemInfos final
{
public:
	struct FOwnItemInfo                           NewOwnItemInfo;                                    // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(InventoryTag_C_InitOwnItemInfos) == 0x000008, "Wrong alignment on InventoryTag_C_InitOwnItemInfos");
static_assert(sizeof(InventoryTag_C_InitOwnItemInfos) == 0x000118, "Wrong size on InventoryTag_C_InitOwnItemInfos");
static_assert(offsetof(InventoryTag_C_InitOwnItemInfos, NewOwnItemInfo) == 0x000000, "Member 'InventoryTag_C_InitOwnItemInfos::NewOwnItemInfo' has a wrong offset!");

}

