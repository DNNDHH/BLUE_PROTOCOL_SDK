#pragma once

 

// Package: MapWidget_PartyMemberIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.ExecuteUbergraph_MapWidget_PartyMemberIcon
// 0x0078 (0x0078 - 0x0000)
struct MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ED1[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip1_C*              CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7ED2[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ED3[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture_1; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNoMapDisplay_ReturnValue;               // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon) == 0x000008, "Wrong alignment on MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon");
static_assert(sizeof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon) == 0x000078, "Wrong size on MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, EntryPoint) == 0x000000, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, Temp_byte_Variable) == 0x000004, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, CallFunc_GetVisibility_ReturnValue) == 0x000005, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, Temp_bool_Variable) == 0x000006, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, K2Node_Event_MyGeometry) == 0x000010, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, K2Node_Event_InDeltaTime) == 0x000048, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture) == 0x000050, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture_1) == 0x000068, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, CallFunc_IsValid_ReturnValue_2) == 0x000071, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, CallFunc_IsNoMapDisplay_ReturnValue) == 0x000072, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::CallFunc_IsNoMapDisplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, Temp_byte_Variable_1) == 0x000073, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, K2Node_Select_Default) == 0x000074, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000075, "Member 'MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Tick
// 0x003C (0x003C - 0x0000)
struct MapWidget_PartyMemberIcon_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PartyMemberIcon_C_Tick) == 0x000004, "Wrong alignment on MapWidget_PartyMemberIcon_C_Tick");
static_assert(sizeof(MapWidget_PartyMemberIcon_C_Tick) == 0x00003C, "Wrong size on MapWidget_PartyMemberIcon_C_Tick");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Tick, MyGeometry) == 0x000000, "Member 'MapWidget_PartyMemberIcon_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Tick, InDeltaTime) == 0x000038, "Member 'MapWidget_PartyMemberIcon_C_Tick::InDeltaTime' has a wrong offset!");

// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Set Text
// 0x0088 (0x0088 - 0x0000)
struct MapWidget_PartyMemberIcon_C_Set_Text final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ED4[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0020(0x0018)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0048(0x0020)()
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ED5[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0070(0x0018)()
};
static_assert(alignof(MapWidget_PartyMemberIcon_C_Set_Text) == 0x000008, "Wrong alignment on MapWidget_PartyMemberIcon_C_Set_Text");
static_assert(sizeof(MapWidget_PartyMemberIcon_C_Set_Text) == 0x000088, "Wrong size on MapWidget_PartyMemberIcon_C_Set_Text");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Set_Text, InText) == 0x000000, "Member 'MapWidget_PartyMemberIcon_C_Set_Text::InText' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Set_Text, Temp_bool_Variable) == 0x000018, "Member 'MapWidget_PartyMemberIcon_C_Set_Text::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Set_Text, CallFunc_MakeLiteralByte_ReturnValue) == 0x000019, "Member 'MapWidget_PartyMemberIcon_C_Set_Text::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Set_Text, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'MapWidget_PartyMemberIcon_C_Set_Text::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Set_Text, CallFunc_GetRestrictText_ReturnValue) == 0x000020, "Member 'MapWidget_PartyMemberIcon_C_Set_Text::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Set_Text, CallFunc_GetCharacterId_ReturnValue) == 0x000038, "Member 'MapWidget_PartyMemberIcon_C_Set_Text::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Set_Text, CallFunc_GetPlatformInfo_ReturnValue) == 0x000048, "Member 'MapWidget_PartyMemberIcon_C_Set_Text::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Set_Text, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x000068, "Member 'MapWidget_PartyMemberIcon_C_Set_Text::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Set_Text, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x000069, "Member 'MapWidget_PartyMemberIcon_C_Set_Text::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_Set_Text, K2Node_Select_Default) == 0x000070, "Member 'MapWidget_PartyMemberIcon_C_Set_Text::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.CheckDead
// 0x0038 (0x0038 - 0x0000)
struct MapWidget_PartyMemberIcon_C_CheckDead final
{
public:
	bool                                          TmpCurrDead;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ED6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ED7[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ED8[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterParameterComponent*   CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput;            // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_PartyMemberIcon_C_CheckDead) == 0x000008, "Wrong alignment on MapWidget_PartyMemberIcon_C_CheckDead");
static_assert(sizeof(MapWidget_PartyMemberIcon_C_CheckDead) == 0x000038, "Wrong size on MapWidget_PartyMemberIcon_C_CheckDead");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, TmpCurrDead) == 0x000000, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::TmpCurrDead' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, Temp_int_Variable) == 0x000004, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, Temp_int_Variable_1) == 0x000008, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, Temp_bool_Variable) == 0x00000C, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, K2Node_Select_Default) == 0x000010, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000014, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000018, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, CallFunc_IsDeadHitPoint_self_CastInput) == 0x000020, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::CallFunc_IsDeadHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, CallFunc_IsDeadHitPoint_ReturnValue) == 0x000030, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::CallFunc_IsDeadHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_CheckDead, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'MapWidget_PartyMemberIcon_C_CheckDead::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetText
// 0x0030 (0x0030 - 0x0000)
struct MapWidget_PartyMemberIcon_C_GetText final
{
public:
	class FText                                   OutText;                                           // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetName_OutName;                          // 0x0018(0x0018)()
};
static_assert(alignof(MapWidget_PartyMemberIcon_C_GetText) == 0x000008, "Wrong alignment on MapWidget_PartyMemberIcon_C_GetText");
static_assert(sizeof(MapWidget_PartyMemberIcon_C_GetText) == 0x000030, "Wrong size on MapWidget_PartyMemberIcon_C_GetText");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_GetText, OutText) == 0x000000, "Member 'MapWidget_PartyMemberIcon_C_GetText::OutText' has a wrong offset!");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_GetText, CallFunc_GetName_OutName) == 0x000018, "Member 'MapWidget_PartyMemberIcon_C_GetText::CallFunc_GetName_OutName' has a wrong offset!");

// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.SetPlayerState
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_PartyMemberIcon_C_SetPlayerState final
{
public:
	class ASBPlayerState*                         InPlayerState;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PartyMemberIcon_C_SetPlayerState) == 0x000008, "Wrong alignment on MapWidget_PartyMemberIcon_C_SetPlayerState");
static_assert(sizeof(MapWidget_PartyMemberIcon_C_SetPlayerState) == 0x000008, "Wrong size on MapWidget_PartyMemberIcon_C_SetPlayerState");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_SetPlayerState, InPlayerState) == 0x000000, "Member 'MapWidget_PartyMemberIcon_C_SetPlayerState::InPlayerState' has a wrong offset!");

// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetPlayerState
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_PartyMemberIcon_C_GetPlayerState final
{
public:
	class ASBPlayerState*                         OutPlayerState;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PartyMemberIcon_C_GetPlayerState) == 0x000008, "Wrong alignment on MapWidget_PartyMemberIcon_C_GetPlayerState");
static_assert(sizeof(MapWidget_PartyMemberIcon_C_GetPlayerState) == 0x000008, "Wrong size on MapWidget_PartyMemberIcon_C_GetPlayerState");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_GetPlayerState, OutPlayerState) == 0x000000, "Member 'MapWidget_PartyMemberIcon_C_GetPlayerState::OutPlayerState' has a wrong offset!");

// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetDeadFlag
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_PartyMemberIcon_C_GetDeadFlag final
{
public:
	bool                                          OutDeadFlag;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_PartyMemberIcon_C_GetDeadFlag) == 0x000001, "Wrong alignment on MapWidget_PartyMemberIcon_C_GetDeadFlag");
static_assert(sizeof(MapWidget_PartyMemberIcon_C_GetDeadFlag) == 0x000001, "Wrong size on MapWidget_PartyMemberIcon_C_GetDeadFlag");
static_assert(offsetof(MapWidget_PartyMemberIcon_C_GetDeadFlag, OutDeadFlag) == 0x000000, "Member 'MapWidget_PartyMemberIcon_C_GetDeadFlag::OutDeadFlag' has a wrong offset!");

}

