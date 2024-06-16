#pragma once

 

// Package: LibraryMenu_List

#include "Basic.hpp"


namespace SDK::Params
{

// Function LibraryMenu_List.LibraryMenu_List_C.CategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_List_C_CategoryChanged__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_List_C_CategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_List_C_CategoryChanged__DelegateSignature");
static_assert(sizeof(LibraryMenu_List_C_CategoryChanged__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_List_C_CategoryChanged__DelegateSignature");
static_assert(offsetof(LibraryMenu_List_C_CategoryChanged__DelegateSignature, ItemIndex) == 0x000000, "Member 'LibraryMenu_List_C_CategoryChanged__DelegateSignature::ItemIndex' has a wrong offset!");

// Function LibraryMenu_List.LibraryMenu_List_C.ExecuteUbergraph_LibraryMenu_List
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_List_C_ExecuteUbergraph_LibraryMenu_List final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_List_C_ExecuteUbergraph_LibraryMenu_List) == 0x000004, "Wrong alignment on LibraryMenu_List_C_ExecuteUbergraph_LibraryMenu_List");
static_assert(sizeof(LibraryMenu_List_C_ExecuteUbergraph_LibraryMenu_List) == 0x000004, "Wrong size on LibraryMenu_List_C_ExecuteUbergraph_LibraryMenu_List");
static_assert(offsetof(LibraryMenu_List_C_ExecuteUbergraph_LibraryMenu_List, EntryPoint) == 0x000000, "Member 'LibraryMenu_List_C_ExecuteUbergraph_LibraryMenu_List::EntryPoint' has a wrong offset!");

// Function LibraryMenu_List.LibraryMenu_List_C.SetItemListSelected
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_List_C_SetItemListSelected final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19AD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_ListItem_C*                K2Node_DynamicCast_AsLibrary_Menu_List_Item;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19AE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_ListItemIcon_C*            K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon;  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_List_C_SetItemListSelected) == 0x000008, "Wrong alignment on LibraryMenu_List_C_SetItemListSelected");
static_assert(sizeof(LibraryMenu_List_C_SetItemListSelected) == 0x000030, "Wrong size on LibraryMenu_List_C_SetItemListSelected");
static_assert(offsetof(LibraryMenu_List_C_SetItemListSelected, ListIndex) == 0x000000, "Member 'LibraryMenu_List_C_SetItemListSelected::ListIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_List_C_SetItemListSelected, bSelected) == 0x000004, "Member 'LibraryMenu_List_C_SetItemListSelected::bSelected' has a wrong offset!");
static_assert(offsetof(LibraryMenu_List_C_SetItemListSelected, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'LibraryMenu_List_C_SetItemListSelected::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_List_C_SetItemListSelected, K2Node_DynamicCast_AsLibrary_Menu_List_Item) == 0x000010, "Member 'LibraryMenu_List_C_SetItemListSelected::K2Node_DynamicCast_AsLibrary_Menu_List_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_List_C_SetItemListSelected, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LibraryMenu_List_C_SetItemListSelected::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_List_C_SetItemListSelected, K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon) == 0x000020, "Member 'LibraryMenu_List_C_SetItemListSelected::K2Node_DynamicCast_AsLibrary_Menu_List_Item_Icon' has a wrong offset!");
static_assert(offsetof(LibraryMenu_List_C_SetItemListSelected, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'LibraryMenu_List_C_SetItemListSelected::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_List_C_SetItemListSelected, CallFunc_Greater_IntInt_ReturnValue) == 0x000029, "Member 'LibraryMenu_List_C_SetItemListSelected::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_List.LibraryMenu_List_C.GetScrollOffset
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_List_C_GetScrollOffset final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_List_C_GetScrollOffset) == 0x000004, "Wrong alignment on LibraryMenu_List_C_GetScrollOffset");
static_assert(sizeof(LibraryMenu_List_C_GetScrollOffset) == 0x000008, "Wrong size on LibraryMenu_List_C_GetScrollOffset");
static_assert(offsetof(LibraryMenu_List_C_GetScrollOffset, Offset) == 0x000000, "Member 'LibraryMenu_List_C_GetScrollOffset::Offset' has a wrong offset!");
static_assert(offsetof(LibraryMenu_List_C_GetScrollOffset, CallFunc_GetScrollOffset_ReturnValue) == 0x000004, "Member 'LibraryMenu_List_C_GetScrollOffset::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");

// Function LibraryMenu_List.LibraryMenu_List_C.SetScrollOffset
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_List_C_SetScrollOffset final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_List_C_SetScrollOffset) == 0x000004, "Wrong alignment on LibraryMenu_List_C_SetScrollOffset");
static_assert(sizeof(LibraryMenu_List_C_SetScrollOffset) == 0x000004, "Wrong size on LibraryMenu_List_C_SetScrollOffset");
static_assert(offsetof(LibraryMenu_List_C_SetScrollOffset, Offset) == 0x000000, "Member 'LibraryMenu_List_C_SetScrollOffset::Offset' has a wrong offset!");

}

