#pragma once

 

// Package: MapWidget_PinEraserIconBtn

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.OnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_PinEraserIconBtn_C_OnPressed__DelegateSignature final
{
public:
	class UMapWidget_PinEraserIconBtn_C*          InPressedIcon;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PinEraserIconBtn_C_OnPressed__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_PinEraserIconBtn_C_OnPressed__DelegateSignature");
static_assert(sizeof(MapWidget_PinEraserIconBtn_C_OnPressed__DelegateSignature) == 0x000008, "Wrong size on MapWidget_PinEraserIconBtn_C_OnPressed__DelegateSignature");
static_assert(offsetof(MapWidget_PinEraserIconBtn_C_OnPressed__DelegateSignature, InPressedIcon) == 0x000000, "Member 'MapWidget_PinEraserIconBtn_C_OnPressed__DelegateSignature::InPressedIcon' has a wrong offset!");

// Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.ExecuteUbergraph_MapWidget_PinEraserIconBtn
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_PinEraserIconBtn_C_ExecuteUbergraph_MapWidget_PinEraserIconBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PinEraserIconBtn_C_ExecuteUbergraph_MapWidget_PinEraserIconBtn) == 0x000004, "Wrong alignment on MapWidget_PinEraserIconBtn_C_ExecuteUbergraph_MapWidget_PinEraserIconBtn");
static_assert(sizeof(MapWidget_PinEraserIconBtn_C_ExecuteUbergraph_MapWidget_PinEraserIconBtn) == 0x000004, "Wrong size on MapWidget_PinEraserIconBtn_C_ExecuteUbergraph_MapWidget_PinEraserIconBtn");
static_assert(offsetof(MapWidget_PinEraserIconBtn_C_ExecuteUbergraph_MapWidget_PinEraserIconBtn, EntryPoint) == 0x000000, "Member 'MapWidget_PinEraserIconBtn_C_ExecuteUbergraph_MapWidget_PinEraserIconBtn::EntryPoint' has a wrong offset!");

// Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.SetIconBtnEnable
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_PinEraserIconBtn_C_SetIconBtnEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_PinEraserIconBtn_C_SetIconBtnEnable) == 0x000001, "Wrong alignment on MapWidget_PinEraserIconBtn_C_SetIconBtnEnable");
static_assert(sizeof(MapWidget_PinEraserIconBtn_C_SetIconBtnEnable) == 0x000001, "Wrong size on MapWidget_PinEraserIconBtn_C_SetIconBtnEnable");
static_assert(offsetof(MapWidget_PinEraserIconBtn_C_SetIconBtnEnable, IsEnable) == 0x000000, "Member 'MapWidget_PinEraserIconBtn_C_SetIconBtnEnable::IsEnable' has a wrong offset!");

}

