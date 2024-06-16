#pragma once

 

// Package: MapWidget_QuestIcon

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.OnPressedQuestIcon__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_QuestIcon_C_OnPressedQuestIcon__DelegateSignature final
{
public:
	int32                                         InQuestId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_QuestIcon_C_OnPressedQuestIcon__DelegateSignature) == 0x000004, "Wrong alignment on MapWidget_QuestIcon_C_OnPressedQuestIcon__DelegateSignature");
static_assert(sizeof(MapWidget_QuestIcon_C_OnPressedQuestIcon__DelegateSignature) == 0x000004, "Wrong size on MapWidget_QuestIcon_C_OnPressedQuestIcon__DelegateSignature");
static_assert(offsetof(MapWidget_QuestIcon_C_OnPressedQuestIcon__DelegateSignature, InQuestId) == 0x000000, "Member 'MapWidget_QuestIcon_C_OnPressedQuestIcon__DelegateSignature::InQuestId' has a wrong offset!");

// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.ExecuteUbergraph_MapWidget_QuestIcon
// 0x0028 (0x0028 - 0x0000)
struct MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71BA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon) == 0x000008, "Wrong alignment on MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon");
static_assert(sizeof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon) == 0x000028, "Wrong size on MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon");
static_assert(offsetof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon, EntryPoint) == 0x000000, "Member 'MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon, K2Node_Event_Animation) == 0x000010, "Member 'MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000018, "Member 'MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000020, "Member 'MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000024, "Member 'MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000025, "Member 'MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon, CallFunc_BooleanAND_ReturnValue) == 0x000026, "Member 'MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon, CallFunc_BooleanAND_ReturnValue_1) == 0x000027, "Member 'MapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_QuestIcon_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_QuestIcon_C_OnAnimationFinished) == 0x000008, "Wrong alignment on MapWidget_QuestIcon_C_OnAnimationFinished");
static_assert(sizeof(MapWidget_QuestIcon_C_OnAnimationFinished) == 0x000008, "Wrong size on MapWidget_QuestIcon_C_OnAnimationFinished");
static_assert(offsetof(MapWidget_QuestIcon_C_OnAnimationFinished, Animation) == 0x000000, "Member 'MapWidget_QuestIcon_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetIcon
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_QuestIcon_C_SetIcon final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClosed;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_QuestIcon_C_SetIcon) == 0x000004, "Wrong alignment on MapWidget_QuestIcon_C_SetIcon");
static_assert(sizeof(MapWidget_QuestIcon_C_SetIcon) == 0x000008, "Wrong size on MapWidget_QuestIcon_C_SetIcon");
static_assert(offsetof(MapWidget_QuestIcon_C_SetIcon, InQuestIndex) == 0x000000, "Member 'MapWidget_QuestIcon_C_SetIcon::InQuestIndex' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetIcon, IsClosed) == 0x000004, "Member 'MapWidget_QuestIcon_C_SetIcon::IsClosed' has a wrong offset!");

// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.GetToolTipWidget_0
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_QuestIcon_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_QuestIcon_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on MapWidget_QuestIcon_C_GetToolTipWidget_0");
static_assert(sizeof(MapWidget_QuestIcon_C_GetToolTipWidget_0) == 0x000010, "Wrong size on MapWidget_QuestIcon_C_GetToolTipWidget_0");
static_assert(offsetof(MapWidget_QuestIcon_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'MapWidget_QuestIcon_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_GetToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MapWidget_QuestIcon_C_GetToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipString
// 0x0060 (0x0060 - 0x0000)
struct MapWidget_QuestIcon_C_SetTooltipString final
{
public:
	class FString                                 InString;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0028(0x0018)()
	class UMapWidget_IconTooltip1_C*              K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_1;    // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71BB[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip2_C*              K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_2;    // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_QuestIcon_C_SetTooltipString) == 0x000008, "Wrong alignment on MapWidget_QuestIcon_C_SetTooltipString");
static_assert(sizeof(MapWidget_QuestIcon_C_SetTooltipString) == 0x000060, "Wrong size on MapWidget_QuestIcon_C_SetTooltipString");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipString, InString) == 0x000000, "Member 'MapWidget_QuestIcon_C_SetTooltipString::InString' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipString, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'MapWidget_QuestIcon_C_SetTooltipString::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipString, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000028, "Member 'MapWidget_QuestIcon_C_SetTooltipString::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipString, K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_1) == 0x000040, "Member 'MapWidget_QuestIcon_C_SetTooltipString::K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_1' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipString, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'MapWidget_QuestIcon_C_SetTooltipString::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipString, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'MapWidget_QuestIcon_C_SetTooltipString::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipString, K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_2) == 0x000050, "Member 'MapWidget_QuestIcon_C_SetTooltipString::K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_2' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipString, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'MapWidget_QuestIcon_C_SetTooltipString::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipString, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'MapWidget_QuestIcon_C_SetTooltipString::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipString, CallFunc_IsValid_ReturnValue_2) == 0x00005A, "Member 'MapWidget_QuestIcon_C_SetTooltipString::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipToIcon
// 0x0098 (0x0098 - 0x0000)
struct MapWidget_QuestIcon_C_SetTooltipToIcon final
{
public:
	bool                                          Param_IsTooltip2Line;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71BC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InToolTipText;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71BD[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip1_C*              CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71BE[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip1_C*              K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_1;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71BF[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip2_C*              CallFunc_Create_ReturnValue_1;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71C0[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip2_C*              K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_2;    // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71C1[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71C2[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0080(0x0018)()
};
static_assert(alignof(MapWidget_QuestIcon_C_SetTooltipToIcon) == 0x000008, "Wrong alignment on MapWidget_QuestIcon_C_SetTooltipToIcon");
static_assert(sizeof(MapWidget_QuestIcon_C_SetTooltipToIcon) == 0x000098, "Wrong size on MapWidget_QuestIcon_C_SetTooltipToIcon");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, Param_IsTooltip2Line) == 0x000000, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::Param_IsTooltip2Line' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, InToolTipText) == 0x000008, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::InToolTipText' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, CallFunc_Create_ReturnValue) == 0x000020, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_1) == 0x000030, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_1' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, CallFunc_Create_ReturnValue_1) == 0x000040, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, CallFunc_IsValid_ReturnValue_2) == 0x000048, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_2) == 0x000050, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::K2Node_DynamicCast_AsMap_Widget_Icon_Tooltip_2' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, CallFunc_IsValid_ReturnValue_3) == 0x000078, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipToIcon, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000080, "Member 'MapWidget_QuestIcon_C_SetTooltipToIcon::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipEnable
// 0x0006 (0x0006 - 0x0000)
struct MapWidget_QuestIcon_C_SetTooltipEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_QuestIcon_C_SetTooltipEnable) == 0x000001, "Wrong alignment on MapWidget_QuestIcon_C_SetTooltipEnable");
static_assert(sizeof(MapWidget_QuestIcon_C_SetTooltipEnable) == 0x000006, "Wrong size on MapWidget_QuestIcon_C_SetTooltipEnable");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipEnable, IsEnable) == 0x000000, "Member 'MapWidget_QuestIcon_C_SetTooltipEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipEnable, Temp_bool_Variable) == 0x000001, "Member 'MapWidget_QuestIcon_C_SetTooltipEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipEnable, Temp_byte_Variable) == 0x000002, "Member 'MapWidget_QuestIcon_C_SetTooltipEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipEnable, Temp_byte_Variable_1) == 0x000003, "Member 'MapWidget_QuestIcon_C_SetTooltipEnable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipEnable, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MapWidget_QuestIcon_C_SetTooltipEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_QuestIcon_C_SetTooltipEnable, K2Node_Select_Default) == 0x000005, "Member 'MapWidget_QuestIcon_C_SetTooltipEnable::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.GetTooltipString
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_QuestIcon_C_GetTooltipString final
{
public:
	class FString                                 OutTooltipString;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_QuestIcon_C_GetTooltipString) == 0x000008, "Wrong alignment on MapWidget_QuestIcon_C_GetTooltipString");
static_assert(sizeof(MapWidget_QuestIcon_C_GetTooltipString) == 0x000010, "Wrong size on MapWidget_QuestIcon_C_GetTooltipString");
static_assert(offsetof(MapWidget_QuestIcon_C_GetTooltipString, OutTooltipString) == 0x000000, "Member 'MapWidget_QuestIcon_C_GetTooltipString::OutTooltipString' has a wrong offset!");

}

