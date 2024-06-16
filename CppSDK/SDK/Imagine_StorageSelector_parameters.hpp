#pragma once

 

// Package: Imagine_StorageSelector

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Imagine_StorageSelector.Imagine_StorageSelector_C.ExecuteUbergraph_Imagine_StorageSelector
// 0x00D8 (0x00D8 - 0x0000)
struct Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C67[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C68[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetImagineCraftSaveStorage_ReturnValue;   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C69[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  K2Node_CustomEvent_RecepiData;                     // 0x0068(0x0008)(NoDestructor)
	bool                                          CallFunc_FindImagineRecipeMaster_bIsValid;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C6A[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster; // 0x0078(0x0038)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00B0(0x0028)()
};
static_assert(alignof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector) == 0x000008, "Wrong alignment on Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector");
static_assert(sizeof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector) == 0x0000D8, "Wrong size on Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, EntryPoint) == 0x000000, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, CallFunc_GetCharacterId_ReturnValue) == 0x000030, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, CallFunc_GetConfigSaveManager_IsValid) == 0x000041, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000048, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, CallFunc_GetImagineCraftSaveStorage_ReturnValue) == 0x000050, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::CallFunc_GetImagineCraftSaveStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, CallFunc_GetCharacterId_ReturnValue_1) == 0x000058, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, K2Node_CustomEvent_RecepiData) == 0x000068, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::K2Node_CustomEvent_RecepiData' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, CallFunc_FindImagineRecipeMaster_bIsValid) == 0x000070, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::CallFunc_FindImagineRecipeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster) == 0x000078, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::CallFunc_FindImagineRecipeMaster_ImagineRecipeMaster' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector, K2Node_MakeStruct_SlateColor_1) == 0x0000B0, "Member 'Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function Imagine_StorageSelector.Imagine_StorageSelector_C.Set RecepiData
// 0x0008 (0x0008 - 0x0000)
struct Imagine_StorageSelector_C_Set_RecepiData final
{
public:
	struct FCharacterCraftRecepi                  RecepiData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(Imagine_StorageSelector_C_Set_RecepiData) == 0x000004, "Wrong alignment on Imagine_StorageSelector_C_Set_RecepiData");
static_assert(sizeof(Imagine_StorageSelector_C_Set_RecepiData) == 0x000008, "Wrong size on Imagine_StorageSelector_C_Set_RecepiData");
static_assert(offsetof(Imagine_StorageSelector_C_Set_RecepiData, RecepiData) == 0x000000, "Member 'Imagine_StorageSelector_C_Set_RecepiData::RecepiData' has a wrong offset!");

// Function Imagine_StorageSelector.Imagine_StorageSelector_C.UpdateStorageView
// 0x0038 (0x0038 - 0x0000)
struct Imagine_StorageSelector_C_UpdateStorageView final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C6B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSlackNum_ReturnValue;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C6C[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Imagine_StorageSelector_C_UpdateStorageView) == 0x000008, "Wrong alignment on Imagine_StorageSelector_C_UpdateStorageView");
static_assert(sizeof(Imagine_StorageSelector_C_UpdateStorageView) == 0x000038, "Wrong size on Imagine_StorageSelector_C_UpdateStorageView");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'Imagine_StorageSelector_C_UpdateStorageView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, Temp_bool_Variable) == 0x000001, "Member 'Imagine_StorageSelector_C_UpdateStorageView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, Temp_bool_Variable_1) == 0x000002, "Member 'Imagine_StorageSelector_C_UpdateStorageView::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, Temp_bool_Variable_2) == 0x000003, "Member 'Imagine_StorageSelector_C_UpdateStorageView::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000004, "Member 'Imagine_StorageSelector_C_UpdateStorageView::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, CallFunc_GetEquipmentBag_ReturnValue) == 0x000008, "Member 'Imagine_StorageSelector_C_UpdateStorageView::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, CallFunc_GetCharacterStorage_ReturnValue) == 0x000010, "Member 'Imagine_StorageSelector_C_UpdateStorageView::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, K2Node_Select_Default) == 0x000018, "Member 'Imagine_StorageSelector_C_UpdateStorageView::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, CallFunc_GetSlackNum_ReturnValue) == 0x000020, "Member 'Imagine_StorageSelector_C_UpdateStorageView::CallFunc_GetSlackNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'Imagine_StorageSelector_C_UpdateStorageView::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, K2Node_Select_Default_1) == 0x000028, "Member 'Imagine_StorageSelector_C_UpdateStorageView::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_UpdateStorageView, K2Node_Select_Default_2) == 0x000030, "Member 'Imagine_StorageSelector_C_UpdateStorageView::K2Node_Select_Default_2' has a wrong offset!");

// Function Imagine_StorageSelector.Imagine_StorageSelector_C.IsStorage
// 0x0001 (0x0001 - 0x0000)
struct Imagine_StorageSelector_C_IsStorage final
{
public:
	bool                                          Param_CurrentIsStorage;                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Imagine_StorageSelector_C_IsStorage) == 0x000001, "Wrong alignment on Imagine_StorageSelector_C_IsStorage");
static_assert(sizeof(Imagine_StorageSelector_C_IsStorage) == 0x000001, "Wrong size on Imagine_StorageSelector_C_IsStorage");
static_assert(offsetof(Imagine_StorageSelector_C_IsStorage, Param_CurrentIsStorage) == 0x000000, "Member 'Imagine_StorageSelector_C_IsStorage::Param_CurrentIsStorage' has a wrong offset!");

// Function Imagine_StorageSelector.Imagine_StorageSelector_C.GetSelectStorageNo
// 0x000C (0x000C - 0x0000)
struct Imagine_StorageSelector_C_GetSelectStorageNo final
{
public:
	int32                                         StorageNo;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C6D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Imagine_StorageSelector_C_GetSelectStorageNo) == 0x000004, "Wrong alignment on Imagine_StorageSelector_C_GetSelectStorageNo");
static_assert(sizeof(Imagine_StorageSelector_C_GetSelectStorageNo) == 0x00000C, "Wrong size on Imagine_StorageSelector_C_GetSelectStorageNo");
static_assert(offsetof(Imagine_StorageSelector_C_GetSelectStorageNo, StorageNo) == 0x000000, "Member 'Imagine_StorageSelector_C_GetSelectStorageNo::StorageNo' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_GetSelectStorageNo, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'Imagine_StorageSelector_C_GetSelectStorageNo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Imagine_StorageSelector_C_GetSelectStorageNo, CallFunc_SelectInt_ReturnValue) == 0x000008, "Member 'Imagine_StorageSelector_C_GetSelectStorageNo::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

}

