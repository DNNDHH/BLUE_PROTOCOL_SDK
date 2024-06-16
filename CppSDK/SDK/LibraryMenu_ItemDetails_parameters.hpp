#pragma once

 

// Package: LibraryMenu_ItemDetails

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "EPictureBookMakeListSortType_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnChangeFilter__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_ItemDetails_C_OnChangeFilter__DelegateSignature final
{
public:
	EPictureBookMakeListSortType                  Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_OnChangeFilter__DelegateSignature) == 0x000001, "Wrong alignment on LibraryMenu_ItemDetails_C_OnChangeFilter__DelegateSignature");
static_assert(sizeof(LibraryMenu_ItemDetails_C_OnChangeFilter__DelegateSignature) == 0x000001, "Wrong size on LibraryMenu_ItemDetails_C_OnChangeFilter__DelegateSignature");
static_assert(offsetof(LibraryMenu_ItemDetails_C_OnChangeFilter__DelegateSignature, Param_SortType) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_OnChangeFilter__DelegateSignature::Param_SortType' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.ExecuteUbergraph_LibraryMenu_ItemDetails
// 0x01B8 (0x01B8 - 0x0000)
struct LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AF1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AF2[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AF3[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AF4[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InItemIndex;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AF5[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AF6[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0048(0x00D0)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AF7[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AF8[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0140(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AF9[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x016C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5AFA[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AFB[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AFC[0x5];                                     // 0x019B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPictureBook_MakeListItem_C*            CallFunc_Create_ReturnValue;                       // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AFD[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails");
static_assert(sizeof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails) == 0x0001B8, "Wrong size on LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, EntryPoint) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, Temp_object_Variable) == 0x000008, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, Temp_int_Variable) == 0x000010, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000015, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_DynamicCast_AsTexture_2D) == 0x000020, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_CustomEvent_InItemIndex) == 0x00002C, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_CustomEvent_InItemIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_GetMasterDataManager_IsValid) == 0x000030, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_GetItemMasterData_IsExists) == 0x000040, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_GetItemMasterData_ReturnValue) == 0x000048, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_Greater_IntInt_ReturnValue) == 0x000118, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000120, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_CustomEvent_Loaded) == 0x000128, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000130, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_DynamicCast_bSuccess_1) == 0x000138, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_GetGender_ReturnValue) == 0x000139, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000140, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000168, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_Event_IsDesignTime) == 0x000169, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_CreateDelegate_OutputDelegate) == 0x00016C, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_ComponentBoundEvent_SelectedItem) == 0x000180, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_ComponentBoundEvent_SelectionType) == 0x000190, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_GetSelectedIndex_ReturnValue) == 0x000194, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_Conv_IntToByte_ReturnValue) == 0x000198, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_GetValidValue_ReturnValue) == 0x000199, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, K2Node_SwitchEnum_CmpSuccess) == 0x00019A, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_Create_ReturnValue) == 0x0001A0, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0001A8, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails, CallFunc_AddChild_ReturnValue) == 0x0001B0, "Member 'LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(LibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on LibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(LibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'LibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_ItemDetails_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_PreConstruct) == 0x000001, "Wrong alignment on LibraryMenu_ItemDetails_C_PreConstruct");
static_assert(sizeof(LibraryMenu_ItemDetails_C_PreConstruct) == 0x000001, "Wrong size on LibraryMenu_ItemDetails_C_PreConstruct");
static_assert(offsetof(LibraryMenu_ItemDetails_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetItemImage
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_ItemDetails_C_SetItemImage final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_SetItemImage) == 0x000004, "Wrong alignment on LibraryMenu_ItemDetails_C_SetItemImage");
static_assert(sizeof(LibraryMenu_ItemDetails_C_SetItemImage) == 0x000004, "Wrong size on LibraryMenu_ItemDetails_C_SetItemImage");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemImage, InItemIndex) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_SetItemImage::InItemIndex' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnLoaded_809AD089417D6D92E51C08859E31E5BD
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_ItemDetails_C_OnLoaded_809AD089417D6D92E51C08859E31E5BD final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_OnLoaded_809AD089417D6D92E51C08859E31E5BD) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_OnLoaded_809AD089417D6D92E51C08859E31E5BD");
static_assert(sizeof(LibraryMenu_ItemDetails_C_OnLoaded_809AD089417D6D92E51C08859E31E5BD) == 0x000008, "Wrong size on LibraryMenu_ItemDetails_C_OnLoaded_809AD089417D6D92E51C08859E31E5BD");
static_assert(offsetof(LibraryMenu_ItemDetails_C_OnLoaded_809AD089417D6D92E51C08859E31E5BD, Loaded) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_OnLoaded_809AD089417D6D92E51C08859E31E5BD::Loaded' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Initialize
// 0x0040 (0x0040 - 0x0000)
struct LibraryMenu_ItemDetails_C_Initialize final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AFE[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_Initialize) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_Initialize");
static_assert(sizeof(LibraryMenu_ItemDetails_C_Initialize) == 0x000040, "Wrong size on LibraryMenu_ItemDetails_C_Initialize");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Initialize, Temp_int_Array_Index_Variable) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_Initialize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Initialize, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'LibraryMenu_ItemDetails_C_Initialize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'LibraryMenu_ItemDetails_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Initialize, K2Node_MakeArray_Array) == 0x000010, "Member 'LibraryMenu_ItemDetails_C_Initialize::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Initialize, CallFunc_Array_Get_Item) == 0x000020, "Member 'LibraryMenu_ItemDetails_C_Initialize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Initialize, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000028, "Member 'LibraryMenu_ItemDetails_C_Initialize::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'LibraryMenu_ItemDetails_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'LibraryMenu_ItemDetails_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetDetailsVisibility
// 0x00E8 (0x00E8 - 0x0000)
struct LibraryMenu_ItemDetails_C_SetDetailsVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AFF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        K2Node_MakeStruct_ItemMasterData;                  // 0x0008(0x00D0)()
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B00[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_SetDetailsVisibility) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_SetDetailsVisibility");
static_assert(sizeof(LibraryMenu_ItemDetails_C_SetDetailsVisibility) == 0x0000E8, "Wrong size on LibraryMenu_ItemDetails_C_SetDetailsVisibility");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetDetailsVisibility, bVisible) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_SetDetailsVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetDetailsVisibility, K2Node_MakeStruct_ItemMasterData) == 0x000008, "Member 'LibraryMenu_ItemDetails_C_SetDetailsVisibility::K2Node_MakeStruct_ItemMasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetDetailsVisibility, CallFunc_GetVisibility_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_ItemDetails_C_SetDetailsVisibility::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetDetailsVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D9, "Member 'LibraryMenu_ItemDetails_C_SetDetailsVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetDetailsVisibility, CallFunc_PlayAnimation_ReturnValue) == 0x0000E0, "Member 'LibraryMenu_ItemDetails_C_SetDetailsVisibility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetItemData
// 0x0650 (0x0650 - 0x0000)
struct LibraryMenu_ItemDetails_C_SetItemData final
{
public:
	struct FItemMasterData                        InItemMasterData;                                  // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBSyntheAbilityData                   SyntheAbilityMax;                                  // 0x00D0(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBSyntheAbilityData                   SyntheAbilityMin;                                  // 0x00EC(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBAbilityTextData                     FusionItemText;                                    // 0x0108(0x0050)(Edit, BlueprintVisible)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x015B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B01[0x2];                                     // 0x015E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0160(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x01A0(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B02[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01C0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0200(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B03[0x6];                                     // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue_1;                // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B04[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0248(0x0018)()
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0260(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue_2;                // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0298(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02B0(0x0018)()
	class FString                                 CallFunc_GetItemText_ReturnValue_3;                // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B05[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x02DC(0x0018)(NoDestructor)
	uint8                                         Pad_5B06[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x02F8(0x0018)()
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy; // 0x0310(0x001C)(NoDestructor)
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy; // 0x032C(0x001C)(NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0348(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B07[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0390(0x0010)(ReferenceParm)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B08[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x03A8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B09[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x03F0(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0402(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFusionItemTextCollection_bIsValid;     // 0x0403(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B0A[0x4];                                     // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     CallFunc_GetFusionItemTextCollection_ReturnValue;  // 0x0408(0x0050)(ConstParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0458(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B0B[0x7];                                     // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0478(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0490(0x0018)()
	class FString                                 Temp_string_Variable;                              // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x04B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B0C[0x6];                                     // 0x04BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_1;                           // 0x04C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x04D0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B0D[0x7];                                     // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x04F0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0530(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_3;                              // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0541(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0542(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0543(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0544(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0545(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B0E[0x2];                                     // 0x0546(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0548(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B0F[0x7];                                     // 0x0559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0560(0x0018)()
	bool                                          Temp_bool_Variable_5;                              // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B10[0x7];                                     // 0x0579(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0580(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0598(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0599(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B11[0x6];                                     // 0x059A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x05A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x05B0(0x0018)()
	class FText                                   K2Node_Select_Default_5;                           // 0x05C8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x05E0(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x05F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0608(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0620(0x0018)()
	class FText                                   K2Node_Select_Default_6;                           // 0x0638(0x0018)()
};
static_assert(alignof(LibraryMenu_ItemDetails_C_SetItemData) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_SetItemData");
static_assert(sizeof(LibraryMenu_ItemDetails_C_SetItemData) == 0x000650, "Wrong size on LibraryMenu_ItemDetails_C_SetItemData");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, InItemMasterData) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_SetItemData::InItemMasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, SyntheAbilityMax) == 0x0000D0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::SyntheAbilityMax' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, SyntheAbilityMin) == 0x0000EC, "Member 'LibraryMenu_ItemDetails_C_SetItemData::SyntheAbilityMin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, FusionItemText) == 0x000108, "Member 'LibraryMenu_ItemDetails_C_SetItemData::FusionItemText' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000158, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, Temp_bool_Variable) == 0x000159, "Member 'LibraryMenu_ItemDetails_C_SetItemData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00015A, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00015B, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, Temp_bool_Variable_1) == 0x00015C, "Member 'LibraryMenu_ItemDetails_C_SetItemData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00015D, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_MakeStruct_FormatArgumentData) == 0x000160, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_IntToText_ReturnValue) == 0x0001A0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001B8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001C0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000200, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000218, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_SwitchEnum_CmpSuccess) == 0x000219, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_GetItemText_ReturnValue) == 0x000220, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_GetItemText_ReturnValue_1) == 0x000230, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_GetItemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000240, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue) == 0x000248, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_FloatToText_ReturnValue) == 0x000260, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_IntToString_ReturnValue) == 0x000278, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_GetItemText_ReturnValue_2) == 0x000288, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_GetItemText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000298, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002B0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_GetItemText_ReturnValue_3) == 0x0002C8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_GetItemText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_FindFusionItemMaster_IsValid) == 0x0002D8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x0002DC, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0002F8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy) == 0x000310, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy) == 0x00032C, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_MakeStruct_FormatArgumentData_2) == 0x000348, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000388, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_MakeArray_Array) == 0x000390, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0003A0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_MakeStruct_FormatArgumentData_3) == 0x0003A8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_BooleanOR_ReturnValue) == 0x0003E8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_MakeArray_Array_1) == 0x0003F0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000400, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x000401, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_BooleanOR_ReturnValue_1) == 0x000402, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_GetFusionItemTextCollection_bIsValid) == 0x000403, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_GetFusionItemTextCollection_bIsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_GetFusionItemTextCollection_ReturnValue) == 0x000408, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_GetFusionItemTextCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000458, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, Temp_bool_Variable_2) == 0x000470, "Member 'LibraryMenu_ItemDetails_C_SetItemData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000478, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000490, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, Temp_string_Variable) == 0x0004A8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_Select_Default) == 0x0004B8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0004B9, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_Select_Default_1) == 0x0004C0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0004D0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0004E8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_MakeStruct_FormatArgumentData_4) == 0x0004F0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_MakeArray_Array_2) == 0x000530, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, Temp_bool_Variable_3) == 0x000540, "Member 'LibraryMenu_ItemDetails_C_SetItemData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000541, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_Select_Default_2) == 0x000542, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000543, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000544, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, Temp_bool_Variable_4) == 0x000545, "Member 'LibraryMenu_ItemDetails_C_SetItemData::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000548, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_Select_Default_3) == 0x000558, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000560, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, Temp_bool_Variable_5) == 0x000578, "Member 'LibraryMenu_ItemDetails_C_SetItemData::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Format_ReturnValue) == 0x000580, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_Select_Default_4) == 0x000598, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, Temp_bool_Variable_6) == 0x000599, "Member 'LibraryMenu_ItemDetails_C_SetItemData::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_GetTextFromAsset_ReturnValue) == 0x0005A0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_8) == 0x0005B0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_Select_Default_5) == 0x0005C8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Format_ReturnValue_1) == 0x0005E0, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0005F8, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000608, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, CallFunc_Format_ReturnValue_2) == 0x000620, "Member 'LibraryMenu_ItemDetails_C_SetItemData::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetItemData, K2Node_Select_Default_6) == 0x000638, "Member 'LibraryMenu_ItemDetails_C_SetItemData::K2Node_Select_Default_6' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetMakeData
// 0x0A58 (0x0A58 - 0x0000)
struct LibraryMenu_ItemDetails_C_SetMakeData final
{
public:
	int32                                         TmpMakeCount;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B12[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TmpItemIdCreateList;                               // 0x0008(0x0010)(Edit, BlueprintVisible)
	struct FSBLibraryItemMakeListData             TmpMakeListData;                                   // 0x0018(0x0028)(Edit, BlueprintVisible)
	TArray<int32>                                 TmpReadMakeList;                                   // 0x0040(0x0010)(Edit, BlueprintVisible)
	TArray<struct FCraftMasterData>               TmpAllCraftRecepi;                                 // 0x0050(0x0010)(Edit, BlueprintVisible)
	TArray<struct FMasterImagineRecepi>           TmpAllImagineRecepi;                               // 0x0060(0x0010)(Edit, BlueprintVisible)
	struct FSBMasterImagine                       TmpImagineMasterData;                              // 0x0070(0x00B0)(Edit, BlueprintVisible)
	struct FSBWeaponMasterData                    TmpWeaponMasterData;                               // 0x0120(0x00B0)(Edit, BlueprintVisible)
	bool                                          TmpIsFindRecepi;                                   // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B13[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   TmpImagineData;                                    // 0x01D8(0x0038)(Edit, BlueprintVisible)
	struct FCraftMasterData                       TmpCraftData;                                      // 0x0210(0x0088)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x02B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B14[0x2];                                     // 0x02B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPictureBookMakeListSortType                  Temp_byte_Variable;                                // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x02C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPictureBookMakeListSortType                  Temp_byte_Variable_1;                              // 0x02C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        Temp_byte_Variable_2;                              // 0x02C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckWeaponFilter_Result;                 // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B15[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckImagineFilter_Result;                // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B16[0x6];                                     // 0x02EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x02F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EPictureBookMakeListSortType                  K2Node_Select_Default;                             // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B17[0x3];                                     // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckSortFilterType_Result;               // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B18[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_Array_Get_Item;                           // 0x0310(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x034C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B19[0x3];                                     // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B1A[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_Array_Get_Item_1;                         // 0x0358(0x0088)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x03E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B1B[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList; // 0x03EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B1C[0x3];                                     // 0x03ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x03F0(0x0010)(ZeroConstructor, NoDestructor)
	class UPictureBook_MakeListItem_C*            CallFunc_Create_ReturnValue;                       // 0x0400(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x040C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibraryItemMakeListData             K2Node_MakeStruct_SBLibraryItemMakeListData;       // 0x0410(0x0028)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B1D[0x7];                                     // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0440(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x045C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B1E[0x3];                                     // 0x045D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0464(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0465(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B1F[0x2];                                     // 0x0466(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B20[0x4];                                     // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0470(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B21[0x7];                                     // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0488(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetNew_IsAddRead;                         // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0499(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B22[0x6];                                     // 0x049A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x04A8(0x0218)()
	int32                                         Temp_int_Variable_3;                               // 0x06C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x06C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x06C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyChildren_ReturnValue;               // 0x06C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x06C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x06C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B23[0x4];                                     // 0x06CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x06D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue;             // 0x06E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue;            // 0x06E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckSortFilterType_Result_1;             // 0x06F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x06F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckSortFilterType_Result_2;             // 0x06F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B24[0x1];                                     // 0x06F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftNeedItems                        CallFunc_Array_Get_Item_2;                         // 0x06F4(0x0008)(NoDestructor)
	struct FMasterImagineMaterial                 CallFunc_Array_Get_Item_3;                         // 0x06FC(0x000C)(NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0709(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B25[0x2];                                     // 0x070A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x070C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0710(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B26[0x3];                                     // 0x0711(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0714(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B27[0x3];                                     // 0x0719(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x071C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0720(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B28[0x7];                                     // 0x0721(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0728(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0730(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B29[0x7];                                     // 0x0731(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0738(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCraftMasterData>               CallFunc_GetCraftAllRecepi_MasterData;             // 0x0740(0x0010)(ReferenceParm)
	TArray<struct FMasterImagineRecepi>           CallFunc_GetAllMasterImagineRecepi_ReturnValue;    // 0x0750(0x0010)(ReferenceParm)
	bool                                          CallFunc_CheckTerm_Result;                         // 0x0760(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckTerm_Result_1;                       // 0x0761(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0762(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B2A[0x5];                                     // 0x0763(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0768(0x00B0)()
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0818(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B2B[0x7];                                     // 0x0819(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0820(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x08F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBLibraryItemMakeListData             K2Node_MakeStruct_SBLibraryItemMakeListData_1;     // 0x0900(0x0028)()
	struct FSBLibraryItemMakeListData             K2Node_MakeStruct_SBLibraryItemMakeListData_2;     // 0x0928(0x0028)()
	bool                                          CallFunc_FindPlayerRecepi_IsExist;                 // 0x0950(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B2C[0x3];                                     // 0x0951(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  CallFunc_FindPlayerRecepi_ReturnValue;             // 0x0954(0x0008)(ConstParm, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x095C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B2D[0x3];                                     // 0x095D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0960(0x00B0)()
	bool                                          CallFunc_FindImagineRecepi_IsExist;                // 0x0A10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B2E[0x3];                                     // 0x0A11(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  CallFunc_FindImagineRecepi_ReturnValue;            // 0x0A14(0x0008)(ConstParm, NoDestructor)
	uint8                                         Pad_5B2F[0x4];                                     // 0x0A1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0A20(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetReadItemMakeList_OutReadMakeList;      // 0x0A28(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x0A38(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B30[0x4];                                     // 0x0A3C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0A40(0x0018)()
};
static_assert(alignof(LibraryMenu_ItemDetails_C_SetMakeData) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_SetMakeData");
static_assert(sizeof(LibraryMenu_ItemDetails_C_SetMakeData) == 0x000A58, "Wrong size on LibraryMenu_ItemDetails_C_SetMakeData");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpMakeCount) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpMakeCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpItemIdCreateList) == 0x000008, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpItemIdCreateList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpMakeListData) == 0x000018, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpMakeListData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpReadMakeList) == 0x000040, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpReadMakeList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpAllCraftRecepi) == 0x000050, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpAllCraftRecepi' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpAllImagineRecepi) == 0x000060, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpAllImagineRecepi' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpImagineMasterData) == 0x000070, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpImagineMasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpWeaponMasterData) == 0x000120, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpWeaponMasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpIsFindRecepi) == 0x0001D0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpIsFindRecepi' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpImagineData) == 0x0001D8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpImagineData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, TmpCraftData) == 0x000210, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::TmpCraftData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Array_Index_Variable) == 0x000298, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Variable) == 0x00029C, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Loop_Counter_Variable) == 0x0002A0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Add_IntInt_ReturnValue) == 0x0002A4, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Array_Index_Variable_1) == 0x0002A8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Loop_Counter_Variable_1) == 0x0002AC, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002B0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_bool_Variable) == 0x0002B4, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_bool_Variable_1) == 0x0002B5, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Loop_Counter_Variable_2) == 0x0002B8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Add_IntInt_ReturnValue_2) == 0x0002BC, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Array_Index_Variable_2) == 0x0002C0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_byte_Variable) == 0x0002C4, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_MakeLiteralByte_ReturnValue) == 0x0002C5, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_byte_Variable_1) == 0x0002C6, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_byte_Variable_2) == 0x0002C7, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Loop_Counter_Variable_3) == 0x0002C8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002CC, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Array_Index_Variable_3) == 0x0002D0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_CheckWeaponFilter_Result) == 0x0002D4, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_CheckWeaponFilter_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetWeaponText_ReturnValue) == 0x0002D8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002E8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_CheckImagineFilter_Result) == 0x0002E9, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_CheckImagineFilter_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetMasterImagineText_ReturnValue) == 0x0002F0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, K2Node_Select_Default) == 0x000300, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Add_IntInt_ReturnValue_4) == 0x000304, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_CheckSortFilterType_Result) == 0x000308, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_CheckSortFilterType_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Get_Item) == 0x000310, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Length_ReturnValue) == 0x000348, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Less_IntInt_ReturnValue) == 0x00034C, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Add_IntInt_ReturnValue_5) == 0x000350, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Get_Item_1) == 0x000358, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Length_ReturnValue_1) == 0x0003E0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Less_IntInt_ReturnValue_1) == 0x0003E4, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Add_IntInt_ReturnValue_6) == 0x0003E8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList) == 0x0003EC, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, K2Node_CreateDelegate_OutputDelegate) == 0x0003F0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Create_ReturnValue) == 0x000400, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Variable_1) == 0x000408, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Variable_2) == 0x00040C, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, K2Node_MakeStruct_SBLibraryItemMakeListData) == 0x000410, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::K2Node_MakeStruct_SBLibraryItemMakeListData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Not_PreBool_ReturnValue) == 0x000438, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Conv_StringToText_ReturnValue) == 0x000440, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Add_ReturnValue) == 0x000458, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_bool_Variable_2) == 0x00045C, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Length_ReturnValue_2) == 0x000460, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000464, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_bool_Variable_3) == 0x000465, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_AddUnique_ReturnValue) == 0x000468, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetCharacterId_ReturnValue) == 0x000470, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Contains_ReturnValue) == 0x000480, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetPlayerId_ReturnValue) == 0x000488, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_SetNew_IsAddRead) == 0x000498, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_SetNew_IsAddRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetLibrarySaveManager_IsValid) == 0x000499, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x0004A0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_LoadLibraryData_ReturnValue) == 0x0004A8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Variable_3) == 0x0006C0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, K2Node_Select_Default_1) == 0x0006C4, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0006C5, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_HasAnyChildren_ReturnValue) == 0x0006C6, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, K2Node_Select_Default_2) == 0x0006C7, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, K2Node_Select_Default_3) == 0x0006C8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetSBPlayerController_ReturnValue) == 0x0006D0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0006D8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetImaginLabComp_ReturnValue) == 0x0006E0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetImaginLabComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetCraftComponent_ReturnValue) == 0x0006E8, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetCraftComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_CheckSortFilterType_Result_1) == 0x0006F0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_CheckSortFilterType_Result_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0006F1, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_CheckSortFilterType_Result_2) == 0x0006F2, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_CheckSortFilterType_Result_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Get_Item_2) == 0x0006F4, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Get_Item_3) == 0x0006FC, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000708, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000709, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Length_ReturnValue_3) == 0x00070C, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Less_IntInt_ReturnValue_2) == 0x000710, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Array_Length_ReturnValue_4) == 0x000714, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Less_IntInt_ReturnValue_3) == 0x000718, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, Temp_int_Variable_4) == 0x00071C, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetMasterDataManager_IsValid) == 0x000720, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000728, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetMasterDataManager_IsValid_1) == 0x000730, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000738, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetCraftAllRecepi_MasterData) == 0x000740, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetCraftAllRecepi_MasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetAllMasterImagineRecepi_ReturnValue) == 0x000750, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetAllMasterImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_CheckTerm_Result) == 0x000760, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_CheckTerm_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_CheckTerm_Result_1) == 0x000761, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_CheckTerm_Result_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_FindWeaponMaster_bIsValid) == 0x000762, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000768, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_FindItemMaster_bIsValid) == 0x000818, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_FindItemMaster_ItemMaster) == 0x000820, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetItemText_ReturnValue) == 0x0008F0, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, K2Node_MakeStruct_SBLibraryItemMakeListData_1) == 0x000900, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::K2Node_MakeStruct_SBLibraryItemMakeListData_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, K2Node_MakeStruct_SBLibraryItemMakeListData_2) == 0x000928, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::K2Node_MakeStruct_SBLibraryItemMakeListData_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_FindPlayerRecepi_IsExist) == 0x000950, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_FindPlayerRecepi_IsExist' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_FindPlayerRecepi_ReturnValue) == 0x000954, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_FindPlayerRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_FindImagineMaster_bIsValid) == 0x00095C, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_FindImagineMaster_ImagineMaster) == 0x000960, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_FindImagineRecepi_IsExist) == 0x000A10, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_FindImagineRecepi_IsExist' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_FindImagineRecepi_ReturnValue) == 0x000A14, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_FindImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_AddChild_ReturnValue) == 0x000A20, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetReadItemMakeList_OutReadMakeList) == 0x000A28, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetReadItemMakeList_OutReadMakeList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x000A38, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetMakeData, CallFunc_Conv_IntToText_ReturnValue) == 0x000A40, "Member 'LibraryMenu_ItemDetails_C_SetMakeData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetActiveTab
// 0x0500 (0x0500 - 0x0000)
struct LibraryMenu_ItemDetails_C_SetActiveTab final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B31[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           SelectedBtn;                                       // 0x0008(0x0278)(Edit, BlueprintVisible)
	struct FButtonStyle                           NormalBtn;                                         // 0x0280(0x0278)(Edit, BlueprintVisible)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x04F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_SetActiveTab) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_SetActiveTab");
static_assert(sizeof(LibraryMenu_ItemDetails_C_SetActiveTab) == 0x000500, "Wrong size on LibraryMenu_ItemDetails_C_SetActiveTab");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetActiveTab, Param_Index) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_SetActiveTab::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetActiveTab, SelectedBtn) == 0x000008, "Member 'LibraryMenu_ItemDetails_C_SetActiveTab::SelectedBtn' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetActiveTab, NormalBtn) == 0x000280, "Member 'LibraryMenu_ItemDetails_C_SetActiveTab::NormalBtn' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetActiveTab, K2Node_SwitchInteger_CmpSuccess) == 0x0004F8, "Member 'LibraryMenu_ItemDetails_C_SetActiveTab::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetActiveTab, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0004F9, "Member 'LibraryMenu_ItemDetails_C_SetActiveTab::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetSortFilter
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_ItemDetails_C_SetSortFilter final
{
public:
	TArray<struct FFilterGroup>                   Filter;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_SetSortFilter) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_SetSortFilter");
static_assert(sizeof(LibraryMenu_ItemDetails_C_SetSortFilter) == 0x000010, "Wrong size on LibraryMenu_ItemDetails_C_SetSortFilter");
static_assert(offsetof(LibraryMenu_ItemDetails_C_SetSortFilter, Filter) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_SetSortFilter::Filter' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckSortFilterType
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_ItemDetails_C_CheckSortFilterType final
{
public:
	EPictureBookMakeListSortType                  Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EPictureBookMakeListSortType                  TmpSortType;                                       // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B32[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_CheckSortFilterType) == 0x000004, "Wrong alignment on LibraryMenu_ItemDetails_C_CheckSortFilterType");
static_assert(sizeof(LibraryMenu_ItemDetails_C_CheckSortFilterType) == 0x000010, "Wrong size on LibraryMenu_ItemDetails_C_CheckSortFilterType");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckSortFilterType, Param_SortType) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_CheckSortFilterType::Param_SortType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckSortFilterType, Result) == 0x000001, "Member 'LibraryMenu_ItemDetails_C_CheckSortFilterType::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckSortFilterType, TmpSortType) == 0x000002, "Member 'LibraryMenu_ItemDetails_C_CheckSortFilterType::TmpSortType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckSortFilterType, CallFunc_GetSelectedIndex_ReturnValue) == 0x000004, "Member 'LibraryMenu_ItemDetails_C_CheckSortFilterType::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckSortFilterType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000008, "Member 'LibraryMenu_ItemDetails_C_CheckSortFilterType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckSortFilterType, CallFunc_Conv_IntToByte_ReturnValue) == 0x000009, "Member 'LibraryMenu_ItemDetails_C_CheckSortFilterType::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckSortFilterType, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00000A, "Member 'LibraryMenu_ItemDetails_C_CheckSortFilterType::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckSortFilterType, CallFunc_GetValidValue_ReturnValue) == 0x00000B, "Member 'LibraryMenu_ItemDetails_C_CheckSortFilterType::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckSortFilterType, CallFunc_BooleanOR_ReturnValue) == 0x00000C, "Member 'LibraryMenu_ItemDetails_C_CheckSortFilterType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckWeaponFilter
// 0x00F0 (0x00F0 - 0x0000)
struct LibraryMenu_ItemDetails_C_CheckWeaponFilter final
{
public:
	struct FSBWeaponMasterData                    Data;                                              // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Result;                                            // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpResult;                                         // 0x00B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               CallFunc_Attribute2ItemFilter_ReturnValue;         // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_Class2ItemFilter_ReturnValue;             // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B33[0x2];                                     // 0x00B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B34[0x2];                                     // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B35[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_CheckWeaponFilter) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_CheckWeaponFilter");
static_assert(sizeof(LibraryMenu_ItemDetails_C_CheckWeaponFilter) == 0x0000F0, "Wrong size on LibraryMenu_ItemDetails_C_CheckWeaponFilter");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, Data) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, Result) == 0x0000B0, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, TmpResult) == 0x0000B1, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::TmpResult' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_Attribute2ItemFilter_ReturnValue) == 0x0000B2, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_Attribute2ItemFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_Class2ItemFilter_ReturnValue) == 0x0000B3, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_Class2ItemFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000B4, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000B5, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, Temp_int_Array_Index_Variable) == 0x0000B8, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, Temp_int_Loop_Counter_Variable) == 0x0000BC, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_Add_IntInt_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, Temp_bool_Variable) == 0x0000C4, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, Temp_bool_Variable_1) == 0x0000C5, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_Less_IntInt_ReturnValue) == 0x0000DC, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_Array_Length_ReturnValue_1) == 0x0000E0, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000E4, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_Array_Contains_ReturnValue) == 0x0000E5, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_Array_Contains_ReturnValue_1) == 0x0000E6, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_BooleanOR_ReturnValue) == 0x0000E7, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_BooleanAND_ReturnValue) == 0x0000E8, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, CallFunc_BooleanAND_ReturnValue_1) == 0x0000E9, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckWeaponFilter, K2Node_Select_Default) == 0x0000EA, "Member 'LibraryMenu_ItemDetails_C_CheckWeaponFilter::K2Node_Select_Default' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckImagineFilter
// 0x00F8 (0x00F8 - 0x0000)
struct LibraryMenu_ItemDetails_C_CheckImagineFilter final
{
public:
	struct FSBMasterImagine                       Data;                                              // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Result;                                            // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerPassiveImagineSlotType               TmpSlotType;                                       // 0x00B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        TmpImagineType;                                    // 0x00B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpResult;                                         // 0x00B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B36[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetImagineSlotNumber_Result;              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_Attribute2ItemFilter_ReturnValue;         // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_PassiveImagineSlot2Filter_ReturnValue;    // 0x00BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B37[0x2];                                     // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B38[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFilterGroup                           CallFunc_Array_Get_Item;                           // 0x00D8(0x0010)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B39[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_CheckImagineFilter) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_CheckImagineFilter");
static_assert(sizeof(LibraryMenu_ItemDetails_C_CheckImagineFilter) == 0x0000F8, "Wrong size on LibraryMenu_ItemDetails_C_CheckImagineFilter");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, Data) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, Result) == 0x0000B0, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, TmpSlotType) == 0x0000B1, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::TmpSlotType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, TmpImagineType) == 0x0000B2, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::TmpImagineType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, TmpResult) == 0x0000B3, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::TmpResult' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, Temp_bool_Variable) == 0x0000B4, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_GetImagineSlotNumber_Result) == 0x0000B8, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_GetImagineSlotNumber_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000BC, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_GetValidValue_ReturnValue) == 0x0000BD, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_Attribute2ItemFilter_ReturnValue) == 0x0000BE, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_Attribute2ItemFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_PassiveImagineSlot2Filter_ReturnValue) == 0x0000BF, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_PassiveImagineSlot2Filter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, Temp_bool_Variable_1) == 0x0000C0, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, Temp_bool_Variable_2) == 0x0000C1, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, Temp_int_Array_Index_Variable) == 0x0000C4, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, Temp_int_Loop_Counter_Variable) == 0x0000C8, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_Add_IntInt_ReturnValue) == 0x0000CC, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, Temp_bool_Variable_3) == 0x0000D0, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, K2Node_SwitchEnum_CmpSuccess) == 0x0000D1, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_Array_Length_ReturnValue) == 0x0000D4, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_Array_Contains_ReturnValue) == 0x0000E9, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_Array_Contains_ReturnValue_1) == 0x0000EA, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, K2Node_Select_Default) == 0x0000EB, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, K2Node_Select_Default_1) == 0x0000EC, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_Array_Length_ReturnValue_1) == 0x0000F0, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckImagineFilter, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000F4, "Member 'LibraryMenu_ItemDetails_C_CheckImagineFilter::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.UpdateReadMakeList
// 0x02F0 (0x02F0 - 0x0000)
struct LibraryMenu_ItemDetails_C_UpdateReadMakeList final
{
public:
	struct FSBReadLibraryItemData                 TmpReadLibraryItemData;                            // 0x0000(0x0018)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B3A[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B3B[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B3C[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBReadLibraryItemData                 K2Node_MakeStruct_SBReadLibraryItemData;           // 0x0070(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B3D[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B3E[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B3F[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBReadLibraryItemData                 CallFunc_GetReadItem_ReturnValue;                  // 0x00B8(0x0018)()
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x00D0(0x0218)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_UpdateReadMakeList) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_UpdateReadMakeList");
static_assert(sizeof(LibraryMenu_ItemDetails_C_UpdateReadMakeList) == 0x0002F0, "Wrong size on LibraryMenu_ItemDetails_C_UpdateReadMakeList");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, TmpReadLibraryItemData) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::TmpReadLibraryItemData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, Temp_int_Array_Index_Variable) == 0x000018, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_GetPlayerId_ReturnValue) == 0x000028, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_GetCharacterId_ReturnValue) == 0x000038, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_Array_Get_Item) == 0x000048, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_Array_AddUnique_ReturnValue) == 0x000050, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_GetCharacterId_ReturnValue_1) == 0x000058, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, K2Node_MakeStruct_SBReadLibraryItemData) == 0x000070, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::K2Node_MakeStruct_SBReadLibraryItemData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000088, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_GetPlayerId_ReturnValue_1) == 0x000090, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_GetLibrarySaveManager_IsValid) == 0x0000A0, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_SaveLibraryData_ReturnValue) == 0x0000B0, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000B1, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_GetReadItem_ReturnValue) == 0x0000B8, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_GetReadItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_LoadLibraryData_ReturnValue) == 0x0000D0, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_Array_Length_ReturnValue_1) == 0x0002E8, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateReadMakeList, CallFunc_Greater_IntInt_ReturnValue) == 0x0002EC, "Member 'LibraryMenu_ItemDetails_C_UpdateReadMakeList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.UpdateMakeListNewIcon
// 0x0038 (0x0038 - 0x0000)
struct LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon final
{
public:
	int32                                         TmpLastIndex;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B40[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B41[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPictureBook_MakeListItem_C*            K2Node_DynamicCast_AsPicture_Book_Make_List_Item;  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B42[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetNew_IsAddRead;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B43[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon");
static_assert(sizeof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon) == 0x000038, "Wrong size on LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, TmpLastIndex) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::TmpLastIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, Temp_int_Variable) == 0x000004, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, K2Node_DynamicCast_AsPicture_Book_Make_List_Item) == 0x000020, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::K2Node_DynamicCast_AsPicture_Book_Make_List_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, CallFunc_Array_Contains_ReturnValue) == 0x000029, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, CallFunc_GetChildrenCount_ReturnValue) == 0x00002C, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, CallFunc_SetNew_IsAddRead) == 0x000030, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::CallFunc_SetNew_IsAddRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'LibraryMenu_ItemDetails_C_UpdateMakeListNewIcon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Event_Wishlist
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_ItemDetails_C_Event_Wishlist final
{
public:
	int32                                         TmpLastIndex;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList; // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B44[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPictureBook_MakeListItem_C*            K2Node_DynamicCast_AsPicture_Book_Make_List_Item;  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B45[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_Event_Wishlist) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_Event_Wishlist");
static_assert(sizeof(LibraryMenu_ItemDetails_C_Event_Wishlist) == 0x000030, "Wrong size on LibraryMenu_ItemDetails_C_Event_Wishlist");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, TmpLastIndex) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::TmpLastIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, Temp_int_Variable) == 0x000004, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList) == 0x00000C, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, CallFunc_Not_PreBool_ReturnValue) == 0x00000D, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, K2Node_DynamicCast_AsPicture_Book_Make_List_Item) == 0x000018, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::K2Node_DynamicCast_AsPicture_Book_Make_List_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, CallFunc_GetChildrenCount_ReturnValue) == 0x000024, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_Event_Wishlist, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_ItemDetails_C_Event_Wishlist::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.On Sort Combo Box Generate Widget 0
// 0x0038 (0x0038 - 0x0000)
struct LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0");
static_assert(sizeof(LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0) == 0x000038, "Wrong size on LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0");
static_assert(offsetof(LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0, Item) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0::Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0, ReturnValue) == 0x000010, "Member 'LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckTerm
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_ItemDetails_C_CheckTerm final
{
public:
	class FString                                 TermId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermNoneLimmit_ReturnValue;        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_ItemDetails_C_CheckTerm) == 0x000008, "Wrong alignment on LibraryMenu_ItemDetails_C_CheckTerm");
static_assert(sizeof(LibraryMenu_ItemDetails_C_CheckTerm) == 0x000018, "Wrong size on LibraryMenu_ItemDetails_C_CheckTerm");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckTerm, TermId) == 0x000000, "Member 'LibraryMenu_ItemDetails_C_CheckTerm::TermId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckTerm, Result) == 0x000010, "Member 'LibraryMenu_ItemDetails_C_CheckTerm::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckTerm, CallFunc_IsEventTermActive_ReturnValue) == 0x000011, "Member 'LibraryMenu_ItemDetails_C_CheckTerm::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckTerm, CallFunc_IsEventTermNoneLimmit_ReturnValue) == 0x000012, "Member 'LibraryMenu_ItemDetails_C_CheckTerm::CallFunc_IsEventTermNoneLimmit_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckTerm, CallFunc_Not_PreBool_ReturnValue) == 0x000013, "Member 'LibraryMenu_ItemDetails_C_CheckTerm::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ItemDetails_C_CheckTerm, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000014, "Member 'LibraryMenu_ItemDetails_C_CheckTerm::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

}

