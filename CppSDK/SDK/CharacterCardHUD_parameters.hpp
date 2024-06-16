#pragma once

 

// Package: CharacterCardHUD

#include "Basic.hpp"


namespace SDK::Params
{

// Function CharacterCardHUD.CharacterCardHUD_C.ExecuteUbergraph_CharacterCardHUD
// 0x00C8 (0x00C8 - 0x0000)
struct CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_623F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardList_C*                   K2Node_DynamicCast_AsCharacter_Card_List;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6240[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardList_C*                   K2Node_DynamicCast_AsCharacter_Card_List_1;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsAdventurerCardOpened_bOutIsOpened;   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6241[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInMission_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6242[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_Event_InPartyMemberCharacterIds;            // 0x0048(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6243[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardList_C*                   K2Node_DynamicCast_AsCharacter_Card_List_2;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6244[0x5];                                     // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardList_C*                   K2Node_DynamicCast_AsCharacter_Card_List_3;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_InResetMenuModeOnly;                  // 0x0079(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsAdventurerCardOpened_bOutIsOpened_1; // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6245[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6246[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardList_C*                   K2Node_DynamicCast_AsCharacter_Card_List_4;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6247[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardList_C*                   K2Node_DynamicCast_AsCharacter_Card_List_5;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6248[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD) == 0x000008, "Wrong alignment on CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD");
static_assert(sizeof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD) == 0x0000C8, "Wrong size on CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, EntryPoint) == 0x000000, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_AsCharacter_Card_List) == 0x000008, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_AsCharacter_Card_List' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_IsValid_ReturnValue_1) == 0x000012, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_AsCharacter_Card_List_1) == 0x000018, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_AsCharacter_Card_List_1' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_GetIsAdventurerCardOpened_bOutIsOpened) == 0x000021, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_GetIsAdventurerCardOpened_bOutIsOpened' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_IsStandalone_ReturnValue) == 0x000022, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_Not_PreBool_ReturnValue_1) == 0x000023, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_Not_PreBool_ReturnValue_2) == 0x000024, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_IsInMission_ReturnValue) == 0x000031, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_IsInMission_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_PlayAnimationForward_ReturnValue) == 0x000038, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000040, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_Event_InPartyMemberCharacterIds) == 0x000048, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_Event_InPartyMemberCharacterIds' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_IsValid_ReturnValue_3) == 0x000058, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_AsCharacter_Card_List_2) == 0x000060, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_AsCharacter_Card_List_2' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_Not_PreBool_ReturnValue_3) == 0x000069, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_IsValid_ReturnValue_4) == 0x00006A, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_AsCharacter_Card_List_3) == 0x000070, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_AsCharacter_Card_List_3' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_bSuccess_3) == 0x000078, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_Event_InResetMenuModeOnly) == 0x000079, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_Event_InResetMenuModeOnly' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_GetIsAdventurerCardOpened_bOutIsOpened_1) == 0x00007A, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_GetIsAdventurerCardOpened_bOutIsOpened_1' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_Not_PreBool_ReturnValue_4) == 0x00007B, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_BooleanAND_ReturnValue) == 0x00007C, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_BooleanAND_ReturnValue_1) == 0x00007D, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_PlaySE_ReturnValue) == 0x000080, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_Not_PreBool_ReturnValue_5) == 0x000084, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_IsValid_ReturnValue_5) == 0x000085, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_AsCharacter_Card_List_4) == 0x000088, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_AsCharacter_Card_List_4' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_bSuccess_4) == 0x000090, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_Event_IsDesignTime) == 0x000091, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_IsValid_ReturnValue_6) == 0x000092, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_AsCharacter_Card_List_5) == 0x000098, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_AsCharacter_Card_List_5' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, K2Node_DynamicCast_bSuccess_5) == 0x0000A0, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_Conv_BoolToString_ReturnValue) == 0x0000A8, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B8, "Member 'CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function CharacterCardHUD.CharacterCardHUD_C.OnCloseCharacterCard
// 0x0001 (0x0001 - 0x0000)
struct CharacterCardHUD_C_OnCloseCharacterCard final
{
public:
	bool                                          InResetMenuModeOnly;                               // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardHUD_C_OnCloseCharacterCard) == 0x000001, "Wrong alignment on CharacterCardHUD_C_OnCloseCharacterCard");
static_assert(sizeof(CharacterCardHUD_C_OnCloseCharacterCard) == 0x000001, "Wrong size on CharacterCardHUD_C_OnCloseCharacterCard");
static_assert(offsetof(CharacterCardHUD_C_OnCloseCharacterCard, InResetMenuModeOnly) == 0x000000, "Member 'CharacterCardHUD_C_OnCloseCharacterCard::InResetMenuModeOnly' has a wrong offset!");

// Function CharacterCardHUD.CharacterCardHUD_C.OnInitialize
// 0x0010 (0x0010 - 0x0000)
struct CharacterCardHUD_C_OnInitialize final
{
public:
	TArray<class FString>                         InPartyMemberCharacterIds;                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CharacterCardHUD_C_OnInitialize) == 0x000008, "Wrong alignment on CharacterCardHUD_C_OnInitialize");
static_assert(sizeof(CharacterCardHUD_C_OnInitialize) == 0x000010, "Wrong size on CharacterCardHUD_C_OnInitialize");
static_assert(offsetof(CharacterCardHUD_C_OnInitialize, InPartyMemberCharacterIds) == 0x000000, "Member 'CharacterCardHUD_C_OnInitialize::InPartyMemberCharacterIds' has a wrong offset!");

// Function CharacterCardHUD.CharacterCardHUD_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CharacterCardHUD_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardHUD_C_PreConstruct) == 0x000001, "Wrong alignment on CharacterCardHUD_C_PreConstruct");
static_assert(sizeof(CharacterCardHUD_C_PreConstruct) == 0x000001, "Wrong size on CharacterCardHUD_C_PreConstruct");
static_assert(offsetof(CharacterCardHUD_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CharacterCardHUD_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CharacterCardHUD.CharacterCardHUD_C.ExecShowOrHideHUD
// 0x0001 (0x0001 - 0x0000)
struct CharacterCardHUD_C_ExecShowOrHideHUD final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardHUD_C_ExecShowOrHideHUD) == 0x000001, "Wrong alignment on CharacterCardHUD_C_ExecShowOrHideHUD");
static_assert(sizeof(CharacterCardHUD_C_ExecShowOrHideHUD) == 0x000001, "Wrong size on CharacterCardHUD_C_ExecShowOrHideHUD");
static_assert(offsetof(CharacterCardHUD_C_ExecShowOrHideHUD, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'CharacterCardHUD_C_ExecShowOrHideHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function CharacterCardHUD.CharacterCardHUD_C.GetIsAdventurerCardOpened
// 0x0018 (0x0018 - 0x0000)
struct CharacterCardHUD_C_GetIsAdventurerCardOpened final
{
public:
	bool                                          bOutIsOpened;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalIsOpened;                                    // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6249[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardList_C*                   K2Node_DynamicCast_AsCharacter_Card_List;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsAdventurerCardOpened_bOutIsOpened;   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardHUD_C_GetIsAdventurerCardOpened) == 0x000008, "Wrong alignment on CharacterCardHUD_C_GetIsAdventurerCardOpened");
static_assert(sizeof(CharacterCardHUD_C_GetIsAdventurerCardOpened) == 0x000018, "Wrong size on CharacterCardHUD_C_GetIsAdventurerCardOpened");
static_assert(offsetof(CharacterCardHUD_C_GetIsAdventurerCardOpened, bOutIsOpened) == 0x000000, "Member 'CharacterCardHUD_C_GetIsAdventurerCardOpened::bOutIsOpened' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_GetIsAdventurerCardOpened, bLocalIsOpened) == 0x000001, "Member 'CharacterCardHUD_C_GetIsAdventurerCardOpened::bLocalIsOpened' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_GetIsAdventurerCardOpened, K2Node_DynamicCast_AsCharacter_Card_List) == 0x000008, "Member 'CharacterCardHUD_C_GetIsAdventurerCardOpened::K2Node_DynamicCast_AsCharacter_Card_List' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_GetIsAdventurerCardOpened, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'CharacterCardHUD_C_GetIsAdventurerCardOpened::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_GetIsAdventurerCardOpened, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'CharacterCardHUD_C_GetIsAdventurerCardOpened::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardHUD_C_GetIsAdventurerCardOpened, CallFunc_GetIsAdventurerCardOpened_bOutIsOpened) == 0x000012, "Member 'CharacterCardHUD_C_GetIsAdventurerCardOpened::CallFunc_GetIsAdventurerCardOpened_bOutIsOpened' has a wrong offset!");

}

