#pragma once

 

// Package: CommonIconToolTipContent_Item

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetItem
// 0x0110 (0x0110 - 0x0000)
struct CommonIconToolTipContent_Item_C_SetItem final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUnidentified;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Unidentified;                                      // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D05[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        MasterData;                                        // 0x0008(0x00D0)(Edit, BlueprintVisible)
	bool                                          NewLocalVar_0;                                     // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D06[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemToolTipText_OutName;               // 0x00E0(0x0018)()
	class FText                                   CallFunc_GetItemToolTipText_OutType;               // 0x00F8(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_Item_C_SetItem) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Item_C_SetItem");
static_assert(sizeof(CommonIconToolTipContent_Item_C_SetItem) == 0x000110, "Wrong size on CommonIconToolTipContent_Item_C_SetItem");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetItem, InItemIndex) == 0x000000, "Member 'CommonIconToolTipContent_Item_C_SetItem::InItemIndex' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetItem, bUnidentified) == 0x000004, "Member 'CommonIconToolTipContent_Item_C_SetItem::bUnidentified' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetItem, Unidentified) == 0x000005, "Member 'CommonIconToolTipContent_Item_C_SetItem::Unidentified' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetItem, MasterData) == 0x000008, "Member 'CommonIconToolTipContent_Item_C_SetItem::MasterData' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetItem, NewLocalVar_0) == 0x0000D8, "Member 'CommonIconToolTipContent_Item_C_SetItem::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetItem, CallFunc_GetItemToolTipText_OutName) == 0x0000E0, "Member 'CommonIconToolTipContent_Item_C_SetItem::CallFunc_GetItemToolTipText_OutName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetItem, CallFunc_GetItemToolTipText_OutType) == 0x0000F8, "Member 'CommonIconToolTipContent_Item_C_SetItem::CallFunc_GetItemToolTipText_OutType' has a wrong offset!");

// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetImagine
// 0x0180 (0x0180 - 0x0000)
struct CommonIconToolTipContent_Item_C_SetImagine final
{
public:
	int32                                         InImagineItemId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D07[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InUniqueId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D08[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetImagineToolTipText_OutName;            // 0x0028(0x0018)()
	class FText                                   CallFunc_GetImagineToolTipText_OutType;            // 0x0040(0x0018)()
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D09[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0060(0x0118)(ConstParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x017B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_Item_C_SetImagine) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Item_C_SetImagine");
static_assert(sizeof(CommonIconToolTipContent_Item_C_SetImagine) == 0x000180, "Wrong size on CommonIconToolTipContent_Item_C_SetImagine");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, InImagineItemId) == 0x000000, "Member 'CommonIconToolTipContent_Item_C_SetImagine::InImagineItemId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, InUniqueId) == 0x000008, "Member 'CommonIconToolTipContent_Item_C_SetImagine::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, InStorageNumber) == 0x000018, "Member 'CommonIconToolTipContent_Item_C_SetImagine::InStorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, Temp_bool_Variable) == 0x00001C, "Member 'CommonIconToolTipContent_Item_C_SetImagine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, CallFunc_GetStorage_ReturnValue) == 0x000020, "Member 'CommonIconToolTipContent_Item_C_SetImagine::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, CallFunc_GetImagineToolTipText_OutName) == 0x000028, "Member 'CommonIconToolTipContent_Item_C_SetImagine::CallFunc_GetImagineToolTipText_OutName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, CallFunc_GetImagineToolTipText_OutType) == 0x000040, "Member 'CommonIconToolTipContent_Item_C_SetImagine::CallFunc_GetImagineToolTipText_OutType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000058, "Member 'CommonIconToolTipContent_Item_C_SetImagine::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000060, "Member 'CommonIconToolTipContent_Item_C_SetImagine::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, CallFunc_MakeLiteralByte_ReturnValue) == 0x000178, "Member 'CommonIconToolTipContent_Item_C_SetImagine::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000179, "Member 'CommonIconToolTipContent_Item_C_SetImagine::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x00017A, "Member 'CommonIconToolTipContent_Item_C_SetImagine::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetImagine, K2Node_Select_Default) == 0x00017B, "Member 'CommonIconToolTipContent_Item_C_SetImagine::K2Node_Select_Default' has a wrong offset!");

// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetMountImagine
// 0x0180 (0x0180 - 0x0000)
struct CommonIconToolTipContent_Item_C_SetMountImagine final
{
public:
	int32                                         InImagineItemId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D0A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InUniqueId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D0B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetMountImagineToolTipText_OutName;       // 0x0028(0x0018)()
	class FText                                   CallFunc_GetMountImagineToolTipText_OutType;       // 0x0040(0x0018)()
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D0C[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0060(0x0118)(ConstParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x017B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_Item_C_SetMountImagine) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Item_C_SetMountImagine");
static_assert(sizeof(CommonIconToolTipContent_Item_C_SetMountImagine) == 0x000180, "Wrong size on CommonIconToolTipContent_Item_C_SetMountImagine");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, InImagineItemId) == 0x000000, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::InImagineItemId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, InUniqueId) == 0x000008, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, InStorageNumber) == 0x000018, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::InStorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, Temp_bool_Variable) == 0x00001C, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, CallFunc_GetStorage_ReturnValue) == 0x000020, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, CallFunc_GetMountImagineToolTipText_OutName) == 0x000028, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::CallFunc_GetMountImagineToolTipText_OutName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, CallFunc_GetMountImagineToolTipText_OutType) == 0x000040, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::CallFunc_GetMountImagineToolTipText_OutType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000058, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000060, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, CallFunc_MakeLiteralByte_ReturnValue) == 0x000178, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000179, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00017A, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetMountImagine, K2Node_Select_Default) == 0x00017B, "Member 'CommonIconToolTipContent_Item_C_SetMountImagine::K2Node_Select_Default' has a wrong offset!");

// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetWeapon
// 0x0180 (0x0180 - 0x0000)
struct CommonIconToolTipContent_Item_C_SetWeapon final
{
public:
	int32                                         WeaponID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D0D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InUniqueId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D0E[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetWeaponToolTipText_OutName;             // 0x0028(0x0018)()
	class FText                                   CallFunc_GetWeaponToolTipText_OutType;             // 0x0040(0x0018)()
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D0F[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0060(0x0118)(ConstParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x017B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_Item_C_SetWeapon) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Item_C_SetWeapon");
static_assert(sizeof(CommonIconToolTipContent_Item_C_SetWeapon) == 0x000180, "Wrong size on CommonIconToolTipContent_Item_C_SetWeapon");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, WeaponID) == 0x000000, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::WeaponID' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, InUniqueId) == 0x000008, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::InUniqueId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, InStorageNumber) == 0x000018, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::InStorageNumber' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, Temp_bool_Variable) == 0x00001C, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, CallFunc_GetStorage_ReturnValue) == 0x000020, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, CallFunc_GetWeaponToolTipText_OutName) == 0x000028, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::CallFunc_GetWeaponToolTipText_OutName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, CallFunc_GetWeaponToolTipText_OutType) == 0x000040, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::CallFunc_GetWeaponToolTipText_OutType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000058, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000060, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000178, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000179, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00017A, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetWeapon, K2Node_Select_Default) == 0x00017B, "Member 'CommonIconToolTipContent_Item_C_SetWeapon::K2Node_Select_Default' has a wrong offset!");

// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetCostume
// 0x0038 (0x0038 - 0x0000)
struct CommonIconToolTipContent_Item_C_SetCostume final
{
public:
	int32                                         CostumeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D10[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetCostumeToolTipText_OutName;            // 0x0008(0x0018)()
	class FText                                   CallFunc_GetCostumeToolTipText_OutType;            // 0x0020(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_Item_C_SetCostume) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Item_C_SetCostume");
static_assert(sizeof(CommonIconToolTipContent_Item_C_SetCostume) == 0x000038, "Wrong size on CommonIconToolTipContent_Item_C_SetCostume");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetCostume, CostumeId) == 0x000000, "Member 'CommonIconToolTipContent_Item_C_SetCostume::CostumeId' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetCostume, CallFunc_GetCostumeToolTipText_OutName) == 0x000008, "Member 'CommonIconToolTipContent_Item_C_SetCostume::CallFunc_GetCostumeToolTipText_OutName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetCostume, CallFunc_GetCostumeToolTipText_OutType) == 0x000020, "Member 'CommonIconToolTipContent_Item_C_SetCostume::CallFunc_GetCostumeToolTipText_OutType' has a wrong offset!");

// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetNameAndType
// 0x0080 (0x0080 - 0x0000)
struct CommonIconToolTipContent_Item_C_SetNameAndType final
{
public:
	ESBRewardItemType                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D11[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetRewardItemNameAndType2_OutName;        // 0x0010(0x0018)()
	class FText                                   CallFunc_GetRewardItemNameAndType2_OutType;        // 0x0028(0x0018)()
	bool                                          CallFunc_GetRewardItemNameAndType2_OutNoName;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D12[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName;    // 0x0048(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType;    // 0x0060(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName;  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContent_Item_C_SetNameAndType) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Item_C_SetNameAndType");
static_assert(sizeof(CommonIconToolTipContent_Item_C_SetNameAndType) == 0x000080, "Wrong size on CommonIconToolTipContent_Item_C_SetNameAndType");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, Type) == 0x000000, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::Type' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, ID) == 0x000004, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::ID' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, Amount) == 0x000008, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::Amount' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, AmountMin) == 0x00000C, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::AmountMin' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, CallFunc_GetRewardItemNameAndType2_OutName) == 0x000010, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::CallFunc_GetRewardItemNameAndType2_OutName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, CallFunc_GetRewardItemNameAndType2_OutType) == 0x000028, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::CallFunc_GetRewardItemNameAndType2_OutType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, CallFunc_GetRewardItemNameAndType2_OutNoName) == 0x000040, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::CallFunc_GetRewardItemNameAndType2_OutNoName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000041, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, CallFunc_Get_Reward_Item_Name_and_Type_OutName) == 0x000048, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::CallFunc_Get_Reward_Item_Name_and_Type_OutName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, CallFunc_Get_Reward_Item_Name_and_Type_OutType) == 0x000060, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::CallFunc_Get_Reward_Item_Name_and_Type_OutType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetNameAndType, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName) == 0x000078, "Member 'CommonIconToolTipContent_Item_C_SetNameAndType::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName' has a wrong offset!");

// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetVisibleStackB
// 0x0005 (0x0005 - 0x0000)
struct CommonIconToolTipContent_Item_C_SetVisibleStackB final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_Item_C_SetVisibleStackB) == 0x000001, "Wrong alignment on CommonIconToolTipContent_Item_C_SetVisibleStackB");
static_assert(sizeof(CommonIconToolTipContent_Item_C_SetVisibleStackB) == 0x000005, "Wrong size on CommonIconToolTipContent_Item_C_SetVisibleStackB");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetVisibleStackB, Visible) == 0x000000, "Member 'CommonIconToolTipContent_Item_C_SetVisibleStackB::Visible' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetVisibleStackB, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'CommonIconToolTipContent_Item_C_SetVisibleStackB::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetVisibleStackB, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'CommonIconToolTipContent_Item_C_SetVisibleStackB::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetVisibleStackB, Temp_bool_Variable) == 0x000003, "Member 'CommonIconToolTipContent_Item_C_SetVisibleStackB::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Item_C_SetVisibleStackB, K2Node_Select_Default) == 0x000004, "Member 'CommonIconToolTipContent_Item_C_SetVisibleStackB::K2Node_Select_Default' has a wrong offset!");

}

