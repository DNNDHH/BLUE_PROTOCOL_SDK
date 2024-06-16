#pragma once

 

// Package: LibraryMenu_Item

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "EPictureBookMakeListSortType_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Item.LibraryMenu_Item_C.AllReadItem__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Item_C_AllReadItem__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Item_C_AllReadItem__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Item_C_AllReadItem__DelegateSignature");
static_assert(sizeof(LibraryMenu_Item_C_AllReadItem__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Item_C_AllReadItem__DelegateSignature");
static_assert(offsetof(LibraryMenu_Item_C_AllReadItem__DelegateSignature, Param_Index) == 0x000000, "Member 'LibraryMenu_Item_C_AllReadItem__DelegateSignature::Param_Index' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.ExecuteUbergraph_LibraryMenu_Item
// 0x0480 (0x0480 - 0x0000)
struct LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1476[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_NewParam;               // 0x0010(0x0018)()
	int32                                         K2Node_CustomEvent_ListIndex;                      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_MainPage;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1477[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_Array_Get_Item;                           // 0x0038(0x00D0)()
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ItemIndex;              // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedCategoryListIndex_SelectedCategoryListIndex; // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedID_Output;                     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1478[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0138(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0160(0x0018)()
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x0178(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsAnimInOutPlaying_OutIsPlaying;          // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1479[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x018C(0x0010)(ZeroConstructor, NoDestructor)
	EPictureBookMakeListSortType                  K2Node_ComponentBoundEvent_SortType;               // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x019D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x019E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x019F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_ListItemIcon_C*            K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon;  // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_147A[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_ListItemIcon_C*            K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon_1; // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFilter_Type                                  Temp_byte_Variable_4;                              // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x01CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_147B[0x5];                                     // 0x01CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadItemData_ReturnValue;               // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSecretItem_Result;                      // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_147C[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EPictureBookMakeListSortType                  Temp_byte_Variable_5;                              // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  K2Node_Select_Default;                             // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_147D[0x5];                                     // 0x01FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_WasSuccessful;                        // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_147E[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RetCode;                              // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryPictureBookType                     K2Node_Event_type;                                 // 0x0210(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_147F[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0218(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0228(0x0018)()
	TArray<struct FItemMasterData>                CallFunc_GetItemList_OutList;                      // 0x0240(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1480[0x6];                                     // 0x0252(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0260(0x0218)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item) == 0x000008, "Wrong alignment on LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item");
static_assert(sizeof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item) == 0x000480, "Wrong size on LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, EntryPoint) == 0x000000, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, Temp_byte_Variable) == 0x000004, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, Temp_byte_Variable_1) == 0x000005, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, Temp_byte_Variable_2) == 0x000006, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, Temp_byte_Variable_3) == 0x000007, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_MakeLiteralByte_ReturnValue) == 0x000008, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000009, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, Temp_bool_Variable) == 0x00000A, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_ComponentBoundEvent_NewParam) == 0x000010, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_ComponentBoundEvent_NewParam' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_CustomEvent_ListIndex) == 0x000028, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_CustomEvent_ListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_Event_MainPage) == 0x00002C, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_Event_SubPage) == 0x000030, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_Array_Get_Item) == 0x000038, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_Event_InBookMarkType) == 0x000108, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_ComponentBoundEvent_ItemIndex) == 0x000118, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_ComponentBoundEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetSelectedCategoryListIndex_SelectedCategoryListIndex) == 0x00011C, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetSelectedCategoryListIndex_SelectedCategoryListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetSelectedID_Output) == 0x000120, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetSelectedID_Output' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetTextFromAsset_ReturnValue) == 0x000128, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_Conv_StringToText_ReturnValue) == 0x000138, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000150, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000160, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_ComponentBoundEvent_Filters) == 0x000178, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_IsAnimInOutPlaying_OutIsPlaying) == 0x000188, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_IsAnimInOutPlaying_OutIsPlaying' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_Not_PreBool_ReturnValue) == 0x000189, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_CreateDelegate_OutputDelegate) == 0x00018C, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_ComponentBoundEvent_SortType) == 0x00019C, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_ComponentBoundEvent_SortType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_Not_PreBool_ReturnValue_1) == 0x00019D, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_IsVisible_ReturnValue) == 0x00019E, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00019F, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetChildAt_ReturnValue) == 0x0001A0, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon) == 0x0001A8, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_DynamicCast_bSuccess) == 0x0001B0, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetChildAt_ReturnValue_1) == 0x0001B8, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon_1) == 0x0001C0, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_DynamicCast_bSuccess_1) == 0x0001C8, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, Temp_byte_Variable_4) == 0x0001C9, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_IsVisible_ReturnValue_1) == 0x0001CA, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetCharacterId_ReturnValue) == 0x0001D0, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_IsReadItemData_ReturnValue) == 0x0001E0, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_IsReadItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_IsSecretItem_Result) == 0x0001E1, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_IsSecretItem_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetPlayerId_ReturnValue) == 0x0001E8, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, Temp_byte_Variable_5) == 0x0001F8, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_Select_Default) == 0x0001F9, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_Not_PreBool_ReturnValue_2) == 0x0001FA, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetSBPlayerController_ReturnValue) == 0x000200, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_Event_WasSuccessful) == 0x000208, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_Event_WasSuccessful' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_Event_RetCode) == 0x00020C, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_Event_RetCode' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_Event_type) == 0x000210, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_Event_type' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetSBRetMessage_ReturnValue) == 0x000218, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000228, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetItemList_OutList) == 0x000240, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetItemList_OutList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_IsEditor_ReturnValue) == 0x000250, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetLibrarySaveManager_IsValid) == 0x000251, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000258, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, CallFunc_LoadLibraryData_ReturnValue) == 0x000260, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item, K2Node_Select_Default_1) == 0x000478, "Member 'LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item::K2Node_Select_Default_1' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.GetIdListCallback
// 0x000C (0x000C - 0x0000)
struct LibraryMenu_Item_C_GetIdListCallback final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1481[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryPictureBookType                     Type;                                              // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Item_C_GetIdListCallback) == 0x000004, "Wrong alignment on LibraryMenu_Item_C_GetIdListCallback");
static_assert(sizeof(LibraryMenu_Item_C_GetIdListCallback) == 0x00000C, "Wrong size on LibraryMenu_Item_C_GetIdListCallback");
static_assert(offsetof(LibraryMenu_Item_C_GetIdListCallback, WasSuccessful) == 0x000000, "Member 'LibraryMenu_Item_C_GetIdListCallback::WasSuccessful' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_GetIdListCallback, RetCode) == 0x000004, "Member 'LibraryMenu_Item_C_GetIdListCallback::RetCode' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_GetIdListCallback, Type) == 0x000008, "Member 'LibraryMenu_Item_C_GetIdListCallback::Type' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature final
{
public:
	EPictureBookMakeListSortType                  SortType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature) == 0x000001, "Wrong alignment on LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature");
static_assert(sizeof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature) == 0x000001, "Wrong size on LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature");
static_assert(offsetof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature, SortType) == 0x000000, "Member 'LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature::SortType' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature");
static_assert(sizeof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature) == 0x000010, "Wrong size on LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature");
static_assert(offsetof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature, Filters) == 0x000000, "Member 'LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature::Filters' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");
static_assert(sizeof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");
static_assert(offsetof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature, ItemIndex) == 0x000000, "Member 'LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature::ItemIndex' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_Item_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Item_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on LibraryMenu_Item_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(LibraryMenu_Item_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on LibraryMenu_Item_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(LibraryMenu_Item_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'LibraryMenu_Item_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Item_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Item_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on LibraryMenu_Item_C_OnSubMenuUpdate");
static_assert(sizeof(LibraryMenu_Item_C_OnSubMenuUpdate) == 0x000008, "Wrong size on LibraryMenu_Item_C_OnSubMenuUpdate");
static_assert(offsetof(LibraryMenu_Item_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'LibraryMenu_Item_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'LibraryMenu_Item_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.OnClickEvent
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Item_C_OnClickEvent final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Item_C_OnClickEvent) == 0x000004, "Wrong alignment on LibraryMenu_Item_C_OnClickEvent");
static_assert(sizeof(LibraryMenu_Item_C_OnClickEvent) == 0x000004, "Wrong size on LibraryMenu_Item_C_OnClickEvent");
static_assert(offsetof(LibraryMenu_Item_C_OnClickEvent, ListIndex) == 0x000000, "Member 'LibraryMenu_Item_C_OnClickEvent::ListIndex' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Item_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature final
{
public:
	class FText                                   NewParam;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Item_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");
static_assert(sizeof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature) == 0x000018, "Wrong size on LibraryMenu_Item_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");
static_assert(offsetof(LibraryMenu_Item_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature, NewParam) == 0x000000, "Member 'LibraryMenu_Item_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature::NewParam' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.CreateCategoryList
// 0x0070 (0x0070 - 0x0000)
struct LibraryMenu_Item_C_CreateCategoryList final
{
public:
	int32                                         CategoryAll_Num;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1482[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1483[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EItemCategory>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1484[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemCategory                                 CallFunc_Array_Get_Item;                           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1485[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1486[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1487[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Item_C_CreateCategoryList) == 0x000008, "Wrong alignment on LibraryMenu_Item_C_CreateCategoryList");
static_assert(sizeof(LibraryMenu_Item_C_CreateCategoryList) == 0x000070, "Wrong size on LibraryMenu_Item_C_CreateCategoryList");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CategoryAll_Num) == 0x000000, "Member 'LibraryMenu_Item_C_CreateCategoryList::CategoryAll_Num' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, Temp_int_Array_Index_Variable) == 0x000004, "Member 'LibraryMenu_Item_C_CreateCategoryList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'LibraryMenu_Item_C_CreateCategoryList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, K2Node_MakeArray_Array) == 0x000018, "Member 'LibraryMenu_Item_C_CreateCategoryList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, Temp_int_Loop_Counter_Variable_1) == 0x000028, "Member 'LibraryMenu_Item_C_CreateCategoryList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, Temp_int_Array_Index_Variable_1) == 0x000038, "Member 'LibraryMenu_Item_C_CreateCategoryList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_Array_Get_Item) == 0x00003C, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000048, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000058, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_Array_Get_Item_1) == 0x00005C, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_Array_Length_ReturnValue_1) == 0x000064, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateCategoryList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000068, "Member 'LibraryMenu_Item_C_CreateCategoryList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.CreateItemList
// 0x03E8 (0x03E8 - 0x0000)
struct LibraryMenu_Item_C_CreateItemList final
{
public:
	bool                                          TmpIsSecret;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1488[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1489[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ListIndex)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_148A[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FItemMasterData                        CallFunc_Array_Get_Item;                           // 0x0048(0x00D0)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_148B[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_148C[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadItemData_ReturnValue;               // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_148D[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0140(0x0018)()
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSecretItem_Result;                      // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_148E[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_ListItemIcon_C*            CallFunc_Create_ReturnValue;                       // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_148F[0x6];                                     // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1490[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0188(0x0218)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1491[0x2];                                     // 0x03A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1492[0x4];                                     // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSerchKeyword_SerchKeyword;             // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x03C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1493[0x1];                                     // 0x03C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x03C4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1494[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x03D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Item_C_CreateItemList) == 0x000008, "Wrong alignment on LibraryMenu_Item_C_CreateItemList");
static_assert(sizeof(LibraryMenu_Item_C_CreateItemList) == 0x0003E8, "Wrong size on LibraryMenu_Item_C_CreateItemList");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, TmpIsSecret) == 0x000000, "Member 'LibraryMenu_Item_C_CreateItemList::TmpIsSecret' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'LibraryMenu_Item_C_CreateItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'LibraryMenu_Item_C_CreateItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'LibraryMenu_Item_C_CreateItemList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_GetPlayerId_ReturnValue) == 0x000038, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Array_Get_Item) == 0x000048, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Array_Length_ReturnValue) == 0x000118, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Less_IntInt_ReturnValue) == 0x00011C, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000120, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_GetItemText_ReturnValue) == 0x000128, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_IsReadItemData_ReturnValue) == 0x000138, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_IsReadItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Conv_StringToText_ReturnValue) == 0x000140, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Array_AddUnique_ReturnValue) == 0x000158, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_IsSecretItem_Result) == 0x00015C, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_IsSecretItem_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Create_ReturnValue) == 0x000160, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, Temp_int_Variable) == 0x000168, "Member 'LibraryMenu_Item_C_CreateItemList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, Temp_int_Variable_1) == 0x00016C, "Member 'LibraryMenu_Item_C_CreateItemList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, Temp_bool_Variable) == 0x000170, "Member 'LibraryMenu_Item_C_CreateItemList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_GetLibrarySaveManager_IsValid) == 0x000171, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000178, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, K2Node_Select_Default) == 0x000180, "Member 'LibraryMenu_Item_C_CreateItemList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_LoadLibraryData_ReturnValue) == 0x000188, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0003A0, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0003A1, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Array_Add_ReturnValue) == 0x0003A4, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Array_Length_ReturnValue_1) == 0x0003A8, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_GetSerchKeyword_SerchKeyword) == 0x0003B0, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_GetSerchKeyword_SerchKeyword' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_Contains_ReturnValue) == 0x0003C0, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_BooleanAND_ReturnValue) == 0x0003C1, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0003C2, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, K2Node_MakeStruct_Margin) == 0x0003C4, "Member 'LibraryMenu_Item_C_CreateItemList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0003D8, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_CreateItemList, CallFunc_BooleanAND_ReturnValue_1) == 0x0003E0, "Member 'LibraryMenu_Item_C_CreateItemList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.UpdateListItemNewIcon
// 0x0280 (0x0280 - 0x0000)
struct LibraryMenu_Item_C_UpdateListItemNewIcon final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1495[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBReadLibraryItemData                 K2Node_MakeStruct_SBReadLibraryItemData;           // 0x0018(0x0018)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1496[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1497[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0068(0x0218)()
};
static_assert(alignof(LibraryMenu_Item_C_UpdateListItemNewIcon) == 0x000008, "Wrong alignment on LibraryMenu_Item_C_UpdateListItemNewIcon");
static_assert(sizeof(LibraryMenu_Item_C_UpdateListItemNewIcon) == 0x000280, "Wrong size on LibraryMenu_Item_C_UpdateListItemNewIcon");
static_assert(offsetof(LibraryMenu_Item_C_UpdateListItemNewIcon, ItemIndex) == 0x000000, "Member 'LibraryMenu_Item_C_UpdateListItemNewIcon::ItemIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateListItemNewIcon, CallFunc_GetPlayerId_ReturnValue) == 0x000008, "Member 'LibraryMenu_Item_C_UpdateListItemNewIcon::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateListItemNewIcon, K2Node_MakeStruct_SBReadLibraryItemData) == 0x000018, "Member 'LibraryMenu_Item_C_UpdateListItemNewIcon::K2Node_MakeStruct_SBReadLibraryItemData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateListItemNewIcon, CallFunc_GetCharacterId_ReturnValue) == 0x000030, "Member 'LibraryMenu_Item_C_UpdateListItemNewIcon::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateListItemNewIcon, CallFunc_GetPlayerId_ReturnValue_1) == 0x000040, "Member 'LibraryMenu_Item_C_UpdateListItemNewIcon::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateListItemNewIcon, CallFunc_GetLibrarySaveManager_IsValid) == 0x000050, "Member 'LibraryMenu_Item_C_UpdateListItemNewIcon::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateListItemNewIcon, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000058, "Member 'LibraryMenu_Item_C_UpdateListItemNewIcon::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateListItemNewIcon, CallFunc_SaveLibraryData_ReturnValue) == 0x000060, "Member 'LibraryMenu_Item_C_UpdateListItemNewIcon::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateListItemNewIcon, CallFunc_LoadLibraryData_ReturnValue) == 0x000068, "Member 'LibraryMenu_Item_C_UpdateListItemNewIcon::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.UpdateCategoryNewIcon
// 0x0358 (0x0358 - 0x0000)
struct LibraryMenu_Item_C_UpdateCategoryNewIcon final
{
public:
	int32                                         InCategoryId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InListIndex;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCheckAllRead;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpRead;                                           // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1498[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpCategoryId;                                     // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1499[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0038(0x0218)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0260(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item;                           // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149B[0x2];                                     // 0x0262(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149C[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_Array_Get_Item_1;                         // 0x0270(0x00D0)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149D[0x3];                                     // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x034C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x034D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadItemData_ReturnValue;               // 0x034E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSecretItem_Result;                      // 0x034F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0350(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Item_C_UpdateCategoryNewIcon) == 0x000008, "Wrong alignment on LibraryMenu_Item_C_UpdateCategoryNewIcon");
static_assert(sizeof(LibraryMenu_Item_C_UpdateCategoryNewIcon) == 0x000358, "Wrong size on LibraryMenu_Item_C_UpdateCategoryNewIcon");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, InCategoryId) == 0x000000, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::InCategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, InListIndex) == 0x000004, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::InListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, IsCheckAllRead) == 0x000008, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::IsCheckAllRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, TmpRead) == 0x000009, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::TmpRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, TmpCategoryId) == 0x00000C, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::TmpCategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x000010, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, Temp_int_Array_Index_Variable) == 0x000014, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_GetLibrarySaveManager_IsValid) == 0x000018, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000020, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_GetPlayerId_ReturnValue) == 0x000028, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_LoadLibraryData_ReturnValue) == 0x000038, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_GetCharacterId_ReturnValue) == 0x000250, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, Temp_bool_Variable) == 0x000260, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_Array_Get_Item) == 0x000261, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, Temp_int_Loop_Counter_Variable) == 0x000264, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000268, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_Array_Get_Item_1) == 0x000270, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_Array_Length_ReturnValue) == 0x000340, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000344, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000348, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_BooleanAND_ReturnValue) == 0x00034C, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00034D, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_IsReadItemData_ReturnValue) == 0x00034E, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_IsReadItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_IsSecretItem_Result) == 0x00034F, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_IsSecretItem_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, Temp_bool_Variable_1) == 0x000350, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_UpdateCategoryNewIcon, CallFunc_Array_Contains_ReturnValue) == 0x000351, "Member 'LibraryMenu_Item_C_UpdateCategoryNewIcon::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.IsSecretItem
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_Item_C_IsSecretItem final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLibraryItemLogs_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Item_C_IsSecretItem) == 0x000008, "Wrong alignment on LibraryMenu_Item_C_IsSecretItem");
static_assert(sizeof(LibraryMenu_Item_C_IsSecretItem) == 0x000020, "Wrong size on LibraryMenu_Item_C_IsSecretItem");
static_assert(offsetof(LibraryMenu_Item_C_IsSecretItem, ItemId) == 0x000000, "Member 'LibraryMenu_Item_C_IsSecretItem::ItemId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_IsSecretItem, Result) == 0x000004, "Member 'LibraryMenu_Item_C_IsSecretItem::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_IsSecretItem, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'LibraryMenu_Item_C_IsSecretItem::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_IsSecretItem, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000010, "Member 'LibraryMenu_Item_C_IsSecretItem::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_IsSecretItem, CallFunc_IsLibraryItemLogs_ReturnValue) == 0x000018, "Member 'LibraryMenu_Item_C_IsSecretItem::CallFunc_IsLibraryItemLogs_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_IsSecretItem, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'LibraryMenu_Item_C_IsSecretItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Item.LibraryMenu_Item_C.TermRequest
// 0x0006 (0x0006 - 0x0000)
struct LibraryMenu_Item_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermReason                            Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Item_C_TermRequest) == 0x000001, "Wrong alignment on LibraryMenu_Item_C_TermRequest");
static_assert(sizeof(LibraryMenu_Item_C_TermRequest) == 0x000006, "Wrong size on LibraryMenu_Item_C_TermRequest");
static_assert(offsetof(LibraryMenu_Item_C_TermRequest, InReason) == 0x000000, "Member 'LibraryMenu_Item_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_TermRequest, ReturnValue) == 0x000001, "Member 'LibraryMenu_Item_C_TermRequest::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_TermRequest, Temp_byte_Variable) == 0x000002, "Member 'LibraryMenu_Item_C_TermRequest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_TermRequest, Temp_byte_Variable_1) == 0x000003, "Member 'LibraryMenu_Item_C_TermRequest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_TermRequest, Temp_byte_Variable_2) == 0x000004, "Member 'LibraryMenu_Item_C_TermRequest::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Item_C_TermRequest, K2Node_Select_Default) == 0x000005, "Member 'LibraryMenu_Item_C_TermRequest::K2Node_Select_Default' has a wrong offset!");

}

