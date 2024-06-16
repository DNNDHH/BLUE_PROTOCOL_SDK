#pragma once

 

// Package: LibraryMenu_ListItemIcon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_ListItemIcon_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_ListIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ListItemIcon_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_ListItemIcon_C_OnClick__DelegateSignature");
static_assert(sizeof(LibraryMenu_ListItemIcon_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_ListItemIcon_C_OnClick__DelegateSignature");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_OnClick__DelegateSignature, Param_ListIndex) == 0x000000, "Member 'LibraryMenu_ListItemIcon_C_OnClick__DelegateSignature::Param_ListIndex' has a wrong offset!");

// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.ExecuteUbergraph_LibraryMenu_ListItemIcon
// 0x0060 (0x0060 - 0x0000)
struct LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B91[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
};
static_assert(alignof(LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon) == 0x000008, "Wrong alignment on LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon");
static_assert(sizeof(LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon) == 0x000060, "Wrong size on LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon, EntryPoint) == 0x000000, "Member 'LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000004, "Member 'LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon, CallFunc_GetActiveWidgetIndex_ReturnValue_1) == 0x000008, "Member 'LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon::CallFunc_GetActiveWidgetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000D, "Member 'LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.SetName
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_ListItemIcon_C_SetName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LibraryMenu_ListItemIcon_C_SetName) == 0x000008, "Wrong alignment on LibraryMenu_ListItemIcon_C_SetName");
static_assert(sizeof(LibraryMenu_ListItemIcon_C_SetName) == 0x000018, "Wrong size on LibraryMenu_ListItemIcon_C_SetName");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_SetName, InText) == 0x000000, "Member 'LibraryMenu_ListItemIcon_C_SetName::InText' has a wrong offset!");

// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.SetBtnSelected
// 0x0058 (0x0058 - 0x0000)
struct LibraryMenu_ListItemIcon_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B92[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(LibraryMenu_ListItemIcon_C_SetBtnSelected) == 0x000008, "Wrong alignment on LibraryMenu_ListItemIcon_C_SetBtnSelected");
static_assert(sizeof(LibraryMenu_ListItemIcon_C_SetBtnSelected) == 0x000058, "Wrong size on LibraryMenu_ListItemIcon_C_SetBtnSelected");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_SetBtnSelected, bSelected) == 0x000000, "Member 'LibraryMenu_ListItemIcon_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'LibraryMenu_ListItemIcon_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'LibraryMenu_ListItemIcon_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.SetPossessionMarkIcon
// 0x0005 (0x0005 - 0x0000)
struct LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon) == 0x000001, "Wrong alignment on LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon");
static_assert(sizeof(LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon) == 0x000005, "Wrong size on LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon, InVisible) == 0x000000, "Member 'LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon::InVisible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon, Temp_bool_Variable) == 0x000003, "Member 'LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon, K2Node_Select_Default) == 0x000004, "Member 'LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon::K2Node_Select_Default' has a wrong offset!");

}

