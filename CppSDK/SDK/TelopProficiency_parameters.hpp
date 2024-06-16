#pragma once

 

// Package: TelopProficiency

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function TelopProficiency.TelopProficiency_C.ExecuteUbergraph_TelopProficiency
// 0x0098 (0x0098 - 0x0000)
struct TelopProficiency_C_ExecuteUbergraph_TelopProficiency final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D85[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D86[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTelopPlayParam                      CallFunc_GetParam_ReturnValue;                     // 0x0018(0x0060)(ConstParm)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D87[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTelopStar_C*                           K2Node_DynamicCast_AsTelop_Star;                   // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D88[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency) == 0x000008, "Wrong alignment on TelopProficiency_C_ExecuteUbergraph_TelopProficiency");
static_assert(sizeof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency) == 0x000098, "Wrong size on TelopProficiency_C_ExecuteUbergraph_TelopProficiency");
static_assert(offsetof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency, EntryPoint) == 0x000000, "Member 'TelopProficiency_C_ExecuteUbergraph_TelopProficiency::EntryPoint' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency, K2Node_Event_Animation) == 0x000008, "Member 'TelopProficiency_C_ExecuteUbergraph_TelopProficiency::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'TelopProficiency_C_ExecuteUbergraph_TelopProficiency::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency, CallFunc_GetParam_ReturnValue) == 0x000018, "Member 'TelopProficiency_C_ExecuteUbergraph_TelopProficiency::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000078, "Member 'TelopProficiency_C_ExecuteUbergraph_TelopProficiency::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency, CallFunc_Subtract_IntInt_ReturnValue) == 0x00007C, "Member 'TelopProficiency_C_ExecuteUbergraph_TelopProficiency::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency, CallFunc_GetChildAt_ReturnValue) == 0x000080, "Member 'TelopProficiency_C_ExecuteUbergraph_TelopProficiency::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency, K2Node_DynamicCast_AsTelop_Star) == 0x000088, "Member 'TelopProficiency_C_ExecuteUbergraph_TelopProficiency::K2Node_DynamicCast_AsTelop_Star' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'TelopProficiency_C_ExecuteUbergraph_TelopProficiency::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_ExecuteUbergraph_TelopProficiency, CallFunc_PlaySE_ReturnValue) == 0x000094, "Member 'TelopProficiency_C_ExecuteUbergraph_TelopProficiency::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function TelopProficiency.TelopProficiency_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct TelopProficiency_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopProficiency_C_OnAnimationFinished) == 0x000008, "Wrong alignment on TelopProficiency_C_OnAnimationFinished");
static_assert(sizeof(TelopProficiency_C_OnAnimationFinished) == 0x000008, "Wrong size on TelopProficiency_C_OnAnimationFinished");
static_assert(offsetof(TelopProficiency_C_OnAnimationFinished, Animation) == 0x000000, "Member 'TelopProficiency_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function TelopProficiency.TelopProficiency_C.PlayAnim
// 0x0010 (0x0010 - 0x0000)
struct TelopProficiency_C_PlayAnim final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D89[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopProficiency_C_PlayAnim) == 0x000008, "Wrong alignment on TelopProficiency_C_PlayAnim");
static_assert(sizeof(TelopProficiency_C_PlayAnim) == 0x000010, "Wrong size on TelopProficiency_C_PlayAnim");
static_assert(offsetof(TelopProficiency_C_PlayAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'TelopProficiency_C_PlayAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_PlayAnim, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000001, "Member 'TelopProficiency_C_PlayAnim::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'TelopProficiency_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TelopProficiency.TelopProficiency_C.SetupStar
// 0x00D8 (0x00D8 - 0x0000)
struct TelopProficiency_C_SetupStar final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D8A[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTelopStar_C*                           K2Node_DynamicCast_AsTelop_Star;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D8B[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTelopPlayParam                      CallFunc_GetParam_ReturnValue;                     // 0x0038(0x0060)(ConstParm)
	class UTelopStar_C*                           CallFunc_Create_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D8C[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTelopStar_C*                           K2Node_DynamicCast_AsTelop_Star_1;                 // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D8D[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopProficiency_C_SetupStar) == 0x000008, "Wrong alignment on TelopProficiency_C_SetupStar");
static_assert(sizeof(TelopProficiency_C_SetupStar) == 0x0000D8, "Wrong size on TelopProficiency_C_SetupStar");
static_assert(offsetof(TelopProficiency_C_SetupStar, Temp_int_Variable) == 0x000000, "Member 'TelopProficiency_C_SetupStar::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'TelopProficiency_C_SetupStar::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'TelopProficiency_C_SetupStar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, Temp_int_Variable_1) == 0x000018, "Member 'TelopProficiency_C_SetupStar::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'TelopProficiency_C_SetupStar::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, K2Node_DynamicCast_AsTelop_Star) == 0x000028, "Member 'TelopProficiency_C_SetupStar::K2Node_DynamicCast_AsTelop_Star' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'TelopProficiency_C_SetupStar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'TelopProficiency_C_SetupStar::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_GetParam_ReturnValue) == 0x000038, "Member 'TelopProficiency_C_SetupStar::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_Create_ReturnValue) == 0x000098, "Member 'TelopProficiency_C_SetupStar::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_AddChild_ReturnValue) == 0x0000A0, "Member 'TelopProficiency_C_SetupStar::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000A8, "Member 'TelopProficiency_C_SetupStar::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000AC, "Member 'TelopProficiency_C_SetupStar::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B0, "Member 'TelopProficiency_C_SetupStar::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_GetChildAt_ReturnValue_1) == 0x0000B8, "Member 'TelopProficiency_C_SetupStar::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, K2Node_DynamicCast_AsTelop_Star_1) == 0x0000C0, "Member 'TelopProficiency_C_SetupStar::K2Node_DynamicCast_AsTelop_Star_1' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'TelopProficiency_C_SetupStar::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0000CC, "Member 'TelopProficiency_C_SetupStar::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_SetupStar, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000D0, "Member 'TelopProficiency_C_SetupStar::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function TelopProficiency.TelopProficiency_C.PlayAnimOut
// 0x0010 (0x0010 - 0x0000)
struct TelopProficiency_C_PlayAnimOut final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D8E[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopProficiency_C_PlayAnimOut) == 0x000008, "Wrong alignment on TelopProficiency_C_PlayAnimOut");
static_assert(sizeof(TelopProficiency_C_PlayAnimOut) == 0x000010, "Wrong size on TelopProficiency_C_PlayAnimOut");
static_assert(offsetof(TelopProficiency_C_PlayAnimOut, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'TelopProficiency_C_PlayAnimOut::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_PlayAnimOut, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000001, "Member 'TelopProficiency_C_PlayAnimOut::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'TelopProficiency_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TelopProficiency.TelopProficiency_C.PlaySE
// 0x0010 (0x0010 - 0x0000)
struct TelopProficiency_C_PlaySE final
{
public:
	class UAkAudioEvent*                          SE;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopProficiency_C_PlaySE) == 0x000008, "Wrong alignment on TelopProficiency_C_PlaySE");
static_assert(sizeof(TelopProficiency_C_PlaySE) == 0x000010, "Wrong size on TelopProficiency_C_PlaySE");
static_assert(offsetof(TelopProficiency_C_PlaySE, SE) == 0x000000, "Member 'TelopProficiency_C_PlaySE::SE' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_PlaySE, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'TelopProficiency_C_PlaySE::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_PlaySE, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'TelopProficiency_C_PlaySE::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function TelopProficiency.TelopProficiency_C.PlayAnimGlow
// 0x0008 (0x0008 - 0x0000)
struct TelopProficiency_C_PlayAnimGlow final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopProficiency_C_PlayAnimGlow) == 0x000008, "Wrong alignment on TelopProficiency_C_PlayAnimGlow");
static_assert(sizeof(TelopProficiency_C_PlayAnimGlow) == 0x000008, "Wrong size on TelopProficiency_C_PlayAnimGlow");
static_assert(offsetof(TelopProficiency_C_PlayAnimGlow, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'TelopProficiency_C_PlayAnimGlow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TelopProficiency.TelopProficiency_C.IsPlayAnim
// 0x0004 (0x0004 - 0x0000)
struct TelopProficiency_C_IsPlayAnim final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopProficiency_C_IsPlayAnim) == 0x000001, "Wrong alignment on TelopProficiency_C_IsPlayAnim");
static_assert(sizeof(TelopProficiency_C_IsPlayAnim) == 0x000004, "Wrong size on TelopProficiency_C_IsPlayAnim");
static_assert(offsetof(TelopProficiency_C_IsPlayAnim, ReturnValue) == 0x000000, "Member 'TelopProficiency_C_IsPlayAnim::ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_IsPlayAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'TelopProficiency_C_IsPlayAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_IsPlayAnim, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000002, "Member 'TelopProficiency_C_IsPlayAnim::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopProficiency_C_IsPlayAnim, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'TelopProficiency_C_IsPlayAnim::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function TelopProficiency.TelopProficiency_C.GetText
// 0x0008 (0x0008 - 0x0000)
struct TelopProficiency_C_GetText final
{
public:
	class USBRuntimeTextBlock*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopProficiency_C_GetText) == 0x000008, "Wrong alignment on TelopProficiency_C_GetText");
static_assert(sizeof(TelopProficiency_C_GetText) == 0x000008, "Wrong size on TelopProficiency_C_GetText");
static_assert(offsetof(TelopProficiency_C_GetText, ReturnValue) == 0x000000, "Member 'TelopProficiency_C_GetText::ReturnValue' has a wrong offset!");

}

