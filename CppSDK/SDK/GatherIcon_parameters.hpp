#pragma once

 

// Package: GatherIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "GatherIconInfo_structs.hpp"


namespace SDK::Params
{

// Function GatherIcon.GatherIcon_C.FinishedFade__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GatherIcon_C_FinishedFade__DelegateSignature final
{
public:
	bool                                          Param_IsFadeIn;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GatherIcon_C_FinishedFade__DelegateSignature) == 0x000001, "Wrong alignment on GatherIcon_C_FinishedFade__DelegateSignature");
static_assert(sizeof(GatherIcon_C_FinishedFade__DelegateSignature) == 0x000001, "Wrong size on GatherIcon_C_FinishedFade__DelegateSignature");
static_assert(offsetof(GatherIcon_C_FinishedFade__DelegateSignature, Param_IsFadeIn) == 0x000000, "Member 'GatherIcon_C_FinishedFade__DelegateSignature::Param_IsFadeIn' has a wrong offset!");

// Function GatherIcon.GatherIcon_C.ExecuteUbergraph_GatherIcon
// 0x0048 (0x0048 - 0x0000)
struct GatherIcon_C_ExecuteUbergraph_GatherIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53CC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53CD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGatherIconInfo                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x0028(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53CE[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GatherIcon_C_ExecuteUbergraph_GatherIcon) == 0x000008, "Wrong alignment on GatherIcon_C_ExecuteUbergraph_GatherIcon");
static_assert(sizeof(GatherIcon_C_ExecuteUbergraph_GatherIcon) == 0x000048, "Wrong size on GatherIcon_C_ExecuteUbergraph_GatherIcon");
static_assert(offsetof(GatherIcon_C_ExecuteUbergraph_GatherIcon, EntryPoint) == 0x000000, "Member 'GatherIcon_C_ExecuteUbergraph_GatherIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_ExecuteUbergraph_GatherIcon, K2Node_Event_Animation) == 0x000008, "Member 'GatherIcon_C_ExecuteUbergraph_GatherIcon::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_ExecuteUbergraph_GatherIcon, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000010, "Member 'GatherIcon_C_ExecuteUbergraph_GatherIcon::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_ExecuteUbergraph_GatherIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'GatherIcon_C_ExecuteUbergraph_GatherIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_ExecuteUbergraph_GatherIcon, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'GatherIcon_C_ExecuteUbergraph_GatherIcon::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_ExecuteUbergraph_GatherIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000028, "Member 'GatherIcon_C_ExecuteUbergraph_GatherIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_ExecuteUbergraph_GatherIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000030, "Member 'GatherIcon_C_ExecuteUbergraph_GatherIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_ExecuteUbergraph_GatherIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000038, "Member 'GatherIcon_C_ExecuteUbergraph_GatherIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_ExecuteUbergraph_GatherIcon, Temp_bool_Has_Been_Initd_Variable) == 0x000040, "Member 'GatherIcon_C_ExecuteUbergraph_GatherIcon::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_ExecuteUbergraph_GatherIcon, Temp_bool_IsClosed_Variable) == 0x000041, "Member 'GatherIcon_C_ExecuteUbergraph_GatherIcon::Temp_bool_IsClosed_Variable' has a wrong offset!");

// Function GatherIcon.GatherIcon_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct GatherIcon_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GatherIcon_C_OnAnimationFinished) == 0x000008, "Wrong alignment on GatherIcon_C_OnAnimationFinished");
static_assert(sizeof(GatherIcon_C_OnAnimationFinished) == 0x000008, "Wrong size on GatherIcon_C_OnAnimationFinished");
static_assert(offsetof(GatherIcon_C_OnAnimationFinished, Animation) == 0x000000, "Member 'GatherIcon_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function GatherIcon.GatherIcon_C.SetGatherImage
// 0x0018 (0x0018 - 0x0000)
struct GatherIcon_C_SetGatherImage final
{
public:
	ESBTreasureBoxRarity                          TargetComponent;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53CF[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GatherIcon_C_SetGatherImage) == 0x000008, "Wrong alignment on GatherIcon_C_SetGatherImage");
static_assert(sizeof(GatherIcon_C_SetGatherImage) == 0x000018, "Wrong size on GatherIcon_C_SetGatherImage");
static_assert(offsetof(GatherIcon_C_SetGatherImage, TargetComponent) == 0x000000, "Member 'GatherIcon_C_SetGatherImage::TargetComponent' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_SetGatherImage, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'GatherIcon_C_SetGatherImage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_SetGatherImage, CallFunc_GetBrushResourceAsTexture2D_ReturnValue) == 0x000008, "Member 'GatherIcon_C_SetGatherImage::CallFunc_GetBrushResourceAsTexture2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_SetGatherImage, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'GatherIcon_C_SetGatherImage::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function GatherIcon.GatherIcon_C.Update Gather Icon
// 0x0050 (0x0050 - 0x0000)
struct GatherIcon_C_Update_Gather_Icon final
{
public:
	bool                                          IsGaugeFadeIn;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsMotionCanceled;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53D0[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NewLocalVar_0;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53D1[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53D2[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53D3[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBInteractionState                           CallFunc_GetCurrentInteractionState_ReturnValue;   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GatherIcon_C_Update_Gather_Icon) == 0x000008, "Wrong alignment on GatherIcon_C_Update_Gather_Icon");
static_assert(sizeof(GatherIcon_C_Update_Gather_Icon) == 0x000050, "Wrong size on GatherIcon_C_Update_Gather_Icon");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, IsGaugeFadeIn) == 0x000000, "Member 'GatherIcon_C_Update_Gather_Icon::IsGaugeFadeIn' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, IsMotionCanceled) == 0x000001, "Member 'GatherIcon_C_Update_Gather_Icon::IsMotionCanceled' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, NewLocalVar_0) == 0x000004, "Member 'GatherIcon_C_Update_Gather_Icon::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, Temp_bool_Has_Been_Initd_Variable) == 0x000008, "Member 'GatherIcon_C_Update_Gather_Icon::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'GatherIcon_C_Update_Gather_Icon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'GatherIcon_C_Update_Gather_Icon::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'GatherIcon_C_Update_Gather_Icon::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, CallFunc_PlaySE_ReturnValue) == 0x000028, "Member 'GatherIcon_C_Update_Gather_Icon::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, Temp_bool_IsClosed_Variable) == 0x00002C, "Member 'GatherIcon_C_Update_Gather_Icon::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000030, "Member 'GatherIcon_C_Update_Gather_Icon::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'GatherIcon_C_Update_Gather_Icon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, CallFunc_GetPlayerInteractionComponent_ReturnValue) == 0x000040, "Member 'GatherIcon_C_Update_Gather_Icon::CallFunc_GetPlayerInteractionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'GatherIcon_C_Update_Gather_Icon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, CallFunc_GetCurrentInteractionState_ReturnValue) == 0x000049, "Member 'GatherIcon_C_Update_Gather_Icon::CallFunc_GetCurrentInteractionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Update_Gather_Icon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00004A, "Member 'GatherIcon_C_Update_Gather_Icon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function GatherIcon.GatherIcon_C.Change Size
// 0x0080 (0x0080 - 0x0000)
struct GatherIcon_C_Change_Size final
{
public:
	float                                         CharaDistance;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReachDistance;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LReachDistance;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LUIClipDistance;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LCharaDistance;                                    // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Denominator;                                       // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53D4[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53D5[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53D6[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x003C(0x001C)(NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform_1;               // 0x0064(0x001C)(NoDestructor)
};
static_assert(alignof(GatherIcon_C_Change_Size) == 0x000004, "Wrong alignment on GatherIcon_C_Change_Size");
static_assert(sizeof(GatherIcon_C_Change_Size) == 0x000080, "Wrong size on GatherIcon_C_Change_Size");
static_assert(offsetof(GatherIcon_C_Change_Size, CharaDistance) == 0x000000, "Member 'GatherIcon_C_Change_Size::CharaDistance' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, ReachDistance) == 0x000004, "Member 'GatherIcon_C_Change_Size::ReachDistance' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, LReachDistance) == 0x000008, "Member 'GatherIcon_C_Change_Size::LReachDistance' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, LUIClipDistance) == 0x00000C, "Member 'GatherIcon_C_Change_Size::LUIClipDistance' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, LCharaDistance) == 0x000010, "Member 'GatherIcon_C_Change_Size::LCharaDistance' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, Denominator) == 0x000014, "Member 'GatherIcon_C_Change_Size::Denominator' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x000018, "Member 'GatherIcon_C_Change_Size::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00001C, "Member 'GatherIcon_C_Change_Size::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'GatherIcon_C_Change_Size::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000024, "Member 'GatherIcon_C_Change_Size::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000028, "Member 'GatherIcon_C_Change_Size::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x00002C, "Member 'GatherIcon_C_Change_Size::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000030, "Member 'GatherIcon_C_Change_Size::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_Subtract_FloatFloat_ReturnValue_3) == 0x000034, "Member 'GatherIcon_C_Change_Size::CallFunc_Subtract_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_Less_FloatFloat_ReturnValue) == 0x000038, "Member 'GatherIcon_C_Change_Size::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, K2Node_MakeStruct_WidgetTransform) == 0x00003C, "Member 'GatherIcon_C_Change_Size::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_Add_FloatFloat_ReturnValue) == 0x000058, "Member 'GatherIcon_C_Change_Size::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, CallFunc_MakeVector2D_ReturnValue) == 0x00005C, "Member 'GatherIcon_C_Change_Size::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_Change_Size, K2Node_MakeStruct_WidgetTransform_1) == 0x000064, "Member 'GatherIcon_C_Change_Size::K2Node_MakeStruct_WidgetTransform_1' has a wrong offset!");

// Function GatherIcon.GatherIcon_C.DebugFunc
// 0x0108 (0x0108 - 0x0000)
struct GatherIcon_C_DebugFunc final
{
public:
	float                                         NewParam;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewParam1;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewParam2;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53D7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0050(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0090(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GatherIcon_C_DebugFunc) == 0x000008, "Wrong alignment on GatherIcon_C_DebugFunc");
static_assert(sizeof(GatherIcon_C_DebugFunc) == 0x000108, "Wrong size on GatherIcon_C_DebugFunc");
static_assert(offsetof(GatherIcon_C_DebugFunc, NewParam) == 0x000000, "Member 'GatherIcon_C_DebugFunc::NewParam' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_DebugFunc, NewParam1) == 0x000004, "Member 'GatherIcon_C_DebugFunc::NewParam1' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_DebugFunc, NewParam2) == 0x000008, "Member 'GatherIcon_C_DebugFunc::NewParam2' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_DebugFunc, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'GatherIcon_C_DebugFunc::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_DebugFunc, K2Node_MakeStruct_FormatArgumentData_1) == 0x000050, "Member 'GatherIcon_C_DebugFunc::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_DebugFunc, K2Node_MakeStruct_FormatArgumentData_2) == 0x000090, "Member 'GatherIcon_C_DebugFunc::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_DebugFunc, K2Node_MakeArray_Array) == 0x0000D0, "Member 'GatherIcon_C_DebugFunc::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_DebugFunc, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'GatherIcon_C_DebugFunc::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_DebugFunc, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F8, "Member 'GatherIcon_C_DebugFunc::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function GatherIcon.GatherIcon_C.LiquidMemoryIconCheck
// 0x0018 (0x0018 - 0x0000)
struct GatherIcon_C_LiquidMemoryIconCheck final
{
public:
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53D8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GatherIcon_C_LiquidMemoryIconCheck) == 0x000008, "Wrong alignment on GatherIcon_C_LiquidMemoryIconCheck");
static_assert(sizeof(GatherIcon_C_LiquidMemoryIconCheck) == 0x000018, "Wrong size on GatherIcon_C_LiquidMemoryIconCheck");
static_assert(offsetof(GatherIcon_C_LiquidMemoryIconCheck, CallFunc_GetNetworkDataCache_IsValid) == 0x000000, "Member 'GatherIcon_C_LiquidMemoryIconCheck::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_LiquidMemoryIconCheck, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'GatherIcon_C_LiquidMemoryIconCheck::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(GatherIcon_C_LiquidMemoryIconCheck, CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue) == 0x000010, "Member 'GatherIcon_C_LiquidMemoryIconCheck::CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue' has a wrong offset!");

}

