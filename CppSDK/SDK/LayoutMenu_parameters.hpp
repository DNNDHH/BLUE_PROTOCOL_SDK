#pragma once

 

// Package: LayoutMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function LayoutMenu.LayoutMenu_C.ExecuteUbergraph_LayoutMenu
// 0x0158 (0x0158 - 0x0000)
struct LayoutMenu_C_ExecuteUbergraph_LayoutMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsCancel;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7437[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0050(0x0018)()
	bool                                          CallFunc_GetSystemMessageManager_IsValid;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7438[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue;      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7439[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyHUDLayoutWindowSize_ReturnValue;  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModifyHUDLayout_ReturnValue;            // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_743A[0x5];                                     // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSystemMessageManager_IsValid_1;        // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_743B[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue_1;    // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00B0(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsCancel)>               K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHudCustomApplySelect_C*                CallFunc_Create_ReturnValue;                       // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_743C[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyHUDLayoutWindowSize_ReturnValue_1; // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModifyHUDLayout_ReturnValue_1;          // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_743D[0x5];                                     // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSystemMessageManager_IsValid_2;        // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_743E[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue_2;    // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0140(0x0018)()
};
static_assert(alignof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu) == 0x000008, "Wrong alignment on LayoutMenu_C_ExecuteUbergraph_LayoutMenu");
static_assert(sizeof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu) == 0x000158, "Wrong size on LayoutMenu_C_ExecuteUbergraph_LayoutMenu");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, EntryPoint) == 0x000000, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, K2Node_CustomEvent_bIsCancel) == 0x000004, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::K2Node_CustomEvent_bIsCancel' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, K2Node_CustomEvent_Result) == 0x000005, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000006, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000030, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000050, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetSystemMessageManager_IsValid) == 0x000068, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetSystemMessageManager_IsValid' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetSystemMessageManager_ReturnValue) == 0x000070, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetSystemMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetConfigSaveManager_IsValid) == 0x000078, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000080, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_IsModifyHUDLayoutWindowSize_ReturnValue) == 0x000088, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_IsModifyHUDLayoutWindowSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_IsModifyHUDLayout_ReturnValue) == 0x000089, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_IsModifyHUDLayout_ReturnValue' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_BooleanOR_ReturnValue) == 0x00008A, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000090, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetSystemMessageManager_IsValid_1) == 0x0000A0, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetSystemMessageManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetSystemMessageManager_ReturnValue_1) == 0x0000A8, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetSystemMessageManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000B0, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_PlayAnimation_ReturnValue) == 0x0000C8, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000D0, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D8, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000E8, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_Create_ReturnValue) == 0x0000F0, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0000F8, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000100, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_IsModifyHUDLayoutWindowSize_ReturnValue_1) == 0x000108, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_IsModifyHUDLayoutWindowSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_IsModifyHUDLayout_ReturnValue_1) == 0x000109, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_IsModifyHUDLayout_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_BooleanOR_ReturnValue_1) == 0x00010A, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_PlayAnimation_ReturnValue_3) == 0x000110, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_Create_ReturnValue_1) == 0x000118, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetSystemMessageManager_IsValid_2) == 0x000120, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetSystemMessageManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetSystemMessageManager_ReturnValue_2) == 0x000128, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetSystemMessageManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000130, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LayoutMenu_C_ExecuteUbergraph_LayoutMenu, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000140, "Member 'LayoutMenu_C_ExecuteUbergraph_LayoutMenu::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

// Function LayoutMenu.LayoutMenu_C.ApplyCheck
// 0x0001 (0x0001 - 0x0000)
struct LayoutMenu_C_ApplyCheck final
{
public:
	bool                                          bIsCancel;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LayoutMenu_C_ApplyCheck) == 0x000001, "Wrong alignment on LayoutMenu_C_ApplyCheck");
static_assert(sizeof(LayoutMenu_C_ApplyCheck) == 0x000001, "Wrong size on LayoutMenu_C_ApplyCheck");
static_assert(offsetof(LayoutMenu_C_ApplyCheck, bIsCancel) == 0x000000, "Member 'LayoutMenu_C_ApplyCheck::bIsCancel' has a wrong offset!");

// Function LayoutMenu.LayoutMenu_C.SelectedInitialize
// 0x0001 (0x0001 - 0x0000)
struct LayoutMenu_C_SelectedInitialize final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LayoutMenu_C_SelectedInitialize) == 0x000001, "Wrong alignment on LayoutMenu_C_SelectedInitialize");
static_assert(sizeof(LayoutMenu_C_SelectedInitialize) == 0x000001, "Wrong size on LayoutMenu_C_SelectedInitialize");
static_assert(offsetof(LayoutMenu_C_SelectedInitialize, Result) == 0x000000, "Member 'LayoutMenu_C_SelectedInitialize::Result' has a wrong offset!");

}

