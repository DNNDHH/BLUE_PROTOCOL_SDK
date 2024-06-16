#pragma once

 

// Package: UMG_PartyMenu_Button

#include "Basic.hpp"

#include "EPartyButtonType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.ExecuteUbergraph_UMG_PartyMenu_Button
// 0x0178 (0x0178 - 0x0000)
struct UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88A3[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo;       // 0x0008(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x0043(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88A4[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88A5[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo_1;     // 0x0070(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue_1;       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88A6[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88A7[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88A8[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88A9[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPartySize_ReturnValue;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88AA[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_SelectIndex;                    // 0x00E4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88AB[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance_1;            // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88AC[0x1];                                     // 0x0103(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0104(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88AD[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_3;            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88AE[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button) == 0x000008, "Wrong alignment on UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button");
static_assert(sizeof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button) == 0x000178, "Wrong size on UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, EntryPoint) == 0x000000, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, Temp_bool_Variable) == 0x000004, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetPendingInviteInfo_OutInviteInfo) == 0x000008, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetPendingInviteInfo_OutInviteInfo' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetPendingInviteInfo_ReturnValue) == 0x000040, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetPendingInviteInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_SwitchEnum_CmpSuccess) == 0x000041, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_SwitchEnum_CmpSuccess_1) == 0x000042, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_CustomEvent_Result) == 0x000043, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000054, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetGameInstance_ReturnValue) == 0x000058, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_DynamicCast_AsSBGame_Instance) == 0x000060, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetPendingInviteInfo_OutInviteInfo_1) == 0x000070, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetPendingInviteInfo_OutInviteInfo_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetPendingInviteInfo_ReturnValue_1) == 0x0000A8, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetPendingInviteInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetCurrentParty_OutPartyState) == 0x0000B0, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetCurrentParty_ReturnValue) == 0x0000B8, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetGameInstance_ReturnValue_1) == 0x0000C0, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x0000D0, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetPartySize_ReturnValue) == 0x0000DC, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetPartySize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000E0, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_CustomEvent_SelectIndex) == 0x0000E4, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_CustomEvent_SelectIndex' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_SwitchInteger_CmpSuccess) == 0x0000E8, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetGameInstance_ReturnValue_2) == 0x0000F0, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_DynamicCast_AsSBGame_Instance_1) == 0x0000F8, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_DynamicCast_AsSBGame_Instance_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_DynamicCast_bSuccess_2) == 0x000100, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, Temp_bool_Variable_1) == 0x000101, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000102, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_Event_MyGeometry) == 0x000104, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_Event_InDeltaTime) == 0x00013C, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, Temp_bool_Variable_2) == 0x000140, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_Select_Default) == 0x000141, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_GetGameInstance_ReturnValue_3) == 0x000148, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_GetGameInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x000150, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, K2Node_DynamicCast_bSuccess_3) == 0x000158, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_PlayAnimation_ReturnValue) == 0x000160, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_PlayAnimation_ReturnValue_1) == 0x000168, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000170, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000171, "Member 'UMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");

// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Tick
// 0x003C (0x003C - 0x0000)
struct UMG_PartyMenu_Button_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PartyMenu_Button_C_Tick) == 0x000004, "Wrong alignment on UMG_PartyMenu_Button_C_Tick");
static_assert(sizeof(UMG_PartyMenu_Button_C_Tick) == 0x00003C, "Wrong size on UMG_PartyMenu_Button_C_Tick");
static_assert(offsetof(UMG_PartyMenu_Button_C_Tick, MyGeometry) == 0x000000, "Member 'UMG_PartyMenu_Button_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_Tick, InDeltaTime) == 0x000038, "Member 'UMG_PartyMenu_Button_C_Tick::InDeltaTime' has a wrong offset!");

// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.CustomEvent_1
// 0x0004 (0x0004 - 0x0000)
struct UMG_PartyMenu_Button_C_CustomEvent_1 final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PartyMenu_Button_C_CustomEvent_1) == 0x000004, "Wrong alignment on UMG_PartyMenu_Button_C_CustomEvent_1");
static_assert(sizeof(UMG_PartyMenu_Button_C_CustomEvent_1) == 0x000004, "Wrong size on UMG_PartyMenu_Button_C_CustomEvent_1");
static_assert(offsetof(UMG_PartyMenu_Button_C_CustomEvent_1, SelectIndex) == 0x000000, "Member 'UMG_PartyMenu_Button_C_CustomEvent_1::SelectIndex' has a wrong offset!");

// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct UMG_PartyMenu_Button_C_CustomEvent_0 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PartyMenu_Button_C_CustomEvent_0) == 0x000001, "Wrong alignment on UMG_PartyMenu_Button_C_CustomEvent_0");
static_assert(sizeof(UMG_PartyMenu_Button_C_CustomEvent_0) == 0x000001, "Wrong size on UMG_PartyMenu_Button_C_CustomEvent_0");
static_assert(offsetof(UMG_PartyMenu_Button_C_CustomEvent_0, Result) == 0x000000, "Member 'UMG_PartyMenu_Button_C_CustomEvent_0::Result' has a wrong offset!");

// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.SetButtonType
// 0x0068 (0x0068 - 0x0000)
struct UMG_PartyMenu_Button_C_SetButtonType final
{
public:
	EPartyButtonType                              Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88AF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InterrupQuestMemberNum;                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88B0[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88B1[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPartyMaxSize_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88B2[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	int32                                         CallFunc_GetPartySize_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88B3[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0048(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PartyMenu_Button_C_SetButtonType) == 0x000008, "Wrong alignment on UMG_PartyMenu_Button_C_SetButtonType");
static_assert(sizeof(UMG_PartyMenu_Button_C_SetButtonType) == 0x000068, "Wrong size on UMG_PartyMenu_Button_C_SetButtonType");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, Type) == 0x000000, "Member 'UMG_PartyMenu_Button_C_SetButtonType::Type' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, InterrupQuestMemberNum) == 0x000004, "Member 'UMG_PartyMenu_Button_C_SetButtonType::InterrupQuestMemberNum' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'UMG_PartyMenu_Button_C_SetButtonType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'UMG_PartyMenu_Button_C_SetButtonType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, CallFunc_IsValid_ReturnValue_1) == 0x00000A, "Member 'UMG_PartyMenu_Button_C_SetButtonType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, CallFunc_GetCurrentParty_OutPartyState) == 0x000010, "Member 'UMG_PartyMenu_Button_C_SetButtonType::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, CallFunc_GetCurrentParty_ReturnValue) == 0x000018, "Member 'UMG_PartyMenu_Button_C_SetButtonType::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, CallFunc_GetPartyMaxSize_ReturnValue) == 0x00001C, "Member 'UMG_PartyMenu_Button_C_SetButtonType::CallFunc_GetPartyMaxSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, CallFunc_IsValid_ReturnValue_2) == 0x000020, "Member 'UMG_PartyMenu_Button_C_SetButtonType::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'UMG_PartyMenu_Button_C_SetButtonType::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, CallFunc_GetPartySize_ReturnValue) == 0x000040, "Member 'UMG_PartyMenu_Button_C_SetButtonType::CallFunc_GetPartySize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000048, "Member 'UMG_PartyMenu_Button_C_SetButtonType::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetButtonType, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'UMG_PartyMenu_Button_C_SetButtonType::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.PlayBtnAnim
// 0x0020 (0x0020 - 0x0000)
struct UMG_PartyMenu_Button_C_PlayBtnAnim final
{
public:
	bool                                          bInActive;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88B4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PartyMenu_Button_C_PlayBtnAnim) == 0x000008, "Wrong alignment on UMG_PartyMenu_Button_C_PlayBtnAnim");
static_assert(sizeof(UMG_PartyMenu_Button_C_PlayBtnAnim) == 0x000020, "Wrong size on UMG_PartyMenu_Button_C_PlayBtnAnim");
static_assert(offsetof(UMG_PartyMenu_Button_C_PlayBtnAnim, bInActive) == 0x000000, "Member 'UMG_PartyMenu_Button_C_PlayBtnAnim::bInActive' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_PlayBtnAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_PartyMenu_Button_C_PlayBtnAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_PlayBtnAnim, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'UMG_PartyMenu_Button_C_PlayBtnAnim::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_PlayBtnAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000018, "Member 'UMG_PartyMenu_Button_C_PlayBtnAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMenu_Button_C_PlayBtnAnim, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000019, "Member 'UMG_PartyMenu_Button_C_PlayBtnAnim::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");

// Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.SetBtn
// 0x0001 (0x0001 - 0x0000)
struct UMG_PartyMenu_Button_C_SetBtn final
{
public:
	bool                                          Param_bActive;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PartyMenu_Button_C_SetBtn) == 0x000001, "Wrong alignment on UMG_PartyMenu_Button_C_SetBtn");
static_assert(sizeof(UMG_PartyMenu_Button_C_SetBtn) == 0x000001, "Wrong size on UMG_PartyMenu_Button_C_SetBtn");
static_assert(offsetof(UMG_PartyMenu_Button_C_SetBtn, Param_bActive) == 0x000000, "Member 'UMG_PartyMenu_Button_C_SetBtn::Param_bActive' has a wrong offset!");

}

