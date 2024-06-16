#pragma once

 

// Package: LibraryMenu_Weapon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.AllReadWeapon__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Weapon_C_AllReadWeapon__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Weapon_C_AllReadWeapon__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Weapon_C_AllReadWeapon__DelegateSignature");
static_assert(sizeof(LibraryMenu_Weapon_C_AllReadWeapon__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Weapon_C_AllReadWeapon__DelegateSignature");
static_assert(offsetof(LibraryMenu_Weapon_C_AllReadWeapon__DelegateSignature, Param_Index) == 0x000000, "Member 'LibraryMenu_Weapon_C_AllReadWeapon__DelegateSignature::Param_Index' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.ExecuteUbergraph_LibraryMenu_Weapon
// 0x01D8 (0x01D8 - 0x0000)
struct LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSecretItem_Result;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E47[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_ItemIndex;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedCategoryListIndex_SelectedCategoryListIndex; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedID_Output;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E48[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	int32                                         K2Node_CustomEvent_ListIndex;                      // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E49[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_Array_Get_Item;                           // 0x0048(0x00B0)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0108(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E4A[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_NewParam;               // 0x0128(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E4B[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_ListItemIcon_C*            K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon;  // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E4C[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_ListItemIcon_C*            K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon_1; // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E4D[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MainPage;                             // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E4E[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E4F[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_WasSuccessful;                        // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E50[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RetCode;                              // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryPictureBookType                     K2Node_Event_type;                                 // 0x01A8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E51[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x01B0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01C0(0x0018)()
};
static_assert(alignof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon) == 0x000008, "Wrong alignment on LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon");
static_assert(sizeof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon) == 0x0001D8, "Wrong size on LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, EntryPoint) == 0x000000, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_IsSecretItem_Result) == 0x000004, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_IsSecretItem_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_ComponentBoundEvent_ItemIndex) == 0x000008, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_ComponentBoundEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_GetSelectedCategoryListIndex_SelectedCategoryListIndex) == 0x00000C, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_GetSelectedCategoryListIndex_SelectedCategoryListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_GetSelectedID_Output) == 0x000010, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_GetSelectedID_Output' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_CustomEvent_ListIndex) == 0x000040, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_CustomEvent_ListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_Array_Get_Item) == 0x000048, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000F8, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000108, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_Not_PreBool_ReturnValue) == 0x000120, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_ComponentBoundEvent_NewParam) == 0x000128, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_ComponentBoundEvent_NewParam' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000140, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_GetChildAt_ReturnValue) == 0x000148, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon) == 0x000150, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_GetChildAt_ReturnValue_1) == 0x000160, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon_1) == 0x000168, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_DynamicCast_bSuccess_1) == 0x000170, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_IsVisible_ReturnValue) == 0x000171, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_Event_MainPage) == 0x000174, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_Event_SubPage) == 0x000178, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_Event_InBookMarkType) == 0x000180, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_Not_PreBool_ReturnValue_1) == 0x000190, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_GetSBPlayerController_ReturnValue) == 0x000198, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_Event_WasSuccessful) == 0x0001A0, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_Event_WasSuccessful' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_Event_RetCode) == 0x0001A4, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_Event_RetCode' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, K2Node_Event_type) == 0x0001A8, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::K2Node_Event_type' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_GetSBRetMessage_ReturnValue) == 0x0001B0, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001C0, "Member 'LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.GetIdListCallback
// 0x000C (0x000C - 0x0000)
struct LibraryMenu_Weapon_C_GetIdListCallback final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E52[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryPictureBookType                     Type;                                              // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Weapon_C_GetIdListCallback) == 0x000004, "Wrong alignment on LibraryMenu_Weapon_C_GetIdListCallback");
static_assert(sizeof(LibraryMenu_Weapon_C_GetIdListCallback) == 0x00000C, "Wrong size on LibraryMenu_Weapon_C_GetIdListCallback");
static_assert(offsetof(LibraryMenu_Weapon_C_GetIdListCallback, WasSuccessful) == 0x000000, "Member 'LibraryMenu_Weapon_C_GetIdListCallback::WasSuccessful' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_GetIdListCallback, RetCode) == 0x000004, "Member 'LibraryMenu_Weapon_C_GetIdListCallback::RetCode' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_GetIdListCallback, Type) == 0x000008, "Member 'LibraryMenu_Weapon_C_GetIdListCallback::Type' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_Weapon_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Weapon_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on LibraryMenu_Weapon_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(LibraryMenu_Weapon_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on LibraryMenu_Weapon_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(LibraryMenu_Weapon_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'LibraryMenu_Weapon_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Weapon_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Weapon_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on LibraryMenu_Weapon_C_OnSubMenuUpdate");
static_assert(sizeof(LibraryMenu_Weapon_C_OnSubMenuUpdate) == 0x000008, "Wrong size on LibraryMenu_Weapon_C_OnSubMenuUpdate");
static_assert(offsetof(LibraryMenu_Weapon_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'LibraryMenu_Weapon_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'LibraryMenu_Weapon_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature final
{
public:
	class FText                                   NewParam;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");
static_assert(sizeof(LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature) == 0x000018, "Wrong size on LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");
static_assert(offsetof(LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature, NewParam) == 0x000000, "Member 'LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature::NewParam' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnClickWeaponEvent
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Weapon_C_OnClickWeaponEvent final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Weapon_C_OnClickWeaponEvent) == 0x000004, "Wrong alignment on LibraryMenu_Weapon_C_OnClickWeaponEvent");
static_assert(sizeof(LibraryMenu_Weapon_C_OnClickWeaponEvent) == 0x000004, "Wrong size on LibraryMenu_Weapon_C_OnClickWeaponEvent");
static_assert(offsetof(LibraryMenu_Weapon_C_OnClickWeaponEvent, ListIndex) == 0x000000, "Member 'LibraryMenu_Weapon_C_OnClickWeaponEvent::ListIndex' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");
static_assert(sizeof(LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");
static_assert(offsetof(LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature, ItemIndex) == 0x000000, "Member 'LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature::ItemIndex' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.CreateCategoryList
// 0x00A0 (0x00A0 - 0x0000)
struct LibraryMenu_Weapon_C_CreateCategoryList final
{
public:
	TArray<ESBClassType>                          CategoryClassTypeList;                             // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E53[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E54[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x0030(0x0010)(ReferenceParm)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E55[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E56[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_Array_Get_Item_2;                         // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E57[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E58[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E59[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E5A[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E5B[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Weapon_C_CreateCategoryList) == 0x000008, "Wrong alignment on LibraryMenu_Weapon_C_CreateCategoryList");
static_assert(sizeof(LibraryMenu_Weapon_C_CreateCategoryList) == 0x0000A0, "Wrong size on LibraryMenu_Weapon_C_CreateCategoryList");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CategoryClassTypeList) == 0x000000, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CategoryClassTypeList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, Temp_int_Array_Index_Variable) == 0x000010, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, Temp_int_Array_Index_Variable_2) == 0x000020, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x000030, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Array_Get_Item) == 0x000040, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Array_Length_ReturnValue_1) == 0x000044, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000048, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Array_Get_Item_2) == 0x000054, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000058, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_GetClassNameText_ReturnValue) == 0x000060, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Array_AddUnique_ReturnValue) == 0x000070, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000074, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Array_Length_ReturnValue_2) == 0x000078, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Array_Length_ReturnValue_3) == 0x00007C, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, Temp_int_Loop_Counter_Variable_1) == 0x000080, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Array_Add_ReturnValue) == 0x000084, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000088, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Add_IntInt_ReturnValue_1) == 0x00008C, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, Temp_int_Loop_Counter_Variable_2) == 0x000090, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Less_IntInt_ReturnValue_2) == 0x000094, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateCategoryList, CallFunc_Add_IntInt_ReturnValue_2) == 0x000098, "Member 'LibraryMenu_Weapon_C_CreateCategoryList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.CreateWeaponList
// 0x03A8 (0x03A8 - 0x0000)
struct LibraryMenu_Weapon_C_CreateWeaponList final
{
public:
	bool                                          TmpIsSecret;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E5C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E5D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0030(0x0218)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E5E[0x3];                                     // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ListIndex)>              K2Node_CreateDelegate_OutputDelegate;              // 0x024C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7E5F[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_Array_Get_Item;                           // 0x0260(0x00B0)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E60[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E61[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0320(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSecretItem_Result;                      // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E62[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0338(0x0018)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0350(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ULibraryMenu_ListItemIcon_C*            CallFunc_Create_ReturnValue;                       // 0x0360(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadWeaponData_ReturnValue;             // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0369(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x036A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E63[0x1];                                     // 0x036B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E64[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSerchKeyword_SerchKeyword;             // 0x0378(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x038A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x038B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E65[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0398(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Weapon_C_CreateWeaponList) == 0x000008, "Wrong alignment on LibraryMenu_Weapon_C_CreateWeaponList");
static_assert(sizeof(LibraryMenu_Weapon_C_CreateWeaponList) == 0x0003A8, "Wrong size on LibraryMenu_Weapon_C_CreateWeaponList");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, TmpIsSecret) == 0x000000, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::TmpIsSecret' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, Temp_int_Array_Index_Variable) == 0x000004, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_GetLibrarySaveManager_IsValid) == 0x000010, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000018, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_GetPlayerId_ReturnValue) == 0x000020, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_LoadLibraryData_ReturnValue) == 0x000030, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Not_PreBool_ReturnValue) == 0x000248, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, K2Node_CreateDelegate_OutputDelegate) == 0x00024C, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Array_Get_Item) == 0x000260, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Array_Length_ReturnValue) == 0x000310, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Less_IntInt_ReturnValue) == 0x000314, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000318, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_GetWeaponText_ReturnValue) == 0x000320, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_IsSecretItem_Result) == 0x000330, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_IsSecretItem_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Conv_StringToText_ReturnValue) == 0x000338, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_GetCharacterId_ReturnValue) == 0x000350, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Create_ReturnValue) == 0x000360, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_IsReadWeaponData_ReturnValue) == 0x000368, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_IsReadWeaponData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_MakeLiteralByte_ReturnValue) == 0x000369, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_BooleanAND_ReturnValue) == 0x00036A, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Array_Length_ReturnValue_1) == 0x00036C, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Array_Add_ReturnValue) == 0x000370, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_GetSerchKeyword_SerchKeyword) == 0x000378, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_GetSerchKeyword_SerchKeyword' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000388, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_Contains_ReturnValue) == 0x000389, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_BooleanAND_ReturnValue_1) == 0x00038A, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00038B, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000390, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateWeaponList, K2Node_MakeStruct_Margin) == 0x000398, "Member 'LibraryMenu_Weapon_C_CreateWeaponList::K2Node_MakeStruct_Margin' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.IsSecretItem
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_Weapon_C_IsSecretItem final
{
public:
	int32                                         WeaponID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E66[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLibraryWeaponLogs_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Weapon_C_IsSecretItem) == 0x000008, "Wrong alignment on LibraryMenu_Weapon_C_IsSecretItem");
static_assert(sizeof(LibraryMenu_Weapon_C_IsSecretItem) == 0x000020, "Wrong size on LibraryMenu_Weapon_C_IsSecretItem");
static_assert(offsetof(LibraryMenu_Weapon_C_IsSecretItem, WeaponID) == 0x000000, "Member 'LibraryMenu_Weapon_C_IsSecretItem::WeaponID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_IsSecretItem, Result) == 0x000004, "Member 'LibraryMenu_Weapon_C_IsSecretItem::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_IsSecretItem, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'LibraryMenu_Weapon_C_IsSecretItem::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_IsSecretItem, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000010, "Member 'LibraryMenu_Weapon_C_IsSecretItem::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_IsSecretItem, CallFunc_IsLibraryWeaponLogs_ReturnValue) == 0x000018, "Member 'LibraryMenu_Weapon_C_IsSecretItem::CallFunc_IsLibraryWeaponLogs_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_IsSecretItem, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'LibraryMenu_Weapon_C_IsSecretItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.UpdateCategoryNewIcon
// 0x0338 (0x0338 - 0x0000)
struct LibraryMenu_Weapon_C_UpdateCategoryNewIcon final
{
public:
	int32                                         InCategoryId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InListIndex;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCheckAllRead;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpRead;                                           // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E67[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpCategoryId;                                     // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E68[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E69[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWeaponMasterData                    CallFunc_Array_Get_Item;                           // 0x0040(0x00B0)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E6A[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadWeaponData_ReturnValue;             // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSecretItem_Result;                      // 0x00FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00FF(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item_1;                         // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E6B[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0118(0x0218)()
	bool                                          Temp_bool_Variable_1;                              // 0x0330(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0332(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon) == 0x000008, "Wrong alignment on LibraryMenu_Weapon_C_UpdateCategoryNewIcon");
static_assert(sizeof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon) == 0x000338, "Wrong size on LibraryMenu_Weapon_C_UpdateCategoryNewIcon");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, InCategoryId) == 0x000000, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::InCategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, InListIndex) == 0x000004, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::InListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, IsCheckAllRead) == 0x000008, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::IsCheckAllRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, TmpRead) == 0x000009, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::TmpRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, TmpCategoryId) == 0x00000C, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::TmpCategoryId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x000028, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_GetLibrarySaveManager_IsValid) == 0x000031, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000038, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_Array_Get_Item) == 0x000040, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_Less_IntInt_ReturnValue) == 0x0000F4, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000F8, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_BooleanAND_ReturnValue) == 0x0000FC, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_IsReadWeaponData_ReturnValue) == 0x0000FD, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_IsReadWeaponData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_IsSecretItem_Result) == 0x0000FE, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_IsSecretItem_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, Temp_bool_Variable) == 0x0000FF, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_Array_Get_Item_1) == 0x000100, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_GetPlayerId_ReturnValue) == 0x000108, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_LoadLibraryData_ReturnValue) == 0x000118, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, Temp_bool_Variable_1) == 0x000330, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000331, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_UpdateCategoryNewIcon, CallFunc_Array_Contains_ReturnValue) == 0x000332, "Member 'LibraryMenu_Weapon_C_UpdateCategoryNewIcon::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.CreateData
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Weapon_C_CreateData final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E6C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBWeaponMasterData>            CallFunc_GetWeaponList_OutList;                    // 0x0008(0x0010)(ReferenceParm)
};
static_assert(alignof(LibraryMenu_Weapon_C_CreateData) == 0x000008, "Wrong alignment on LibraryMenu_Weapon_C_CreateData");
static_assert(sizeof(LibraryMenu_Weapon_C_CreateData) == 0x000018, "Wrong size on LibraryMenu_Weapon_C_CreateData");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'LibraryMenu_Weapon_C_CreateData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateData, Temp_bool_Variable) == 0x000001, "Member 'LibraryMenu_Weapon_C_CreateData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'LibraryMenu_Weapon_C_CreateData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateData, CallFunc_IsEditor_ReturnValue) == 0x000003, "Member 'LibraryMenu_Weapon_C_CreateData::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateData, K2Node_Select_Default) == 0x000004, "Member 'LibraryMenu_Weapon_C_CreateData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_CreateData, CallFunc_GetWeaponList_OutList) == 0x000008, "Member 'LibraryMenu_Weapon_C_CreateData::CallFunc_GetWeaponList_OutList' has a wrong offset!");

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.TermRequest
// 0x0006 (0x0006 - 0x0000)
struct LibraryMenu_Weapon_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermReason                            Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Weapon_C_TermRequest) == 0x000001, "Wrong alignment on LibraryMenu_Weapon_C_TermRequest");
static_assert(sizeof(LibraryMenu_Weapon_C_TermRequest) == 0x000006, "Wrong size on LibraryMenu_Weapon_C_TermRequest");
static_assert(offsetof(LibraryMenu_Weapon_C_TermRequest, InReason) == 0x000000, "Member 'LibraryMenu_Weapon_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_TermRequest, ReturnValue) == 0x000001, "Member 'LibraryMenu_Weapon_C_TermRequest::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_TermRequest, Temp_byte_Variable) == 0x000002, "Member 'LibraryMenu_Weapon_C_TermRequest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_TermRequest, Temp_byte_Variable_1) == 0x000003, "Member 'LibraryMenu_Weapon_C_TermRequest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_TermRequest, Temp_byte_Variable_2) == 0x000004, "Member 'LibraryMenu_Weapon_C_TermRequest::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Weapon_C_TermRequest, K2Node_Select_Default) == 0x000005, "Member 'LibraryMenu_Weapon_C_TermRequest::K2Node_Select_Default' has a wrong offset!");

}

