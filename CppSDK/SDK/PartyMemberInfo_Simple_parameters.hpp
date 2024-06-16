#pragma once

 

// Package: PartyMemberInfo_Simple

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.ExecuteUbergraph_PartyMemberInfo_Simple
// 0x0008 (0x0008 - 0x0000)
struct PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple) == 0x000004, "Wrong alignment on PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple");
static_assert(sizeof(PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple) == 0x000008, "Wrong size on PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple");
static_assert(offsetof(PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple, EntryPoint) == 0x000000, "Member 'PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple, Temp_bool_Variable) == 0x000004, "Member 'PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple, Temp_byte_Variable) == 0x000005, "Member 'PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple, Temp_byte_Variable_1) == 0x000006, "Member 'PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple, K2Node_Select_Default) == 0x000007, "Member 'PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple::K2Node_Select_Default' has a wrong offset!");

// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetHpMpGauge
// 0x0018 (0x0018 - 0x0000)
struct PartyMemberInfo_Simple_C_SetHpMpGauge final
{
public:
	class USBPartyMemberState*                    InPartyMemberState;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterParameterComponent*   CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_Simple_C_SetHpMpGauge) == 0x000008, "Wrong alignment on PartyMemberInfo_Simple_C_SetHpMpGauge");
static_assert(sizeof(PartyMemberInfo_Simple_C_SetHpMpGauge) == 0x000018, "Wrong size on PartyMemberInfo_Simple_C_SetHpMpGauge");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetHpMpGauge, InPartyMemberState) == 0x000000, "Member 'PartyMemberInfo_Simple_C_SetHpMpGauge::InPartyMemberState' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetHpMpGauge, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000008, "Member 'PartyMemberInfo_Simple_C_SetHpMpGauge::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetHpMpGauge, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PartyMemberInfo_Simple_C_SetHpMpGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetHpMpGauge, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'PartyMemberInfo_Simple_C_SetHpMpGauge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetHPMPGaugeVisibility
// 0x0005 (0x0005 - 0x0000)
struct PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility) == 0x000001, "Wrong alignment on PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility");
static_assert(sizeof(PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility) == 0x000005, "Wrong size on PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility, Param_IsVisible) == 0x000000, "Member 'PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility, Temp_bool_Variable) == 0x000001, "Member 'PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility, Temp_byte_Variable) == 0x000002, "Member 'PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility, K2Node_Select_Default) == 0x000004, "Member 'PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility::K2Node_Select_Default' has a wrong offset!");

// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.UpdateDisplayInfo_Internal
// 0x0070 (0x0070 - 0x0000)
struct PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal final
{
public:
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetPlatformInfo_self_CastInput;           // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0030(0x0020)()
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71D1[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal) == 0x000008, "Wrong alignment on PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal");
static_assert(sizeof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal) == 0x000070, "Wrong size on PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal");
static_assert(offsetof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal, CallFunc_GetCharacterId_self_CastInput) == 0x000000, "Member 'PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal, CallFunc_GetPlatformInfo_self_CastInput) == 0x000020, "Member 'PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal::CallFunc_GetPlatformInfo_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal, CallFunc_GetPlatformInfo_ReturnValue) == 0x000030, "Member 'PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x000050, "Member 'PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x000051, "Member 'PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal, CallFunc_BooleanAND_ReturnValue) == 0x000052, "Member 'PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal, CallFunc_Conv_TextToString_ReturnValue) == 0x000058, "Member 'PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal, CallFunc_GetClassType_ReturnValue) == 0x000069, "Member 'PartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal::CallFunc_GetClassType_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetCurrentMapMode
// 0x0004 (0x0004 - 0x0000)
struct PartyMemberInfo_Simple_C_SetCurrentMapMode final
{
public:
	bool                                          CallFunc_IsSameMap_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOnline_ReturnValue;                     // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_Simple_C_SetCurrentMapMode) == 0x000001, "Wrong alignment on PartyMemberInfo_Simple_C_SetCurrentMapMode");
static_assert(sizeof(PartyMemberInfo_Simple_C_SetCurrentMapMode) == 0x000004, "Wrong size on PartyMemberInfo_Simple_C_SetCurrentMapMode");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetCurrentMapMode, CallFunc_IsSameMap_ReturnValue) == 0x000000, "Member 'PartyMemberInfo_Simple_C_SetCurrentMapMode::CallFunc_IsSameMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetCurrentMapMode, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'PartyMemberInfo_Simple_C_SetCurrentMapMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetCurrentMapMode, CallFunc_IsOnline_ReturnValue) == 0x000002, "Member 'PartyMemberInfo_Simple_C_SetCurrentMapMode::CallFunc_IsOnline_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_Simple_C_SetCurrentMapMode, CallFunc_IsValid_ReturnValue_1) == 0x000003, "Member 'PartyMemberInfo_Simple_C_SetCurrentMapMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

