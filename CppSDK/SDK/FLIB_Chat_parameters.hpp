#pragma once

 

// Package: FLIB_Chat

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function FLIB_Chat.FLIB_Chat_C.IsTalkModeContinue
// 0x0080 (0x0080 - 0x0000)
struct FLIB_Chat_C_IsTalkModeContinue final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C8F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    TempController;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C90[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C91[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C92[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_1;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C93[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerPhotoModeComponent*            CallFunc_GetPhotoModeComponent_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPhotoMode_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_Chat_C_IsTalkModeContinue) == 0x000008, "Wrong alignment on FLIB_Chat_C_IsTalkModeContinue");
static_assert(sizeof(FLIB_Chat_C_IsTalkModeContinue) == 0x000080, "Wrong size on FLIB_Chat_C_IsTalkModeContinue");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, __WorldContext) == 0x000000, "Member 'FLIB_Chat_C_IsTalkModeContinue::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, ReturnValue) == 0x000008, "Member 'FLIB_Chat_C_IsTalkModeContinue::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, TempController) == 0x000010, "Member 'FLIB_Chat_C_IsTalkModeContinue::TempController' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_IsEmpty_ReturnValue) == 0x000018, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_GetSBPlayerController_ReturnValue) == 0x000020, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, K2Node_MakeArray_Array) == 0x000028, "Member 'FLIB_Chat_C_IsTalkModeContinue::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_Array_Get_Item) == 0x000040, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000048, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_IsInputKeyDown_ReturnValue) == 0x000050, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_GetDisplayName_ReturnValue) == 0x000058, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_IsInputKeyDown_ReturnValue_1) == 0x000068, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_IsInputKeyDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_BooleanOR_ReturnValue) == 0x000069, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_GetPhotoModeComponent_ReturnValue) == 0x000070, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_GetPhotoModeComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsTalkModeContinue, CallFunc_IsPhotoMode_ReturnValue) == 0x000079, "Member 'FLIB_Chat_C_IsTalkModeContinue::CallFunc_IsPhotoMode_ReturnValue' has a wrong offset!");

// Function FLIB_Chat.FLIB_Chat_C.OnChatHudDragOver
// 0x0170 (0x0170 - 0x0000)
struct FLIB_Chat_C_OnChatHudDragOver final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatHudResizeOperation_C*              K2Node_DynamicCast_AsChat_Hud_Resize_Operation;    // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C94[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ChatHudResizableWidgetParent_C> K2Node_DynamicCast_AsBPI_Chat_Hud_Resizable_Widget_Parent; // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C95[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C96[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0124(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               CallFunc_GetAnchors_ReturnValue;                   // 0x012C(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C97[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C98[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0154(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToLocal_ReturnValue;              // 0x015C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x0164(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_Chat_C_OnChatHudDragOver) == 0x000008, "Wrong alignment on FLIB_Chat_C_OnChatHudDragOver");
static_assert(sizeof(FLIB_Chat_C_OnChatHudDragOver) == 0x000170, "Wrong size on FLIB_Chat_C_OnChatHudDragOver");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, MyGeometry) == 0x000000, "Member 'FLIB_Chat_C_OnChatHudDragOver::MyGeometry' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, PointerEvent) == 0x000038, "Member 'FLIB_Chat_C_OnChatHudDragOver::PointerEvent' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, Operation) == 0x0000A8, "Member 'FLIB_Chat_C_OnChatHudDragOver::Operation' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, __WorldContext) == 0x0000B0, "Member 'FLIB_Chat_C_OnChatHudDragOver::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, K2Node_MakeArray_Array) == 0x0000B8, "Member 'FLIB_Chat_C_OnChatHudDragOver::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_GetViewportSize_ReturnValue) == 0x0000C8, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, K2Node_DynamicCast_AsChat_Hud_Resize_Operation) == 0x0000D8, "Member 'FLIB_Chat_C_OnChatHudDragOver::K2Node_DynamicCast_AsChat_Hud_Resize_Operation' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'FLIB_Chat_C_OnChatHudDragOver::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000E8, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_GetDisplayName_ReturnValue) == 0x0000F0, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, K2Node_DynamicCast_AsBPI_Chat_Hud_Resizable_Widget_Parent) == 0x000100, "Member 'FLIB_Chat_C_OnChatHudDragOver::K2Node_DynamicCast_AsBPI_Chat_Hud_Resizable_Widget_Parent' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'FLIB_Chat_C_OnChatHudDragOver::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_DoesImplementInterface_ReturnValue) == 0x000111, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000118, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_IsValid_ReturnValue) == 0x000120, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_GetPosition_ReturnValue) == 0x000124, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_GetAnchors_ReturnValue) == 0x00012C, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_GetAnchors_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_IsValid_ReturnValue_1) == 0x00013C, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000140, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue) == 0x000148, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_IsEmpty_ReturnValue) == 0x000150, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000154, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_AbsoluteToLocal_ReturnValue) == 0x00015C, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_AbsoluteToLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDragOver, CallFunc_Subtract_Vector2DVector2D_ReturnValue_1) == 0x000164, "Member 'FLIB_Chat_C_OnChatHudDragOver::CallFunc_Subtract_Vector2DVector2D_ReturnValue_1' has a wrong offset!");

// Function FLIB_Chat.FLIB_Chat_C.OnChatHudDrop
// 0x0140 (0x0140 - 0x0000)
struct FLIB_Chat_C_OnChatHudDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetAbsoluteSize_ReturnValue;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               CallFunc_CreateClippingAnchors_Anchors;            // 0x00C8(0x0010)(NoDestructor)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatHudDragOperation_C*                K2Node_DynamicCast_AsChat_Hud_Drag_Operation;      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C99[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x00F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOffScreen_IsOffScreen;                  // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C9A[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               CallFunc_GetAnchors_ReturnValue;                   // 0x0108(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C9B[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x011C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_2;  // 0x0124(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToLocal_ReturnValue;              // 0x012C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_3;  // 0x0134(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_Chat_C_OnChatHudDrop) == 0x000008, "Wrong alignment on FLIB_Chat_C_OnChatHudDrop");
static_assert(sizeof(FLIB_Chat_C_OnChatHudDrop) == 0x000140, "Wrong size on FLIB_Chat_C_OnChatHudDrop");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, MyGeometry) == 0x000000, "Member 'FLIB_Chat_C_OnChatHudDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, PointerEvent) == 0x000038, "Member 'FLIB_Chat_C_OnChatHudDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, Operation) == 0x0000A8, "Member 'FLIB_Chat_C_OnChatHudDrop::Operation' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, __WorldContext) == 0x0000B0, "Member 'FLIB_Chat_C_OnChatHudDrop::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_GetAbsoluteSize_ReturnValue) == 0x0000B8, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_GetAbsoluteSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_GetViewportSize_ReturnValue) == 0x0000C0, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_CreateClippingAnchors_Anchors) == 0x0000C8, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_CreateClippingAnchors_Anchors' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x0000D8, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, K2Node_DynamicCast_AsChat_Hud_Drag_Operation) == 0x0000E0, "Member 'FLIB_Chat_C_OnChatHudDrop::K2Node_DynamicCast_AsChat_Hud_Drag_Operation' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'FLIB_Chat_C_OnChatHudDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_Subtract_Vector2DVector2D_ReturnValue_1) == 0x0000EC, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_Subtract_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue) == 0x0000F4, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_IsValid_ReturnValue) == 0x0000FC, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_IsOffScreen_IsOffScreen) == 0x0000FD, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_IsOffScreen_IsOffScreen' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000100, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_GetAnchors_ReturnValue) == 0x000108, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_GetAnchors_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_IsValid_ReturnValue_1) == 0x000118, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x00011C, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_Subtract_Vector2DVector2D_ReturnValue_2) == 0x000124, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_Subtract_Vector2DVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_AbsoluteToLocal_ReturnValue) == 0x00012C, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_AbsoluteToLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_OnChatHudDrop, CallFunc_Subtract_Vector2DVector2D_ReturnValue_3) == 0x000134, "Member 'FLIB_Chat_C_OnChatHudDrop::CallFunc_Subtract_Vector2DVector2D_ReturnValue_3' has a wrong offset!");

// Function FLIB_Chat.FLIB_Chat_C.CreateClippingAnchors
// 0x0060 (0x0060 - 0x0000)
struct FLIB_Chat_C_CreateClippingAnchors final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               Anchors;                                           // 0x0008(0x0010)(Parm, OutParm, NoDestructor)
	struct FVector2D                              CallFunc_GetMousePositionOnViewport_ReturnValue;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_1;                      // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0050(0x0010)(NoDestructor)
};
static_assert(alignof(FLIB_Chat_C_CreateClippingAnchors) == 0x000008, "Wrong alignment on FLIB_Chat_C_CreateClippingAnchors");
static_assert(sizeof(FLIB_Chat_C_CreateClippingAnchors) == 0x000060, "Wrong size on FLIB_Chat_C_CreateClippingAnchors");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, __WorldContext) == 0x000000, "Member 'FLIB_Chat_C_CreateClippingAnchors::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, Anchors) == 0x000008, "Member 'FLIB_Chat_C_CreateClippingAnchors::Anchors' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, CallFunc_GetMousePositionOnViewport_ReturnValue) == 0x000018, "Member 'FLIB_Chat_C_CreateClippingAnchors::CallFunc_GetMousePositionOnViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, CallFunc_GetViewportSize_ReturnValue) == 0x000020, "Member 'FLIB_Chat_C_CreateClippingAnchors::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, CallFunc_Divide_Vector2DVector2D_ReturnValue) == 0x000028, "Member 'FLIB_Chat_C_CreateClippingAnchors::CallFunc_Divide_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, CallFunc_BreakVector2D_X) == 0x000030, "Member 'FLIB_Chat_C_CreateClippingAnchors::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, CallFunc_BreakVector2D_Y) == 0x000034, "Member 'FLIB_Chat_C_CreateClippingAnchors::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, CallFunc_Round_ReturnValue) == 0x000038, "Member 'FLIB_Chat_C_CreateClippingAnchors::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, CallFunc_Round_ReturnValue_1) == 0x00003C, "Member 'FLIB_Chat_C_CreateClippingAnchors::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000040, "Member 'FLIB_Chat_C_CreateClippingAnchors::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000044, "Member 'FLIB_Chat_C_CreateClippingAnchors::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, CallFunc_MakeVector2D_ReturnValue) == 0x000048, "Member 'FLIB_Chat_C_CreateClippingAnchors::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_CreateClippingAnchors, K2Node_MakeStruct_Anchors) == 0x000050, "Member 'FLIB_Chat_C_CreateClippingAnchors::K2Node_MakeStruct_Anchors' has a wrong offset!");

// Function FLIB_Chat.FLIB_Chat_C.IsPhotoMode
// 0x0028 (0x0028 - 0x0000)
struct FLIB_Chat_C_IsPhotoMode final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C9C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerPhotoModeComponent*            CallFunc_GetPhotoModeComponent_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPhotoMode_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_Chat_C_IsPhotoMode) == 0x000008, "Wrong alignment on FLIB_Chat_C_IsPhotoMode");
static_assert(sizeof(FLIB_Chat_C_IsPhotoMode) == 0x000028, "Wrong size on FLIB_Chat_C_IsPhotoMode");
static_assert(offsetof(FLIB_Chat_C_IsPhotoMode, __WorldContext) == 0x000000, "Member 'FLIB_Chat_C_IsPhotoMode::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsPhotoMode, ReturnValue) == 0x000008, "Member 'FLIB_Chat_C_IsPhotoMode::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsPhotoMode, CallFunc_GetSBPlayerController_ReturnValue) == 0x000010, "Member 'FLIB_Chat_C_IsPhotoMode::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsPhotoMode, CallFunc_GetPhotoModeComponent_ReturnValue) == 0x000018, "Member 'FLIB_Chat_C_IsPhotoMode::CallFunc_GetPhotoModeComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsPhotoMode, CallFunc_IsPhotoMode_ReturnValue) == 0x000020, "Member 'FLIB_Chat_C_IsPhotoMode::CallFunc_IsPhotoMode_ReturnValue' has a wrong offset!");

// Function FLIB_Chat.FLIB_Chat_C.IsNotPhotoMode
// 0x0010 (0x0010 - 0x0000)
struct FLIB_Chat_C_IsNotPhotoMode final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPhotoMode_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_Chat_C_IsNotPhotoMode) == 0x000008, "Wrong alignment on FLIB_Chat_C_IsNotPhotoMode");
static_assert(sizeof(FLIB_Chat_C_IsNotPhotoMode) == 0x000010, "Wrong size on FLIB_Chat_C_IsNotPhotoMode");
static_assert(offsetof(FLIB_Chat_C_IsNotPhotoMode, __WorldContext) == 0x000000, "Member 'FLIB_Chat_C_IsNotPhotoMode::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsNotPhotoMode, ReturnValue) == 0x000008, "Member 'FLIB_Chat_C_IsNotPhotoMode::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsNotPhotoMode, CallFunc_IsPhotoMode_ReturnValue) == 0x000009, "Member 'FLIB_Chat_C_IsNotPhotoMode::CallFunc_IsPhotoMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsNotPhotoMode, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'FLIB_Chat_C_IsNotPhotoMode::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function FLIB_Chat.FLIB_Chat_C.IsOffScreen
// 0x0130 (0x0130 - 0x0000)
struct FLIB_Chat_C_IsOffScreen final
{
public:
	class UUserWidget*                            InWidgetRef;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              InMyGeometry;                                      // 0x0008(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          InPointerEvent;                                    // 0x0040(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                              InDragStartPos;                                    // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x00B8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsOffScreen;                                 // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C9D[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RateY;                                             // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RateX;                                             // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToLocal_ReturnValue;              // 0x00DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C9E[0x2];                                     // 0x0112(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0127(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_Chat_C_IsOffScreen) == 0x000008, "Wrong alignment on FLIB_Chat_C_IsOffScreen");
static_assert(sizeof(FLIB_Chat_C_IsOffScreen) == 0x000130, "Wrong size on FLIB_Chat_C_IsOffScreen");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, InWidgetRef) == 0x000000, "Member 'FLIB_Chat_C_IsOffScreen::InWidgetRef' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, InMyGeometry) == 0x000008, "Member 'FLIB_Chat_C_IsOffScreen::InMyGeometry' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, InPointerEvent) == 0x000040, "Member 'FLIB_Chat_C_IsOffScreen::InPointerEvent' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, InDragStartPos) == 0x0000B0, "Member 'FLIB_Chat_C_IsOffScreen::InDragStartPos' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, __WorldContext) == 0x0000B8, "Member 'FLIB_Chat_C_IsOffScreen::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, Param_IsOffScreen) == 0x0000C0, "Member 'FLIB_Chat_C_IsOffScreen::Param_IsOffScreen' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, RateY) == 0x0000C4, "Member 'FLIB_Chat_C_IsOffScreen::RateY' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, RateX) == 0x0000C8, "Member 'FLIB_Chat_C_IsOffScreen::RateX' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue) == 0x0000CC, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_GetDesiredSize_ReturnValue) == 0x0000D4, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_AbsoluteToLocal_ReturnValue) == 0x0000DC, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_AbsoluteToLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_BreakVector2D_X) == 0x0000E4, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_BreakVector2D_Y) == 0x0000E8, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x0000EC, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_BreakVector2D_X_1) == 0x0000F4, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_BreakVector2D_Y_1) == 0x0000F8, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000FC, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000100, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000104, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000108, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00010C, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000110, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000111, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000114, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Subtract_FloatFloat_ReturnValue_3) == 0x000118, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Subtract_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x00011C, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x000120, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Less_FloatFloat_ReturnValue) == 0x000124, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000125, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_BooleanOR_ReturnValue) == 0x000126, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_BooleanOR_ReturnValue_1) == 0x000127, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_Chat_C_IsOffScreen, CallFunc_BooleanOR_ReturnValue_2) == 0x000128, "Member 'FLIB_Chat_C_IsOffScreen::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

}

