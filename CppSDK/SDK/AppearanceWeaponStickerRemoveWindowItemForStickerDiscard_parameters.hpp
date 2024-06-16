#pragma once

 

// Package: AppearanceWeaponStickerRemoveWindowItemForStickerDiscard

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.ItemSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ItemSelected__DelegateSignature final
{
public:
	class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ItemSelected__DelegateSignature");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ItemSelected__DelegateSignature) == 0x000008, "Wrong size on AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ItemSelected__DelegateSignature");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ItemSelected__DelegateSignature, InItem) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ItemSelected__DelegateSignature::InItem' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard
// 0x0004 (0x0004 - 0x0000)
struct AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard) == 0x000004, "Wrong alignment on AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard) == 0x000004, "Wrong size on AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard, EntryPoint) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard::EntryPoint' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.SetBtnSelected
// 0x0608 (0x0608 - 0x0000)
struct AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_791B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0008(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0090(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0118(0x0278)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0390(0x0278)()
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected) == 0x000008, "Wrong alignment on AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected) == 0x000608, "Wrong size on AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected, bSelected) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush) == 0x000008, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_1) == 0x000090, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle) == 0x000118, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x000390, "Member 'AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

}

