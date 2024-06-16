#pragma once

 

// Package: CommonEquipmentBasicStatusParts

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InventoryData_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InventoryItemData_structs.hpp"


namespace SDK::Params
{

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByOwnItemInfo
// 0x0240 (0x0240 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          InIsForStorage;                                    // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsForStorage;                                 // 0x0119(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8117[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0120(0x0118)(Edit, BlueprintVisible)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo) == 0x000240, "Wrong size on CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo, InOwnItemInfo) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo, InIsForStorage) == 0x000118, "Member 'CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo::InIsForStorage' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo, LocalIsForStorage) == 0x000119, "Member 'CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo::LocalIsForStorage' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo, LocalOwnItemInfo) == 0x000120, "Member 'CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000238, "Member 'CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByOwnItemInfo
// 0x08A0 (0x08A0 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          InIsForStorage;                                    // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsStatusValueStackB;                          // 0x0119(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8118[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   LocaStackBWeaponParam;                             // 0x0120(0x0030)(Edit, BlueprintVisible)
	bool                                          LocalIsStackB;                                     // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8119[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalStackBNum;                                    // 0x0154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           LocalStackBEnableType;                             // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsLevelSync;                                  // 0x0159(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsWeaponInStorage;                            // 0x015A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_811A[0x5];                                     // 0x015B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LocalSPEffectValue;                                // 0x0160(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalSPEffectName;                                 // 0x0178(0x0018)(Edit, BlueprintVisible)
	class FString                                 LocalWeaponUniqueId;                               // 0x0190(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       LocalStatusItem;                                   // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             LocalStatusValueTxt;                               // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalWeaponStatusValue;                            // 0x01B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponStatus                               LocalWeaponStatus;                                 // 0x01B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_811B[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       LocalWeaponManager;                                // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsTermLimited;                                // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBAttribute                                  LocalWeaponAttribute;                              // 0x01C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_811C[0x6];                                     // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    LocalWeaponMaster;                                 // 0x01C8(0x00B0)(Edit, BlueprintVisible)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0278(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSBWeaponItemData                      LocalWeaponData;                                   // 0x02D8(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x032D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x032E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x032F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_811D[0x2];                                     // 0x033A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_811E[0x6];                                     // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBWeaponParamByWeaponId_IsValid;   // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_811F[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBWeaponParam                   CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue; // 0x0358(0x0030)(ConstParm)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStackBEnableColor_OutIsStackBEnableFull; // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x038A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x038B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType;  // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0391(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevelSyncWeaponStorageItem_ReturnValue; // 0x0392(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevelSyncWeapon_ReturnValue;     // 0x0393(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0394(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0395(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0396(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0397(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x039A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x039B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8120[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable;                              // 0x03A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8121[0x5];                                     // 0x03AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8122[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x03C8(0x0118)(ConstParm)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8123[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x04E8(0x0118)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0601(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8124[0x6];                                     // 0x0602(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0608(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0620(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_1;            // 0x0621(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8125[0x6];                                     // 0x0622(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_1;                            // 0x0628(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_2;                            // 0x0630(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_3;                            // 0x0638(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_4;                            // 0x0640(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0648(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponStatus                               Temp_byte_Variable_2;                              // 0x064C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x064D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8126[0x2];                                     // 0x064E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0650(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponStatus                               Temp_byte_Variable_3;                              // 0x0654(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0655(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8127[0x2];                                     // 0x0656(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0658(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x065C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8128[0x3];                                     // 0x065D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0660(0x0018)()
	class FText                                   CallFunc_Add_Plus_Text_Return;                     // 0x0678(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8129[0x7];                                     // 0x0691(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0698(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x06A8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x06C0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x06D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x06DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x06DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_812A[0x4];                                     // 0x06DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_2;                           // 0x06E0(0x0018)()
	class UGenericStatusItemForBattleSet_C*       K2Node_Select_Default_3;                           // 0x06F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0701(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync;       // 0x0702(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0703(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0704(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0705(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0706(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0707(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_2;            // 0x0708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_812B[0x7];                                     // 0x0709(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0710(0x0018)()
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0728(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x072C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_812C[0x3];                                     // 0x072D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0730(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue; // 0x0738(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x073C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_812D[0x3];                                     // 0x073D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0740(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x0748(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x0749(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x074A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x074B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x074C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x074D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_812E[0x2];                                     // 0x074E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0750(0x00B0)()
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0800(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x0898(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo) == 0x0008A0, "Wrong size on CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, InOwnItemInfo) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, InIsForStorage) == 0x000118, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::InIsForStorage' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalIsStatusValueStackB) == 0x000119, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalIsStatusValueStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocaStackBWeaponParam) == 0x000120, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocaStackBWeaponParam' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalIsStackB) == 0x000150, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalIsStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalStackBNum) == 0x000154, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalStackBEnableType) == 0x000158, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalStackBEnableType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalIsLevelSync) == 0x000159, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalIsWeaponInStorage) == 0x00015A, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalIsWeaponInStorage' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalSPEffectValue) == 0x000160, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalSPEffectValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalSPEffectName) == 0x000178, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalSPEffectName' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalWeaponUniqueId) == 0x000190, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalStatusItem) == 0x0001A0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalStatusItem' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalStatusValueTxt) == 0x0001A8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalStatusValueTxt' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalWeaponStatusValue) == 0x0001B0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalWeaponStatusValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalWeaponStatus) == 0x0001B4, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalWeaponStatus' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalWeaponManager) == 0x0001B8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalWeaponManager' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalIsTermLimited) == 0x0001C0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalIsTermLimited' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalWeaponAttribute) == 0x0001C1, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalWeaponAttribute' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalWeaponMaster) == 0x0001C8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalWeaponMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalInventoryItemData) == 0x000278, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, LocalWeaponData) == 0x0002D8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::LocalWeaponData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_int_Variable) == 0x000328, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Conv_IntToByte_ReturnValue) == 0x00032C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetValidValue_ReturnValue) == 0x00032D, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00032E, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, K2Node_SwitchEnum_CmpSuccess) == 0x00032F, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_int_Variable_1) == 0x000330, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000334, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000338, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000339, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00033C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_bool_Variable) == 0x000340, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetMasterDataManager_IsValid) == 0x000341, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000348, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetStackBWeaponParamByWeaponId_IsValid) == 0x000350, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetStackBWeaponParamByWeaponId_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue) == 0x000358, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetStackBWeaponParamByWeaponId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000388, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_SetStackBEnableColor_OutIsStackBEnableFull) == 0x000389, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_SetStackBEnableColor_OutIsStackBEnableFull' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_BooleanAND_ReturnValue) == 0x00038A, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_BooleanAND_ReturnValue_1) == 0x00038B, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetStackBNum_ReturnValue) == 0x00038C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetStackBEnableType_OutStackBEnableType) == 0x000390, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetStackBEnableType_OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x000391, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_CheckItemLevelSyncWeaponStorageItem_ReturnValue) == 0x000392, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_CheckItemLevelSyncWeaponStorageItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_CheckItemLevelSyncWeapon_ReturnValue) == 0x000393, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_CheckItemLevelSyncWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000394, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Not_PreBool_ReturnValue_1) == 0x000395, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, K2Node_Select_Default) == 0x000396, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000397, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_1) == 0x000398, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_byte_Variable) == 0x000399, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00039A, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_byte_Variable_1) == 0x00039B, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_bool_Variable_1) == 0x00039C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_object_Variable) == 0x0003A0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x0003A8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0003A9, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_2) == 0x0003AA, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetCharacterStorage_ReturnValue) == 0x0003B0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetEquipmentBag_ReturnValue) == 0x0003B8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0003C0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0003C8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x0004E0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x0004E8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Not_PreBool_ReturnValue_2) == 0x000600, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_MakeLiteralBool_ReturnValue) == 0x000601, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Conv_IntToText_ReturnValue) == 0x000608, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000620, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_MakeLiteralBool_ReturnValue_1) == 0x000621, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_MakeLiteralBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_object_Variable_1) == 0x000628, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_object_Variable_2) == 0x000630, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_object_Variable_3) == 0x000638, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_object_Variable_4) == 0x000640, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_int_Variable_2) == 0x000648, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_byte_Variable_2) == 0x00064C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_3) == 0x00064D, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_int_Variable_3) == 0x000650, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_byte_Variable_3) == 0x000654, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_4) == 0x000655, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, K2Node_Select_Default_1) == 0x000658, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00065C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000660, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Add_Plus_Text_Return) == 0x000678, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Add_Plus_Text_Return' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_5) == 0x000690, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_SetSpecialEffectText_SpecialName) == 0x000698, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_SetSpecialEffectText_SpecialValue) == 0x0006A8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x0006C0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_6) == 0x0006D8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_7) == 0x0006D9, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, Temp_bool_Variable_2) == 0x0006DA, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_8) == 0x0006DB, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, K2Node_Select_Default_2) == 0x0006E0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, K2Node_Select_Default_3) == 0x0006F8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_9) == 0x000700, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, K2Node_SwitchEnum_CmpSuccess_1) == 0x000701, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_ChangeWeaponLevelSync_bIsLevelSync) == 0x000702, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_ChangeWeaponLevelSync_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_10) == 0x000703, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, K2Node_Select_Default_4) == 0x000704, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_11) == 0x000705, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_12) == 0x000706, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_SetDateTime_ReturnValue) == 0x000707, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_MakeLiteralBool_ReturnValue_2) == 0x000708, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_MakeLiteralBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000710, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_MakeLiteralInt_ReturnValue) == 0x000728, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_Less_IntInt_ReturnValue) == 0x00072C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetPlayerController_ReturnValue) == 0x000730, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue) == 0x000738, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetWeaponManager_IsValid) == 0x00073C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_GetWeaponManager_ReturnValue) == 0x000740, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_13) == 0x000748, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_14) == 0x000749, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_15) == 0x00074A, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsUsedItem_bUse) == 0x00074B, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_16) == 0x00074C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_FindWeaponMaster_bIsValid) == 0x00074D, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000750, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_CreateInventoryData_InventoryData) == 0x000800, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo, CallFunc_CreateInventoryData_IsSuccess) == 0x000898, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByOwnItemInfo
// 0x09C8 (0x09C8 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          InIsForStorage;                                    // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsStatusValueStackB;                          // 0x0119(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsIntStackB;                                  // 0x011A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsMndStackB;                                  // 0x011B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsDexStackB;                                  // 0x011C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsVitStackB;                                  // 0x011D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsStrStackB;                                  // 0x011E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsDefenseStackB;                              // 0x011F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsAttackStackB;                               // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_812F[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBImagineParam                  LocalStackBRawParam;                               // 0x0128(0x0060)(Edit, BlueprintVisible)
	struct FImagineParameter                      LocalImagineParam;                                 // 0x0188(0x006C)(Edit, BlueprintVisible, NoDestructor)
	bool                                          LocalIsStackB;                                     // 0x01F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8130[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalStackBNum;                                    // 0x01F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBEnableType                           LocalStackBEnableType;                             // 0x01FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsLevelSync;                                  // 0x01FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsImagineInStorage;                           // 0x01FE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8131[0x1];                                     // 0x01FF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalImagineUniqueId;                              // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   LocalAbilityName;                                  // 0x0210(0x0018)(Edit, BlueprintVisible)
	int32                                         LocalAbilityEffectId;                              // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8132[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             LocalStatusValueTxt;                               // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       LocalStatusItem;                                   // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LocalStatusValueText;                              // 0x0240(0x0018)(Edit, BlueprintVisible)
	bool                                          LocalIsTermLimited;                                // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8133[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       LocalImagineMaster;                                // 0x0260(0x00B0)(Edit, BlueprintVisible)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0310(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSBCharacterImagineData                LocalImagineData;                                  // 0x0370(0x0018)(Edit, BlueprintVisible, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8134[0x6];                                     // 0x038A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBImagineParamByImagineId_IsValid; // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8135[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBImagineParam                  CallFunc_GetStackBImagineParamByImagineId_ReturnValue; // 0x03A0(0x0060)(ConstParm)
	bool                                          Temp_bool_Variable;                                // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStackBEnableColor_OutIsStackBEnableFull; // 0x0402(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0403(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8136[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      CallFunc_CalculatedStackBImagineParamsByEnableType_ReturnValue; // 0x040C(0x006C)(NoDestructor)
	ESBStackBEnableType                           CallFunc_GetStackBEnableType_OutStackBEnableType;  // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0479(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8137[0x2];                                     // 0x047A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetImagineLevelSyncLevel_OutImagineLevel; // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckItemLevelSyncImagineStorageItem_ReturnValue; // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0485(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevelSyncImagine_ReturnValue;    // 0x0486(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0487(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0488(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8138[0x7];                                     // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x04A0(0x0118)(ConstParm)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x05B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8139[0x7];                                     // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x05C0(0x0118)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x06D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x06DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x06DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x06DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_813A[0x3];                                     // 0x06DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x06E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x06E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_1;            // 0x06E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_813B[0x2];                                     // 0x06E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x06E8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0700(0x0018)()
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_2;            // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_3;            // 0x0719(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_813C[0x6];                                     // 0x071A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0720(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0738(0x0018)()
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_4;            // 0x0750(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_813D[0x7];                                     // 0x0751(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0758(0x0018)()
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0770(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_813E[0x7];                                     // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0778(0x00B0)()
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0828(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x08C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x08C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x08C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x08C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x08C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x08C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x08C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x08C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x08C8(0x0018)()
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x08E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_813F[0x7];                                     // 0x08E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x08E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      CallFunc_CalcImagineParam_ReturnValue;             // 0x08F0(0x006C)(NoDestructor)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x095C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8140[0x3];                                     // 0x095D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x0960(0x0024)(NoDestructor)
	uint8                                         Pad_8141[0x4];                                     // 0x0984(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0988(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0998(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x09B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x09B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x09B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x09B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x09B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x09B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x09B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x09B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeImagineLevelSync_bIsLevelSync;      // 0x09B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x09B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x09BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x09BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x09BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x09BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x09BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x09BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x09C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x09C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_4;            // 0x09C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_5;            // 0x09C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_6;            // 0x09C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x09C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x09C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x09C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo) == 0x0009C8, "Wrong size on CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, InOwnItemInfo) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, InIsForStorage) == 0x000118, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::InIsForStorage' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsStatusValueStackB) == 0x000119, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsStatusValueStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsIntStackB) == 0x00011A, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsIntStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsMndStackB) == 0x00011B, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsMndStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsDexStackB) == 0x00011C, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsDexStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsVitStackB) == 0x00011D, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsVitStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsStrStackB) == 0x00011E, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsStrStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsDefenseStackB) == 0x00011F, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsDefenseStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsAttackStackB) == 0x000120, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsAttackStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalStackBRawParam) == 0x000128, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalStackBRawParam' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalImagineParam) == 0x000188, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalImagineParam' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsStackB) == 0x0001F4, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsStackB' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalStackBNum) == 0x0001F8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalStackBEnableType) == 0x0001FC, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalStackBEnableType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsLevelSync) == 0x0001FD, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsImagineInStorage) == 0x0001FE, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsImagineInStorage' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalImagineUniqueId) == 0x000200, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalAbilityName) == 0x000210, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalAbilityName' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalAbilityEffectId) == 0x000228, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalAbilityEffectId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalStatusValueTxt) == 0x000230, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalStatusValueTxt' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalStatusItem) == 0x000238, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalStatusItem' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalStatusValueText) == 0x000240, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalStatusValueText' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalIsTermLimited) == 0x000258, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalIsTermLimited' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalImagineMaster) == 0x000260, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalImagineMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalInventoryItemData) == 0x000310, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, LocalImagineData) == 0x000370, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::LocalImagineData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000388, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetMasterDataManager_IsValid) == 0x000389, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000390, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetStackBImagineParamByImagineId_IsValid) == 0x000398, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetStackBImagineParamByImagineId_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetStackBImagineParamByImagineId_ReturnValue) == 0x0003A0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetStackBImagineParamByImagineId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, Temp_bool_Variable) == 0x000400, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000401, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_SetStackBEnableColor_OutIsStackBEnableFull) == 0x000402, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_SetStackBEnableColor_OutIsStackBEnableFull' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_BooleanAND_ReturnValue) == 0x000403, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_BooleanAND_ReturnValue_1) == 0x000404, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetStackBNum_ReturnValue) == 0x000408, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_CalculatedStackBImagineParamsByEnableType_ReturnValue) == 0x00040C, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_CalculatedStackBImagineParamsByEnableType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetStackBEnableType_OutStackBEnableType) == 0x000478, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetStackBEnableType_OutStackBEnableType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x000479, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetImagineLevelSyncLevel_OutImagineLevel) == 0x00047C, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetImagineLevelSyncLevel_OutImagineLevel' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, Temp_int_Variable) == 0x000480, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_CheckItemLevelSyncImagineStorageItem_ReturnValue) == 0x000484, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_CheckItemLevelSyncImagineStorageItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000485, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_CheckItemLevelSyncImagine_ReturnValue) == 0x000486, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_CheckItemLevelSyncImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Not_PreBool_ReturnValue_1) == 0x000487, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetCharacterStorage_ReturnValue) == 0x000488, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetEquipmentBag_ReturnValue) == 0x000490, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000498, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0004A0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x0005B8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x0005C0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Not_PreBool_ReturnValue_2) == 0x0006D8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_BooleanAND_ReturnValue_2) == 0x0006D9, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_BooleanAND_ReturnValue_3) == 0x0006DA, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Not_PreBool_ReturnValue_3) == 0x0006DB, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetPlayerClassType_ClassType) == 0x0006DC, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, K2Node_Select_Default) == 0x0006E0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_MakeLiteralBool_ReturnValue) == 0x0006E4, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_MakeLiteralBool_ReturnValue_1) == 0x0006E5, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_MakeLiteralBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Conv_IntToText_ReturnValue) == 0x0006E8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000700, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_MakeLiteralBool_ReturnValue_2) == 0x000718, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_MakeLiteralBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_MakeLiteralBool_ReturnValue_3) == 0x000719, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_MakeLiteralBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000720, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000738, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_MakeLiteralBool_ReturnValue_4) == 0x000750, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_MakeLiteralBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000758, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_FindImagineMaster_bIsValid) == 0x000770, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_FindImagineMaster_ImagineMaster) == 0x000778, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_CreateInventoryData_InventoryData) == 0x000828, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_CreateInventoryData_IsSuccess) == 0x0008C0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, Temp_bool_Variable_1) == 0x0008C1, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, K2Node_Select_Default_1) == 0x0008C2, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_1) == 0x0008C3, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_2) == 0x0008C4, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_3) == 0x0008C5, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_SetDateTime_ReturnValue) == 0x0008C6, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, Temp_byte_Variable) == 0x0008C7, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Conv_IntToText_ReturnValue_5) == 0x0008C8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetNetworkDataCache_IsValid) == 0x0008E0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0008E8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_CalcImagineParam_ReturnValue) == 0x0008F0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_CalcImagineParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x00095C, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x000960, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000988, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000998, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_4) == 0x0009B0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_5) == 0x0009B1, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_6) == 0x0009B2, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_7) == 0x0009B3, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_8) == 0x0009B4, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_9) == 0x0009B5, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, Temp_byte_Variable_1) == 0x0009B6, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_10) == 0x0009B7, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_ChangeImagineLevelSync_bIsLevelSync) == 0x0009B8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_ChangeImagineLevelSync_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x0009B9, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_11) == 0x0009BA, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_12) == 0x0009BB, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_13) == 0x0009BC, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0009BD, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsUsedItem_bUse) == 0x0009BE, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0009BF, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0009C0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x0009C1, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_NotEqual_IntInt_ReturnValue_4) == 0x0009C2, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_NotEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_NotEqual_IntInt_ReturnValue_5) == 0x0009C3, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_NotEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_NotEqual_IntInt_ReturnValue_6) == 0x0009C4, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_NotEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, CallFunc_IsValid_ReturnValue_14) == 0x0009C5, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, Temp_bool_Variable_2) == 0x0009C6, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo, K2Node_Select_Default_2) == 0x0009C7, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo::K2Node_Select_Default_2' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByMasterData
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetupByMasterData final
{
public:
	int32                                         InEquipmentId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     InEquipmentItemType;                               // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInitTagsByMaster;                                 // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetupByMasterData) == 0x000004, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetupByMasterData");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetupByMasterData) == 0x000008, "Wrong size on CommonEquipmentBasicStatusParts_C_SetupByMasterData");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByMasterData, InEquipmentId) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetupByMasterData::InEquipmentId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByMasterData, InEquipmentItemType) == 0x000004, "Member 'CommonEquipmentBasicStatusParts_C_SetupByMasterData::InEquipmentItemType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByMasterData, bInitTagsByMaster) == 0x000005, "Member 'CommonEquipmentBasicStatusParts_C_SetupByMasterData::bInitTagsByMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByMasterData, K2Node_SwitchEnum_CmpSuccess) == 0x000006, "Member 'CommonEquipmentBasicStatusParts_C_SetupByMasterData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByMasterData
// 0x02E8 (0x02E8 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInitTagsByMaster;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8142[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             LocalStatusValueTxt;                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       LocalStatusItem;                                   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalWeaponStatusValue;                            // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8143[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LocalSPEffectValue;                                // 0x0020(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalSPEffectName;                                 // 0x0038(0x0018)(Edit, BlueprintVisible)
	ESBWeaponStatus                               LocalWeaponStatus;                                 // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8144[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       LocalWeaponManager;                                // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAttribute                                  LocalWeaponAttribute;                              // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8145[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    LocalWeaponMasterData;                             // 0x0068(0x00B0)(Edit, BlueprintVisible)
	int32                                         LocalWeaponId;                                     // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8146[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x012E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x012F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponStatus                               Temp_byte_Variable;                                // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidLimitedRecepi_ReturnValue;           // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0137(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8147[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTimeAndTemplateType_ReturnValue;   // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8148[0x6];                                     // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable;                              // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_1;                            // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_2;                            // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8149[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0170(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_814A[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Add_Plus_Text_Return;                     // 0x0190(0x0018)()
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_1;            // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_814B[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x01B0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_814C[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x01D0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_2;            // 0x01EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue; // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_814D[0x3];                                     // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_814E[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_3;                            // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0210(0x0018)()
	class UGenericStatusItemForBattleSet_C*       K2Node_Select_Default_1;                           // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0232(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_814F[0x5];                                     // 0x0233(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0238(0x00B0)()
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData) == 0x0002E8, "Wrong size on CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, InWeaponID) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::InWeaponID' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, bInitTagsByMaster) == 0x000004, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::bInitTagsByMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, LocalStatusValueTxt) == 0x000008, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::LocalStatusValueTxt' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, LocalStatusItem) == 0x000010, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::LocalStatusItem' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, LocalWeaponStatusValue) == 0x000018, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::LocalWeaponStatusValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, LocalSPEffectValue) == 0x000020, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::LocalSPEffectValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, LocalSPEffectName) == 0x000038, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::LocalSPEffectName' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, LocalWeaponStatus) == 0x000050, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::LocalWeaponStatus' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, LocalWeaponManager) == 0x000058, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::LocalWeaponManager' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, LocalWeaponAttribute) == 0x000060, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::LocalWeaponAttribute' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, LocalWeaponMasterData) == 0x000068, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::LocalWeaponMasterData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, LocalWeaponId) == 0x000118, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::LocalWeaponId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, Temp_int_Variable) == 0x00011C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, Temp_int_Variable_1) == 0x000120, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_Conv_IntToByte_ReturnValue) == 0x000124, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_Add_IntInt_ReturnValue) == 0x000128, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_GetValidValue_ReturnValue) == 0x00012C, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00012D, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00012E, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, K2Node_SwitchEnum_CmpSuccess) == 0x00012F, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000130, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, Temp_byte_Variable) == 0x000134, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_ValidLimitedRecepi_ReturnValue) == 0x000135, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_ValidLimitedRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, Temp_bool_Variable) == 0x000136, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_IsEmpty_ReturnValue) == 0x000137, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_IsEventTermActive_ReturnValue) == 0x000138, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000140, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000148, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_SetDateTimeAndTemplateType_ReturnValue) == 0x000149, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_SetDateTimeAndTemplateType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, Temp_object_Variable) == 0x000150, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, Temp_object_Variable_1) == 0x000158, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, Temp_object_Variable_2) == 0x000160, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_MakeLiteralBool_ReturnValue) == 0x000168, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_Conv_IntToText_ReturnValue) == 0x000170, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_Greater_IntInt_ReturnValue) == 0x000188, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_Add_Plus_Text_Return) == 0x000190, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_Add_Plus_Text_Return' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_MakeLiteralBool_ReturnValue_1) == 0x0001A8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_MakeLiteralBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, K2Node_Select_Default) == 0x0001B0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_IsValid_ReturnValue) == 0x0001C8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_IsValid_ReturnValue_1) == 0x0001C9, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0001D0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_IsValid_ReturnValue_2) == 0x0001E8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_IsValid_ReturnValue_3) == 0x0001E9, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, K2Node_SwitchEnum_CmpSuccess_1) == 0x0001EA, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_MakeLiteralBool_ReturnValue_2) == 0x0001EB, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_MakeLiteralBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue) == 0x0001EC, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_MakeLiteralInt_ReturnValue) == 0x0001F0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_GetWeaponManager_IsValid) == 0x0001F4, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_GetWeaponManager_ReturnValue) == 0x0001F8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_Less_IntInt_ReturnValue) == 0x000200, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, Temp_object_Variable_3) == 0x000208, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000210, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, K2Node_Select_Default_1) == 0x000228, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_IsValid_ReturnValue_4) == 0x000230, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_IsValid_ReturnValue_5) == 0x000231, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_FindWeaponMaster_bIsValid) == 0x000232, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000238, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByMasterData
// 0x03A0 (0x03A0 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData final
{
public:
	int32                                         InImagineId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInitTagsByMaster;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8150[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImaginePerkTable                LocalImaginePerks;                                 // 0x0008(0x0048)(Edit, BlueprintVisible)
	struct FSBMasterImagine                       LocalImagineMaster;                                // 0x0050(0x00B0)(Edit, BlueprintVisible)
	struct FImagineParameter                      LocalImagineParam;                                 // 0x0100(0x006C)(Edit, BlueprintVisible, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8151[0x2];                                     // 0x016E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0170(0x00B0)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0230(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8152[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetAbilityEffectMasterData_IsExists;   // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8153[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_BP_GetAbilityEffectMasterData_ReturnValue; // 0x0270(0x0024)(NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8154[0x3];                                     // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8155[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02C0(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8156[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasterImaginePerkTable                CallFunc_FindMasterImaginePerk_ReturnValue;        // 0x02E8(0x0048)()
	struct FImagineParameter                      CallFunc_FindMasterImagineParameter_ReturnValue;   // 0x0330(0x006C)(NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData) == 0x0003A0, "Wrong size on CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, InImagineId) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::InImagineId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, bInitTagsByMaster) == 0x000004, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::bInitTagsByMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, LocalImaginePerks) == 0x000008, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::LocalImaginePerks' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, LocalImagineMaster) == 0x000050, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::LocalImagineMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, LocalImagineParam) == 0x000100, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::LocalImagineParam' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, Temp_bool_Variable) == 0x00016C, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_FindImagineMaster_bIsValid) == 0x00016D, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_FindImagineMaster_ImagineMaster) == 0x000170, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000220, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_Conv_StringToText_ReturnValue) == 0x000230, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_GetMasterDataManager_IsValid) == 0x000248, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000250, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000258, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_Array_Length_ReturnValue) == 0x000268, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_BP_GetAbilityEffectMasterData_IsExists) == 0x00026C, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_BP_GetAbilityEffectMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_BP_GetAbilityEffectMasterData_ReturnValue) == 0x000270, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_BP_GetAbilityEffectMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000294, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000298, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_Greater_IntInt_ReturnValue) == 0x0002A8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, K2Node_Select_Default) == 0x0002B0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002C0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_GetMasterDataManager_IsValid_1) == 0x0002D8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x0002E0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_FindMasterImaginePerk_ReturnValue) == 0x0002E8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_FindMasterImaginePerk_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData, CallFunc_FindMasterImagineParameter_ReturnValue) == 0x000330, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData::CallFunc_FindMasterImagineParameter_ReturnValue' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.AdjustToWeaponStatusMode
// 0x0007 (0x0007 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode) == 0x000001, "Wrong alignment on CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode) == 0x000007, "Wrong size on CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode, CallFunc_IsValid_ReturnValue_3) == 0x000003, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode, CallFunc_IsValid_ReturnValue_4) == 0x000004, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode, CallFunc_IsValid_ReturnValue_5) == 0x000005, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode, CallFunc_IsValid_ReturnValue_6) == 0x000006, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.AdjustToImagineStatusMode
// 0x0007 (0x0007 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode) == 0x000001, "Wrong alignment on CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode) == 0x000007, "Wrong size on CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode, CallFunc_IsValid_ReturnValue_3) == 0x000003, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode, CallFunc_IsValid_ReturnValue_4) == 0x000004, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode, CallFunc_IsValid_ReturnValue_5) == 0x000005, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode, CallFunc_IsValid_ReturnValue_6) == 0x000006, "Member 'CommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetLevelAndExpLevelSync
// 0x0408 (0x0408 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBClassType                                  LocalWeaponClassType;                              // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              LocalVisibility;                                   // 0x0119(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     LocalItemType;                                     // 0x011A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsLevelSync;                                  // 0x011B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         LocalLevel;                                        // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLevelSyncTarget;                              // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsForStorage;                                 // 0x0124(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8157[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalEquipmentUniqueId;                            // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8158[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8159[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0158(0x0118)(ConstParm)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_815A[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0278(0x0118)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_815B[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_815C[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue_1;        // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_1;            // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid;  // 0x03B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetWeaponClassTypeByUniqueId_OutClassType; // 0x03B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x03B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x03B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x03B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x03B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeImagineLevelSync_bIsLevelSync;      // 0x03B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x03BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x03BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_815D[0x2];                                     // 0x03BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x03C0(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_815E[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x03E0(0x0018)()
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ChangeWeaponLevelSync_bIsLevelSync;       // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0405(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x0406(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0407(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync) == 0x000408, "Wrong size on CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, InOwnItemInfo) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, LocalWeaponClassType) == 0x000118, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::LocalWeaponClassType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, LocalVisibility) == 0x000119, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::LocalVisibility' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, LocalItemType) == 0x00011A, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::LocalItemType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, LocalIsLevelSync) == 0x00011B, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::LocalIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, LocalLevel) == 0x00011C, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::LocalLevel' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, LocalLevelSyncTarget) == 0x000120, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::LocalLevelSyncTarget' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, LocalIsForStorage) == 0x000124, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::LocalIsForStorage' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, LocalEquipmentUniqueId) == 0x000128, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::LocalEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetClassLevel_ReturnValue) == 0x000138, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetPlayerClassType_ClassType) == 0x00013C, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_Not_PreBool_ReturnValue) == 0x00013D, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetCharacterStorage_ReturnValue) == 0x000140, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetEquipmentBag_ReturnValue) == 0x000148, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000150, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000158, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000270, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000278, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_Not_PreBool_ReturnValue_1) == 0x000390, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000394, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetClassType_ReturnValue) == 0x000398, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetCharacterStorage_ReturnValue_1) == 0x0003A0, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetCharacterStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetEquipmentBag_ReturnValue_1) == 0x0003A8, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetEquipmentBag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0003B0, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid) == 0x0003B1, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetWeaponClassTypeByUniqueId_OutIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetWeaponClassTypeByUniqueId_OutClassType) == 0x0003B2, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetWeaponClassTypeByUniqueId_OutClassType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, Temp_byte_Variable) == 0x0003B3, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, K2Node_SwitchEnum_CmpSuccess) == 0x0003B4, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0003B5, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_IsValid_ReturnValue) == 0x0003B6, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, Temp_byte_Variable_1) == 0x0003B7, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_IsValid_ReturnValue_1) == 0x0003B8, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_ChangeImagineLevelSync_bIsLevelSync) == 0x0003B9, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_ChangeImagineLevelSync_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_BooleanAND_ReturnValue) == 0x0003BA, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, Temp_bool_Variable) == 0x0003BB, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_IsValid_ReturnValue_2) == 0x0003BC, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, K2Node_Select_Default) == 0x0003BD, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_Conv_IntToText_ReturnValue) == 0x0003C0, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0003D8, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0003E0, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0003F8, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x000400, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_ChangeWeaponLevelSync_bIsLevelSync) == 0x000404, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_ChangeWeaponLevelSync_bIsLevelSync' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_BooleanAND_ReturnValue_1) == 0x000405, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x000406, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync, CallFunc_IsValid_ReturnValue_3) == 0x000407, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByRecepiId
// 0x0248 (0x0248 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId final
{
public:
	int32                                         RecepiId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAbilityEffectMasterData             LocalPerkData;                                     // 0x0004(0x0024)(Edit, BlueprintVisible, NoDestructor)
	TArray<struct FSBWeaponKillerPerkPickMasterData> LocalPerkPickArray;                                // 0x0028(0x0010)(Edit, BlueprintVisible)
	struct FCraftMasterData                       LocalCraftRecepi;                                  // 0x0038(0x0088)(Edit, BlueprintVisible)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_815F[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x00C8(0x0088)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8160[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStackBKeyByTypeID_ReturnValue;         // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8161[0x6];                                     // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0180(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01A8(0x0018)()
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01D0(0x0018)()
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8162[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x01EC(0x0024)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8163[0x3];                                     // 0x0215(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8164[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetWeaponKillerPerkPickMasterData_IsExists; // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8165[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBWeaponKillerPerkPickMasterData> CallFunc_BP_GetWeaponKillerPerkPickMasterData_ReturnValue; // 0x0238(0x0010)(ReferenceParm)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId) == 0x000248, "Wrong size on CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, RecepiId) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::RecepiId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, LocalPerkData) == 0x000004, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::LocalPerkData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, LocalPerkPickArray) == 0x000028, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::LocalPerkPickArray' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, LocalCraftRecepi) == 0x000038, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::LocalCraftRecepi' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_FindCraftMaster_bIsValid) == 0x0000C0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_FindCraftMaster_CraftMaster) == 0x0000C8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_IsValid_ReturnValue) == 0x000150, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_GetStackBKeyByTypeID_ReturnValue) == 0x000158, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_GetStackBKeyByTypeID_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_Not_PreBool_ReturnValue) == 0x000168, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_IsValid_ReturnValue_1) == 0x000169, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000170, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_Conv_StringToText_ReturnValue) == 0x000180, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000198, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001A8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0001C0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001D0, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x0001E8, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x0001EC, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_Array_Length_ReturnValue) == 0x000210, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000214, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_Conv_StringToName_ReturnValue) == 0x000218, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_GetMasterDataManager_IsValid) == 0x000220, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000228, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_BP_GetWeaponKillerPerkPickMasterData_IsExists) == 0x000230, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_BP_GetWeaponKillerPerkPickMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId, CallFunc_BP_GetWeaponKillerPerkPickMasterData_ReturnValue) == 0x000238, "Member 'CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId::CallFunc_BP_GetWeaponKillerPerkPickMasterData_ReturnValue' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByRecepiId
// 0x03A8 (0x03A8 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId final
{
public:
	int32                                         RecepiId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAbilityEffectMasterData             LocalEffectPerkData;                               // 0x0004(0x0024)(Edit, BlueprintVisible, NoDestructor)
	struct FSBAbilityMasterData                   LocalPerkData;                                     // 0x0028(0x0048)(Edit, BlueprintVisible)
	struct FMasterImaginePerkTable                LocalPerkPickArray;                                // 0x0070(0x0048)(Edit, BlueprintVisible)
	struct FSBMasterImagine                       LocalCraftRecepi;                                  // 0x00B8(0x00B0)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineRecipeMaster_bIsValid;         // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8166[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster; // 0x0180(0x0038)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B8(0x0018)()
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8167[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x01D8(0x00B0)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0298(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02C0(0x0018)()
	class FString                                 CallFunc_GetPerkName_ReturnValue;                  // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x02E8(0x0018)()
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8168[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x0308(0x0048)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0354(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0355(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0356(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8169[0x1];                                     // 0x0357(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasterImaginePerkTable                CallFunc_FindMasterImaginePerk_ReturnValue;        // 0x0360(0x0048)()
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId) == 0x0003A8, "Wrong size on CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, RecepiId) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::RecepiId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, LocalEffectPerkData) == 0x000004, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::LocalEffectPerkData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, LocalPerkData) == 0x000028, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::LocalPerkData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, LocalPerkPickArray) == 0x000070, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::LocalPerkPickArray' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, LocalCraftRecepi) == 0x0000B8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::LocalCraftRecepi' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000168, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_FindImagineRecipeMaster_bIsValid) == 0x000178, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_FindImagineRecipeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster) == 0x000180, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_FindImagineMaster_bIsValid) == 0x0001D0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_FindImagineMaster_ImagineMaster) == 0x0001D8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000288, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000298, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0002B0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002C0, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_GetPerkName_ReturnValue) == 0x0002D8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_GetPerkName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0002E8, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_FindAbilityMaster_bIsValid) == 0x000300, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_FindAbilityMaster_AbilityMaster) == 0x000308, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_Array_Length_ReturnValue) == 0x000350, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_Greater_IntInt_ReturnValue) == 0x000354, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000355, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_GetMasterDataManager_IsValid) == 0x000356, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000358, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId, CallFunc_FindMasterImaginePerk_ReturnValue) == 0x000360, "Member 'CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId::CallFunc_FindMasterImaginePerk_ReturnValue' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByRecepiId
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetupByRecepiId final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Type;                                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetupByRecepiId) == 0x000004, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetupByRecepiId");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetupByRecepiId) == 0x000008, "Wrong size on CommonEquipmentBasicStatusParts_C_SetupByRecepiId");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByRecepiId, ID) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetupByRecepiId::ID' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByRecepiId, Type) == 0x000004, "Member 'CommonEquipmentBasicStatusParts_C_SetupByRecepiId::Type' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetupByRecepiId, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'CommonEquipmentBasicStatusParts_C_SetupByRecepiId::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetLevelSync
// 0x0001 (0x0001 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetLevelSync final
{
public:
	bool                                          Param_bIsLevelSync;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetLevelSync) == 0x000001, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetLevelSync");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetLevelSync) == 0x000001, "Wrong size on CommonEquipmentBasicStatusParts_C_SetLevelSync");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetLevelSync, Param_bIsLevelSync) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetLevelSync::Param_bIsLevelSync' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Set SPEffect Text Color
// 0x0028 (0x0028 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_Set_SPEffect_Text_Color final
{
public:
	struct FSlateColor                            InColorAndOpacity;                                 // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_Set_SPEffect_Text_Color) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_Set_SPEffect_Text_Color");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_Set_SPEffect_Text_Color) == 0x000028, "Wrong size on CommonEquipmentBasicStatusParts_C_Set_SPEffect_Text_Color");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_Set_SPEffect_Text_Color, InColorAndOpacity) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_Set_SPEffect_Text_Color::InColorAndOpacity' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetIntToText
// 0x0028 (0x0028 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetIntToText final
{
public:
	class UTextBlock*                             Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseGrouping;                                       // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_816A[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetIntToText) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetIntToText");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetIntToText) == 0x000028, "Wrong size on CommonEquipmentBasicStatusParts_C_SetIntToText");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetIntToText, Target) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetIntToText::Target' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetIntToText, Value) == 0x000008, "Member 'CommonEquipmentBasicStatusParts_C_SetIntToText::Value' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetIntToText, UseGrouping) == 0x00000C, "Member 'CommonEquipmentBasicStatusParts_C_SetIntToText::UseGrouping' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetIntToText, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'CommonEquipmentBasicStatusParts_C_SetIntToText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetIntToText, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'CommonEquipmentBasicStatusParts_C_SetIntToText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetSPEffectTextAsRecipi
// 0x0238 (0x0238 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi final
{
public:
	int32                                         InRecipiId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_816B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBWeaponKillerPerkPickMasterData> LocalPerkPickMasterArray;                          // 0x0008(0x0010)(Edit, BlueprintVisible)
	struct FCraftMasterData                       LocalCraftMaster;                                  // 0x0018(0x0088)(Edit, BlueprintVisible)
	class FText                                   LocalSPEffectText;                                 // 0x00A0(0x0018)(Edit, BlueprintVisible)
	int32                                         LocalRecipiId;                                     // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_816C[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x00C0(0x0024)(NoDestructor)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_816D[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_816E[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_816F[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8170[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8171[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8172[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0170(0x0088)()
	bool                                          CallFunc_BP_GetWeaponKillerPerkPickMasterData_IsExists; // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8173[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBWeaponKillerPerkPickMasterData> CallFunc_BP_GetWeaponKillerPerkPickMasterData_ReturnValue; // 0x0200(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0220(0x0018)()
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi) == 0x000238, "Wrong size on CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, InRecipiId) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::InRecipiId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, LocalPerkPickMasterArray) == 0x000008, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::LocalPerkPickMasterArray' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, LocalCraftMaster) == 0x000018, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::LocalCraftMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, LocalSPEffectText) == 0x0000A0, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::LocalSPEffectText' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, LocalRecipiId) == 0x0000B8, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::LocalRecipiId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x0000BC, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x0000C0, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_Conv_StringToName_ReturnValue) == 0x0000E4, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0000F0, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_Not_PreBool_ReturnValue) == 0x000100, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_Array_Length_ReturnValue) == 0x000120, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_GetTextFromAsset_ReturnValue) == 0x000128, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000138, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_GetMasterDataManager_IsValid) == 0x000158, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_GetMasterDataManager_ReturnValue) == 0x000160, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_FindCraftMaster_bIsValid) == 0x000168, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_FindCraftMaster_CraftMaster) == 0x000170, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_BP_GetWeaponKillerPerkPickMasterData_IsExists) == 0x0001F8, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_BP_GetWeaponKillerPerkPickMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_BP_GetWeaponKillerPerkPickMasterData_ReturnValue) == 0x000200, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_BP_GetWeaponKillerPerkPickMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000210, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000220, "Member 'CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitRecepiByWeapon
// 0x0278 (0x0278 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon final
{
public:
	struct FCraftMasterData                       MasterData;                                        // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBWeaponMasterData                    LocalWeaponData;                                   // 0x0088(0x00B0)(Edit, BlueprintVisible)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8174[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0140(0x00B0)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x01F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidLimitedRecepi_ReturnValue;           // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8175[0x1];                                     // 0x01F7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0208(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue_1;          // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8176[0x6];                                     // 0x0222(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8177[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_GetConditionLimit_ReturnValue;            // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasConditionItem_ReturnValue;             // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTimeAndTemplateType_ReturnValue;   // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8178[0x6];                                     // 0x0242(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0258(0x0018)()
	bool                                          CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue; // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasConditionItem_ReturnValue_1;           // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasTimelimtRecepi_ReturnValue;            // 0x0272(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0273(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0275(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon) == 0x000278, "Wrong size on CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, MasterData) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::MasterData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, LocalWeaponData) == 0x000088, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::LocalWeaponData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, Temp_byte_Variable) == 0x000138, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_FindWeaponMaster_bIsValid) == 0x000139, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000140, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, Temp_byte_Variable_1) == 0x0001F0, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, Temp_bool_Variable) == 0x0001F1, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_IsEventTermActive_ReturnValue) == 0x0001F2, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_IsEmpty_ReturnValue) == 0x0001F3, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_ValidLimitedRecepi_ReturnValue) == 0x0001F4, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_ValidLimitedRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_Not_PreBool_ReturnValue) == 0x0001F5, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_BooleanAND_ReturnValue) == 0x0001F6, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001F8, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_Conv_StringToText_ReturnValue) == 0x000208, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_IsEmpty_ReturnValue_1) == 0x000220, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_IsEventTermActive_ReturnValue_1) == 0x000221, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_IsEventTermActive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000228, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000230, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_GetConditionLimit_ReturnValue) == 0x000238, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_GetConditionLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_HasConditionItem_ReturnValue) == 0x000240, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_HasConditionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_SetDateTimeAndTemplateType_ReturnValue) == 0x000241, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_SetDateTimeAndTemplateType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000248, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000258, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue) == 0x000270, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_ContainsTimeoutRecepiMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_HasConditionItem_ReturnValue_1) == 0x000271, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_HasConditionItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_HasTimelimtRecepi_ReturnValue) == 0x000272, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_HasTimelimtRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_BooleanOR_ReturnValue) == 0x000273, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, CallFunc_BooleanOR_ReturnValue_1) == 0x000274, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon, K2Node_Select_Default) == 0x000275, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon::K2Node_Select_Default' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitRecepiByImagine
// 0x0230 (0x0230 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine final
{
public:
	struct FMasterImagineRecepi                   MasterData;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBMasterImagine                       LocalImagineData;                                  // 0x0038(0x00B0)(Edit, BlueprintVisible)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8179[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x00F0(0x00B0)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidLimitedRecepi_ReturnValue;           // 0x01A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasConditionItem_ReturnValue;             // 0x01A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue; // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasTimelimtImagineRecepi_ReturnValue;     // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x01AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_817A[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_817B[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01C8(0x0018)()
	bool                                          CallFunc_IsEventTermActive_ReturnValue_1;          // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_817C[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_817D[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_GetConditionLimit_ReturnValue;            // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasConditionItem_ReturnValue_1;           // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTimeAndTemplateType_ReturnValue;   // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_817E[0x6];                                     // 0x0202(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0218(0x0018)()
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine) == 0x000230, "Wrong size on CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, MasterData) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::MasterData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, LocalImagineData) == 0x000038, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::LocalImagineData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, Temp_byte_Variable) == 0x0000E8, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_FindImagineMaster_bIsValid) == 0x0000E9, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_FindImagineMaster_ImagineMaster) == 0x0000F0, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, Temp_byte_Variable_1) == 0x0001A0, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, Temp_bool_Variable) == 0x0001A1, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_IsEmpty_ReturnValue) == 0x0001A2, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_IsEventTermActive_ReturnValue) == 0x0001A3, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_Not_PreBool_ReturnValue) == 0x0001A4, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_BooleanAND_ReturnValue) == 0x0001A5, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_ValidLimitedRecepi_ReturnValue) == 0x0001A6, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_ValidLimitedRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_HasConditionItem_ReturnValue) == 0x0001A7, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_HasConditionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue) == 0x0001A8, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_HasTimelimtImagineRecepi_ReturnValue) == 0x0001A9, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_HasTimelimtImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_BooleanOR_ReturnValue) == 0x0001AA, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_BooleanOR_ReturnValue_1) == 0x0001AB, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001B0, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, K2Node_Select_Default) == 0x0001C0, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_Conv_StringToText_ReturnValue) == 0x0001C8, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_IsEventTermActive_ReturnValue_1) == 0x0001E0, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_IsEventTermActive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_IsEmpty_ReturnValue_1) == 0x0001E1, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_GetEventTermEndTime_OutEndTime) == 0x0001E8, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_GetEventTermEndTime_ReturnValue) == 0x0001F0, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_GetConditionLimit_ReturnValue) == 0x0001F8, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_GetConditionLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_HasConditionItem_ReturnValue_1) == 0x000200, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_HasConditionItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_SetDateTimeAndTemplateType_ReturnValue) == 0x000201, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_SetDateTimeAndTemplateType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000208, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000218, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitInfoByWeaponId
// 0x0098 (0x0098 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId final
{
public:
	int32                                         RecipiId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_817F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0008(0x0088)()
	bool                                          CallFunc_ValidLimitedRecepi_ReturnValue;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId) == 0x000098, "Wrong size on CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId, RecipiId) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId::RecipiId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId, CallFunc_FindCraftMaster_bIsValid) == 0x000004, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId, CallFunc_FindCraftMaster_CraftMaster) == 0x000008, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId, CallFunc_ValidLimitedRecepi_ReturnValue) == 0x000090, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId::CallFunc_ValidLimitedRecepi_ReturnValue' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitInfoByImagineId
// 0x0048 (0x0048 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId final
{
public:
	int32                                         RecipiId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineRecipeMaster_bIsValid;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8180[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster; // 0x0008(0x0038)()
	bool                                          CallFunc_ValidLimitedRecepi_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId) == 0x000048, "Wrong size on CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId, RecipiId) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId::RecipiId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId, CallFunc_FindImagineRecipeMaster_bIsValid) == 0x000004, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId::CallFunc_FindImagineRecipeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId, CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster) == 0x000008, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId::CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId, CallFunc_ValidLimitedRecepi_ReturnValue) == 0x000040, "Member 'CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId::CallFunc_ValidLimitedRecepi_ReturnValue' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetPrevInfo
// 0x0328 (0x0328 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetPrevInfo final
{
public:
	struct FOwnItemInfo                           Prev;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         LocalNowValue;                                     // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalPrevValue;                                    // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Temp_object_Variable;                              // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Temp_object_Variable_1;                            // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBWeaponStatus                               Temp_byte_Variable;                                // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8181[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_2;                            // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_3;                            // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_4;                            // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       Temp_object_Variable_5;                            // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Temp_object_Variable_6;                            // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8182[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0173(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8183[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8184[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0188(0x0028)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8185[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x01B8(0x0028)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8186[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x01E8(0x0028)()
	class UTextBlock*                             Temp_object_Variable_7;                            // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8187[0x6];                                     // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             Temp_object_Variable_8;                            // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponStatus                               Temp_byte_Variable_1;                              // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8188[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetWeaponStatus_ReturnValue;              // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateStackBWeaponStatusValueByEnableType_ReturnValue; // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8189[0x2];                                     // 0x0236(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0238(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0260(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x0288(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x02B0(0x0028)()
	class UTextBlock*                             K2Node_Select_Default_2;                           // 0x02D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_Select_Default_3;                           // 0x02E0(0x0028)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_818A[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGenericStatusItemForBattleSet_C*       K2Node_Select_Default_4;                           // 0x0310(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponStatus_ReturnValue_1;            // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateStackBWeaponStatusValueByEnableType_ReturnValue_1; // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetPrevInfo) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetPrevInfo");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetPrevInfo) == 0x000328, "Wrong size on CommonEquipmentBasicStatusParts_C_SetPrevInfo");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Prev) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Prev' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, LocalNowValue) == 0x000118, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::LocalNowValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, LocalPrevValue) == 0x00011C, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::LocalPrevValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_object_Variable) == 0x000120, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_object_Variable_1) == 0x000128, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_bool_Variable) == 0x000130, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_byte_Variable) == 0x000131, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_object_Variable_2) == 0x000138, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_object_Variable_3) == 0x000140, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_object_Variable_4) == 0x000148, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_object_Variable_5) == 0x000150, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_object_Variable_6) == 0x000158, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_int_Variable) == 0x000160, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_int_Variable_1) == 0x000164, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_Conv_IntToByte_ReturnValue) == 0x000168, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00016C, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_GetValidValue_ReturnValue) == 0x000170, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000171, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000172, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000173, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000174, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_SwitchEnum_CmpSuccess_1) == 0x000178, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_MakeLiteralInt_ReturnValue) == 0x00017C, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000180, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_MakeStruct_SlateColor) == 0x000188, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001B0, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0001B1, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_MakeStruct_SlateColor_1) == 0x0001B8, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_BooleanOR_ReturnValue) == 0x0001E0, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_MakeStruct_SlateColor_2) == 0x0001E8, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_object_Variable_7) == 0x000210, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x000218, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x000219, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_object_Variable_8) == 0x000220, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_byte_Variable_1) == 0x000228, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_GetWeaponStatus_ReturnValue) == 0x00022C, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_GetWeaponStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_CalculateStackBWeaponStatusValueByEnableType_ReturnValue) == 0x000230, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_CalculateStackBWeaponStatusValueByEnableType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_bool_Variable_1) == 0x000234, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, Temp_bool_Variable_2) == 0x000235, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_Select_Default) == 0x000238, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_MakeStruct_SlateColor_3) == 0x000260, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_MakeStruct_SlateColor_4) == 0x000288, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_Select_Default_1) == 0x0002B0, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_Select_Default_2) == 0x0002D8, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_Select_Default_3) == 0x0002E0, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_IsValid_ReturnValue) == 0x000308, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, K2Node_Select_Default_4) == 0x000310, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_GetWeaponStatus_ReturnValue_1) == 0x000318, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_GetWeaponStatus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_CalculateStackBWeaponStatusValueByEnableType_ReturnValue_1) == 0x00031C, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_CalculateStackBWeaponStatusValueByEnableType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetPrevInfo, CallFunc_IsValid_ReturnValue_1) == 0x000320, "Member 'CommonEquipmentBasicStatusParts_C_SetPrevInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpWeaponSkinIconAndTagsByImagineMaster
// 0x00B8 (0x00B8 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster final
{
public:
	struct FSBMasterImagine                       LocalImagineMaster;                                // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster) == 0x0000B8, "Wrong size on CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster, LocalImagineMaster) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster::LocalImagineMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster, CallFunc_IsValid_ReturnValue_1) == 0x0000B1, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster, CallFunc_IsValid_ReturnValue_2) == 0x0000B2, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster, CallFunc_IsValid_ReturnValue_3) == 0x0000B3, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpWeaponSkinIconAndTagsByWeaponMaster
// 0x00B8 (0x00B8 - 0x0000)
struct CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster final
{
public:
	struct FSBWeaponMasterData                    LocalWeaponMaster;                                 // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster) == 0x000008, "Wrong alignment on CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster");
static_assert(sizeof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster) == 0x0000B8, "Wrong size on CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster, LocalWeaponMaster) == 0x000000, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster::LocalWeaponMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster, CallFunc_IsValid_ReturnValue_1) == 0x0000B1, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster, CallFunc_IsValid_ReturnValue_2) == 0x0000B2, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster, CallFunc_IsValid_ReturnValue_3) == 0x0000B3, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster, CallFunc_IsValid_ReturnValue_4) == 0x0000B4, "Member 'CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

}

