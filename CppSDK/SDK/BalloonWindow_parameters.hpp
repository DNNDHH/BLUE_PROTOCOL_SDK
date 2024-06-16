#pragma once

 

// Package: BalloonWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "BalloonWindowCameraSetting_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BalloonWindow.BalloonWindow_C.ExecuteUbergraph_BalloonWindow
// 0x0018 (0x0018 - 0x0000)
struct BalloonWindow_C_ExecuteUbergraph_BalloonWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F8F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BalloonWindow_C_ExecuteUbergraph_BalloonWindow) == 0x000008, "Wrong alignment on BalloonWindow_C_ExecuteUbergraph_BalloonWindow");
static_assert(sizeof(BalloonWindow_C_ExecuteUbergraph_BalloonWindow) == 0x000018, "Wrong size on BalloonWindow_C_ExecuteUbergraph_BalloonWindow");
static_assert(offsetof(BalloonWindow_C_ExecuteUbergraph_BalloonWindow, EntryPoint) == 0x000000, "Member 'BalloonWindow_C_ExecuteUbergraph_BalloonWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_ExecuteUbergraph_BalloonWindow, K2Node_Event_Animation) == 0x000008, "Member 'BalloonWindow_C_ExecuteUbergraph_BalloonWindow::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_ExecuteUbergraph_BalloonWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'BalloonWindow_C_ExecuteUbergraph_BalloonWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct BalloonWindow_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BalloonWindow_C_OnAnimationFinished) == 0x000008, "Wrong alignment on BalloonWindow_C_OnAnimationFinished");
static_assert(sizeof(BalloonWindow_C_OnAnimationFinished) == 0x000008, "Wrong size on BalloonWindow_C_OnAnimationFinished");
static_assert(offsetof(BalloonWindow_C_OnAnimationFinished, Animation) == 0x000000, "Member 'BalloonWindow_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.OnDestruct
// 0x0018 (0x0018 - 0x0000)
struct BalloonWindow_C_OnDestruct final
{
public:
	bool                                          CallFunc_IsUseCamera_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F90[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneCaptureComponent2D*               CallFunc_GetFaceCaptureComponent_Component;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BalloonWindow_C_OnDestruct) == 0x000008, "Wrong alignment on BalloonWindow_C_OnDestruct");
static_assert(sizeof(BalloonWindow_C_OnDestruct) == 0x000018, "Wrong size on BalloonWindow_C_OnDestruct");
static_assert(offsetof(BalloonWindow_C_OnDestruct, CallFunc_IsUseCamera_ReturnValue) == 0x000000, "Member 'BalloonWindow_C_OnDestruct::CallFunc_IsUseCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnDestruct, CallFunc_GetFaceCaptureComponent_Component) == 0x000008, "Member 'BalloonWindow_C_OnDestruct::CallFunc_GetFaceCaptureComponent_Component' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnDestruct, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BalloonWindow_C_OnDestruct::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.SetText
// 0x0078 (0x0078 - 0x0000)
struct BalloonWindow_C_SetText final
{
public:
	struct FSBBalloonWindowRequest                SBBalloonWindowRequest;                            // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_InsertNewLineEachCount_ReturnValue;       // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
};
static_assert(alignof(BalloonWindow_C_SetText) == 0x000008, "Wrong alignment on BalloonWindow_C_SetText");
static_assert(sizeof(BalloonWindow_C_SetText) == 0x000078, "Wrong size on BalloonWindow_C_SetText");
static_assert(offsetof(BalloonWindow_C_SetText, SBBalloonWindowRequest) == 0x000000, "Member 'BalloonWindow_C_SetText::SBBalloonWindowRequest' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_SetText, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'BalloonWindow_C_SetText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_SetText, CallFunc_InsertNewLineEachCount_ReturnValue) == 0x000050, "Member 'BalloonWindow_C_SetText::CallFunc_InsertNewLineEachCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_SetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'BalloonWindow_C_SetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.GetFaceCaptureComponent
// 0x0030 (0x0030 - 0x0000)
struct BalloonWindow_C_GetFaceCaptureComponent final
{
public:
	class USceneCaptureComponent2D*               Component;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F91[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneCaptureComponent2D*>       CallFunc_GetComponentsByTag_ReturnValue;           // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USceneCaptureComponent2D*               CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BalloonWindow_C_GetFaceCaptureComponent) == 0x000008, "Wrong alignment on BalloonWindow_C_GetFaceCaptureComponent");
static_assert(sizeof(BalloonWindow_C_GetFaceCaptureComponent) == 0x000030, "Wrong size on BalloonWindow_C_GetFaceCaptureComponent");
static_assert(offsetof(BalloonWindow_C_GetFaceCaptureComponent, Component) == 0x000000, "Member 'BalloonWindow_C_GetFaceCaptureComponent::Component' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetFaceCaptureComponent, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000008, "Member 'BalloonWindow_C_GetFaceCaptureComponent::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetFaceCaptureComponent, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BalloonWindow_C_GetFaceCaptureComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetFaceCaptureComponent, CallFunc_GetComponentsByTag_ReturnValue) == 0x000018, "Member 'BalloonWindow_C_GetFaceCaptureComponent::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetFaceCaptureComponent, CallFunc_Array_Get_Item) == 0x000028, "Member 'BalloonWindow_C_GetFaceCaptureComponent::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.OnTick
// 0x0050 (0x0050 - 0x0000)
struct BalloonWindow_C_OnTick final
{
public:
	bool                                          CallFunc_CheckDistanceLimit_Result;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F92[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetBasePosition_ReturnValue;              // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F93[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsIgnoreInput_ReturnValue;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F94[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AdjustPosition_ReturnValue;               // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AdjustPosition_Result;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F95[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasInputKeyJustPressed_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BalloonWindow_C_OnTick) == 0x000008, "Wrong alignment on BalloonWindow_C_OnTick");
static_assert(sizeof(BalloonWindow_C_OnTick) == 0x000050, "Wrong size on BalloonWindow_C_OnTick");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_CheckDistanceLimit_Result) == 0x000000, "Member 'BalloonWindow_C_OnTick::CallFunc_CheckDistanceLimit_Result' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_GetBasePosition_ReturnValue) == 0x000004, "Member 'BalloonWindow_C_OnTick::CallFunc_GetBasePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_GetViewportScale_ReturnValue) == 0x000010, "Member 'BalloonWindow_C_OnTick::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'BalloonWindow_C_OnTick::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_ProjectWorldToScreen_ScreenPosition) == 0x000020, "Member 'BalloonWindow_C_OnTick::CallFunc_ProjectWorldToScreen_ScreenPosition' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x000028, "Member 'BalloonWindow_C_OnTick::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_IsIgnoreInput_ReturnValue) == 0x000029, "Member 'BalloonWindow_C_OnTick::CallFunc_IsIgnoreInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x00002C, "Member 'BalloonWindow_C_OnTick::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_AdjustPosition_ReturnValue) == 0x000034, "Member 'BalloonWindow_C_OnTick::CallFunc_AdjustPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_AdjustPosition_Result) == 0x00003C, "Member 'BalloonWindow_C_OnTick::CallFunc_AdjustPosition_Result' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_GetPlayerController_ReturnValue_1) == 0x000040, "Member 'BalloonWindow_C_OnTick::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnTick, CallFunc_WasInputKeyJustPressed_ReturnValue) == 0x000048, "Member 'BalloonWindow_C_OnTick::CallFunc_WasInputKeyJustPressed_ReturnValue' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.OnShow
// 0x01E0 (0x01E0 - 0x0000)
struct BalloonWindow_C_OnShow final
{
public:
	struct FSBBalloonWindowRequest                InRequest;                                         // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBalloonWindowCameraSetting            CameraSetting;                                     // 0x0048(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F96[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBBalloonWindowRequest                Request;                                           // 0x0058(0x0040)(Edit, BlueprintVisible)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F97[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F98[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBalloonWindowCameraSetting            CallFunc_GetDataTableRowFromName_OutRow;           // 0x00C8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStampWidget_C*                         CallFunc_Create_ReturnValue;                       // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F99[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F9A[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneCaptureComponent2D*               CallFunc_GetFaceCaptureComponent_Component;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F9B[0x8];                                     // 0x0118(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0120(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0150(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BalloonWindow_C_OnShow) == 0x000010, "Wrong alignment on BalloonWindow_C_OnShow");
static_assert(sizeof(BalloonWindow_C_OnShow) == 0x0001E0, "Wrong size on BalloonWindow_C_OnShow");
static_assert(offsetof(BalloonWindow_C_OnShow, InRequest) == 0x000000, "Member 'BalloonWindow_C_OnShow::InRequest' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, RenderTarget) == 0x000040, "Member 'BalloonWindow_C_OnShow::RenderTarget' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CameraSetting) == 0x000048, "Member 'BalloonWindow_C_OnShow::CameraSetting' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, Request) == 0x000058, "Member 'BalloonWindow_C_OnShow::Request' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000098, "Member 'BalloonWindow_C_OnShow::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_K2_SetTimer_ReturnValue) == 0x0000A0, "Member 'BalloonWindow_C_OnShow::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'BalloonWindow_C_OnShow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_Conv_IntToString_ReturnValue) == 0x0000B0, "Member 'BalloonWindow_C_OnShow::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_Conv_StringToName_ReturnValue) == 0x0000C0, "Member 'BalloonWindow_C_OnShow::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000C8, "Member 'BalloonWindow_C_OnShow::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D4, "Member 'BalloonWindow_C_OnShow::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_IsValid_ReturnValue_1) == 0x0000D5, "Member 'BalloonWindow_C_OnShow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000D6, "Member 'BalloonWindow_C_OnShow::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_BooleanAND_ReturnValue) == 0x0000D7, "Member 'BalloonWindow_C_OnShow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_Create_ReturnValue) == 0x0000D8, "Member 'BalloonWindow_C_OnShow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000E0, "Member 'BalloonWindow_C_OnShow::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_IsValid_ReturnValue_2) == 0x0000E8, "Member 'BalloonWindow_C_OnShow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000F0, "Member 'BalloonWindow_C_OnShow::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000F8, "Member 'BalloonWindow_C_OnShow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_GetFaceCaptureComponent_Component) == 0x000100, "Member 'BalloonWindow_C_OnShow::CallFunc_GetFaceCaptureComponent_Component' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, K2Node_MakeStruct_Margin) == 0x000108, "Member 'BalloonWindow_C_OnShow::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_GetSocketTransform_ReturnValue) == 0x000120, "Member 'BalloonWindow_C_OnShow::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000150, "Member 'BalloonWindow_C_OnShow::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_OnShow, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0001D8, "Member 'BalloonWindow_C_OnShow::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct BalloonWindow_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BalloonWindow_C_PlayAnimIn) == 0x000008, "Wrong alignment on BalloonWindow_C_PlayAnimIn");
static_assert(sizeof(BalloonWindow_C_PlayAnimIn) == 0x000008, "Wrong size on BalloonWindow_C_PlayAnimIn");
static_assert(offsetof(BalloonWindow_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BalloonWindow_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.PlayAnimOut
// 0x0008 (0x0008 - 0x0000)
struct BalloonWindow_C_PlayAnimOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BalloonWindow_C_PlayAnimOut) == 0x000008, "Wrong alignment on BalloonWindow_C_PlayAnimOut");
static_assert(sizeof(BalloonWindow_C_PlayAnimOut) == 0x000008, "Wrong size on BalloonWindow_C_PlayAnimOut");
static_assert(offsetof(BalloonWindow_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BalloonWindow_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.AdjustPosition
// 0x0098 (0x0098 - 0x0000)
struct BalloonWindow_C_AdjustPosition final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F9C[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              TmpPosition;                                       // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRoundPosition_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F9D[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_1;                      // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F9E[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BalloonWindow_C_AdjustPosition) == 0x000004, "Wrong alignment on BalloonWindow_C_AdjustPosition");
static_assert(sizeof(BalloonWindow_C_AdjustPosition) == 0x000098, "Wrong size on BalloonWindow_C_AdjustPosition");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, Position) == 0x000000, "Member 'BalloonWindow_C_AdjustPosition::Position' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, ReturnValue) == 0x000008, "Member 'BalloonWindow_C_AdjustPosition::ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, Result) == 0x000010, "Member 'BalloonWindow_C_AdjustPosition::Result' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, TmpPosition) == 0x000014, "Member 'BalloonWindow_C_AdjustPosition::TmpPosition' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_IsRoundPosition_ReturnValue) == 0x00001C, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_IsRoundPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000020, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_X) == 0x000028, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_Y) == 0x00002C, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_Round_ReturnValue) == 0x000030, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_Round_ReturnValue_1) == 0x000034, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000038, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00003C, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_MakeVector2D_ReturnValue) == 0x000040, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_X_1) == 0x000048, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_Y_1) == 0x00004C, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000050, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000051, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_BooleanAND_ReturnValue) == 0x000052, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_X_2) == 0x000054, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_Y_2) == 0x000058, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_GetViewportScale_ReturnValue) == 0x00005C, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_GetDesiredSize_ReturnValue) == 0x000060, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_GetViewportSize_ReturnValue) == 0x000068, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000070, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_Subtract_Vector2DVector2D_ReturnValue_1) == 0x000078, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_Subtract_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_X_3) == 0x000080, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_Y_3) == 0x000084, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_FClamp_ReturnValue) == 0x000088, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_FClamp_ReturnValue_1) == 0x00008C, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_AdjustPosition, CallFunc_MakeVector2D_ReturnValue_1) == 0x000090, "Member 'BalloonWindow_C_AdjustPosition::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.GetBasePosition
// 0x0080 (0x0080 - 0x0000)
struct BalloonWindow_C_GetBasePosition final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F9F[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9FA0[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BalloonWindow_C_GetBasePosition) == 0x000010, "Wrong alignment on BalloonWindow_C_GetBasePosition");
static_assert(sizeof(BalloonWindow_C_GetBasePosition) == 0x000080, "Wrong size on BalloonWindow_C_GetBasePosition");
static_assert(offsetof(BalloonWindow_C_GetBasePosition, ReturnValue) == 0x000000, "Member 'BalloonWindow_C_GetBasePosition::ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetBasePosition, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'BalloonWindow_C_GetBasePosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetBasePosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BalloonWindow_C_GetBasePosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetBasePosition, CallFunc_GetSocketTransform_ReturnValue) == 0x000020, "Member 'BalloonWindow_C_GetBasePosition::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetBasePosition, CallFunc_BreakTransform_Location) == 0x000050, "Member 'BalloonWindow_C_GetBasePosition::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetBasePosition, CallFunc_BreakTransform_Rotation) == 0x00005C, "Member 'BalloonWindow_C_GetBasePosition::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetBasePosition, CallFunc_BreakTransform_Scale) == 0x000068, "Member 'BalloonWindow_C_GetBasePosition::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_GetBasePosition, CallFunc_IsValid_ReturnValue_1) == 0x000074, "Member 'BalloonWindow_C_GetBasePosition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BalloonWindow.BalloonWindow_C.CheckDistanceLimit
// 0x0058 (0x0058 - 0x0000)
struct BalloonWindow_C_CheckDistanceLimit final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FA1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9FA2[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBasePosition_ReturnValue;              // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize2D_ReturnValue;                      // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BalloonWindow_C_CheckDistanceLimit) == 0x000008, "Wrong alignment on BalloonWindow_C_CheckDistanceLimit");
static_assert(sizeof(BalloonWindow_C_CheckDistanceLimit) == 0x000058, "Wrong size on BalloonWindow_C_CheckDistanceLimit");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, Result) == 0x000000, "Member 'BalloonWindow_C_CheckDistanceLimit::Result' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_GetBasePosition_ReturnValue) == 0x000020, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_GetBasePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00002C, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_BreakVector_X) == 0x000038, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_BreakVector_Y) == 0x00003C, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_BreakVector_Z) == 0x000040, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_MakeVector2D_ReturnValue) == 0x000044, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_VSize2D_ReturnValue) == 0x00004C, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BalloonWindow_C_CheckDistanceLimit, CallFunc_Less_FloatFloat_ReturnValue) == 0x000050, "Member 'BalloonWindow_C_CheckDistanceLimit::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

}

