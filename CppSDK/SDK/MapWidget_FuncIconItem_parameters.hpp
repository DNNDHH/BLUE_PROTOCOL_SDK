#pragma once

 

// Package: MapWidget_FuncIconItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.OnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_FuncIconItem_C_OnPressed__DelegateSignature final
{
public:
	class UMapWidget_FuncIconItem_C*              InPressedIcon;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_FuncIconItem_C_OnPressed__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_FuncIconItem_C_OnPressed__DelegateSignature");
static_assert(sizeof(MapWidget_FuncIconItem_C_OnPressed__DelegateSignature) == 0x000008, "Wrong size on MapWidget_FuncIconItem_C_OnPressed__DelegateSignature");
static_assert(offsetof(MapWidget_FuncIconItem_C_OnPressed__DelegateSignature, InPressedIcon) == 0x000000, "Member 'MapWidget_FuncIconItem_C_OnPressed__DelegateSignature::InPressedIcon' has a wrong offset!");

// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.ExecuteUbergraph_MapWidget_FuncIconItem
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_FuncIconItem_C_ExecuteUbergraph_MapWidget_FuncIconItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_FuncIconItem_C_ExecuteUbergraph_MapWidget_FuncIconItem) == 0x000004, "Wrong alignment on MapWidget_FuncIconItem_C_ExecuteUbergraph_MapWidget_FuncIconItem");
static_assert(sizeof(MapWidget_FuncIconItem_C_ExecuteUbergraph_MapWidget_FuncIconItem) == 0x000004, "Wrong size on MapWidget_FuncIconItem_C_ExecuteUbergraph_MapWidget_FuncIconItem");
static_assert(offsetof(MapWidget_FuncIconItem_C_ExecuteUbergraph_MapWidget_FuncIconItem, EntryPoint) == 0x000000, "Member 'MapWidget_FuncIconItem_C_ExecuteUbergraph_MapWidget_FuncIconItem::EntryPoint' has a wrong offset!");

// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetIconEnable
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_FuncIconItem_C_SetIconEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_FuncIconItem_C_SetIconEnable) == 0x000001, "Wrong alignment on MapWidget_FuncIconItem_C_SetIconEnable");
static_assert(sizeof(MapWidget_FuncIconItem_C_SetIconEnable) == 0x000001, "Wrong size on MapWidget_FuncIconItem_C_SetIconEnable");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconEnable, IsEnable) == 0x000000, "Member 'MapWidget_FuncIconItem_C_SetIconEnable::IsEnable' has a wrong offset!");

// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_FuncIconItem_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_FuncIconItem_C_SetText) == 0x000008, "Wrong alignment on MapWidget_FuncIconItem_C_SetText");
static_assert(sizeof(MapWidget_FuncIconItem_C_SetText) == 0x000018, "Wrong size on MapWidget_FuncIconItem_C_SetText");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetText, InText) == 0x000000, "Member 'MapWidget_FuncIconItem_C_SetText::InText' has a wrong offset!");

// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetTextId
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_FuncIconItem_C_SetTextId final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_FuncIconItem_C_SetTextId) == 0x000004, "Wrong alignment on MapWidget_FuncIconItem_C_SetTextId");
static_assert(sizeof(MapWidget_FuncIconItem_C_SetTextId) == 0x000004, "Wrong size on MapWidget_FuncIconItem_C_SetTextId");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetTextId, InTextID) == 0x000000, "Member 'MapWidget_FuncIconItem_C_SetTextId::InTextID' has a wrong offset!");

// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetIconTextureByFuncIconType
// 0x04C8 (0x04C8 - 0x0000)
struct MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType final
{
public:
	EMapFuncIconType                              InFuncIconType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             TmpTexture_DisabledStyle;                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TmpTexture_PressedStyle;                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TmpTexture_HoveredStyle;                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TmpTexture_NormalStyle;                            // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_511D[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0030(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00B8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0140(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x01C8(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0250(0x0278)()
};
static_assert(alignof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType) == 0x000008, "Wrong alignment on MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType");
static_assert(sizeof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType) == 0x0004C8, "Wrong size on MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, InFuncIconType) == 0x000000, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::InFuncIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, TmpTexture_DisabledStyle) == 0x000008, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::TmpTexture_DisabledStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, TmpTexture_PressedStyle) == 0x000010, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::TmpTexture_PressedStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, TmpTexture_HoveredStyle) == 0x000018, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::TmpTexture_HoveredStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, TmpTexture_NormalStyle) == 0x000020, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::TmpTexture_NormalStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, K2Node_MakeStruct_SlateBrush) == 0x000030, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, K2Node_MakeStruct_SlateBrush_1) == 0x0000B8, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, K2Node_MakeStruct_SlateBrush_2) == 0x000140, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, K2Node_MakeStruct_SlateBrush_3) == 0x0001C8, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType, K2Node_MakeStruct_ButtonStyle) == 0x000250, "Member 'MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");

}

