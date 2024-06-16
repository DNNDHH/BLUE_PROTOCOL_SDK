#pragma once

 

// Package: FilterButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Filter_Type_structs.hpp"


namespace SDK::Params
{

// Function FilterButton.FilterButton_C.OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct FilterButton_C_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(FilterButton_C_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on FilterButton_C_OnApplyFilter__DelegateSignature");
static_assert(sizeof(FilterButton_C_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on FilterButton_C_OnApplyFilter__DelegateSignature");
static_assert(offsetof(FilterButton_C_OnApplyFilter__DelegateSignature, Filters) == 0x000000, "Member 'FilterButton_C_OnApplyFilter__DelegateSignature::Filters' has a wrong offset!");

// Function FilterButton.FilterButton_C.ExecuteUbergraph_FilterButton
// 0x0040 (0x0040 - 0x0000)
struct FilterButton_C_ExecuteUbergraph_FilterButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BDE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   K2Node_CustomEvent_Filters;                        // 0x0008(0x0010)(ReferenceParm)
	TDelegate<void(TArray<struct FFilterGroup>& Filters)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BDF[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterButton_C_ExecuteUbergraph_FilterButton) == 0x000008, "Wrong alignment on FilterButton_C_ExecuteUbergraph_FilterButton");
static_assert(sizeof(FilterButton_C_ExecuteUbergraph_FilterButton) == 0x000040, "Wrong size on FilterButton_C_ExecuteUbergraph_FilterButton");
static_assert(offsetof(FilterButton_C_ExecuteUbergraph_FilterButton, EntryPoint) == 0x000000, "Member 'FilterButton_C_ExecuteUbergraph_FilterButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(FilterButton_C_ExecuteUbergraph_FilterButton, K2Node_CustomEvent_Filters) == 0x000008, "Member 'FilterButton_C_ExecuteUbergraph_FilterButton::K2Node_CustomEvent_Filters' has a wrong offset!");
static_assert(offsetof(FilterButton_C_ExecuteUbergraph_FilterButton, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'FilterButton_C_ExecuteUbergraph_FilterButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FilterButton_C_ExecuteUbergraph_FilterButton, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'FilterButton_C_ExecuteUbergraph_FilterButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterButton_C_ExecuteUbergraph_FilterButton, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'FilterButton_C_ExecuteUbergraph_FilterButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FilterButton_C_ExecuteUbergraph_FilterButton, CallFunc_IsValid_ReturnValue_2) == 0x00002A, "Member 'FilterButton_C_ExecuteUbergraph_FilterButton::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FilterButton_C_ExecuteUbergraph_FilterButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'FilterButton_C_ExecuteUbergraph_FilterButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(FilterButton_C_ExecuteUbergraph_FilterButton, CallFunc_IsValid_ReturnValue_3) == 0x00003C, "Member 'FilterButton_C_ExecuteUbergraph_FilterButton::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function FilterButton.FilterButton_C.ApplyFilters
// 0x0010 (0x0010 - 0x0000)
struct FilterButton_C_ApplyFilters final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(FilterButton_C_ApplyFilters) == 0x000008, "Wrong alignment on FilterButton_C_ApplyFilters");
static_assert(sizeof(FilterButton_C_ApplyFilters) == 0x000010, "Wrong size on FilterButton_C_ApplyFilters");
static_assert(offsetof(FilterButton_C_ApplyFilters, Filters) == 0x000000, "Member 'FilterButton_C_ApplyFilters::Filters' has a wrong offset!");

// Function FilterButton.FilterButton_C.SetAttachTargetCanvas
// 0x0008 (0x0008 - 0x0000)
struct FilterButton_C_SetAttachTargetCanvas final
{
public:
	class UCanvasPanel*                           Param_AttachTargetCanvas;                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterButton_C_SetAttachTargetCanvas) == 0x000008, "Wrong alignment on FilterButton_C_SetAttachTargetCanvas");
static_assert(sizeof(FilterButton_C_SetAttachTargetCanvas) == 0x000008, "Wrong size on FilterButton_C_SetAttachTargetCanvas");
static_assert(offsetof(FilterButton_C_SetAttachTargetCanvas, Param_AttachTargetCanvas) == 0x000000, "Member 'FilterButton_C_SetAttachTargetCanvas::Param_AttachTargetCanvas' has a wrong offset!");

// Function FilterButton.FilterButton_C.ChangeFilterType
// 0x0002 (0x0002 - 0x0000)
struct FilterButton_C_ChangeFilterType final
{
public:
	EFilter_Type                                  Param_FilterType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterButton_C_ChangeFilterType) == 0x000001, "Wrong alignment on FilterButton_C_ChangeFilterType");
static_assert(sizeof(FilterButton_C_ChangeFilterType) == 0x000002, "Wrong size on FilterButton_C_ChangeFilterType");
static_assert(offsetof(FilterButton_C_ChangeFilterType, Param_FilterType) == 0x000000, "Member 'FilterButton_C_ChangeFilterType::Param_FilterType' has a wrong offset!");
static_assert(offsetof(FilterButton_C_ChangeFilterType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'FilterButton_C_ChangeFilterType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function FilterButton.FilterButton_C.CreateWindow
// 0x0078 (0x0078 - 0x0000)
struct FilterButton_C_CreateWindow final
{
public:
	class UWBP_FilterSelecterWindow_C*            CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetUIPosition_ReturnValue;                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToViewport_PixelPosition;         // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToViewport_ViewportPosition;      // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x002C(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BE0[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchorData                            K2Node_MakeStruct_AnchorData;                      // 0x0040(0x0028)(NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterButton_C_CreateWindow) == 0x000008, "Wrong alignment on FilterButton_C_CreateWindow");
static_assert(sizeof(FilterButton_C_CreateWindow) == 0x000078, "Wrong size on FilterButton_C_CreateWindow");
static_assert(offsetof(FilterButton_C_CreateWindow, CallFunc_Create_ReturnValue) == 0x000000, "Member 'FilterButton_C_CreateWindow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterButton_C_CreateWindow, CallFunc_GetViewportScale_ReturnValue) == 0x000008, "Member 'FilterButton_C_CreateWindow::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterButton_C_CreateWindow, CallFunc_GetUIPosition_ReturnValue) == 0x00000C, "Member 'FilterButton_C_CreateWindow::CallFunc_GetUIPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterButton_C_CreateWindow, CallFunc_AbsoluteToViewport_PixelPosition) == 0x000014, "Member 'FilterButton_C_CreateWindow::CallFunc_AbsoluteToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(FilterButton_C_CreateWindow, CallFunc_AbsoluteToViewport_ViewportPosition) == 0x00001C, "Member 'FilterButton_C_CreateWindow::CallFunc_AbsoluteToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(FilterButton_C_CreateWindow, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000024, "Member 'FilterButton_C_CreateWindow::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterButton_C_CreateWindow, K2Node_MakeStruct_Anchors) == 0x00002C, "Member 'FilterButton_C_CreateWindow::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(FilterButton_C_CreateWindow, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'FilterButton_C_CreateWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterButton_C_CreateWindow, K2Node_MakeStruct_AnchorData) == 0x000040, "Member 'FilterButton_C_CreateWindow::K2Node_MakeStruct_AnchorData' has a wrong offset!");
static_assert(offsetof(FilterButton_C_CreateWindow, CallFunc_AddChildToCanvas_ReturnValue) == 0x000068, "Member 'FilterButton_C_CreateWindow::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterButton_C_CreateWindow, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'FilterButton_C_CreateWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function FilterButton.FilterButton_C.DeleteWindow
// 0x0001 (0x0001 - 0x0000)
struct FilterButton_C_DeleteWindow final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterButton_C_DeleteWindow) == 0x000001, "Wrong alignment on FilterButton_C_DeleteWindow");
static_assert(sizeof(FilterButton_C_DeleteWindow) == 0x000001, "Wrong size on FilterButton_C_DeleteWindow");
static_assert(offsetof(FilterButton_C_DeleteWindow, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'FilterButton_C_DeleteWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

