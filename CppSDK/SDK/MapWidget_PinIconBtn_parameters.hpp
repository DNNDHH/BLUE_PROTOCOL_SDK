#pragma once

 

// Package: MapWidget_PinIconBtn

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.OnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_PinIconBtn_C_OnPressed__DelegateSignature final
{
public:
	class UMapWidget_PinIconBtn_C*                InPressedIcon;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PinIconBtn_C_OnPressed__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_PinIconBtn_C_OnPressed__DelegateSignature");
static_assert(sizeof(MapWidget_PinIconBtn_C_OnPressed__DelegateSignature) == 0x000008, "Wrong size on MapWidget_PinIconBtn_C_OnPressed__DelegateSignature");
static_assert(offsetof(MapWidget_PinIconBtn_C_OnPressed__DelegateSignature, InPressedIcon) == 0x000000, "Member 'MapWidget_PinIconBtn_C_OnPressed__DelegateSignature::InPressedIcon' has a wrong offset!");

// Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.ExecuteUbergraph_MapWidget_PinIconBtn
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_PinIconBtn_C_ExecuteUbergraph_MapWidget_PinIconBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PinIconBtn_C_ExecuteUbergraph_MapWidget_PinIconBtn) == 0x000004, "Wrong alignment on MapWidget_PinIconBtn_C_ExecuteUbergraph_MapWidget_PinIconBtn");
static_assert(sizeof(MapWidget_PinIconBtn_C_ExecuteUbergraph_MapWidget_PinIconBtn) == 0x000004, "Wrong size on MapWidget_PinIconBtn_C_ExecuteUbergraph_MapWidget_PinIconBtn");
static_assert(offsetof(MapWidget_PinIconBtn_C_ExecuteUbergraph_MapWidget_PinIconBtn, EntryPoint) == 0x000000, "Member 'MapWidget_PinIconBtn_C_ExecuteUbergraph_MapWidget_PinIconBtn::EntryPoint' has a wrong offset!");

// Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.SetIconTextureByPinType
// 0x04C8 (0x04C8 - 0x0000)
struct MapWidget_PinIconBtn_C_SetIconTextureByPinType final
{
public:
	EMapPinType                                   InPinType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4332[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             TmpTexture_DisabledStyle;                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TmpTexture_PressedStyle;                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TmpTexture_HoveredStyle;                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TmpTexture_NormalStyle;                            // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4333[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0030(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00B8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0140(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x01C8(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0250(0x0278)()
};
static_assert(alignof(MapWidget_PinIconBtn_C_SetIconTextureByPinType) == 0x000008, "Wrong alignment on MapWidget_PinIconBtn_C_SetIconTextureByPinType");
static_assert(sizeof(MapWidget_PinIconBtn_C_SetIconTextureByPinType) == 0x0004C8, "Wrong size on MapWidget_PinIconBtn_C_SetIconTextureByPinType");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, InPinType) == 0x000000, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::InPinType' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, TmpTexture_DisabledStyle) == 0x000008, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::TmpTexture_DisabledStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, TmpTexture_PressedStyle) == 0x000010, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::TmpTexture_PressedStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, TmpTexture_HoveredStyle) == 0x000018, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::TmpTexture_HoveredStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, TmpTexture_NormalStyle) == 0x000020, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::TmpTexture_NormalStyle' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, K2Node_MakeStruct_SlateBrush) == 0x000030, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, K2Node_MakeStruct_SlateBrush_1) == 0x0000B8, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, K2Node_MakeStruct_SlateBrush_2) == 0x000140, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, K2Node_MakeStruct_SlateBrush_3) == 0x0001C8, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconTextureByPinType, K2Node_MakeStruct_ButtonStyle) == 0x000250, "Member 'MapWidget_PinIconBtn_C_SetIconTextureByPinType::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");

// Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.SetIconBtnEnable
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_PinIconBtn_C_SetIconBtnEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_PinIconBtn_C_SetIconBtnEnable) == 0x000001, "Wrong alignment on MapWidget_PinIconBtn_C_SetIconBtnEnable");
static_assert(sizeof(MapWidget_PinIconBtn_C_SetIconBtnEnable) == 0x000001, "Wrong size on MapWidget_PinIconBtn_C_SetIconBtnEnable");
static_assert(offsetof(MapWidget_PinIconBtn_C_SetIconBtnEnable, IsEnable) == 0x000000, "Member 'MapWidget_PinIconBtn_C_SetIconBtnEnable::IsEnable' has a wrong offset!");

}

