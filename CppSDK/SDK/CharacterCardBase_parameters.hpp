#pragma once

 

// Package: CharacterCardBase

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "ECharacterCardType_structs.hpp"


namespace SDK::Params
{

// Function CharacterCardBase.CharacterCardBase_C.OnClicked__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct CharacterCardBase_C_OnClicked__DelegateSignature final
{
public:
	class FString                                 InCharacterId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bInIsMe;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardBase_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on CharacterCardBase_C_OnClicked__DelegateSignature");
static_assert(sizeof(CharacterCardBase_C_OnClicked__DelegateSignature) == 0x000018, "Wrong size on CharacterCardBase_C_OnClicked__DelegateSignature");
static_assert(offsetof(CharacterCardBase_C_OnClicked__DelegateSignature, InCharacterId) == 0x000000, "Member 'CharacterCardBase_C_OnClicked__DelegateSignature::InCharacterId' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_OnClicked__DelegateSignature, bInIsMe) == 0x000010, "Member 'CharacterCardBase_C_OnClicked__DelegateSignature::bInIsMe' has a wrong offset!");

// Function CharacterCardBase.CharacterCardBase_C.ExecuteUbergraph_CharacterCardBase
// 0x0060 (0x0060 - 0x0000)
struct CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4810[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLikeSend                              K2Node_MakeStruct_LikeSend;                        // 0x0008(0x0020)()
	TArray<struct FLikeSend>                      K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4811[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase) == 0x000008, "Wrong alignment on CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase");
static_assert(sizeof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase) == 0x000060, "Wrong size on CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, EntryPoint) == 0x000000, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, K2Node_MakeStruct_LikeSend) == 0x000008, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::K2Node_MakeStruct_LikeSend' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, K2Node_MakeArray_Array) == 0x000028, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, K2Node_Event_IsDesignTime) == 0x000038, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, K2Node_SwitchEnum_CmpSuccess) == 0x000039, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, CallFunc_IsValid_ReturnValue) == 0x00003A, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, CallFunc_IsValid_ReturnValue_1) == 0x00003B, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000040, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000050, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000058, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, CallFunc_IsValid_ReturnValue_2) == 0x000059, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase, CallFunc_IsValid_ReturnValue_3) == 0x00005A, "Member 'CharacterCardBase_C_ExecuteUbergraph_CharacterCardBase::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function CharacterCardBase.CharacterCardBase_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CharacterCardBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardBase_C_PreConstruct) == 0x000001, "Wrong alignment on CharacterCardBase_C_PreConstruct");
static_assert(sizeof(CharacterCardBase_C_PreConstruct) == 0x000001, "Wrong size on CharacterCardBase_C_PreConstruct");
static_assert(offsetof(CharacterCardBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CharacterCardBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CharacterCardBase.CharacterCardBase_C.SetCharacterCardType
// 0x000D (0x000D - 0x0000)
struct CharacterCardBase_C_SetCharacterCardType final
{
public:
	ECharacterCardType                            InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInIsReceptingParticipants;                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterCardType                            Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterCardType                            Temp_byte_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterCardBase_C_SetCharacterCardType) == 0x000001, "Wrong alignment on CharacterCardBase_C_SetCharacterCardType");
static_assert(sizeof(CharacterCardBase_C_SetCharacterCardType) == 0x00000D, "Wrong size on CharacterCardBase_C_SetCharacterCardType");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, InType) == 0x000000, "Member 'CharacterCardBase_C_SetCharacterCardType::InType' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, bInIsReceptingParticipants) == 0x000001, "Member 'CharacterCardBase_C_SetCharacterCardType::bInIsReceptingParticipants' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, Temp_byte_Variable) == 0x000002, "Member 'CharacterCardBase_C_SetCharacterCardType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, Temp_byte_Variable_1) == 0x000003, "Member 'CharacterCardBase_C_SetCharacterCardType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, Temp_byte_Variable_2) == 0x000004, "Member 'CharacterCardBase_C_SetCharacterCardType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, Temp_byte_Variable_3) == 0x000005, "Member 'CharacterCardBase_C_SetCharacterCardType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, Temp_byte_Variable_4) == 0x000006, "Member 'CharacterCardBase_C_SetCharacterCardType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, Temp_byte_Variable_5) == 0x000007, "Member 'CharacterCardBase_C_SetCharacterCardType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, Temp_byte_Variable_6) == 0x000008, "Member 'CharacterCardBase_C_SetCharacterCardType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, Temp_bool_Variable) == 0x000009, "Member 'CharacterCardBase_C_SetCharacterCardType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, K2Node_Select_Default) == 0x00000A, "Member 'CharacterCardBase_C_SetCharacterCardType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, K2Node_Select_Default_1) == 0x00000B, "Member 'CharacterCardBase_C_SetCharacterCardType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardType, K2Node_Select_Default_2) == 0x00000C, "Member 'CharacterCardBase_C_SetCharacterCardType::K2Node_Select_Default_2' has a wrong offset!");

// Function CharacterCardBase.CharacterCardBase_C.SetCharacterCardData
// 0x0138 (0x0138 - 0x0000)
struct CharacterCardBase_C_SetCharacterCardData final
{
public:
	struct FSBPlayerCharacterCardData             InCharacterCardData;                               // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bInIsMe;                                           // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4812[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    InPartyMemberState;                                // 0x00B8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4813[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x00C8(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x00E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4814[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F8(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4815[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_3;                           // 0x0118(0x0018)()
	bool                                          Temp_bool_Variable_5;                              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_4;                           // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetData_ReturnValue;                      // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardBase_C_SetCharacterCardData) == 0x000008, "Wrong alignment on CharacterCardBase_C_SetCharacterCardData");
static_assert(sizeof(CharacterCardBase_C_SetCharacterCardData) == 0x000138, "Wrong size on CharacterCardBase_C_SetCharacterCardData");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, InCharacterCardData) == 0x000000, "Member 'CharacterCardBase_C_SetCharacterCardData::InCharacterCardData' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, bInIsMe) == 0x0000B0, "Member 'CharacterCardBase_C_SetCharacterCardData::bInIsMe' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, InPartyMemberState) == 0x0000B8, "Member 'CharacterCardBase_C_SetCharacterCardData::InPartyMemberState' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000C0, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_GetRestrictText_ReturnValue) == 0x0000C8, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_bool_Variable) == 0x0000E0, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_byte_Variable) == 0x0000E1, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_byte_Variable_1) == 0x0000E2, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_bool_Variable_1) == 0x0000E3, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_byte_Variable_2) == 0x0000E4, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_bool_Variable_2) == 0x0000E5, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_byte_Variable_3) == 0x0000E6, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_byte_Variable_4) == 0x0000E7, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_bool_Variable_3) == 0x0000E8, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_bool_Variable_4) == 0x0000E9, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, K2Node_Select_Default) == 0x0000EA, "Member 'CharacterCardBase_C_SetCharacterCardData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_IsValid_ReturnValue) == 0x0000EB, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, K2Node_SwitchEnum_CmpSuccess) == 0x0000EC, "Member 'CharacterCardBase_C_SetCharacterCardData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_IsValid_ReturnValue_1) == 0x0000ED, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_BooleanAND_ReturnValue) == 0x0000EE, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, K2Node_Select_Default_1) == 0x0000EF, "Member 'CharacterCardBase_C_SetCharacterCardData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x0000F0, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x0000F1, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F8, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, K2Node_Select_Default_2) == 0x000110, "Member 'CharacterCardBase_C_SetCharacterCardData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, K2Node_Select_Default_3) == 0x000118, "Member 'CharacterCardBase_C_SetCharacterCardData::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, Temp_bool_Variable_5) == 0x000130, "Member 'CharacterCardBase_C_SetCharacterCardData::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, K2Node_Select_Default_4) == 0x000131, "Member 'CharacterCardBase_C_SetCharacterCardData::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_IsValid_ReturnValue_2) == 0x000132, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_SetData_ReturnValue) == 0x000133, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_SetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetCharacterCardData, CallFunc_IsValid_ReturnValue_3) == 0x000134, "Member 'CharacterCardBase_C_SetCharacterCardData::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function CharacterCardBase.CharacterCardBase_C.SetIsBlankCard
// 0x0015 (0x0015 - 0x0000)
struct CharacterCardBase_C_SetIsBlankCard final
{
public:
	bool                                          bInIsBlank;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardBase_C_SetIsBlankCard) == 0x000001, "Wrong alignment on CharacterCardBase_C_SetIsBlankCard");
static_assert(sizeof(CharacterCardBase_C_SetIsBlankCard) == 0x000015, "Wrong size on CharacterCardBase_C_SetIsBlankCard");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, bInIsBlank) == 0x000000, "Member 'CharacterCardBase_C_SetIsBlankCard::bInIsBlank' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_byte_Variable) == 0x000001, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_byte_Variable_1) == 0x000002, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_bool_Variable) == 0x000003, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_byte_Variable_2) == 0x000004, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_bool_Variable_1) == 0x000005, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_byte_Variable_3) == 0x000006, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_byte_Variable_4) == 0x000007, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_bool_Variable_2) == 0x000008, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_byte_Variable_5) == 0x000009, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_bool_Variable_3) == 0x00000A, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_byte_Variable_6) == 0x00000B, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_byte_Variable_7) == 0x00000C, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, K2Node_Select_Default) == 0x00000D, "Member 'CharacterCardBase_C_SetIsBlankCard::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, Temp_bool_Variable_4) == 0x00000E, "Member 'CharacterCardBase_C_SetIsBlankCard::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, CallFunc_IsValid_ReturnValue) == 0x00000F, "Member 'CharacterCardBase_C_SetIsBlankCard::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, K2Node_Select_Default_1) == 0x000010, "Member 'CharacterCardBase_C_SetIsBlankCard::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, K2Node_Select_Default_2) == 0x000011, "Member 'CharacterCardBase_C_SetIsBlankCard::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, K2Node_Select_Default_3) == 0x000012, "Member 'CharacterCardBase_C_SetIsBlankCard::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, K2Node_Select_Default_4) == 0x000013, "Member 'CharacterCardBase_C_SetIsBlankCard::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsBlankCard, K2Node_SwitchEnum_CmpSuccess) == 0x000014, "Member 'CharacterCardBase_C_SetIsBlankCard::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CharacterCardBase.CharacterCardBase_C.SetIsCardInfoHidden
// 0x001C (0x001C - 0x0000)
struct CharacterCardBase_C_SetIsCardInfoHidden final
{
public:
	bool                                          bInIsInfoHidden;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4816[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4817[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterCardBase_C_SetIsCardInfoHidden) == 0x000004, "Wrong alignment on CharacterCardBase_C_SetIsCardInfoHidden");
static_assert(sizeof(CharacterCardBase_C_SetIsCardInfoHidden) == 0x00001C, "Wrong size on CharacterCardBase_C_SetIsCardInfoHidden");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, bInIsInfoHidden) == 0x000000, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::bInIsInfoHidden' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, Temp_int_Variable) == 0x000004, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, Temp_int_Variable_1) == 0x000008, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, Temp_bool_Variable) == 0x00000C, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, Temp_byte_Variable) == 0x00000D, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, Temp_byte_Variable_1) == 0x00000E, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, Temp_bool_Variable_1) == 0x00000F, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, Temp_byte_Variable_2) == 0x000010, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, Temp_bool_Variable_2) == 0x000011, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, K2Node_Select_Default) == 0x000014, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, K2Node_Select_Default_1) == 0x00001A, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CharacterCardBase_C_SetIsCardInfoHidden, K2Node_Select_Default_2) == 0x00001B, "Member 'CharacterCardBase_C_SetIsCardInfoHidden::K2Node_Select_Default_2' has a wrong offset!");

}

