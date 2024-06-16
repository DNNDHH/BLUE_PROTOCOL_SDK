#pragma once

 

// Package: LibraryMenu_AchievementList

#include "Basic.hpp"


namespace SDK::Params
{

// Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.CategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_AchievementList_C_CategoryChanged__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementList_C_CategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_AchievementList_C_CategoryChanged__DelegateSignature");
static_assert(sizeof(LibraryMenu_AchievementList_C_CategoryChanged__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_AchievementList_C_CategoryChanged__DelegateSignature");
static_assert(offsetof(LibraryMenu_AchievementList_C_CategoryChanged__DelegateSignature, ItemIndex) == 0x000000, "Member 'LibraryMenu_AchievementList_C_CategoryChanged__DelegateSignature::ItemIndex' has a wrong offset!");

// Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.ExecuteUbergraph_LibraryMenu_AchievementList
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_AchievementList_C_ExecuteUbergraph_LibraryMenu_AchievementList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementList_C_ExecuteUbergraph_LibraryMenu_AchievementList) == 0x000004, "Wrong alignment on LibraryMenu_AchievementList_C_ExecuteUbergraph_LibraryMenu_AchievementList");
static_assert(sizeof(LibraryMenu_AchievementList_C_ExecuteUbergraph_LibraryMenu_AchievementList) == 0x000004, "Wrong size on LibraryMenu_AchievementList_C_ExecuteUbergraph_LibraryMenu_AchievementList");
static_assert(offsetof(LibraryMenu_AchievementList_C_ExecuteUbergraph_LibraryMenu_AchievementList, EntryPoint) == 0x000000, "Member 'LibraryMenu_AchievementList_C_ExecuteUbergraph_LibraryMenu_AchievementList::EntryPoint' has a wrong offset!");

// Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.SetItemListSelected
// 0x0028 (0x0028 - 0x0000)
struct LibraryMenu_AchievementList_C_SetItemListSelected final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A77[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A78[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_AchievementListItem_C*     K2Node_DynamicCast_AsLibrary_Menu_Achievement_List_Item; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementList_C_SetItemListSelected) == 0x000008, "Wrong alignment on LibraryMenu_AchievementList_C_SetItemListSelected");
static_assert(sizeof(LibraryMenu_AchievementList_C_SetItemListSelected) == 0x000028, "Wrong size on LibraryMenu_AchievementList_C_SetItemListSelected");
static_assert(offsetof(LibraryMenu_AchievementList_C_SetItemListSelected, ListIndex) == 0x000000, "Member 'LibraryMenu_AchievementList_C_SetItemListSelected::ListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_SetItemListSelected, bSelected) == 0x000004, "Member 'LibraryMenu_AchievementList_C_SetItemListSelected::bSelected' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_SetItemListSelected, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'LibraryMenu_AchievementList_C_SetItemListSelected::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_SetItemListSelected, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'LibraryMenu_AchievementList_C_SetItemListSelected::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_SetItemListSelected, K2Node_DynamicCast_AsLibrary_Menu_Achievement_List_Item) == 0x000018, "Member 'LibraryMenu_AchievementList_C_SetItemListSelected::K2Node_DynamicCast_AsLibrary_Menu_Achievement_List_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_SetItemListSelected, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'LibraryMenu_AchievementList_C_SetItemListSelected::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.CheckItemListNewIcon
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_AchievementList_C_CheckItemListNewIcon final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A79[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A7A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_AchievementListItem_C*     K2Node_DynamicCast_AsLibrary_Menu_Achievement_List_Item; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A7B[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementList_C_CheckItemListNewIcon) == 0x000008, "Wrong alignment on LibraryMenu_AchievementList_C_CheckItemListNewIcon");
static_assert(sizeof(LibraryMenu_AchievementList_C_CheckItemListNewIcon) == 0x000030, "Wrong size on LibraryMenu_AchievementList_C_CheckItemListNewIcon");
static_assert(offsetof(LibraryMenu_AchievementList_C_CheckItemListNewIcon, Result) == 0x000000, "Member 'LibraryMenu_AchievementList_C_CheckItemListNewIcon::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_CheckItemListNewIcon, Temp_int_Variable) == 0x000004, "Member 'LibraryMenu_AchievementList_C_CheckItemListNewIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_CheckItemListNewIcon, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'LibraryMenu_AchievementList_C_CheckItemListNewIcon::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_CheckItemListNewIcon, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'LibraryMenu_AchievementList_C_CheckItemListNewIcon::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_CheckItemListNewIcon, K2Node_DynamicCast_AsLibrary_Menu_Achievement_List_Item) == 0x000018, "Member 'LibraryMenu_AchievementList_C_CheckItemListNewIcon::K2Node_DynamicCast_AsLibrary_Menu_Achievement_List_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_CheckItemListNewIcon, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'LibraryMenu_AchievementList_C_CheckItemListNewIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_CheckItemListNewIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000021, "Member 'LibraryMenu_AchievementList_C_CheckItemListNewIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_CheckItemListNewIcon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'LibraryMenu_AchievementList_C_CheckItemListNewIcon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_CheckItemListNewIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementList_C_CheckItemListNewIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementList_C_CheckItemListNewIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002C, "Member 'LibraryMenu_AchievementList_C_CheckItemListNewIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

