#pragma once

 

// Package: ShortcutRingIcon_Text

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.ExecuteUbergraph_ShortcutRingIcon_Text
// 0x0128 (0x0128 - 0x0000)
struct ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_62A9[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B0(0x0070)(ConstParm)
	bool                                          CallFunc_IsEnableHoverFlag_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableHoverFlag_ReturnValue_1;          // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text) == 0x000008, "Wrong alignment on ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text");
static_assert(sizeof(ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text) == 0x000128, "Wrong size on ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text");
static_assert(offsetof(ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text, EntryPoint) == 0x000000, "Member 'ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text, K2Node_Event_MyGeometry) == 0x000004, "Member 'ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text, K2Node_Event_MouseEvent_1) == 0x000040, "Member 'ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text, K2Node_Event_MouseEvent) == 0x0000B0, "Member 'ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text, CallFunc_IsEnableHoverFlag_ReturnValue) == 0x000120, "Member 'ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text::CallFunc_IsEnableHoverFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text, CallFunc_IsEnableHoverFlag_ReturnValue_1) == 0x000121, "Member 'ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text::CallFunc_IsEnableHoverFlag_ReturnValue_1' has a wrong offset!");

// Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct ShortcutRingIcon_Text_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ShortcutRingIcon_Text_C_OnMouseLeave) == 0x000008, "Wrong alignment on ShortcutRingIcon_Text_C_OnMouseLeave");
static_assert(sizeof(ShortcutRingIcon_Text_C_OnMouseLeave) == 0x000070, "Wrong size on ShortcutRingIcon_Text_C_OnMouseLeave");
static_assert(offsetof(ShortcutRingIcon_Text_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'ShortcutRingIcon_Text_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct ShortcutRingIcon_Text_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ShortcutRingIcon_Text_C_OnMouseEnter) == 0x000008, "Wrong alignment on ShortcutRingIcon_Text_C_OnMouseEnter");
static_assert(sizeof(ShortcutRingIcon_Text_C_OnMouseEnter) == 0x0000A8, "Wrong size on ShortcutRingIcon_Text_C_OnMouseEnter");
static_assert(offsetof(ShortcutRingIcon_Text_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'ShortcutRingIcon_Text_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Text_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'ShortcutRingIcon_Text_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.PlayAnimPressed
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRingIcon_Text_C_PlayAnimPressed final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRingIcon_Text_C_PlayAnimPressed) == 0x000008, "Wrong alignment on ShortcutRingIcon_Text_C_PlayAnimPressed");
static_assert(sizeof(ShortcutRingIcon_Text_C_PlayAnimPressed) == 0x000008, "Wrong size on ShortcutRingIcon_Text_C_PlayAnimPressed");
static_assert(offsetof(ShortcutRingIcon_Text_C_PlayAnimPressed, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ShortcutRingIcon_Text_C_PlayAnimPressed::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnExecuteError
// 0x0028 (0x0028 - 0x0000)
struct ShortcutRingIcon_Text_C_OnExecuteError final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(ShortcutRingIcon_Text_C_OnExecuteError) == 0x000008, "Wrong alignment on ShortcutRingIcon_Text_C_OnExecuteError");
static_assert(sizeof(ShortcutRingIcon_Text_C_OnExecuteError) == 0x000028, "Wrong size on ShortcutRingIcon_Text_C_OnExecuteError");
static_assert(offsetof(ShortcutRingIcon_Text_C_OnExecuteError, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'ShortcutRingIcon_Text_C_OnExecuteError::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRingIcon_Text_C_OnExecuteError, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'ShortcutRingIcon_Text_C_OnExecuteError::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

