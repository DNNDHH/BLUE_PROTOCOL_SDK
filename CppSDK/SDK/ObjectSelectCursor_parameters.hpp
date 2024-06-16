#pragma once

 

// Package: ObjectSelectCursor

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ObjectSelectCursor.ObjectSelectCursor_C.FinishedFade__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ObjectSelectCursor_C_FinishedFade__DelegateSignature final
{
public:
	bool                                          Param_IsFadeIn;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ObjectSelectCursor_C_FinishedFade__DelegateSignature) == 0x000001, "Wrong alignment on ObjectSelectCursor_C_FinishedFade__DelegateSignature");
static_assert(sizeof(ObjectSelectCursor_C_FinishedFade__DelegateSignature) == 0x000001, "Wrong size on ObjectSelectCursor_C_FinishedFade__DelegateSignature");
static_assert(offsetof(ObjectSelectCursor_C_FinishedFade__DelegateSignature, Param_IsFadeIn) == 0x000000, "Member 'ObjectSelectCursor_C_FinishedFade__DelegateSignature::Param_IsFadeIn' has a wrong offset!");

// Function ObjectSelectCursor.ObjectSelectCursor_C.ExecuteUbergraph_ObjectSelectCursor
// 0x00C0 (0x00C0 - 0x0000)
struct ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6794[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6795[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0030(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6796[0x1];                                     // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6797[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6798[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetIteractionInputGauge_ReturnValue;      // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBInteractionInfo                     CallFunc_GetCurrentInteractionInfo_ReturnValue;    // 0x009C(0x0018)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBInteractionState                           CallFunc_GetCurrentInteractionState_ReturnValue;   // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor) == 0x000008, "Wrong alignment on ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor");
static_assert(sizeof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor) == 0x0000C0, "Wrong size on ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, EntryPoint) == 0x000000, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::EntryPoint' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, K2Node_Event_Animation) == 0x000010, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000018, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, K2Node_Event_MyGeometry) == 0x000030, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, K2Node_Event_InDeltaTime) == 0x000068, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_PlaySE_ReturnValue) == 0x00006C, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_Subtract_IntInt_ReturnValue) == 0x000070, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_Greater_IntInt_ReturnValue) == 0x000074, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, Temp_bool_IsClosed_Variable) == 0x000075, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_IsVisible_ReturnValue) == 0x000076, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_PlaySE_ReturnValue_1) == 0x000078, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, Temp_bool_Has_Been_Initd_Variable) == 0x00007C, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000080, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_GetPlayerInteractionComponent_ReturnValue) == 0x000090, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_GetPlayerInteractionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_GetIteractionInputGauge_ReturnValue) == 0x000098, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_GetIteractionInputGauge_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_GetCurrentInteractionInfo_ReturnValue) == 0x00009C, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_GetCurrentInteractionInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000B4, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000B5, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_IsValid_ReturnValue_1) == 0x0000B6, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_GetCurrentInteractionState_ReturnValue) == 0x0000B7, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_GetCurrentInteractionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ObjectSelectCursor.ObjectSelectCursor_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct ObjectSelectCursor_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ObjectSelectCursor_C_OnAnimationFinished) == 0x000008, "Wrong alignment on ObjectSelectCursor_C_OnAnimationFinished");
static_assert(sizeof(ObjectSelectCursor_C_OnAnimationFinished) == 0x000008, "Wrong size on ObjectSelectCursor_C_OnAnimationFinished");
static_assert(offsetof(ObjectSelectCursor_C_OnAnimationFinished, Animation) == 0x000000, "Member 'ObjectSelectCursor_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function ObjectSelectCursor.ObjectSelectCursor_C.Tick
// 0x003C (0x003C - 0x0000)
struct ObjectSelectCursor_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ObjectSelectCursor_C_Tick) == 0x000004, "Wrong alignment on ObjectSelectCursor_C_Tick");
static_assert(sizeof(ObjectSelectCursor_C_Tick) == 0x00003C, "Wrong size on ObjectSelectCursor_C_Tick");
static_assert(offsetof(ObjectSelectCursor_C_Tick, MyGeometry) == 0x000000, "Member 'ObjectSelectCursor_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_Tick, InDeltaTime) == 0x000038, "Member 'ObjectSelectCursor_C_Tick::InDeltaTime' has a wrong offset!");

// Function ObjectSelectCursor.ObjectSelectCursor_C.SetGatherImage
// 0x0020 (0x0020 - 0x0000)
struct ObjectSelectCursor_C_SetGatherImage final
{
public:
	class USBInteractionTargetComponent*          TargetComponent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GatherPointTarget_C*                K2Node_DynamicCast_AsBP_Gather_Point_Target;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ObjectSelectCursor_C_SetGatherImage) == 0x000008, "Wrong alignment on ObjectSelectCursor_C_SetGatherImage");
static_assert(sizeof(ObjectSelectCursor_C_SetGatherImage) == 0x000020, "Wrong size on ObjectSelectCursor_C_SetGatherImage");
static_assert(offsetof(ObjectSelectCursor_C_SetGatherImage, TargetComponent) == 0x000000, "Member 'ObjectSelectCursor_C_SetGatherImage::TargetComponent' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_SetGatherImage, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'ObjectSelectCursor_C_SetGatherImage::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_SetGatherImage, K2Node_DynamicCast_AsBP_Gather_Point_Target) == 0x000010, "Member 'ObjectSelectCursor_C_SetGatherImage::K2Node_DynamicCast_AsBP_Gather_Point_Target' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_SetGatherImage, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ObjectSelectCursor_C_SetGatherImage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_SetGatherImage, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'ObjectSelectCursor_C_SetGatherImage::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_SetGatherImage, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'ObjectSelectCursor_C_SetGatherImage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursor_C_SetGatherImage, CallFunc_IsValid_ReturnValue) == 0x00001B, "Member 'ObjectSelectCursor_C_SetGatherImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

