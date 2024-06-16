#pragma once

 

// Package: HudCustomMenu

#include "Basic.hpp"


namespace SDK::Params
{

// Function HudCustomMenu.HudCustomMenu_C.OnClose__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct HudCustomMenu_C_OnClose__DelegateSignature final
{
public:
	bool                                          bIsCancel;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HudCustomMenu_C_OnClose__DelegateSignature) == 0x000001, "Wrong alignment on HudCustomMenu_C_OnClose__DelegateSignature");
static_assert(sizeof(HudCustomMenu_C_OnClose__DelegateSignature) == 0x000001, "Wrong size on HudCustomMenu_C_OnClose__DelegateSignature");
static_assert(offsetof(HudCustomMenu_C_OnClose__DelegateSignature, bIsCancel) == 0x000000, "Member 'HudCustomMenu_C_OnClose__DelegateSignature::bIsCancel' has a wrong offset!");

// Function HudCustomMenu.HudCustomMenu_C.ExecuteUbergraph_HudCustomMenu
// 0x0028 (0x0028 - 0x0000)
struct HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6848[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu) == 0x000008, "Wrong alignment on HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu");
static_assert(sizeof(HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu) == 0x000028, "Wrong size on HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu");
static_assert(offsetof(HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu, EntryPoint) == 0x000000, "Member 'HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu, CallFunc_PlayAnimation_ReturnValue_3) == 0x000020, "Member 'HudCustomMenu_C_ExecuteUbergraph_HudCustomMenu::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");

// Function HudCustomMenu.HudCustomMenu_C.SetApplyButtonEnabled
// 0x0001 (0x0001 - 0x0000)
struct HudCustomMenu_C_SetApplyButtonEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HudCustomMenu_C_SetApplyButtonEnabled) == 0x000001, "Wrong alignment on HudCustomMenu_C_SetApplyButtonEnabled");
static_assert(sizeof(HudCustomMenu_C_SetApplyButtonEnabled) == 0x000001, "Wrong size on HudCustomMenu_C_SetApplyButtonEnabled");
static_assert(offsetof(HudCustomMenu_C_SetApplyButtonEnabled, Enabled) == 0x000000, "Member 'HudCustomMenu_C_SetApplyButtonEnabled::Enabled' has a wrong offset!");

}

