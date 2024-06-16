#pragma once

 

// Package: MyCharaMenu_CostumeChangeMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "E_MyCharaMenu_CostumeCategory_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "E_MyCharaMenu_AccessoryCategory_structs.hpp"
#include "CharaParts_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_OnSelected__DelegateSignature final
{
public:
	class FString                                 InItemUniqueId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_OnSelected__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_OnSelected__DelegateSignature) == 0x000010, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_OnSelected__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_OnSelected__DelegateSignature, InItemUniqueId) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_OnSelected__DelegateSignature::InItemUniqueId' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnOpenEquipRingHandSelectDialog__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_OnOpenEquipRingHandSelectDialog__DelegateSignature final
{
public:
	class FString                                 InRingUniqueId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_OnOpenEquipRingHandSelectDialog__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_OnOpenEquipRingHandSelectDialog__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_OnOpenEquipRingHandSelectDialog__DelegateSignature) == 0x000010, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_OnOpenEquipRingHandSelectDialog__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_OnOpenEquipRingHandSelectDialog__DelegateSignature, InRingUniqueId) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_OnOpenEquipRingHandSelectDialog__DelegateSignature::InRingUniqueId' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu
// 0x0428 (0x0428 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues K2Node_CustomEvent_InUnchangeableRetValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsAccessory;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_898E[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	ESBCharaEquipType                             Temp_byte_Variable_2;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_898F[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0068(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0080(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0138(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0150(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8990[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0188(0x0018)()
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue;        // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8991[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_InSelectedIcon;                 // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters_1;              // 0x01C0(0x0010)(ReferenceParm)
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x01D0(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable;                                 // 0x01E0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_ComponentBoundEvent_SortType;               // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_3;                              // 0x01E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8992[0x2];                                     // 0x01E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   CallFunc_Get_Filter_OutSortFilter;                 // 0x01E8(0x0010)(ReferenceParm)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_MyCharaMenu_CostumeCategory                 K2Node_ComponentBoundEvent_InCostumeCategory;      // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8993[0x5];                                     // 0x01FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_4;                              // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               K2Node_ComponentBoundEvent_InAccessoryCategory;    // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_5;                              // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x020B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x020D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_IsValid; // 0x020E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_OutCostumeType; // 0x020F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             K2Node_Select_Default;                             // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_6;                              // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_7;                              // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8994[0x1];                                     // 0x0213(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0214(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8995[0x6];                                     // 0x0222(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0228(0x0118)(ConstParm)
	ESBCharaEquipType                             Temp_byte_Variable_8;                              // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_InYesNoResult;                  // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0342(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0343(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8996[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0348(0x0088)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_GetCharaEquipTypeFromProtectorCategory_OutCharaEquipType; // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaEquipTypeFromProtectorCategory_ReturnValue; // 0x03D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x03D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_MyCharaMenu_CostumeCategory                 Temp_byte_Variable_9;                              // 0x03D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8997[0x3];                                     // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x03D8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             K2Node_Select_Default_1;                           // 0x03DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x03DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8998[0x2];                                     // 0x03DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   CallFunc_Get_Filter_OutSortFilter_1;               // 0x03E0(0x0010)(ReferenceParm)
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8999[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x03FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0400(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0404(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Temp_byte_Variable_10;                             // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_899A[0x3];                                     // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x040C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_899B[0x3];                                     // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x041C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChildAt_ReturnValue;                // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0421(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu) == 0x000428, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, EntryPoint) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable) == 0x000008, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_bool_Variable) == 0x000009, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable_1) == 0x00000A, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x00000B, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00000C, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00000E, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Greater_IntInt_ReturnValue) == 0x00000F, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_CustomEvent_InUnchangeableRetValue) == 0x000010, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_CustomEvent_InUnchangeableRetValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_CustomEvent_InIsAccessory) == 0x000011, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_CustomEvent_InIsAccessory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable_2) == 0x000040, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000048, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000058, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000068, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000080, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D8, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_MakeArray_Array) == 0x000118, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000128, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Format_ReturnValue) == 0x000138, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000150, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000168, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetConfigSaveManager_IsValid) == 0x000178, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000180, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000188, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetPlayerId_ReturnValue) == 0x0001A0, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_SaveGeneralConfigData_ReturnValue) == 0x0001B0, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_SaveGeneralConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_CustomEvent_InSelectedIcon) == 0x0001B8, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_CustomEvent_InSelectedIcon' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_ComponentBoundEvent_Filters_1) == 0x0001C0, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_ComponentBoundEvent_Filters_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_ComponentBoundEvent_Filters) == 0x0001D0, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_int_Variable) == 0x0001E0, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_ComponentBoundEvent_SortType) == 0x0001E4, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_ComponentBoundEvent_SortType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable_3) == 0x0001E5, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Get_Filter_OutSortFilter) == 0x0001E8, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Get_Filter_OutSortFilter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_Event_IsDesignTime) == 0x0001F8, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_ComponentBoundEvent_InCostumeCategory) == 0x0001F9, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_ComponentBoundEvent_InCostumeCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetMasterDataManager_IsValid) == 0x0001FA, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetMasterDataManager_ReturnValue) == 0x000200, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable_4) == 0x000208, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_ComponentBoundEvent_InAccessoryCategory) == 0x000209, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_ComponentBoundEvent_InAccessoryCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable_5) == 0x00020A, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00020B, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00020C, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_BooleanOR_ReturnValue) == 0x00020D, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_IsValid) == 0x00020E, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_OutCostumeType) == 0x00020F, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_OutCostumeType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_Select_Default) == 0x000210, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable_6) == 0x000211, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable_7) == 0x000212, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_int_Variable_1) == 0x000214, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetEquipmentBag_ReturnValue) == 0x000218, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_IsValid_ReturnValue_1) == 0x000220, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000221, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000228, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable_8) == 0x000340, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_CustomEvent_InYesNoResult) == 0x000341, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_CustomEvent_InYesNoResult' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000342, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000343, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000348, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0003D0, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetCharaEquipTypeFromProtectorCategory_OutCharaEquipType) == 0x0003D1, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetCharaEquipTypeFromProtectorCategory_OutCharaEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetCharaEquipTypeFromProtectorCategory_ReturnValue) == 0x0003D2, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetCharaEquipTypeFromProtectorCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Not_PreBool_ReturnValue) == 0x0003D3, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable_9) == 0x0003D4, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_int_Variable_2) == 0x0003D8, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_Select_Default_1) == 0x0003DC, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0003DD, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Get_Filter_OutSortFilter_1) == 0x0003E0, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Get_Filter_OutSortFilter_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x0003F0, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x0003F8, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_PlaySE_ReturnValue) == 0x0003FC, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_int_Variable_3) == 0x000400, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_int_Variable_4) == 0x000404, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_byte_Variable_10) == 0x000408, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, K2Node_Select_Default_2) == 0x00040C, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_IsValid_ReturnValue_2) == 0x000410, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_GetChildrenCount_ReturnValue) == 0x000414, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, Temp_int_Variable_5) == 0x000418, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_Add_IntInt_ReturnValue) == 0x00041C, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_RemoveChildAt_ReturnValue) == 0x000420, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_RemoveChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000421, "Member 'MyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.EndUsingUnusedEquipConfirmDialog
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_EndUsingUnusedEquipConfirmDialog final
{
public:
	EYesNoDialogResult                            InYesNoResult;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_EndUsingUnusedEquipConfirmDialog) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_EndUsingUnusedEquipConfirmDialog");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_EndUsingUnusedEquipConfirmDialog) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_EndUsingUnusedEquipConfirmDialog");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_EndUsingUnusedEquipConfirmDialog, InYesNoResult) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_EndUsingUnusedEquipConfirmDialog::InYesNoResult' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature final
{
public:
	E_MyCharaMenu_AccessoryCategory               InAccessoryCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature, InAccessoryCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature::InAccessoryCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature final
{
public:
	E_MyCharaMenu_CostumeCategory                 InCostumeCategory;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature, InCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature::InCostumeCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature final
{
public:
	ESBItemSortType                               Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature, Param_SortType) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature::Param_SortType' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature) == 0x000010, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature, Filters) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature::Filters' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature) == 0x000010, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature, Filters) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature::Filters' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnSelect_CandidateItemIcon
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_OnSelect_CandidateItemIcon final
{
public:
	class UItemIconBtn_C*                         InSelectedIcon;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_OnSelect_CandidateItemIcon) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_OnSelect_CandidateItemIcon");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_OnSelect_CandidateItemIcon) == 0x000008, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_OnSelect_CandidateItemIcon");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_OnSelect_CandidateItemIcon, InSelectedIcon) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_OnSelect_CandidateItemIcon::InSelectedIcon' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ShowUnchangeableMessageDialog
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog final
{
public:
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsAccessory;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog) == 0x000002, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog, InUnchangeableRetValue) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog::InUnchangeableRetValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog, InIsAccessory) == 0x000001, "Member 'MyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog::InIsAccessory' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.CreateEmptySlotList
// 0x0070 (0x0070 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList final
{
public:
	int32                                         TmpCapacity;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginLeft;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginTop;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_899C[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_899D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_899E[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class UItemIconBtn_C*                         CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_899F[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList) == 0x000070, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, TmpCapacity) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::TmpCapacity' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, MarginLeft) == 0x000004, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::MarginLeft' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, MarginTop) == 0x000008, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::MarginTop' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, Temp_int_Variable) == 0x00000C, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_Percent_IntInt_ReturnValue) == 0x000010, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_Divide_IntInt_ReturnValue) == 0x000014, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000019, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_GetEquipmentBag_ReturnValue) == 0x000028, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_GetCapacity_ReturnValue) == 0x000034, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, K2Node_MakeStruct_Margin) == 0x000038, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_Create_ReturnValue) == 0x000058, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList, CallFunc_AddChildToGrid_ReturnValue) == 0x000068, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Setup List
// 0x05A0 (0x05A0 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_Setup_List final
{
public:
	ESBItemSortType                               InSortType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             InEquipType;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            InGenderType;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  InClassType;                                       // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89A0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   InSortFilters;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	E_MyCharaMenu_CostumeCategory                 InCostumeCategory;                                 // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               InAccessoryCategory;                               // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89A1[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               TmpAccessoryCategory;                              // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89A2[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpCostumePartsName;                               // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	E_MyCharaMenu_CostumeCategory                 TmpCostumeCategory;                                // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89A3[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   TmpSortFIlters;                                    // 0x0048(0x0010)(Edit, BlueprintVisible)
	struct FEquipableClass                        TmpEquipableClass;                                 // 0x0058(0x0010)(Edit, BlueprintVisible)
	class UWidget*                                TmpGridPanelChild;                                 // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              TmpEquipableGender;                                // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            TmpProtectorCategory;                              // 0x0071(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89A4[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       TmpCostumeMasterData;                              // 0x0078(0x0088)(Edit, BlueprintVisible)
	struct FInventoryItemData                     TmpInventoryItemData;                              // 0x0100(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FOwnItemInfo                           TmpOwnItemInfo;                                    // 0x0160(0x0118)(Edit, BlueprintVisible)
	int32                                         TmpLoopCnt;                                        // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  TmpClassType;                                      // 0x027C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            TmpGenderType;                                     // 0x027D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             TmpEquipType;                                      // 0x027E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89A5[0x1];                                     // 0x027F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpCandidateItemCnt;                               // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable;                                // 0x028A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89A6[0x1];                                     // 0x028B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89A7[0x6];                                     // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x02A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89A8[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_1;                              // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_2;                              // 0x02C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_3;                              // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_4;                              // 0x02C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_5;                              // 0x02C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCostumePartsIsCompositeWear_OutIsCompositeWear; // 0x02C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<ECharaPartsLocation>                   CallFunc_CheckCostumePartsIsCompositeWear_OutOccupiedPartsLocations; // 0x02C8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckCostumePartsIsCompositeWear_OutIsCompositeWear_1; // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89A9[0x6];                                     // 0x02DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   CallFunc_CheckCostumePartsIsCompositeWear_OutOccupiedPartsLocations_1; // 0x02E0(0x0010)(ReferenceParm)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_6;                              // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_ByteByte_ReturnValue;           // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_7;                              // 0x02F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_ByteByte_ReturnValue;        // 0x02F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_ByteByte_ReturnValue;                // 0x02F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_8;                              // 0x02F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_ByteByte_ReturnValue_1;      // 0x02F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_9;                              // 0x02FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x02FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x02FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x02FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x02FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_10;                             // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_11;                             // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_12;                             // 0x0302(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0303(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89AA[0x3];                                     // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x030D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89AB[0x2];                                     // 0x030E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89AC[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89AD[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0320(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0329(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_13;                             // 0x032A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x032B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_10;       // 0x032D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x032E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89AE[0x1];                                     // 0x032F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0330(0x0088)()
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x03B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89AF[0x6];                                     // 0x03BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x03C0(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89B0[0x7];                                     // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x0460(0x0118)(ConstParm)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0578(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89B1[0x3];                                     // 0x0581(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0584(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_14;                             // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable_15;                             // 0x0589(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89B2[0x2];                                     // 0x058A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x058C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               K2Node_Select_Default;                             // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_11;       // 0x0591(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0592(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89B3[0x1];                                     // 0x0593(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0594(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0598(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x059C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_Setup_List) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_Setup_List");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_Setup_List) == 0x0005A0, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_Setup_List");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, InSortType) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::InSortType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, InEquipType) == 0x000001, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::InEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, InGenderType) == 0x000002, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::InGenderType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, InClassType) == 0x000003, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::InClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, InSortFilters) == 0x000008, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::InSortFilters' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, InCostumeCategory) == 0x000018, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::InCostumeCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, InAccessoryCategory) == 0x000019, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::InAccessoryCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, LoopEnd) == 0x00001C, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::LoopEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpMasterDataManager) == 0x000020, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpAccessoryCategory) == 0x000028, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpAccessoryCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpCostumePartsName) == 0x000030, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpCostumePartsName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpCostumeCategory) == 0x000040, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpCostumeCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpSortFIlters) == 0x000048, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpSortFIlters' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpEquipableClass) == 0x000058, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpEquipableClass' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpGridPanelChild) == 0x000068, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpGridPanelChild' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpEquipableGender) == 0x000070, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpEquipableGender' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpProtectorCategory) == 0x000071, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpProtectorCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpCostumeMasterData) == 0x000078, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpCostumeMasterData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpInventoryItemData) == 0x000100, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpInventoryItemData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpOwnItemInfo) == 0x000160, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpLoopCnt) == 0x000278, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpLoopCnt' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpClassType) == 0x00027C, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpGenderType) == 0x00027D, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpGenderType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpEquipType) == 0x00027E, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, TmpCandidateItemCnt) == 0x000280, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::TmpCandidateItemCnt' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_int_Variable) == 0x000284, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_MakeLiteralByte_ReturnValue) == 0x000288, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000289, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable) == 0x00028A, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_int_Variable_1) == 0x00028C, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000290, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000291, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_PlayAnimation_ReturnValue) == 0x000298, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0002A0, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x0002A8, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_GetMasterDataManager_IsValid) == 0x0002B0, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002B8, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002C0, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_1) == 0x0002C1, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002C2, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_2) == 0x0002C3, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_3) == 0x0002C4, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_4) == 0x0002C5, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_5) == 0x0002C6, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_CheckCostumePartsIsCompositeWear_OutIsCompositeWear) == 0x0002C7, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_CheckCostumePartsIsCompositeWear_OutIsCompositeWear' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_CheckCostumePartsIsCompositeWear_OutOccupiedPartsLocations) == 0x0002C8, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_CheckCostumePartsIsCompositeWear_OutOccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_Not_PreBool_ReturnValue) == 0x0002D8, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_CheckCostumePartsIsCompositeWear_OutIsCompositeWear_1) == 0x0002D9, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_CheckCostumePartsIsCompositeWear_OutIsCompositeWear_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_CheckCostumePartsIsCompositeWear_OutOccupiedPartsLocations_1) == 0x0002E0, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_CheckCostumePartsIsCompositeWear_OutOccupiedPartsLocations_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_6) == 0x0002F0, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_LessEqual_ByteByte_ReturnValue) == 0x0002F1, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_LessEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_7) == 0x0002F2, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_GreaterEqual_ByteByte_ReturnValue) == 0x0002F3, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_GreaterEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_BooleanAND_ReturnValue) == 0x0002F4, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_Less_ByteByte_ReturnValue) == 0x0002F5, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_Less_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_8) == 0x0002F6, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_GreaterEqual_ByteByte_ReturnValue_1) == 0x0002F7, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_GreaterEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_BooleanAND_ReturnValue_1) == 0x0002F8, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0002F9, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_9) == 0x0002FA, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0002FB, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0002FC, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0002FD, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0002FE, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x0002FF, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_10) == 0x000300, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_11) == 0x000301, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_12) == 0x000302, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000303, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, K2Node_SwitchEnum_CmpSuccess) == 0x000304, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000308, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x00030C, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x00030D, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_GetSotedIndexNum_ReturnValue) == 0x000310, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_IsValid_ReturnValue) == 0x000314, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_Subtract_IntInt_ReturnValue) == 0x000318, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_Array_Get_Item) == 0x00031C, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000320, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, K2Node_DynamicCast_bSuccess) == 0x000328, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, K2Node_SwitchEnum_CmpSuccess_1) == 0x000329, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_13) == 0x00032A, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x00032B, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_Greater_IntInt_ReturnValue) == 0x00032C, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_10) == 0x00032D, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_BP_FindCostumeMaster_IsExist) == 0x00032E, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000330, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_BooleanAND_ReturnValue_2) == 0x0003B8, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_BooleanAND_ReturnValue_3) == 0x0003B9, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_CreateInventoryData_InventoryData) == 0x0003C0, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_CreateInventoryData_IsSuccess) == 0x000458, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x000460, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_GetChildAt_ReturnValue) == 0x000578, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_IsValid_ReturnValue_1) == 0x000580, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_Add_IntInt_ReturnValue) == 0x000584, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_14) == 0x000588, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_byte_Variable_15) == 0x000589, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, Temp_int_Variable_2) == 0x00058C, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, K2Node_Select_Default) == 0x000590, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_EqualEqual_ByteByte_ReturnValue_11) == 0x000591, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_EqualEqual_ByteByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000592, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_Add_IntInt_ReturnValue_1) == 0x000594, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_GetChildrenCount_ReturnValue) == 0x000598, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Setup_List, CallFunc_Less_IntInt_ReturnValue) == 0x00059C, "Member 'MyCharaMenu_CostumeChangeMenu_C_Setup_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.CreateInventoryItemData
// 0x0300 (0x0300 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInventoryItemData                     OutInventoryItemData;                              // 0x0118(0x0060)(Parm, OutParm, HasGetValueTypeHash)
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0178(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89B4[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89B5[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x01F0(0x0088)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0288(0x0018)()
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData_1;             // 0x02A0(0x0060)(HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData) == 0x000300, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData, InOwnItemInfo) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData, OutInventoryItemData) == 0x000118, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData::OutInventoryItemData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData, K2Node_MakeStruct_InventoryItemData) == 0x000178, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData, CallFunc_GetMasterDataManager_IsValid) == 0x0001D8, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001E0, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0001E8, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0001F0, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData, CallFunc_GetItemText_ReturnValue) == 0x000278, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData, CallFunc_Conv_StringToText_ReturnValue) == 0x000288, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData, K2Node_MakeStruct_InventoryItemData_1) == 0x0002A0, "Member 'MyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData::K2Node_MakeStruct_InventoryItemData_1' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.HideAllSlotListItem
// 0x0048 (0x0048 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem final
{
public:
	TArray<class UWidget*>                        LocalChilds;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89B6[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89B7[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem) == 0x000048, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem, LocalChilds) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem::LocalChilds' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem, Temp_int_Array_Index_Variable) == 0x000018, "Member 'MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem, CallFunc_Array_Get_Item) == 0x000020, "Member 'MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem, CallFunc_GetAllChildren_ReturnValue) == 0x000030, "Member 'MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'MyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.IsCostumeTypeAccessory
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory final
{
public:
	ESBCharaEquipType                             InEquipType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsAccessory;                                    // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpIsAccessory;                                    // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory) == 0x000004, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory, InEquipType) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory::InEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory, OutIsAccessory) == 0x000001, "Member 'MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory::OutIsAccessory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory, TmpIsAccessory) == 0x000002, "Member 'MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory::TmpIsAccessory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'MyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetInventory
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_SetInventory final
{
public:
	class USBOwnItemListContainer*                InOwnItemListContainer;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_SetInventory) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_SetInventory");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_SetInventory) == 0x000010, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_SetInventory");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetInventory, InOwnItemListContainer) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetInventory::InOwnItemListContainer' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetInventory, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetInventory::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetCurrentSortType
// 0x0003 (0x0003 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType final
{
public:
	ESBItemSortType                               OutSortType;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               CallFunc_GetSortType_OutSortType;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType) == 0x000003, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType, OutSortType) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType::OutSortType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType, CallFunc_GetSortType_OutSortType) == 0x000002, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType::CallFunc_GetSortType_OutSortType' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Get Filter
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_Get_Filter final
{
public:
	ESBCharaEquipType                             InCostumeType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89B8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   OutSortFilter;                                     // 0x0008(0x0010)(Parm, OutParm)
	bool                                          CallFunc_IsCostumeTypeAccessory_OutIsAccessory;    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_Get_Filter) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_Get_Filter");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_Get_Filter) == 0x000020, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_Get_Filter");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Get_Filter, InCostumeType) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_Get_Filter::InCostumeType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Get_Filter, OutSortFilter) == 0x000008, "Member 'MyCharaMenu_CostumeChangeMenu_C_Get_Filter::OutSortFilter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_Get_Filter, CallFunc_IsCostumeTypeAccessory_OutIsAccessory) == 0x000018, "Member 'MyCharaMenu_CostumeChangeMenu_C_Get_Filter::CallFunc_IsCostumeTypeAccessory_OutIsAccessory' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.InitSortBox
// 0x0040 (0x0040 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_InitSortBox final
{
public:
	TArray<ESBItemSortType>                       TmpRemovingSortTypes;                              // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89B9[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBItemSortType>                       K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_Array_Get_Item;                           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89BA[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89BB[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_InitSortBox");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox) == 0x000040, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_InitSortBox");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox, TmpRemovingSortTypes) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_InitSortBox::TmpRemovingSortTypes' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox, Temp_int_Array_Index_Variable) == 0x000010, "Member 'MyCharaMenu_CostumeChangeMenu_C_InitSortBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox, K2Node_MakeArray_Array) == 0x000018, "Member 'MyCharaMenu_CostumeChangeMenu_C_InitSortBox::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'MyCharaMenu_CostumeChangeMenu_C_InitSortBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox, CallFunc_Array_Get_Item) == 0x00002C, "Member 'MyCharaMenu_CostumeChangeMenu_C_InitSortBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'MyCharaMenu_CostumeChangeMenu_C_InitSortBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'MyCharaMenu_CostumeChangeMenu_C_InitSortBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'MyCharaMenu_CostumeChangeMenu_C_InitSortBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_InitSortBox, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'MyCharaMenu_CostumeChangeMenu_C_InitSortBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ChangeActiveWindow
// 0x0030 (0x0030 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow final
{
public:
	bool                                          InIsFilterSelectorWindowActive;                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InDoAnimation;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89BC[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterSelector_C*                      LocalFilterSelector;                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsFilterSelectorWindowActive;                 // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCostumeTypeAccessory_OutIsAccessory;    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89BD[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterSelector_C*                      K2Node_Select_Default_2;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow) == 0x000030, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, InIsFilterSelectorWindowActive) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::InIsFilterSelectorWindowActive' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, InDoAnimation) == 0x000001, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::InDoAnimation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, LocalFilterSelector) == 0x000008, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::LocalFilterSelector' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, LocalIsFilterSelectorWindowActive) == 0x000010, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::LocalIsFilterSelectorWindowActive' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, Temp_byte_Variable) == 0x000011, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, Temp_byte_Variable_1) == 0x000012, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, Temp_bool_Variable) == 0x000013, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, Temp_byte_Variable_2) == 0x000014, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, Temp_byte_Variable_3) == 0x000015, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, Temp_bool_Variable_1) == 0x000016, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, K2Node_Select_Default) == 0x000017, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, CallFunc_IsValid_ReturnValue_2) == 0x00001A, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, CallFunc_IsValid_ReturnValue_3) == 0x00001B, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, Temp_bool_Variable_2) == 0x00001C, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, CallFunc_IsValid_ReturnValue_4) == 0x00001D, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, K2Node_Select_Default_1) == 0x00001E, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, CallFunc_IsValid_ReturnValue_5) == 0x00001F, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, CallFunc_IsCostumeTypeAccessory_OutIsAccessory) == 0x000020, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::CallFunc_IsCostumeTypeAccessory_OutIsAccessory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow, K2Node_Select_Default_2) == 0x000028, "Member 'MyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow::K2Node_Select_Default_2' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetSelectedCostumeCategory
// 0x0028 (0x0028 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory final
{
public:
	E_MyCharaMenu_CostumeCategory                 InCostumeCategory;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_CostumeCategory                 Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_6;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_7;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_8;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_9;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_IsValid; // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_OutCostumeType; // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             K2Node_Select_Default;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89BE[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   CallFunc_Get_Filter_OutSortFilter;                 // 0x0010(0x0010)(ReferenceParm)
	ESBCharaEquipType                             K2Node_Select_Default_1;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory) == 0x000028, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, InCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::InCostumeCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_bool_Variable) == 0x000001, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_byte_Variable) == 0x000002, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_byte_Variable_1) == 0x000003, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_byte_Variable_2) == 0x000004, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_byte_Variable_3) == 0x000005, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_byte_Variable_4) == 0x000006, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_byte_Variable_5) == 0x000007, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_byte_Variable_6) == 0x000008, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_byte_Variable_7) == 0x000009, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_byte_Variable_8) == 0x00000A, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, Temp_byte_Variable_9) == 0x00000B, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_IsValid) == 0x00000C, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_OutCostumeType) == 0x00000D, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::CallFunc_GetAccessoryCostumeTypeFromAccessoryCategory_OutCostumeType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, K2Node_Select_Default) == 0x00000E, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, CallFunc_Get_Filter_OutSortFilter) == 0x000010, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::CallFunc_Get_Filter_OutSortFilter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory, K2Node_Select_Default_1) == 0x000020, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory::K2Node_Select_Default_1' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetSelectedCostumeCategory
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_GetSelectedCostumeCategory final
{
public:
	E_MyCharaMenu_CostumeCategory                 OutCostumeCategory;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_GetSelectedCostumeCategory) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_GetSelectedCostumeCategory");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_GetSelectedCostumeCategory) == 0x000001, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_GetSelectedCostumeCategory");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetSelectedCostumeCategory, OutCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetSelectedCostumeCategory::OutCostumeCategory' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetCostumeTypeFromProtectorCategory
// 0x0016 (0x0016 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory final
{
public:
	EProtectorCategory                            InProtectorCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             OutCostumeType;                                    // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             TmpCostumeType;                                    // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_3;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_4;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_5;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_6;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_7;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_8;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_9;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_10;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_11;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_12;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_13;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_14;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_15;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory) == 0x000016, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, InProtectorCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::InProtectorCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, IsValid) == 0x000001, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, OutCostumeType) == 0x000002, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::OutCostumeType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, TmpCostumeType) == 0x000003, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::TmpCostumeType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable) == 0x000004, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000005, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_1) == 0x000006, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_2) == 0x000007, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_3) == 0x000008, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_4) == 0x000009, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_5) == 0x00000A, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_6) == 0x00000B, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_7) == 0x00000C, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_8) == 0x00000D, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_9) == 0x00000E, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_10) == 0x00000F, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_11) == 0x000010, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_12) == 0x000011, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_13) == 0x000012, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_14) == 0x000013, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, Temp_byte_Variable_15) == 0x000014, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory, K2Node_Select_Default) == 0x000015, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetAccessoryCostumeTypeFromAccessoryCategory
// 0x000F (0x000F - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory final
{
public:
	E_MyCharaMenu_AccessoryCategory               InAccessoryCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             OutCostumeType;                                    // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             TmpCostumeType;                                    // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               TmpAccessoryCategory;                              // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_3;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_4;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_5;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_6;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_7;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_8;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             K2Node_Select_Default;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory) == 0x000001, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory) == 0x00000F, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, InAccessoryCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::InAccessoryCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, IsValid) == 0x000001, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, OutCostumeType) == 0x000002, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::OutCostumeType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, TmpCostumeType) == 0x000003, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::TmpCostumeType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, TmpAccessoryCategory) == 0x000004, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::TmpAccessoryCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, Temp_byte_Variable) == 0x000005, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, Temp_byte_Variable_1) == 0x000006, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, Temp_byte_Variable_2) == 0x000007, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, Temp_byte_Variable_3) == 0x000008, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, Temp_byte_Variable_4) == 0x000009, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, Temp_byte_Variable_5) == 0x00000A, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, Temp_byte_Variable_6) == 0x00000B, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, Temp_byte_Variable_7) == 0x00000C, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, Temp_byte_Variable_8) == 0x00000D, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory, K2Node_Select_Default) == 0x00000E, "Member 'MyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetSelectedCostumeCategoryTitleText
// 0x005C (0x005C - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText final
{
public:
	E_MyCharaMenu_CostumeCategory                 InCostumeCategory;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               InAccessoryCategory;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_CostumeCategory                 Temp_byte_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89BF[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89C0[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText) == 0x000004, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText) == 0x00005C, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, InCostumeCategory) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::InCostumeCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, InAccessoryCategory) == 0x000001, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::InAccessoryCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_byte_Variable) == 0x000002, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable) == 0x000004, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_1) == 0x000008, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_2) == 0x00000C, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_3) == 0x000010, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_4) == 0x000014, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_5) == 0x000018, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_6) == 0x00001C, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_7) == 0x000020, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_byte_Variable_1) == 0x000024, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, K2Node_Select_Default) == 0x000028, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_8) == 0x00002C, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_9) == 0x000030, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_10) == 0x000034, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_11) == 0x000038, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_12) == 0x00003C, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_13) == 0x000040, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_14) == 0x000044, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_15) == 0x000048, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_int_Variable_16) == 0x00004C, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, Temp_bool_Variable) == 0x000050, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, K2Node_Select_Default_1) == 0x000054, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText, K2Node_Select_Default_2) == 0x000058, "Member 'MyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText::K2Node_Select_Default_2' has a wrong offset!");

// Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.UpdateIconSelected
// 0x0108 (0x0108 - 0x0000)
struct MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected final
{
public:
	struct FCharaEquipInfo                        EquipInfo;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UWidget*>                        LocalChilds;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         FindIndex;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89C1[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         TempUniqueIdList;                                  // 0x0028(0x0010)(Edit, BlueprintVisible)
	class FString                                 CheckUniqueId;                                     // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    EquipItemInfo;                                     // 0x0048(0x0028)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89C2[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0088(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89C3[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89C4[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89C5[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89C6[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn_1;              // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89C7[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x00E8(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected) == 0x000008, "Wrong alignment on MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected");
static_assert(sizeof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected) == 0x000108, "Wrong size on MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, EquipInfo) == 0x000000, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::EquipInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, LocalChilds) == 0x000010, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::LocalChilds' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, FindIndex) == 0x000020, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::FindIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, TempUniqueIdList) == 0x000028, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::TempUniqueIdList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CheckUniqueId) == 0x000038, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CheckUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, EquipItemInfo) == 0x000048, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::EquipItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, LoopEnd) == 0x000070, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::LoopEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_Array_LastIndex_ReturnValue) == 0x000074, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, Temp_int_Array_Index_Variable) == 0x000078, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, Temp_string_Variable) == 0x000088, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, Temp_int_Variable) == 0x000098, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_Add_IntInt_ReturnValue_1) == 0x00009C, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A0, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_GetChildAt_ReturnValue) == 0x0000A8, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x0000B0, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_Array_Find_ReturnValue) == 0x0000BC, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_Array_Add_ReturnValue) == 0x0000C4, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_IsValid_ReturnValue_1) == 0x0000D1, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, K2Node_DynamicCast_AsItem_Icon_Btn_1) == 0x0000D8, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::K2Node_DynamicCast_AsItem_Icon_Btn_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_GetAllChildren_ReturnValue) == 0x0000E8, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_Array_Add_ReturnValue_1) == 0x0000F8, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_Array_Length_ReturnValue) == 0x0000FC, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_Less_IntInt_ReturnValue) == 0x000100, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000101, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000102, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected, CallFunc_BooleanAND_ReturnValue) == 0x000103, "Member 'MyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

