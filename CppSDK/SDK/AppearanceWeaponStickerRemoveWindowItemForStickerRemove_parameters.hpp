#pragma once

 

// Package: AppearanceWeaponStickerRemoveWindowItemForStickerRemove

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.ItemSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ItemSelected__DelegateSignature final
{
public:
	class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ItemSelected__DelegateSignature");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ItemSelected__DelegateSignature) == 0x000008, "Wrong size on AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ItemSelected__DelegateSignature");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ItemSelected__DelegateSignature, InItem) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ItemSelected__DelegateSignature::InItem' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove
// 0x0004 (0x0004 - 0x0000)
struct AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove) == 0x000004, "Wrong alignment on AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove) == 0x000004, "Wrong size on AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove, EntryPoint) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove::EntryPoint' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.SetupItem
// 0x0058 (0x0058 - 0x0000)
struct AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem final
{
public:
	bool                                          InIsStickerIndefinite;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsSelectable;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7915[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InStickerRemoveItemId;                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStickerRemoveItemHoldNum;                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpHoldNum;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsSelectable;                                   // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpIsStickerIndefinite;                            // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7916[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7917[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7918[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7919[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem) == 0x000008, "Wrong alignment on AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem) == 0x000058, "Wrong size on AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, InIsStickerIndefinite) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::InIsStickerIndefinite' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, InIsSelectable) == 0x000001, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::InIsSelectable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, InStickerRemoveItemId) == 0x000004, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::InStickerRemoveItemId' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, InStickerRemoveItemHoldNum) == 0x000008, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::InStickerRemoveItemHoldNum' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, TmpHoldNum) == 0x00000C, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::TmpHoldNum' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, TmpIsSelectable) == 0x000010, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::TmpIsSelectable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, TmpIsStickerIndefinite) == 0x000011, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::TmpIsStickerIndefinite' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, Temp_int_Variable) == 0x000014, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, Temp_bool_Variable) == 0x000018, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, Temp_int_Variable_1) == 0x00001C, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, K2Node_Select_Default) == 0x000020, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, Temp_bool_Variable_1) == 0x000024, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, K2Node_Select_Default_1) == 0x000028, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.SetIsSelectable
// 0x0001 (0x0001 - 0x0000)
struct AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetIsSelectable final
{
public:
	bool                                          InIsSelectable;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetIsSelectable) == 0x000001, "Wrong alignment on AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetIsSelectable");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetIsSelectable) == 0x000001, "Wrong size on AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetIsSelectable");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetIsSelectable, InIsSelectable) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetIsSelectable::InIsSelectable' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.SetBtnSelected
// 0x0608 (0x0608 - 0x0000)
struct AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_791A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0090(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0118(0x0278)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0390(0x0278)()
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected) == 0x000008, "Wrong alignment on AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected) == 0x000608, "Wrong size on AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected, bSelected) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_1) == 0x000090, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle) == 0x000118, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x000390, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

}

