#pragma once

 

// Package: CharacterCardList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CharacterCardList.CharacterCardList_C.ExecuteUbergraph_CharacterCardList
// 0x0708 (0x0708 - 0x0000)
struct CharacterCardList_C_ExecuteUbergraph_CharacterCardList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61F7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F8[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& InCharacterId, bool bInIsMe)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_61F9[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InCharacterId;                  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInIsMe;                        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FA[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FB[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x0071(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FC[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0074(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerCharacterCardData>     K2Node_CustomEvent_PlayerCharacterCardDatas;       // 0x0078(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0088(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FD[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 RetCode, TArray<struct FSBPlayerCharacterCardData>& PlayerCharacterCardDatas)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0118(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FE[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue;                       // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0144(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61FF[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6200[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0178(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0188(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6201[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0190(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0588(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6202[0x4];                                     // 0x058C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0590(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6203[0x7];                                     // 0x05A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x05A8(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x05C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x05D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x05E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x05F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0600(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0610(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0620(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0621(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6204[0x6];                                     // 0x0622(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0628(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6205[0x3];                                     // 0x0631(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& InCharacterId, bool bInIsMe)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0634(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0644(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6206[0x3];                                     // 0x0645(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0648(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6207[0x7];                                     // 0x0651(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardBase_C*                   K2Node_DynamicCast_AsCharacter_Card_Base;          // 0x0658(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6208[0x3];                                     // 0x0661(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0664(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0668(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x066C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6209[0x3];                                     // 0x066D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0670(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_620A[0x4];                                     // 0x0674(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0678(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0680(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_620B[0x7];                                     // 0x0681(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardBase_C*                   K2Node_DynamicCast_AsCharacter_Card_Base_1;        // 0x0688(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0691(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0692(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0693(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0694(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_620C[0x3];                                     // 0x0695(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0698(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x069C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x069D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_620D[0x2];                                     // 0x069E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x06A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_620E[0x7];                                     // 0x06A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x06B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x06B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_620F[0x3];                                     // 0x06B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x06BC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6210[0x4];                                     // 0x06CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x06D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsAdventurerCardOpened_bOutIsOpened;   // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x06D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x06DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6211[0x5];                                     // 0x06DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetPartyMemberCharacterIds_OutCharacterIds; // 0x06E0(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_GetPartyMemberCharacterIds_OutCharacterIds_1; // 0x06F0(0x0010)(ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0701(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x0702(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_8;                // 0x0703(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_9;                // 0x0704(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_10;               // 0x0705(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0706(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList) == 0x000008, "Wrong alignment on CharacterCardList_C_ExecuteUbergraph_CharacterCardList");
static_assert(sizeof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList) == 0x000708, "Wrong size on CharacterCardList_C_ExecuteUbergraph_CharacterCardList");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, EntryPoint) == 0x000000, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::EntryPoint' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_Event_IsDesignTime) == 0x000011, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue) == 0x000012, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetChildrenCount_ReturnValue) == 0x000014, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CustomEvent_InCharacterId) == 0x000030, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CustomEvent_InCharacterId' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CustomEvent_bInIsMe) == 0x000040, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CustomEvent_bInIsMe' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_SwitchEnum_CmpSuccess) == 0x000041, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000042, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetGameInstance_ReturnValue) == 0x000048, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000068, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CustomEvent_bWasSuccessful_1) == 0x000071, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CustomEvent_RetCode_1) == 0x000074, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CustomEvent_PlayerCharacterCardDatas) == 0x000078, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CustomEvent_PlayerCharacterCardDatas' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetSBRetMessage_ReturnValue) == 0x000088, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000098, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Conv_IntToString_ReturnValue) == 0x0000B8, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Conv_BoolToString_ReturnValue) == 0x0000C8, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetCharacterId_ReturnValue) == 0x0000D8, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E8, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000F8, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000108, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000118, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetSBPlayerController_ReturnValue) == 0x000128, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_2) == 0x000130, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_3) == 0x000131, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, Temp_int_Variable) == 0x000134, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Create_ReturnValue) == 0x000138, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Add_IntInt_ReturnValue) == 0x000140, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000144, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_4) == 0x000154, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CreateDelegate_OutputDelegate_4) == 0x000158, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetUIManager_IsValid) == 0x000168, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetUIManager_ReturnValue) == 0x000170, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CreateDelegate_OutputDelegate_5) == 0x000178, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CustomEvent_bWasSuccessful) == 0x000188, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000190, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CustomEvent_RetCode) == 0x000588, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000590, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0005A0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0005A8, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0005C0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Conv_BoolToString_ReturnValue_1) == 0x0005D0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Conv_BoolToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0005E0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0005F0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000600, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CreateDelegate_OutputDelegate_6) == 0x000610, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_5) == 0x000620, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetUIManager_IsValid_1) == 0x000621, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetUIManager_ReturnValue_1) == 0x000628, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_SwitchEnum_CmpSuccess_1) == 0x000630, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CreateDelegate_OutputDelegate_7) == 0x000634, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_6) == 0x000644, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetChildAt_ReturnValue) == 0x000648, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_7) == 0x000650, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_DynamicCast_AsCharacter_Card_Base) == 0x000658, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_DynamicCast_AsCharacter_Card_Base' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_DynamicCast_bSuccess_1) == 0x000660, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000664, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000668, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00066C, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, Temp_int_Variable_1) == 0x000670, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetChildAt_ReturnValue_1) == 0x000678, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_8) == 0x000680, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_DynamicCast_AsCharacter_Card_Base_1) == 0x000688, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_DynamicCast_AsCharacter_Card_Base_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_DynamicCast_bSuccess_2) == 0x000690, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_9) == 0x000691, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000692, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue_1) == 0x000693, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000694, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000698, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue_2) == 0x00069C, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue_3) == 0x00069D, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetGameState_ReturnValue) == 0x0006A0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_10) == 0x0006A8, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x0006B0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_DynamicCast_bSuccess_3) == 0x0006B8, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, K2Node_CreateDelegate_OutputDelegate_8) == 0x0006BC, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetConcernedList_ReturnValue) == 0x0006D0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetIsAdventurerCardOpened_bOutIsOpened) == 0x0006D8, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetIsAdventurerCardOpened_bOutIsOpened' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_IsValid_ReturnValue_11) == 0x0006D9, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue_4) == 0x0006DA, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetPartyMemberCharacterIds_OutCharacterIds) == 0x0006E0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetPartyMemberCharacterIds_OutCharacterIds' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_GetPartyMemberCharacterIds_OutCharacterIds_1) == 0x0006F0, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_GetPartyMemberCharacterIds_OutCharacterIds_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue_5) == 0x000700, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue_6) == 0x000701, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue_7) == 0x000702, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue_8) == 0x000703, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue_9) == 0x000704, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_Not_PreBool_ReturnValue_10) == 0x000705, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_Not_PreBool_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_ExecuteUbergraph_CharacterCardList, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000706, "Member 'CharacterCardList_C_ExecuteUbergraph_CharacterCardList::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.OnIsGetPlayerProfileDetailMenuData
// 0x0408 (0x0408 - 0x0000)
struct CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6212[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData) == 0x000008, "Wrong alignment on CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData");
static_assert(sizeof(CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData) == 0x000408, "Wrong size on CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData");
static_assert(offsetof(CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData, bWasSuccessful) == 0x000000, "Member 'CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData, PlayerProfileDetailMenuData) == 0x000008, "Member 'CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData, RetCode) == 0x000400, "Member 'CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData::RetCode' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.OnGetCharacterCardInfoEvent
// 0x0018 (0x0018 - 0x0000)
struct CharacterCardList_C_OnGetCharacterCardInfoEvent final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6213[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerCharacterCardData>     PlayerCharacterCardDatas;                          // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CharacterCardList_C_OnGetCharacterCardInfoEvent) == 0x000008, "Wrong alignment on CharacterCardList_C_OnGetCharacterCardInfoEvent");
static_assert(sizeof(CharacterCardList_C_OnGetCharacterCardInfoEvent) == 0x000018, "Wrong size on CharacterCardList_C_OnGetCharacterCardInfoEvent");
static_assert(offsetof(CharacterCardList_C_OnGetCharacterCardInfoEvent, bWasSuccessful) == 0x000000, "Member 'CharacterCardList_C_OnGetCharacterCardInfoEvent::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_OnGetCharacterCardInfoEvent, RetCode) == 0x000004, "Member 'CharacterCardList_C_OnGetCharacterCardInfoEvent::RetCode' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_OnGetCharacterCardInfoEvent, PlayerCharacterCardDatas) == 0x000008, "Member 'CharacterCardList_C_OnGetCharacterCardInfoEvent::PlayerCharacterCardDatas' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.OnCharacterCardClickedEvent
// 0x0018 (0x0018 - 0x0000)
struct CharacterCardList_C_OnCharacterCardClickedEvent final
{
public:
	class FString                                 InCharacterId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bInIsMe;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_OnCharacterCardClickedEvent) == 0x000008, "Wrong alignment on CharacterCardList_C_OnCharacterCardClickedEvent");
static_assert(sizeof(CharacterCardList_C_OnCharacterCardClickedEvent) == 0x000018, "Wrong size on CharacterCardList_C_OnCharacterCardClickedEvent");
static_assert(offsetof(CharacterCardList_C_OnCharacterCardClickedEvent, InCharacterId) == 0x000000, "Member 'CharacterCardList_C_OnCharacterCardClickedEvent::InCharacterId' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_OnCharacterCardClickedEvent, bInIsMe) == 0x000010, "Member 'CharacterCardList_C_OnCharacterCardClickedEvent::bInIsMe' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CharacterCardList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_PreConstruct) == 0x000001, "Wrong alignment on CharacterCardList_C_PreConstruct");
static_assert(sizeof(CharacterCardList_C_PreConstruct) == 0x000001, "Wrong size on CharacterCardList_C_PreConstruct");
static_assert(offsetof(CharacterCardList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CharacterCardList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.Init
// 0x00B8 (0x00B8 - 0x0000)
struct CharacterCardList_C_Init final
{
public:
	TArray<class FString>                         InPartyMemberCharacterIds;                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bLocalIsStartImmediately;                          // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalCurrentParty;                                // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6214[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6215[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStartImmediately_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6216[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSingleParticipant_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6217[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6218[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6219[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_621A[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_621B[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_621C[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_621D[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardBase_C*                   K2Node_DynamicCast_AsCharacter_Card_Base;          // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_621E[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterCardList_C_Init) == 0x000008, "Wrong alignment on CharacterCardList_C_Init");
static_assert(sizeof(CharacterCardList_C_Init) == 0x0000B8, "Wrong size on CharacterCardList_C_Init");
static_assert(offsetof(CharacterCardList_C_Init, InPartyMemberCharacterIds) == 0x000000, "Member 'CharacterCardList_C_Init::InPartyMemberCharacterIds' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, bLocalIsStartImmediately) == 0x000010, "Member 'CharacterCardList_C_Init::bLocalIsStartImmediately' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, bLocalCurrentParty) == 0x000011, "Member 'CharacterCardList_C_Init::bLocalCurrentParty' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'CharacterCardList_C_Init::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'CharacterCardList_C_Init::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_IsStartImmediately_ReturnValue) == 0x000030, "Member 'CharacterCardList_C_Init::CallFunc_IsStartImmediately_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'CharacterCardList_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'CharacterCardList_C_Init::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000038, "Member 'CharacterCardList_C_Init::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'CharacterCardList_C_Init::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_IsSingleParticipant_ReturnValue) == 0x000041, "Member 'CharacterCardList_C_Init::CallFunc_IsSingleParticipant_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'CharacterCardList_C_Init::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_GetGameState_ReturnValue) == 0x000058, "Member 'CharacterCardList_C_Init::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'CharacterCardList_C_Init::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, K2Node_SwitchEnum_CmpSuccess) == 0x000061, "Member 'CharacterCardList_C_Init::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000068, "Member 'CharacterCardList_C_Init::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'CharacterCardList_C_Init::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, K2Node_SwitchEnum_CmpSuccess_1) == 0x000071, "Member 'CharacterCardList_C_Init::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, Temp_int_Variable) == 0x000074, "Member 'CharacterCardList_C_Init::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'CharacterCardList_C_Init::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_GetChildAt_ReturnValue) == 0x000080, "Member 'CharacterCardList_C_Init::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_GetChildrenCount_ReturnValue) == 0x000088, "Member 'CharacterCardList_C_Init::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_IsValid_ReturnValue_2) == 0x00008C, "Member 'CharacterCardList_C_Init::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_Subtract_IntInt_ReturnValue) == 0x000090, "Member 'CharacterCardList_C_Init::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000094, "Member 'CharacterCardList_C_Init::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, K2Node_DynamicCast_AsCharacter_Card_Base) == 0x000098, "Member 'CharacterCardList_C_Init::K2Node_DynamicCast_AsCharacter_Card_Base' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, K2Node_DynamicCast_bSuccess_2) == 0x0000A0, "Member 'CharacterCardList_C_Init::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_IsValid_ReturnValue_3) == 0x0000A1, "Member 'CharacterCardList_C_Init::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_Init, CallFunc_GetCharacterId_ReturnValue) == 0x0000A8, "Member 'CharacterCardList_C_Init::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.SetupCharacterCardData
// 0x00F8 (0x00F8 - 0x0000)
struct CharacterCardList_C_SetupCharacterCardData final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_621F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerCharacterCardData             InCharacterCardData;                               // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bInIsMe;                                           // 0x00B8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6220[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    InPartyMemberState;                                // 0x00C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInDoNewMemberJoinInAnimation;                     // 0x00C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6221[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalID;                                           // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6222[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6223[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterCardBase_C*                   K2Node_DynamicCast_AsCharacter_Card_Base;          // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_SetupCharacterCardData) == 0x000008, "Wrong alignment on CharacterCardList_C_SetupCharacterCardData");
static_assert(sizeof(CharacterCardList_C_SetupCharacterCardData) == 0x0000F8, "Wrong size on CharacterCardList_C_SetupCharacterCardData");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, InId) == 0x000000, "Member 'CharacterCardList_C_SetupCharacterCardData::InId' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, InCharacterCardData) == 0x000008, "Member 'CharacterCardList_C_SetupCharacterCardData::InCharacterCardData' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, bInIsMe) == 0x0000B8, "Member 'CharacterCardList_C_SetupCharacterCardData::bInIsMe' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, InPartyMemberState) == 0x0000C0, "Member 'CharacterCardList_C_SetupCharacterCardData::InPartyMemberState' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, bInDoNewMemberJoinInAnimation) == 0x0000C8, "Member 'CharacterCardList_C_SetupCharacterCardData::bInDoNewMemberJoinInAnimation' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, LocalID) == 0x0000CC, "Member 'CharacterCardList_C_SetupCharacterCardData::LocalID' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, CallFunc_Not_PreBool_ReturnValue) == 0x0000D0, "Member 'CharacterCardList_C_SetupCharacterCardData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, CallFunc_BooleanAND_ReturnValue) == 0x0000D1, "Member 'CharacterCardList_C_SetupCharacterCardData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, CallFunc_GetChildAt_ReturnValue) == 0x0000D8, "Member 'CharacterCardList_C_SetupCharacterCardData::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'CharacterCardList_C_SetupCharacterCardData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, CallFunc_IsValid_ReturnValue_1) == 0x0000E1, "Member 'CharacterCardList_C_SetupCharacterCardData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, CallFunc_GetChildrenCount_ReturnValue) == 0x0000E4, "Member 'CharacterCardList_C_SetupCharacterCardData::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, K2Node_DynamicCast_AsCharacter_Card_Base) == 0x0000E8, "Member 'CharacterCardList_C_SetupCharacterCardData::K2Node_DynamicCast_AsCharacter_Card_Base' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'CharacterCardList_C_SetupCharacterCardData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_SetupCharacterCardData, CallFunc_Less_IntInt_ReturnValue) == 0x0000F1, "Member 'CharacterCardList_C_SetupCharacterCardData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.RequestCharacterCardListUpdate
// 0x00B8 (0x00B8 - 0x0000)
struct CharacterCardList_C_RequestCharacterCardListUpdate final
{
public:
	TArray<class FString>                         InCharacterIds;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSBPlayerCharacterCardData>     LocalDirtyData;                                    // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         LocalCharacterIdsEmptyExcluded;                    // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         LocalCharacterIds;                                 // 0x0030(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6224[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestGetCharacterCardInfos_ReturnValue; // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6225[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6226[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6227[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6228[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6229[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 RetCode, TArray<struct FSBPlayerCharacterCardData>& PlayerCharacterCardDatas)> K2Node_CreateDelegate_OutputDelegate;              // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_622A[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_RequestCharacterCardListUpdate) == 0x000008, "Wrong alignment on CharacterCardList_C_RequestCharacterCardListUpdate");
static_assert(sizeof(CharacterCardList_C_RequestCharacterCardListUpdate) == 0x0000B8, "Wrong size on CharacterCardList_C_RequestCharacterCardListUpdate");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, InCharacterIds) == 0x000000, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::InCharacterIds' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, LocalDirtyData) == 0x000010, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::LocalDirtyData' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, LocalCharacterIdsEmptyExcluded) == 0x000020, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::LocalCharacterIdsEmptyExcluded' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, LocalCharacterIds) == 0x000030, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::LocalCharacterIds' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Greater_IntInt_ReturnValue) == 0x000044, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Not_PreBool_ReturnValue) == 0x000045, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, Temp_int_Array_Index_Variable) == 0x000048, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_RequestGetCharacterCardInfos_ReturnValue) == 0x00004C, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_RequestGetCharacterCardInfos_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Not_PreBool_ReturnValue_1) == 0x00004D, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Array_Get_Item) == 0x000050, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Array_Find_ReturnValue) == 0x000064, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_IsEmpty_ReturnValue) == 0x000068, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Less_IntInt_ReturnValue) == 0x000069, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Not_PreBool_ReturnValue_2) == 0x00006A, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Array_Length_ReturnValue_1) == 0x00006C, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Array_Length_ReturnValue_2) == 0x000070, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000074, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Less_IntInt_ReturnValue_1) == 0x00007C, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_GetSBPlayerController_ReturnValue) == 0x000088, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, K2Node_CreateDelegate_OutputDelegate) == 0x000090, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_GetConcernedList_ReturnValue) == 0x0000A8, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_RequestCharacterCardListUpdate, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'CharacterCardList_C_RequestCharacterCardListUpdate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.FindPartyMemberStateByCharacterId
// 0x00A8 (0x00A8 - 0x0000)
struct CharacterCardList_C_FindPartyMemberStateByCharacterId final
{
public:
	class FString                                 InCharacterId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            InPartyMemberStateList;                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class USBPartyMemberState*                    OutPartyMemberState;                               // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberState*                    LocalOutPartyMemberState;                          // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            LocalPartyMemberStateList;                         // 0x0030(0x0010)(Edit, BlueprintVisible)
	class FString                                 LocalCharacterId;                                  // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_622B[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameMap_ReturnValue;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_622C[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_622D[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_622E[0x1];                                     // 0x0097(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_622F[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_FindPartyMemberStateByCharacterId) == 0x000008, "Wrong alignment on CharacterCardList_C_FindPartyMemberStateByCharacterId");
static_assert(sizeof(CharacterCardList_C_FindPartyMemberStateByCharacterId) == 0x0000A8, "Wrong size on CharacterCardList_C_FindPartyMemberStateByCharacterId");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, InCharacterId) == 0x000000, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::InCharacterId' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, InPartyMemberStateList) == 0x000010, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::InPartyMemberStateList' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, OutPartyMemberState) == 0x000020, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::OutPartyMemberState' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, LocalOutPartyMemberState) == 0x000028, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::LocalOutPartyMemberState' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, LocalPartyMemberStateList) == 0x000030, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::LocalPartyMemberStateList' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, LocalCharacterId) == 0x000040, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::LocalCharacterId' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, Temp_int_Array_Index_Variable) == 0x000050, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_GetCharacterId_self_CastInput) == 0x000058, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_GetCharacterId_ReturnValue) == 0x000068, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_IsSameMap_ReturnValue) == 0x000078, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_IsSameMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_Array_Get_Item) == 0x000080, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_IsValid_ReturnValue) == 0x00008C, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_Array_Length_ReturnValue_1) == 0x000090, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_IsEmpty_ReturnValue) == 0x000094, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_Greater_IntInt_ReturnValue) == 0x000095, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_Not_PreBool_ReturnValue) == 0x000096, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, Temp_int_Loop_Counter_Variable) == 0x000098, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_BooleanAND_ReturnValue) == 0x00009C, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_Less_IntInt_ReturnValue) == 0x00009D, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_Add_IntInt_ReturnValue) == 0x0000A0, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_FindPartyMemberStateByCharacterId, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A4, "Member 'CharacterCardList_C_FindPartyMemberStateByCharacterId::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.GetIsAdventurerCardOpened
// 0x0001 (0x0001 - 0x0000)
struct CharacterCardList_C_GetIsAdventurerCardOpened final
{
public:
	bool                                          bOutIsOpened;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_GetIsAdventurerCardOpened) == 0x000001, "Wrong alignment on CharacterCardList_C_GetIsAdventurerCardOpened");
static_assert(sizeof(CharacterCardList_C_GetIsAdventurerCardOpened) == 0x000001, "Wrong size on CharacterCardList_C_GetIsAdventurerCardOpened");
static_assert(offsetof(CharacterCardList_C_GetIsAdventurerCardOpened, bOutIsOpened) == 0x000000, "Member 'CharacterCardList_C_GetIsAdventurerCardOpened::bOutIsOpened' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.StartCharacterCardNewPartyMemberInAnimation
// 0x0010 (0x0010 - 0x0000)
struct CharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation final
{
public:
	class UCharacterCardBase_C*                   InCharacterCard;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation) == 0x000008, "Wrong alignment on CharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation");
static_assert(sizeof(CharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation) == 0x000010, "Wrong size on CharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation");
static_assert(offsetof(CharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation, InCharacterCard) == 0x000000, "Member 'CharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation::InCharacterCard' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'CharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.InitForDebug
// 0x0090 (0x0090 - 0x0000)
struct CharacterCardList_C_InitForDebug final
{
public:
	TArray<struct FSBPlayerCharacterCardData>     LocalDatas;                                        // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 RetCode, TArray<struct FSBPlayerCharacterCardData>& PlayerCharacterCardDatas)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6230[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6231[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestGetCharacterCardInfos_ReturnValue; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6232[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6233[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6234[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardBase_C*                   K2Node_DynamicCast_AsCharacter_Card_Base;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_InitForDebug) == 0x000008, "Wrong alignment on CharacterCardList_C_InitForDebug");
static_assert(sizeof(CharacterCardList_C_InitForDebug) == 0x000090, "Wrong size on CharacterCardList_C_InitForDebug");
static_assert(offsetof(CharacterCardList_C_InitForDebug, LocalDatas) == 0x000000, "Member 'CharacterCardList_C_InitForDebug::LocalDatas' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, K2Node_MakeArray_Array) == 0x000010, "Member 'CharacterCardList_C_InitForDebug::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_GetCharacterId_ReturnValue) == 0x000020, "Member 'CharacterCardList_C_InitForDebug::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_GetSBPlayerController_ReturnValue) == 0x000030, "Member 'CharacterCardList_C_InitForDebug::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'CharacterCardList_C_InitForDebug::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'CharacterCardList_C_InitForDebug::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_GetConcernedList_ReturnValue) == 0x000050, "Member 'CharacterCardList_C_InitForDebug::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'CharacterCardList_C_InitForDebug::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, Temp_int_Variable) == 0x00005C, "Member 'CharacterCardList_C_InitForDebug::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_RequestGetCharacterCardInfos_ReturnValue) == 0x000060, "Member 'CharacterCardList_C_InitForDebug::CallFunc_RequestGetCharacterCardInfos_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_Not_PreBool_ReturnValue) == 0x000061, "Member 'CharacterCardList_C_InitForDebug::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'CharacterCardList_C_InitForDebug::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_GetChildAt_ReturnValue) == 0x000068, "Member 'CharacterCardList_C_InitForDebug::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_GetChildrenCount_ReturnValue) == 0x000070, "Member 'CharacterCardList_C_InitForDebug::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_IsValid_ReturnValue_2) == 0x000074, "Member 'CharacterCardList_C_InitForDebug::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_Subtract_IntInt_ReturnValue) == 0x000078, "Member 'CharacterCardList_C_InitForDebug::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00007C, "Member 'CharacterCardList_C_InitForDebug::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, K2Node_DynamicCast_AsCharacter_Card_Base) == 0x000080, "Member 'CharacterCardList_C_InitForDebug::K2Node_DynamicCast_AsCharacter_Card_Base' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'CharacterCardList_C_InitForDebug::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_InitForDebug, CallFunc_IsValid_ReturnValue_3) == 0x000089, "Member 'CharacterCardList_C_InitForDebug::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.UnbindOnGetCharacterCardInfosDelegate
// 0x0030 (0x0030 - 0x0000)
struct CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate final
{
public:
	TDelegate<void(bool bWasSuccessful, int32 RetCode, TArray<struct FSBPlayerCharacterCardData>& PlayerCharacterCardDatas)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6235[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate) == 0x000008, "Wrong alignment on CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate");
static_assert(sizeof(CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate) == 0x000030, "Wrong size on CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate");
static_assert(offsetof(CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate, CallFunc_GetSBPlayerController_ReturnValue) == 0x000010, "Member 'CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate, CallFunc_GetConcernedList_ReturnValue) == 0x000020, "Member 'CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'CharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function CharacterCardList.CharacterCardList_C.UpdateCharacterCardList
// 0x0220 (0x0220 - 0x0000)
struct CharacterCardList_C_UpdateCharacterCardList final
{
public:
	TArray<struct FSBPlayerCharacterCardData>     InListData;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          InNoNewMemberJoinInAnimation;                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6236[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            LocalPartyMemberStateList;                         // 0x0018(0x0010)(Edit, BlueprintVisible)
	class FString                                 LocalCharacterId;                                  // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlayerCharacterCardData             LocalCardData;                                     // 0x0038(0x00B0)(Edit, BlueprintVisible)
	class UCharacterCardBase_C*                   LocalCharacterCardBase;                            // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalID;                                           // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalNoNewMemberJoinInAnimation;                   // 0x00F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6237[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerCharacterCardData>     LocalLiistData;                                    // 0x00F8(0x0010)(Edit, BlueprintVisible)
	TArray<class USBPartyMemberState*>            CallFunc_GetCurrentPartyMember_OutPartyMembers;    // 0x0108(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetCurrentPartyMember_ReturnValue;        // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6238[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_FindPartyMemberStateByCharacterId_OutPartyMemberState; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x012B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6239[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerCharacterCardData             CallFunc_Array_Get_Item;                           // 0x0130(0x00B0)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_623A[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_623B[0x6];                                     // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterCardBase_C*                   K2Node_DynamicCast_AsCharacter_Card_Base;          // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_623C[0x2];                                     // 0x020A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_623D[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCardList_C_UpdateCharacterCardList) == 0x000008, "Wrong alignment on CharacterCardList_C_UpdateCharacterCardList");
static_assert(sizeof(CharacterCardList_C_UpdateCharacterCardList) == 0x000220, "Wrong size on CharacterCardList_C_UpdateCharacterCardList");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, InListData) == 0x000000, "Member 'CharacterCardList_C_UpdateCharacterCardList::InListData' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, InNoNewMemberJoinInAnimation) == 0x000010, "Member 'CharacterCardList_C_UpdateCharacterCardList::InNoNewMemberJoinInAnimation' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, LocalPartyMemberStateList) == 0x000018, "Member 'CharacterCardList_C_UpdateCharacterCardList::LocalPartyMemberStateList' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, LocalCharacterId) == 0x000028, "Member 'CharacterCardList_C_UpdateCharacterCardList::LocalCharacterId' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, LocalCardData) == 0x000038, "Member 'CharacterCardList_C_UpdateCharacterCardList::LocalCardData' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, LocalCharacterCardBase) == 0x0000E8, "Member 'CharacterCardList_C_UpdateCharacterCardList::LocalCharacterCardBase' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, LocalID) == 0x0000F0, "Member 'CharacterCardList_C_UpdateCharacterCardList::LocalID' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, LocalNoNewMemberJoinInAnimation) == 0x0000F4, "Member 'CharacterCardList_C_UpdateCharacterCardList::LocalNoNewMemberJoinInAnimation' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, LocalLiistData) == 0x0000F8, "Member 'CharacterCardList_C_UpdateCharacterCardList::LocalLiistData' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_GetCurrentPartyMember_OutPartyMembers) == 0x000108, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_GetCurrentPartyMember_OutPartyMembers' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_GetCurrentPartyMember_ReturnValue) == 0x000118, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_GetCurrentPartyMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_FindPartyMemberStateByCharacterId_OutPartyMemberState) == 0x000120, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_FindPartyMemberStateByCharacterId_OutPartyMemberState' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000128, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_Not_PreBool_ReturnValue) == 0x000129, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00012A, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_IsEmpty_ReturnValue) == 0x00012B, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_Array_Get_Item) == 0x000130, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_Array_Length_ReturnValue) == 0x0001E0, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, Temp_int_Variable) == 0x0001E4, "Member 'CharacterCardList_C_UpdateCharacterCardList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_Less_IntInt_ReturnValue) == 0x0001E8, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_Add_IntInt_ReturnValue) == 0x0001EC, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_IsEmpty_ReturnValue_1) == 0x0001F0, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001F1, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_GetChildAt_ReturnValue) == 0x0001F8, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, K2Node_DynamicCast_AsCharacter_Card_Base) == 0x000200, "Member 'CharacterCardList_C_UpdateCharacterCardList::K2Node_DynamicCast_AsCharacter_Card_Base' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, K2Node_DynamicCast_bSuccess) == 0x000208, "Member 'CharacterCardList_C_UpdateCharacterCardList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_IsValid_ReturnValue) == 0x000209, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_GetChildrenCount_ReturnValue) == 0x00020C, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_IsValid_ReturnValue_1) == 0x000210, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000214, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCardList_C_UpdateCharacterCardList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000218, "Member 'CharacterCardList_C_UpdateCharacterCardList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

