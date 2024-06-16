#pragma once

 

// Package: ShortcutRing_KeyGuidePlate

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ShortcutRing_KeyGuidePlate.ShortcutRing_KeyGuidePlate_C.OnSetup
// 0x0040 (0x0040 - 0x0000)
struct ShortcutRing_KeyGuidePlate_C_OnSetup final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7239[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRing_KeyGuidePlate_C_OnSetup) == 0x000008, "Wrong alignment on ShortcutRing_KeyGuidePlate_C_OnSetup");
static_assert(sizeof(ShortcutRing_KeyGuidePlate_C_OnSetup) == 0x000040, "Wrong size on ShortcutRing_KeyGuidePlate_C_OnSetup");
static_assert(offsetof(ShortcutRing_KeyGuidePlate_C_OnSetup, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'ShortcutRing_KeyGuidePlate_C_OnSetup::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_KeyGuidePlate_C_OnSetup, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'ShortcutRing_KeyGuidePlate_C_OnSetup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_KeyGuidePlate_C_OnSetup, CallFunc_GetConfigSaveManager_IsValid) == 0x000028, "Member 'ShortcutRing_KeyGuidePlate_C_OnSetup::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShortcutRing_KeyGuidePlate_C_OnSetup, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000030, "Member 'ShortcutRing_KeyGuidePlate_C_OnSetup::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_KeyGuidePlate_C_OnSetup, CallFunc_GetOperateMode_ReturnValue) == 0x000038, "Member 'ShortcutRing_KeyGuidePlate_C_OnSetup::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_KeyGuidePlate_C_OnSetup, K2Node_SwitchEnum_CmpSuccess) == 0x000039, "Member 'ShortcutRing_KeyGuidePlate_C_OnSetup::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

