#pragma once

 

// Package: WBP_FilterSelecterWindow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Filter_Type_structs.hpp"


namespace SDK::Params
{

// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnFilterApply__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_FilterSelecterWindow_C_OnFilterApply__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_FilterSelecterWindow_C_OnFilterApply__DelegateSignature) == 0x000008, "Wrong alignment on WBP_FilterSelecterWindow_C_OnFilterApply__DelegateSignature");
static_assert(sizeof(WBP_FilterSelecterWindow_C_OnFilterApply__DelegateSignature) == 0x000010, "Wrong size on WBP_FilterSelecterWindow_C_OnFilterApply__DelegateSignature");
static_assert(offsetof(WBP_FilterSelecterWindow_C_OnFilterApply__DelegateSignature, Filters) == 0x000000, "Member 'WBP_FilterSelecterWindow_C_OnFilterApply__DelegateSignature::Filters' has a wrong offset!");

// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.ExecuteUbergraph_WBP_FilterSelecterWindow
// 0x0018 (0x0018 - 0x0000)
struct WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97A9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x0008(0x0010)(ReferenceParm)
};
static_assert(alignof(WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow) == 0x000008, "Wrong alignment on WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow");
static_assert(sizeof(WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow) == 0x000018, "Wrong size on WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow");
static_assert(offsetof(WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow, EntryPoint) == 0x000000, "Member 'WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow, K2Node_ComponentBoundEvent_Filters) == 0x000008, "Member 'WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");

// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature) == 0x000008, "Wrong alignment on WBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature");
static_assert(sizeof(WBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature) == 0x000010, "Wrong size on WBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature");
static_assert(offsetof(WBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature, Filters) == 0x000000, "Member 'WBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature::Filters' has a wrong offset!");

// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_FilterSelecterWindow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_FilterSelecterWindow_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_FilterSelecterWindow_C_PreConstruct");
static_assert(sizeof(WBP_FilterSelecterWindow_C_PreConstruct) == 0x000001, "Wrong size on WBP_FilterSelecterWindow_C_PreConstruct");
static_assert(offsetof(WBP_FilterSelecterWindow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_FilterSelecterWindow_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.ChangeFilterType
// 0x0001 (0x0001 - 0x0000)
struct WBP_FilterSelecterWindow_C_ChangeFilterType final
{
public:
	EFilter_Type                                  Param_FilterType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FilterSelecterWindow_C_ChangeFilterType) == 0x000001, "Wrong alignment on WBP_FilterSelecterWindow_C_ChangeFilterType");
static_assert(sizeof(WBP_FilterSelecterWindow_C_ChangeFilterType) == 0x000001, "Wrong size on WBP_FilterSelecterWindow_C_ChangeFilterType");
static_assert(offsetof(WBP_FilterSelecterWindow_C_ChangeFilterType, Param_FilterType) == 0x000000, "Member 'WBP_FilterSelecterWindow_C_ChangeFilterType::Param_FilterType' has a wrong offset!");

// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.SetWindowPosition
// 0x0010 (0x0010 - 0x0000)
struct WBP_FilterSelecterWindow_C_SetWindowPosition final
{
public:
	struct FVector2D                              InPosition;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FilterSelecterWindow_C_SetWindowPosition) == 0x000008, "Wrong alignment on WBP_FilterSelecterWindow_C_SetWindowPosition");
static_assert(sizeof(WBP_FilterSelecterWindow_C_SetWindowPosition) == 0x000010, "Wrong size on WBP_FilterSelecterWindow_C_SetWindowPosition");
static_assert(offsetof(WBP_FilterSelecterWindow_C_SetWindowPosition, InPosition) == 0x000000, "Member 'WBP_FilterSelecterWindow_C_SetWindowPosition::InPosition' has a wrong offset!");
static_assert(offsetof(WBP_FilterSelecterWindow_C_SetWindowPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_FilterSelecterWindow_C_SetWindowPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

