#pragma once

 

// Package: ActionMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ActionMenu.ActionMenu_C.OnItemSelected__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct ActionMenu_C_OnItemSelected__DelegateSignature final
{
public:
	int32                                         SelectItemIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActionMenu_C_OnItemSelected__DelegateSignature) == 0x000004, "Wrong alignment on ActionMenu_C_OnItemSelected__DelegateSignature");
static_assert(sizeof(ActionMenu_C_OnItemSelected__DelegateSignature) == 0x000004, "Wrong size on ActionMenu_C_OnItemSelected__DelegateSignature");
static_assert(offsetof(ActionMenu_C_OnItemSelected__DelegateSignature, SelectItemIndex) == 0x000000, "Member 'ActionMenu_C_OnItemSelected__DelegateSignature::SelectItemIndex' has a wrong offset!");

// Function ActionMenu.ActionMenu_C.ExecuteUbergraph_ActionMenu
// 0x00C0 (0x00C0 - 0x0000)
struct ActionMenu_C_ExecuteUbergraph_ActionMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FA5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FA6[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UActionMenuButton_C* Button)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6FA7[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0038(0x0018)()
	class UActionMenuButton_C*                    K2Node_CustomEvent_Button;                         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0058(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FA8[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetChildIndex_ReturnValue;                // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FA9[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UActionMenuButton_C*                    CallFunc_Create_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActionMenu_C_ExecuteUbergraph_ActionMenu) == 0x000008, "Wrong alignment on ActionMenu_C_ExecuteUbergraph_ActionMenu");
static_assert(sizeof(ActionMenu_C_ExecuteUbergraph_ActionMenu) == 0x0000C0, "Wrong size on ActionMenu_C_ExecuteUbergraph_ActionMenu");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, EntryPoint) == 0x000000, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, K2Node_CustomEvent_Text) == 0x000038, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, K2Node_CustomEvent_Button) == 0x000050, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, K2Node_Event_Animation) == 0x000058, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000068, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000070, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, K2Node_MakeStruct_Margin) == 0x000078, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_GetChildIndex_ReturnValue) == 0x000088, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_GetChildIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_GetChildrenCount_ReturnValue) == 0x00008C, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x000090, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_PlaySE_ReturnValue) == 0x000094, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_Max_ReturnValue) == 0x000098, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_Create_ReturnValue) == 0x0000A0, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0000A8, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0000B0, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_PlaySE_ReturnValue_1) == 0x0000B8, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActionMenu_C_ExecuteUbergraph_ActionMenu, CallFunc_IsValid_ReturnValue_1) == 0x0000BC, "Member 'ActionMenu_C_ExecuteUbergraph_ActionMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function ActionMenu.ActionMenu_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct ActionMenu_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActionMenu_C_OnAnimationFinished) == 0x000008, "Wrong alignment on ActionMenu_C_OnAnimationFinished");
static_assert(sizeof(ActionMenu_C_OnAnimationFinished) == 0x000008, "Wrong size on ActionMenu_C_OnAnimationFinished");
static_assert(offsetof(ActionMenu_C_OnAnimationFinished, Animation) == 0x000000, "Member 'ActionMenu_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function ActionMenu.ActionMenu_C.OnClicked_Event_0
// 0x0008 (0x0008 - 0x0000)
struct ActionMenu_C_OnClicked_Event_0 final
{
public:
	class UActionMenuButton_C*                    Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActionMenu_C_OnClicked_Event_0) == 0x000008, "Wrong alignment on ActionMenu_C_OnClicked_Event_0");
static_assert(sizeof(ActionMenu_C_OnClicked_Event_0) == 0x000008, "Wrong size on ActionMenu_C_OnClicked_Event_0");
static_assert(offsetof(ActionMenu_C_OnClicked_Event_0, Button) == 0x000000, "Member 'ActionMenu_C_OnClicked_Event_0::Button' has a wrong offset!");

// Function ActionMenu.ActionMenu_C.AddItem
// 0x0018 (0x0018 - 0x0000)
struct ActionMenu_C_AddItem final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ActionMenu_C_AddItem) == 0x000008, "Wrong alignment on ActionMenu_C_AddItem");
static_assert(sizeof(ActionMenu_C_AddItem) == 0x000018, "Wrong size on ActionMenu_C_AddItem");
static_assert(offsetof(ActionMenu_C_AddItem, Text) == 0x000000, "Member 'ActionMenu_C_AddItem::Text' has a wrong offset!");

}

