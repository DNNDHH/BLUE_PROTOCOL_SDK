#pragma once

 

// Package: UMG_Login

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_Login.UMG_Login_C.SaveLoginCache
// 0x0058 (0x0058 - 0x0000)
struct UMG_Login_C_SaveLoginCache final
{
public:
	bool                                          bRememberMe;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                CallFunc_GetCheckedState_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E4A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0030(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Login_C_SaveLoginCache) == 0x000008, "Wrong alignment on UMG_Login_C_SaveLoginCache");
static_assert(sizeof(UMG_Login_C_SaveLoginCache) == 0x000058, "Wrong size on UMG_Login_C_SaveLoginCache");
static_assert(offsetof(UMG_Login_C_SaveLoginCache, bRememberMe) == 0x000000, "Member 'UMG_Login_C_SaveLoginCache::bRememberMe' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SaveLoginCache, CallFunc_SaveGameToSlot_ReturnValue) == 0x000001, "Member 'UMG_Login_C_SaveLoginCache::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SaveLoginCache, CallFunc_GetCheckedState_ReturnValue) == 0x000002, "Member 'UMG_Login_C_SaveLoginCache::CallFunc_GetCheckedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SaveLoginCache, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'UMG_Login_C_SaveLoginCache::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SaveLoginCache, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'UMG_Login_C_SaveLoginCache::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SaveLoginCache, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'UMG_Login_C_SaveLoginCache::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SaveLoginCache, CallFunc_GetText_ReturnValue_1) == 0x000030, "Member 'UMG_Login_C_SaveLoginCache::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SaveLoginCache, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000048, "Member 'UMG_Login_C_SaveLoginCache::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");

// Function UMG_Login.UMG_Login_C.HideWindow
// 0x0010 (0x0010 - 0x0000)
struct UMG_Login_C_HideWindow final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Login_C_HideWindow) == 0x000008, "Wrong alignment on UMG_Login_C_HideWindow");
static_assert(sizeof(UMG_Login_C_HideWindow) == 0x000010, "Wrong size on UMG_Login_C_HideWindow");
static_assert(offsetof(UMG_Login_C_HideWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UMG_Login_C_HideWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_HideWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'UMG_Login_C_HideWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function UMG_Login.UMG_Login_C.ShowWindow
// 0x0010 (0x0010 - 0x0000)
struct UMG_Login_C_ShowWindow final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Login_C_ShowWindow) == 0x000008, "Wrong alignment on UMG_Login_C_ShowWindow");
static_assert(sizeof(UMG_Login_C_ShowWindow) == 0x000010, "Wrong size on UMG_Login_C_ShowWindow");
static_assert(offsetof(UMG_Login_C_ShowWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UMG_Login_C_ShowWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ShowWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'UMG_Login_C_ShowWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function UMG_Login.UMG_Login_C.LoadLoginCache
// 0x0050 (0x0050 - 0x0000)
struct UMG_Login_C_LoadLoginCache final
{
public:
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0000(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0018(0x0018)()
	class USBLoginSaveGame*                       CallFunc_CreateSaveGameObject_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBLoginSaveGame*                       K2Node_DynamicCast_AsSBLogin_Save_Game;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Login_C_LoadLoginCache) == 0x000008, "Wrong alignment on UMG_Login_C_LoadLoginCache");
static_assert(sizeof(UMG_Login_C_LoadLoginCache) == 0x000050, "Wrong size on UMG_Login_C_LoadLoginCache");
static_assert(offsetof(UMG_Login_C_LoadLoginCache, CallFunc_Conv_StringToText_ReturnValue) == 0x000000, "Member 'UMG_Login_C_LoadLoginCache::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_LoadLoginCache, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000018, "Member 'UMG_Login_C_LoadLoginCache::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_LoadLoginCache, CallFunc_CreateSaveGameObject_ReturnValue) == 0x000030, "Member 'UMG_Login_C_LoadLoginCache::CallFunc_CreateSaveGameObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_LoadLoginCache, CallFunc_LoadGameFromSlot_ReturnValue) == 0x000038, "Member 'UMG_Login_C_LoadLoginCache::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_LoadLoginCache, K2Node_DynamicCast_AsSBLogin_Save_Game) == 0x000040, "Member 'UMG_Login_C_LoadLoginCache::K2Node_DynamicCast_AsSBLogin_Save_Game' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_LoadLoginCache, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'UMG_Login_C_LoadLoginCache::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UMG_Login.UMG_Login_C.SetSaveData
// 0x0060 (0x0060 - 0x0000)
struct UMG_Login_C_SetSaveData final
{
public:
	class FString                                 EMail;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Password;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          RememberMe;                                        // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E4B[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	ECheckBoxState                                Temp_byte_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_1;                              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default;                             // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Login_C_SetSaveData) == 0x000008, "Wrong alignment on UMG_Login_C_SetSaveData");
static_assert(sizeof(UMG_Login_C_SetSaveData) == 0x000060, "Wrong size on UMG_Login_C_SetSaveData");
static_assert(offsetof(UMG_Login_C_SetSaveData, EMail) == 0x000000, "Member 'UMG_Login_C_SetSaveData::EMail' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SetSaveData, Password) == 0x000010, "Member 'UMG_Login_C_SetSaveData::Password' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SetSaveData, RememberMe) == 0x000020, "Member 'UMG_Login_C_SetSaveData::RememberMe' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SetSaveData, Temp_bool_Variable) == 0x000021, "Member 'UMG_Login_C_SetSaveData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SetSaveData, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'UMG_Login_C_SetSaveData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SetSaveData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'UMG_Login_C_SetSaveData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SetSaveData, Temp_byte_Variable) == 0x000058, "Member 'UMG_Login_C_SetSaveData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SetSaveData, Temp_byte_Variable_1) == 0x000059, "Member 'UMG_Login_C_SetSaveData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_SetSaveData, K2Node_Select_Default) == 0x00005A, "Member 'UMG_Login_C_SetSaveData::K2Node_Select_Default' has a wrong offset!");

// Function UMG_Login.UMG_Login_C.GetSaveData
// 0x0088 (0x0088 - 0x0000)
struct UMG_Login_C_GetSaveData final
{
public:
	class FString                                 EMail;                                             // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Password;                                          // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          RemenberMe;                                        // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E4C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0028(0x0018)()
	ECheckBoxState                                CallFunc_GetCheckedState_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E4D[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E4E[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0060(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Login_C_GetSaveData) == 0x000008, "Wrong alignment on UMG_Login_C_GetSaveData");
static_assert(sizeof(UMG_Login_C_GetSaveData) == 0x000088, "Wrong size on UMG_Login_C_GetSaveData");
static_assert(offsetof(UMG_Login_C_GetSaveData, EMail) == 0x000000, "Member 'UMG_Login_C_GetSaveData::EMail' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_GetSaveData, Password) == 0x000010, "Member 'UMG_Login_C_GetSaveData::Password' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_GetSaveData, RemenberMe) == 0x000020, "Member 'UMG_Login_C_GetSaveData::RemenberMe' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_GetSaveData, CallFunc_GetText_ReturnValue) == 0x000028, "Member 'UMG_Login_C_GetSaveData::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_GetSaveData, CallFunc_GetCheckedState_ReturnValue) == 0x000040, "Member 'UMG_Login_C_GetSaveData::CallFunc_GetCheckedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_GetSaveData, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'UMG_Login_C_GetSaveData::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_GetSaveData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000058, "Member 'UMG_Login_C_GetSaveData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_GetSaveData, CallFunc_GetText_ReturnValue_1) == 0x000060, "Member 'UMG_Login_C_GetSaveData::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_GetSaveData, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000078, "Member 'UMG_Login_C_GetSaveData::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");

// Function UMG_Login.UMG_Login_C.ShowErrorDialog
// 0x0018 (0x0018 - 0x0000)
struct UMG_Login_C_ShowErrorDialog final
{
public:
	class FText                                   ErrorText;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UMG_Login_C_ShowErrorDialog) == 0x000008, "Wrong alignment on UMG_Login_C_ShowErrorDialog");
static_assert(sizeof(UMG_Login_C_ShowErrorDialog) == 0x000018, "Wrong size on UMG_Login_C_ShowErrorDialog");
static_assert(offsetof(UMG_Login_C_ShowErrorDialog, ErrorText) == 0x000000, "Member 'UMG_Login_C_ShowErrorDialog::ErrorText' has a wrong offset!");

// Function UMG_Login.UMG_Login_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_Login_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Login_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UMG_Login_C_OnAnimationFinished");
static_assert(sizeof(UMG_Login_C_OnAnimationFinished) == 0x000008, "Wrong size on UMG_Login_C_OnAnimationFinished");
static_assert(offsetof(UMG_Login_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UMG_Login_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function UMG_Login.UMG_Login_C.ExecuteUbergraph_UMG_Login
// 0x00D8 (0x00D8 - 0x0000)
struct UMG_Login_C_ExecuteUbergraph_UMG_Login final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E4F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E50[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0030(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0048(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_ErrorText;                      // 0x0080(0x0018)()
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0098(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E51[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E52[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue;    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Login_C_ExecuteUbergraph_UMG_Login) == 0x000008, "Wrong alignment on UMG_Login_C_ExecuteUbergraph_UMG_Login");
static_assert(sizeof(UMG_Login_C_ExecuteUbergraph_UMG_Login) == 0x0000D8, "Wrong size on UMG_Login_C_ExecuteUbergraph_UMG_Login");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, EntryPoint) == 0x000000, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_GetGameConfigValueString_OutValue) == 0x000008, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000018, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_GetText_ReturnValue) == 0x000030, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_GetText_ReturnValue_1) == 0x000048, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_Conv_TextToString_ReturnValue) == 0x000060, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000070, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, K2Node_CustomEvent_ErrorText) == 0x000080, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::K2Node_CustomEvent_ErrorText' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, K2Node_Event_Animation) == 0x000098, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000A0, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0000A1, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_GetGameConfigValueString_OutValue_1) == 0x0000A8, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x0000B8, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C0, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_ExecuteUbergraph_UMG_Login, CallFunc_IsPackagedForDistribution_ReturnValue) == 0x0000D0, "Member 'UMG_Login_C_ExecuteUbergraph_UMG_Login::CallFunc_IsPackagedForDistribution_ReturnValue' has a wrong offset!");

// Function UMG_Login.UMG_Login_C.OnLogin__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct UMG_Login_C_OnLogin__DelegateSignature final
{
public:
	class FString                                 EMail;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Password;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Login_C_OnLogin__DelegateSignature) == 0x000008, "Wrong alignment on UMG_Login_C_OnLogin__DelegateSignature");
static_assert(sizeof(UMG_Login_C_OnLogin__DelegateSignature) == 0x000020, "Wrong size on UMG_Login_C_OnLogin__DelegateSignature");
static_assert(offsetof(UMG_Login_C_OnLogin__DelegateSignature, EMail) == 0x000000, "Member 'UMG_Login_C_OnLogin__DelegateSignature::EMail' has a wrong offset!");
static_assert(offsetof(UMG_Login_C_OnLogin__DelegateSignature, Password) == 0x000010, "Member 'UMG_Login_C_OnLogin__DelegateSignature::Password' has a wrong offset!");

}

