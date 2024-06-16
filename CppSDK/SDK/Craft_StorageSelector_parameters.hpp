#pragma once

 

// Package: Craft_StorageSelector

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Craft_StorageSelector.Craft_StorageSelector_C.ExecuteUbergraph_Craft_StorageSelector
// 0x0130 (0x0130 - 0x0000)
struct Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6806[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6807[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCraftMachineSaveStorage_ReturnValue;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6808[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  K2Node_CustomEvent_RecepiData;                     // 0x0040(0x0008)(NoDestructor)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6809[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0050(0x0088)()
	int32                                         K2Node_CustomEvent_CraftCount;                     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_680A[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00E0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0108(0x0028)()
};
static_assert(alignof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector) == 0x000008, "Wrong alignment on Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector");
static_assert(sizeof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector) == 0x000130, "Wrong size on Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, EntryPoint) == 0x000000, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, CallFunc_GetConfigSaveManager_IsValid) == 0x000019, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000020, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, CallFunc_GetCraftMachineSaveStorage_ReturnValue) == 0x000028, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::CallFunc_GetCraftMachineSaveStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, CallFunc_GetCharacterId_ReturnValue_1) == 0x000030, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, K2Node_CustomEvent_RecepiData) == 0x000040, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::K2Node_CustomEvent_RecepiData' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, CallFunc_FindCraftMaster_bIsValid) == 0x000048, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, CallFunc_FindCraftMaster_CraftMaster) == 0x000050, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, K2Node_CustomEvent_CraftCount) == 0x0000D8, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::K2Node_CustomEvent_CraftCount' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, K2Node_MakeStruct_SlateColor) == 0x0000E0, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector, K2Node_MakeStruct_SlateColor_1) == 0x000108, "Member 'Craft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function Craft_StorageSelector.Craft_StorageSelector_C.Set CraftCount
// 0x0004 (0x0004 - 0x0000)
struct Craft_StorageSelector_C_Set_CraftCount final
{
public:
	int32                                         Param_CraftCount;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Craft_StorageSelector_C_Set_CraftCount) == 0x000004, "Wrong alignment on Craft_StorageSelector_C_Set_CraftCount");
static_assert(sizeof(Craft_StorageSelector_C_Set_CraftCount) == 0x000004, "Wrong size on Craft_StorageSelector_C_Set_CraftCount");
static_assert(offsetof(Craft_StorageSelector_C_Set_CraftCount, Param_CraftCount) == 0x000000, "Member 'Craft_StorageSelector_C_Set_CraftCount::Param_CraftCount' has a wrong offset!");

// Function Craft_StorageSelector.Craft_StorageSelector_C.Set RecepiData
// 0x0008 (0x0008 - 0x0000)
struct Craft_StorageSelector_C_Set_RecepiData final
{
public:
	struct FCharacterCraftRecepi                  RecepiData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(Craft_StorageSelector_C_Set_RecepiData) == 0x000004, "Wrong alignment on Craft_StorageSelector_C_Set_RecepiData");
static_assert(sizeof(Craft_StorageSelector_C_Set_RecepiData) == 0x000008, "Wrong size on Craft_StorageSelector_C_Set_RecepiData");
static_assert(offsetof(Craft_StorageSelector_C_Set_RecepiData, RecepiData) == 0x000000, "Member 'Craft_StorageSelector_C_Set_RecepiData::RecepiData' has a wrong offset!");

// Function Craft_StorageSelector.Craft_StorageSelector_C.UpdateStorageView
// 0x0068 (0x0068 - 0x0000)
struct Craft_StorageSelector_C_UpdateStorageView final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable;                                // 0x0003(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_1;                              // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     K2Node_Select_Default;                             // 0x000B(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_680B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetItemBag_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_1;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_2;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_680C[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSlackNum_ReturnValue;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_680D[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_5;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_6;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_7;                           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Craft_StorageSelector_C_UpdateStorageView) == 0x000008, "Wrong alignment on Craft_StorageSelector_C_UpdateStorageView");
static_assert(sizeof(Craft_StorageSelector_C_UpdateStorageView) == 0x000068, "Wrong size on Craft_StorageSelector_C_UpdateStorageView");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, Temp_bool_Variable) == 0x000000, "Member 'Craft_StorageSelector_C_UpdateStorageView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, Temp_bool_Variable_1) == 0x000001, "Member 'Craft_StorageSelector_C_UpdateStorageView::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, Temp_bool_Variable_2) == 0x000002, "Member 'Craft_StorageSelector_C_UpdateStorageView::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, Temp_byte_Variable) == 0x000003, "Member 'Craft_StorageSelector_C_UpdateStorageView::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, Temp_byte_Variable_1) == 0x000004, "Member 'Craft_StorageSelector_C_UpdateStorageView::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, Temp_bool_Variable_3) == 0x000005, "Member 'Craft_StorageSelector_C_UpdateStorageView::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, Temp_bool_Variable_4) == 0x000006, "Member 'Craft_StorageSelector_C_UpdateStorageView::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, CallFunc_MakeLiteralByte_ReturnValue) == 0x000007, "Member 'Craft_StorageSelector_C_UpdateStorageView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, Temp_bool_Variable_5) == 0x000008, "Member 'Craft_StorageSelector_C_UpdateStorageView::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, Temp_bool_Variable_6) == 0x000009, "Member 'Craft_StorageSelector_C_UpdateStorageView::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, Temp_bool_Variable_7) == 0x00000A, "Member 'Craft_StorageSelector_C_UpdateStorageView::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, K2Node_Select_Default) == 0x00000B, "Member 'Craft_StorageSelector_C_UpdateStorageView::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, CallFunc_GetEquipmentBag_ReturnValue) == 0x000010, "Member 'Craft_StorageSelector_C_UpdateStorageView::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, CallFunc_GetItemBag_ReturnValue) == 0x000018, "Member 'Craft_StorageSelector_C_UpdateStorageView::CallFunc_GetItemBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, CallFunc_GetCharacterStorage_ReturnValue) == 0x000020, "Member 'Craft_StorageSelector_C_UpdateStorageView::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, K2Node_Select_Default_1) == 0x000028, "Member 'Craft_StorageSelector_C_UpdateStorageView::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, K2Node_Select_Default_2) == 0x000030, "Member 'Craft_StorageSelector_C_UpdateStorageView::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000038, "Member 'Craft_StorageSelector_C_UpdateStorageView::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, CallFunc_GetSlackNum_ReturnValue) == 0x00003C, "Member 'Craft_StorageSelector_C_UpdateStorageView::CallFunc_GetSlackNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, CallFunc_Multiply_IntInt_ReturnValue) == 0x000040, "Member 'Craft_StorageSelector_C_UpdateStorageView::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, K2Node_Select_Default_3) == 0x000044, "Member 'Craft_StorageSelector_C_UpdateStorageView::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'Craft_StorageSelector_C_UpdateStorageView::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, K2Node_Select_Default_4) == 0x000049, "Member 'Craft_StorageSelector_C_UpdateStorageView::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, K2Node_Select_Default_5) == 0x000050, "Member 'Craft_StorageSelector_C_UpdateStorageView::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, K2Node_Select_Default_6) == 0x000058, "Member 'Craft_StorageSelector_C_UpdateStorageView::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_UpdateStorageView, K2Node_Select_Default_7) == 0x000060, "Member 'Craft_StorageSelector_C_UpdateStorageView::K2Node_Select_Default_7' has a wrong offset!");

// Function Craft_StorageSelector.Craft_StorageSelector_C.IsStorage
// 0x0001 (0x0001 - 0x0000)
struct Craft_StorageSelector_C_IsStorage final
{
public:
	bool                                          Param_CurrentIsStorage;                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Craft_StorageSelector_C_IsStorage) == 0x000001, "Wrong alignment on Craft_StorageSelector_C_IsStorage");
static_assert(sizeof(Craft_StorageSelector_C_IsStorage) == 0x000001, "Wrong size on Craft_StorageSelector_C_IsStorage");
static_assert(offsetof(Craft_StorageSelector_C_IsStorage, Param_CurrentIsStorage) == 0x000000, "Member 'Craft_StorageSelector_C_IsStorage::Param_CurrentIsStorage' has a wrong offset!");

// Function Craft_StorageSelector.Craft_StorageSelector_C.GetSelectStorageNo
// 0x000C (0x000C - 0x0000)
struct Craft_StorageSelector_C_GetSelectStorageNo final
{
public:
	int32                                         StorageNo;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Craft_StorageSelector_C_GetSelectStorageNo) == 0x000004, "Wrong alignment on Craft_StorageSelector_C_GetSelectStorageNo");
static_assert(sizeof(Craft_StorageSelector_C_GetSelectStorageNo) == 0x00000C, "Wrong size on Craft_StorageSelector_C_GetSelectStorageNo");
static_assert(offsetof(Craft_StorageSelector_C_GetSelectStorageNo, StorageNo) == 0x000000, "Member 'Craft_StorageSelector_C_GetSelectStorageNo::StorageNo' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_GetSelectStorageNo, CallFunc_SelectInt_ReturnValue) == 0x000004, "Member 'Craft_StorageSelector_C_GetSelectStorageNo::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Craft_StorageSelector_C_GetSelectStorageNo, CallFunc_SelectInt_ReturnValue_1) == 0x000008, "Member 'Craft_StorageSelector_C_GetSelectStorageNo::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");

}

