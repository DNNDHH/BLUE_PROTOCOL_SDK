#pragma once

 

// Package: ApplyButtonList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ApplyButtonList.ApplyButtonList_C.OnClickedHelpMatching__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct ApplyButtonList_C_OnClickedHelpMatching__DelegateSignature final
{
public:
	class FString                                 MapId;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ModeId;                                            // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ApplyButtonList_C_OnClickedHelpMatching__DelegateSignature) == 0x000008, "Wrong alignment on ApplyButtonList_C_OnClickedHelpMatching__DelegateSignature");
static_assert(sizeof(ApplyButtonList_C_OnClickedHelpMatching__DelegateSignature) == 0x000018, "Wrong size on ApplyButtonList_C_OnClickedHelpMatching__DelegateSignature");
static_assert(offsetof(ApplyButtonList_C_OnClickedHelpMatching__DelegateSignature, MapId) == 0x000000, "Member 'ApplyButtonList_C_OnClickedHelpMatching__DelegateSignature::MapId' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_OnClickedHelpMatching__DelegateSignature, ModeId) == 0x000010, "Member 'ApplyButtonList_C_OnClickedHelpMatching__DelegateSignature::ModeId' has a wrong offset!");

// Function ApplyButtonList.ApplyButtonList_C.ExecuteUbergraph_ApplyButtonList
// 0x00B0 (0x00B0 - 0x0000)
struct ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_747D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_747E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_747F[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBHelpMatchingComponent*               CallFunc_GetHelpMatchingComponent_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0051(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7480[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0054(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_GameContentId;                  // 0x0058(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0068(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7481[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7482[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, int32 RetCode, class FString& GameContentId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList) == 0x000008, "Wrong alignment on ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList");
static_assert(sizeof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList) == 0x0000B0, "Wrong size on ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, EntryPoint) == 0x000000, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::EntryPoint' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000020, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x000030, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, CallFunc_GetSBPlayerController_ReturnValue) == 0x000040, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, CallFunc_GetHelpMatchingComponent_ReturnValue) == 0x000048, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::CallFunc_GetHelpMatchingComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000050, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, K2Node_CustomEvent_bWasSuccessful) == 0x000051, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, K2Node_CustomEvent_RetCode) == 0x000054, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, K2Node_CustomEvent_GameContentId) == 0x000058, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::K2Node_CustomEvent_GameContentId' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, CallFunc_GetSBRetMessage_ReturnValue) == 0x000068, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000078, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000098, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, CallFunc_BooleanAND_ReturnValue) == 0x000099, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList, K2Node_CreateDelegate_OutputDelegate_1) == 0x00009C, "Member 'ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function ApplyButtonList.ApplyButtonList_C.OnIsHelpMatchingMode_Event
// 0x0018 (0x0018 - 0x0000)
struct ApplyButtonList_C_OnIsHelpMatchingMode_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7483[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 GameContentId;                                     // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ApplyButtonList_C_OnIsHelpMatchingMode_Event) == 0x000008, "Wrong alignment on ApplyButtonList_C_OnIsHelpMatchingMode_Event");
static_assert(sizeof(ApplyButtonList_C_OnIsHelpMatchingMode_Event) == 0x000018, "Wrong size on ApplyButtonList_C_OnIsHelpMatchingMode_Event");
static_assert(offsetof(ApplyButtonList_C_OnIsHelpMatchingMode_Event, bWasSuccessful) == 0x000000, "Member 'ApplyButtonList_C_OnIsHelpMatchingMode_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_OnIsHelpMatchingMode_Event, RetCode) == 0x000004, "Member 'ApplyButtonList_C_OnIsHelpMatchingMode_Event::RetCode' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_OnIsHelpMatchingMode_Event, GameContentId) == 0x000008, "Member 'ApplyButtonList_C_OnIsHelpMatchingMode_Event::GameContentId' has a wrong offset!");

// Function ApplyButtonList.ApplyButtonList_C.Setup
// 0x01E8 (0x01E8 - 0x0000)
struct ApplyButtonList_C_Setup final
{
public:
	bool                                          IsCommandMenu;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7484[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             MapInfo;                                           // 0x0008(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ApplyButtonList_C_Setup) == 0x000008, "Wrong alignment on ApplyButtonList_C_Setup");
static_assert(sizeof(ApplyButtonList_C_Setup) == 0x0001E8, "Wrong size on ApplyButtonList_C_Setup");
static_assert(offsetof(ApplyButtonList_C_Setup, IsCommandMenu) == 0x000000, "Member 'ApplyButtonList_C_Setup::IsCommandMenu' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_Setup, MapInfo) == 0x000008, "Member 'ApplyButtonList_C_Setup::MapInfo' has a wrong offset!");

// Function ApplyButtonList.ApplyButtonList_C.SetupText
// 0x0210 (0x0210 - 0x0000)
struct ApplyButtonList_C_SetupText final
{
public:
	struct FSBMapInfo                             MapInfo;                                           // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         TextId;                                            // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7485[0x2];                                     // 0x01E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7486[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetAllPartyMembers_PartyMembers;          // 0x01F8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ApplyButtonList_C_SetupText) == 0x000008, "Wrong alignment on ApplyButtonList_C_SetupText");
static_assert(sizeof(ApplyButtonList_C_SetupText) == 0x000210, "Wrong size on ApplyButtonList_C_SetupText");
static_assert(offsetof(ApplyButtonList_C_SetupText, MapInfo) == 0x000000, "Member 'ApplyButtonList_C_SetupText::MapInfo' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupText, TextId) == 0x0001E0, "Member 'ApplyButtonList_C_SetupText::TextId' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001E4, "Member 'ApplyButtonList_C_SetupText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupText, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001E5, "Member 'ApplyButtonList_C_SetupText::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupText, CallFunc_GetCurrentParty_OutPartyState) == 0x0001E8, "Member 'ApplyButtonList_C_SetupText::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupText, CallFunc_GetCurrentParty_ReturnValue) == 0x0001F0, "Member 'ApplyButtonList_C_SetupText::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupText, CallFunc_GetAllPartyMembers_PartyMembers) == 0x0001F8, "Member 'ApplyButtonList_C_SetupText::CallFunc_GetAllPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupText, CallFunc_Array_Length_ReturnValue) == 0x000208, "Member 'ApplyButtonList_C_SetupText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupText, CallFunc_Greater_IntInt_ReturnValue) == 0x00020C, "Member 'ApplyButtonList_C_SetupText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function ApplyButtonList.ApplyButtonList_C.SetupVisibility
// 0x01F8 (0x01F8 - 0x0000)
struct ApplyButtonList_C_SetupVisibility final
{
public:
	bool                                          IsCommandMenu;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7487[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             MapInfo;                                           // 0x0008(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESlateVisibility                              InVisibility;                                      // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x01ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x01EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ApplyButtonList_C_SetupVisibility) == 0x000008, "Wrong alignment on ApplyButtonList_C_SetupVisibility");
static_assert(sizeof(ApplyButtonList_C_SetupVisibility) == 0x0001F8, "Wrong size on ApplyButtonList_C_SetupVisibility");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, IsCommandMenu) == 0x000000, "Member 'ApplyButtonList_C_SetupVisibility::IsCommandMenu' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, MapInfo) == 0x000008, "Member 'ApplyButtonList_C_SetupVisibility::MapInfo' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, InVisibility) == 0x0001E8, "Member 'ApplyButtonList_C_SetupVisibility::InVisibility' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, Temp_bool_Variable) == 0x0001E9, "Member 'ApplyButtonList_C_SetupVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001EA, "Member 'ApplyButtonList_C_SetupVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001EB, "Member 'ApplyButtonList_C_SetupVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0001EC, "Member 'ApplyButtonList_C_SetupVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0001ED, "Member 'ApplyButtonList_C_SetupVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0001EE, "Member 'ApplyButtonList_C_SetupVisibility::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, Temp_byte_Variable) == 0x0001EF, "Member 'ApplyButtonList_C_SetupVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, Temp_byte_Variable_1) == 0x0001F0, "Member 'ApplyButtonList_C_SetupVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupVisibility, K2Node_Select_Default) == 0x0001F1, "Member 'ApplyButtonList_C_SetupVisibility::K2Node_Select_Default' has a wrong offset!");

// Function ApplyButtonList.ApplyButtonList_C.SetupIsEnabled
// 0x0218 (0x0218 - 0x0000)
struct ApplyButtonList_C_SetupIsEnabled final
{
public:
	struct FSBMapInfo                             MapInfo;                                           // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsEnabled;                                         // 0x01E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsParty;                                           // 0x01E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetErrorText2_CanApply;                   // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetErrorText_CanApply;                    // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7488[0x3];                                     // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7489[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetAllPartyMembers_PartyMembers;          // 0x0200(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ApplyButtonList_C_SetupIsEnabled) == 0x000008, "Wrong alignment on ApplyButtonList_C_SetupIsEnabled");
static_assert(sizeof(ApplyButtonList_C_SetupIsEnabled) == 0x000218, "Wrong size on ApplyButtonList_C_SetupIsEnabled");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, MapInfo) == 0x000000, "Member 'ApplyButtonList_C_SetupIsEnabled::MapInfo' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, IsEnabled) == 0x0001E0, "Member 'ApplyButtonList_C_SetupIsEnabled::IsEnabled' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, IsParty) == 0x0001E1, "Member 'ApplyButtonList_C_SetupIsEnabled::IsParty' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, Temp_byte_Variable) == 0x0001E2, "Member 'ApplyButtonList_C_SetupIsEnabled::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_Greater_IntInt_ReturnValue) == 0x0001E3, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001E4, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_Not_PreBool_ReturnValue) == 0x0001E5, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001E6, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, Temp_byte_Variable_1) == 0x0001E7, "Member 'ApplyButtonList_C_SetupIsEnabled::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_SetErrorText2_CanApply) == 0x0001E8, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_SetErrorText2_CanApply' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, Temp_bool_Variable) == 0x0001E9, "Member 'ApplyButtonList_C_SetupIsEnabled::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_SetErrorText_CanApply) == 0x0001EA, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_SetErrorText_CanApply' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, K2Node_Select_Default) == 0x0001EB, "Member 'ApplyButtonList_C_SetupIsEnabled::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001EC, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_GetCurrentParty_OutPartyState) == 0x0001F0, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_GetCurrentParty_ReturnValue) == 0x0001F8, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_GetAllPartyMembers_PartyMembers) == 0x000200, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_GetAllPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_Array_Length_ReturnValue) == 0x000210, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetupIsEnabled, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000214, "Member 'ApplyButtonList_C_SetupIsEnabled::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

// Function ApplyButtonList.ApplyButtonList_C.SetErrorText
// 0x03F0 (0x03F0 - 0x0000)
struct ApplyButtonList_C_SetErrorText final
{
public:
	struct FSBMapInfo                             SelectedMapInfo;                                   // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CanApply;                                          // 0x01E0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_748A[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             LocalSelectedMapInfo;                              // 0x01E8(0x01E0)(Edit, BlueprintVisible)
	int32                                         TextIndex;                                         // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEquipItemOr_ReturnValue;             // 0x03CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_748B[0x3];                                     // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x03D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x03D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableDungeonMemberNum_IsEnable;        // 0x03D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_748C[0x1];                                     // 0x03D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPartyMinLevel_NewParam;                // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x03DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x03DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_748D[0x2];                                     // 0x03DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x03E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_748E[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPartyMinTotalPower_Result;             // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSendingParty_Ret;                       // 0x03EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x03ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPartyLeader_ReturnValue;                // 0x03EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x03EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ApplyButtonList_C_SetErrorText) == 0x000008, "Wrong alignment on ApplyButtonList_C_SetErrorText");
static_assert(sizeof(ApplyButtonList_C_SetErrorText) == 0x0003F0, "Wrong size on ApplyButtonList_C_SetErrorText");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, SelectedMapInfo) == 0x000000, "Member 'ApplyButtonList_C_SetErrorText::SelectedMapInfo' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CanApply) == 0x0001E0, "Member 'ApplyButtonList_C_SetErrorText::CanApply' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, LocalSelectedMapInfo) == 0x0001E8, "Member 'ApplyButtonList_C_SetErrorText::LocalSelectedMapInfo' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, TextIndex) == 0x0003C8, "Member 'ApplyButtonList_C_SetErrorText::TextIndex' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_CheckEquipItemOr_ReturnValue) == 0x0003CC, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_CheckEquipItemOr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_GetTotalPower_ReturnValue) == 0x0003D0, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_Not_PreBool_ReturnValue) == 0x0003D4, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_Greater_IntInt_ReturnValue) == 0x0003D5, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_IsEnableDungeonMemberNum_IsEnable) == 0x0003D6, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_IsEnableDungeonMemberNum_IsEnable' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_GetPartyMinLevel_NewParam) == 0x0003D8, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_GetPartyMinLevel_NewParam' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_Not_PreBool_ReturnValue_1) == 0x0003DC, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0003DD, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_GetAdventurerRank_ReturnValue) == 0x0003E0, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0003E4, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_GetPartyMinTotalPower_Result) == 0x0003E8, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_GetPartyMinTotalPower_Result' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_IsSendingParty_Ret) == 0x0003EC, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_IsSendingParty_Ret' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_Greater_IntInt_ReturnValue_3) == 0x0003ED, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_IsPartyLeader_ReturnValue) == 0x0003EE, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_IsPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText, CallFunc_Not_PreBool_ReturnValue_2) == 0x0003EF, "Member 'ApplyButtonList_C_SetErrorText::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");

// Function ApplyButtonList.ApplyButtonList_C.SetErrorText2
// 0x03E0 (0x03E0 - 0x0000)
struct ApplyButtonList_C_SetErrorText2 final
{
public:
	struct FSBMapInfo                             SelectedMapInfo;                                   // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsParty;                                           // 0x01E0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CanApply;                                          // 0x01E1(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_748F[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             LocalSelectedMapInfo;                              // 0x01E8(0x01E0)(Edit, BlueprintVisible)
	int32                                         TextIndex;                                         // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x03CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7490[0x3];                                     // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPartyMinTotalPower_Result;             // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPartyMinLevel_NewParam;                // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x03D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ApplyButtonList_C_SetErrorText2) == 0x000008, "Wrong alignment on ApplyButtonList_C_SetErrorText2");
static_assert(sizeof(ApplyButtonList_C_SetErrorText2) == 0x0003E0, "Wrong size on ApplyButtonList_C_SetErrorText2");
static_assert(offsetof(ApplyButtonList_C_SetErrorText2, SelectedMapInfo) == 0x000000, "Member 'ApplyButtonList_C_SetErrorText2::SelectedMapInfo' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText2, IsParty) == 0x0001E0, "Member 'ApplyButtonList_C_SetErrorText2::IsParty' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText2, CanApply) == 0x0001E1, "Member 'ApplyButtonList_C_SetErrorText2::CanApply' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText2, LocalSelectedMapInfo) == 0x0001E8, "Member 'ApplyButtonList_C_SetErrorText2::LocalSelectedMapInfo' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText2, TextIndex) == 0x0003C8, "Member 'ApplyButtonList_C_SetErrorText2::TextIndex' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText2, CallFunc_Greater_IntInt_ReturnValue) == 0x0003CC, "Member 'ApplyButtonList_C_SetErrorText2::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText2, CallFunc_GetPartyMinTotalPower_Result) == 0x0003D0, "Member 'ApplyButtonList_C_SetErrorText2::CallFunc_GetPartyMinTotalPower_Result' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText2, CallFunc_GetPartyMinLevel_NewParam) == 0x0003D4, "Member 'ApplyButtonList_C_SetErrorText2::CallFunc_GetPartyMinLevel_NewParam' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText2, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0003D8, "Member 'ApplyButtonList_C_SetErrorText2::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ApplyButtonList_C_SetErrorText2, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0003D9, "Member 'ApplyButtonList_C_SetErrorText2::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");

}

