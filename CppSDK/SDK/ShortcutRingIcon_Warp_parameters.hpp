#pragma once

 

// Package: ShortcutRingIcon_Warp

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.ExecuteUbergraph_ShortcutRingIcon_Warp
// 0x0128 (0x0128 - 0x0000)
struct ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_7226[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B0(0x0070)(ConstParm)
	bool                                          CallFunc_IsEnableHoverFlag_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableHoverFlag_ReturnValue_1;          // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp) == 0x000008, "Wrong alignment on ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp");
static_assert(sizeof(ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp) == 0x000128, "Wrong size on ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp");
static_assert(offsetof(ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp, EntryPoint) == 0x000000, "Member 'ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp, K2Node_Event_MyGeometry) == 0x000004, "Member 'ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp, K2Node_Event_MouseEvent_1) == 0x000040, "Member 'ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp, K2Node_Event_MouseEvent) == 0x0000B0, "Member 'ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp, CallFunc_IsEnableHoverFlag_ReturnValue) == 0x000120, "Member 'ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp::CallFunc_IsEnableHoverFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp, CallFunc_IsEnableHoverFlag_ReturnValue_1) == 0x000121, "Member 'ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp::CallFunc_IsEnableHoverFlag_ReturnValue_1' has a wrong offset!");

// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct ShortcutRingIcon_Warp_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ShortcutRingIcon_Warp_C_OnMouseLeave) == 0x000008, "Wrong alignment on ShortcutRingIcon_Warp_C_OnMouseLeave");
static_assert(sizeof(ShortcutRingIcon_Warp_C_OnMouseLeave) == 0x000070, "Wrong size on ShortcutRingIcon_Warp_C_OnMouseLeave");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'ShortcutRingIcon_Warp_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct ShortcutRingIcon_Warp_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ShortcutRingIcon_Warp_C_OnMouseEnter) == 0x000008, "Wrong alignment on ShortcutRingIcon_Warp_C_OnMouseEnter");
static_assert(sizeof(ShortcutRingIcon_Warp_C_OnMouseEnter) == 0x0000A8, "Wrong size on ShortcutRingIcon_Warp_C_OnMouseEnter");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'ShortcutRingIcon_Warp_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'ShortcutRingIcon_Warp_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.PlayAnimPressed
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRingIcon_Warp_C_PlayAnimPressed final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Warp_C_PlayAnimPressed) == 0x000008, "Wrong alignment on ShortcutRingIcon_Warp_C_PlayAnimPressed");
static_assert(sizeof(ShortcutRingIcon_Warp_C_PlayAnimPressed) == 0x000008, "Wrong size on ShortcutRingIcon_Warp_C_PlayAnimPressed");
static_assert(offsetof(ShortcutRingIcon_Warp_C_PlayAnimPressed, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ShortcutRingIcon_Warp_C_PlayAnimPressed::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.GetToolTip
// 0x0030 (0x0030 - 0x0000)
struct ShortcutRingIcon_Warp_C_GetToolTip final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetViewToolTipText_ReturnValue;           // 0x0008(0x0018)(ConstParm)
	class UCommandIcon_Tooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Warp_C_GetToolTip) == 0x000008, "Wrong alignment on ShortcutRingIcon_Warp_C_GetToolTip");
static_assert(sizeof(ShortcutRingIcon_Warp_C_GetToolTip) == 0x000030, "Wrong size on ShortcutRingIcon_Warp_C_GetToolTip");
static_assert(offsetof(ShortcutRingIcon_Warp_C_GetToolTip, ReturnValue) == 0x000000, "Member 'ShortcutRingIcon_Warp_C_GetToolTip::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_GetToolTip, CallFunc_GetViewToolTipText_ReturnValue) == 0x000008, "Member 'ShortcutRingIcon_Warp_C_GetToolTip::CallFunc_GetViewToolTipText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_GetToolTip, CallFunc_Create_ReturnValue) == 0x000020, "Member 'ShortcutRingIcon_Warp_C_GetToolTip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_GetToolTip, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'ShortcutRingIcon_Warp_C_GetToolTip::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnSetEnableToolTip
// 0x0020 (0x0020 - 0x0000)
struct ShortcutRingIcon_Warp_C_OnSetEnableToolTip final
{
public:
	bool                                          InEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7227[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetToolTip_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandIcon_Tooltip_C*                 K2Node_DynamicCast_AsCommand_Icon_Tooltip;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Warp_C_OnSetEnableToolTip) == 0x000008, "Wrong alignment on ShortcutRingIcon_Warp_C_OnSetEnableToolTip");
static_assert(sizeof(ShortcutRingIcon_Warp_C_OnSetEnableToolTip) == 0x000020, "Wrong size on ShortcutRingIcon_Warp_C_OnSetEnableToolTip");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnSetEnableToolTip, InEnable) == 0x000000, "Member 'ShortcutRingIcon_Warp_C_OnSetEnableToolTip::InEnable' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnSetEnableToolTip, Temp_bool_Variable) == 0x000001, "Member 'ShortcutRingIcon_Warp_C_OnSetEnableToolTip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnSetEnableToolTip, Temp_byte_Variable) == 0x000002, "Member 'ShortcutRingIcon_Warp_C_OnSetEnableToolTip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnSetEnableToolTip, Temp_byte_Variable_1) == 0x000003, "Member 'ShortcutRingIcon_Warp_C_OnSetEnableToolTip::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnSetEnableToolTip, CallFunc_GetToolTip_ReturnValue) == 0x000008, "Member 'ShortcutRingIcon_Warp_C_OnSetEnableToolTip::CallFunc_GetToolTip_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnSetEnableToolTip, K2Node_DynamicCast_AsCommand_Icon_Tooltip) == 0x000010, "Member 'ShortcutRingIcon_Warp_C_OnSetEnableToolTip::K2Node_DynamicCast_AsCommand_Icon_Tooltip' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnSetEnableToolTip, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ShortcutRingIcon_Warp_C_OnSetEnableToolTip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnSetEnableToolTip, K2Node_Select_Default) == 0x000019, "Member 'ShortcutRingIcon_Warp_C_OnSetEnableToolTip::K2Node_Select_Default' has a wrong offset!");

// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnExecuteError
// 0x0028 (0x0028 - 0x0000)
struct ShortcutRingIcon_Warp_C_OnExecuteError final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(ShortcutRingIcon_Warp_C_OnExecuteError) == 0x000008, "Wrong alignment on ShortcutRingIcon_Warp_C_OnExecuteError");
static_assert(sizeof(ShortcutRingIcon_Warp_C_OnExecuteError) == 0x000028, "Wrong size on ShortcutRingIcon_Warp_C_OnExecuteError");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnExecuteError, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'ShortcutRingIcon_Warp_C_OnExecuteError::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Warp_C_OnExecuteError, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'ShortcutRingIcon_Warp_C_OnExecuteError::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

