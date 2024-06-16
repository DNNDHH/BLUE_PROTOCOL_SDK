#pragma once

 

// Package: DemoSubTitle

#include "Basic.hpp"

#include "DemoSubTitleAnimationType_structs.hpp"
#include "DemoSubTitleData_structs.hpp"


namespace SDK::Params
{

// Function DemoSubTitle.DemoSubTitle_C.ExecuteUbergraph_DemoSubTitle
// 0x0040 (0x0040 - 0x0000)
struct DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDemoSubTitleData                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A92[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       CallFunc_GetAnimation_OutAnimation;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CallFunc_GetAnimation_OutAnimation_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A93[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle) == 0x000008, "Wrong alignment on DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle");
static_assert(sizeof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle) == 0x000040, "Wrong size on DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, EntryPoint) == 0x000000, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::EntryPoint' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, CallFunc_PostAkEvent_ReturnValue) == 0x000004, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, K2Node_Event_Animation) == 0x000008, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000011, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, CallFunc_GetAnimation_OutAnimation) == 0x000018, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::CallFunc_GetAnimation_OutAnimation' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, CallFunc_GetAnimation_OutAnimation_1) == 0x000020, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::CallFunc_GetAnimation_OutAnimation_1' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00002A, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle, CallFunc_PostAkEvent_ReturnValue_1) == 0x000038, "Member 'DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");

// Function DemoSubTitle.DemoSubTitle_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct DemoSubTitle_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DemoSubTitle_C_OnAnimationFinished) == 0x000008, "Wrong alignment on DemoSubTitle_C_OnAnimationFinished");
static_assert(sizeof(DemoSubTitle_C_OnAnimationFinished) == 0x000008, "Wrong size on DemoSubTitle_C_OnAnimationFinished");
static_assert(offsetof(DemoSubTitle_C_OnAnimationFinished, Animation) == 0x000000, "Member 'DemoSubTitle_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function DemoSubTitle.DemoSubTitle_C.GetAnimation
// 0x0028 (0x0028 - 0x0000)
struct DemoSubTitle_C_GetAnimation final
{
public:
	EDemoSubTitleAnimationType                    InAnimationType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A94[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       OutAnimation;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDemoSubTitleAnimationType                    Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A95[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DemoSubTitle_C_GetAnimation) == 0x000008, "Wrong alignment on DemoSubTitle_C_GetAnimation");
static_assert(sizeof(DemoSubTitle_C_GetAnimation) == 0x000028, "Wrong size on DemoSubTitle_C_GetAnimation");
static_assert(offsetof(DemoSubTitle_C_GetAnimation, InAnimationType) == 0x000000, "Member 'DemoSubTitle_C_GetAnimation::InAnimationType' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_GetAnimation, OutAnimation) == 0x000008, "Member 'DemoSubTitle_C_GetAnimation::OutAnimation' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_GetAnimation, Temp_byte_Variable) == 0x000010, "Member 'DemoSubTitle_C_GetAnimation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_GetAnimation, Temp_object_Variable) == 0x000018, "Member 'DemoSubTitle_C_GetAnimation::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(DemoSubTitle_C_GetAnimation, K2Node_Select_Default) == 0x000020, "Member 'DemoSubTitle_C_GetAnimation::K2Node_Select_Default' has a wrong offset!");

}

