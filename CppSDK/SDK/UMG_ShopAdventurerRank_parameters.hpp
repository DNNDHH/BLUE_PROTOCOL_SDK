#pragma once

 

// Package: UMG_ShopAdventurerRank

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.ExecuteUbergraph_UMG_ShopAdventurerRank
// 0x0580 (0x0580 - 0x0000)
struct UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A4A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InVisibility;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A4B[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   CallFunc_GetGameContentId_OutGameContentId;        // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_MatchingMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7A4C[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MatchingMenu_C*                    K2Node_CustomEvent_Sender;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_C*                    CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A4D[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A4E[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, int32 IRetCode)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnCancelMatchmaking_Result;               // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBMapInfo                             CallFunc_GetDungeonMapInfo_MapInfo;                // 0x0078(0x01E0)()
	bool                                          CallFunc_GetDungeonMapInfo_ReturnValue;            // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A4F[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMapInfo>                     K2Node_MakeArray_Array;                            // 0x0260(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PreloadMapByLevelName_ReturnValue;        // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A50[0x2];                                     // 0x027A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetGameContentId_OutGameContentId_1;      // 0x0284(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A51[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetDungeonMapInfo_MapInfo_1;              // 0x0290(0x01E0)()
	bool                                          CallFunc_GetDungeonMapInfo_ReturnValue_1;          // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRecruitParty_IsEnable;                  // 0x0471(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0472(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A52[0x5];                                     // 0x0473(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A53[0x3];                                     // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool InVisibility)>            K2Node_CreateDelegate_OutputDelegate_3;            // 0x0484(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7A54[0x4];                                     // 0x0494(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_1;          // 0x0498(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_1;            // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRecruitParty_IsEnable_1;                // 0x04A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A55[0x6];                                     // 0x04A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x04B8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A56[0x7];                                     // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x04C0(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A57[0x7];                                     // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x04E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A58[0x7];                                     // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A59[0x7];                                     // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyRecruitComponent*               CallFunc_GetPartyRecruitComponent_ReturnValue;     // 0x0508(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0510(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_4;            // 0x0520(0x0010)(ZeroConstructor, NoDestructor)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0530(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0538(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A5A[0x3];                                     // 0x0539(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_iRetCode;                       // 0x053C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0540(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A5B[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0558(0x0018)()
	class UUMG_MatchingMenu_C*                    CallFunc_Create_ReturnValue_1;                     // 0x0570(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnStartMatchmaking_Result;                // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank) == 0x000008, "Wrong alignment on UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank");
static_assert(sizeof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank) == 0x000580, "Wrong size on UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, EntryPoint) == 0x000000, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_BooleanOR_ReturnValue) == 0x000010, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_CustomEvent_InVisibility) == 0x000011, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_CustomEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetGameContentId_OutGameContentId) == 0x000024, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetGameContentId_OutGameContentId' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_CustomEvent_Sender) == 0x000040, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_Create_ReturnValue) == 0x000048, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000050, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000058, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_CreateDelegate_OutputDelegate_2) == 0x000064, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_IsValid_ReturnValue_1) == 0x000074, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_OnCancelMatchmaking_Result) == 0x000075, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_OnCancelMatchmaking_Result' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_Not_PreBool_ReturnValue) == 0x000076, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_BooleanAND_ReturnValue) == 0x000077, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetDungeonMapInfo_MapInfo) == 0x000078, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetDungeonMapInfo_MapInfo' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetDungeonMapInfo_ReturnValue) == 0x000258, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetDungeonMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_MakeArray_Array) == 0x000260, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_Conv_StringToName_ReturnValue) == 0x000270, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_PreloadMapByLevelName_ReturnValue) == 0x000278, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_PreloadMapByLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_IsValid_ReturnValue_2) == 0x000279, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_PostAkEvent_ReturnValue) == 0x00027C, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_PostAkEvent_ReturnValue_1) == 0x000280, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetGameContentId_OutGameContentId_1) == 0x000284, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetGameContentId_OutGameContentId_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetDungeonMapInfo_MapInfo_1) == 0x000290, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetDungeonMapInfo_MapInfo_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetDungeonMapInfo_ReturnValue_1) == 0x000470, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetDungeonMapInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_IsRecruitParty_IsEnable) == 0x000471, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_IsRecruitParty_IsEnable' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_SwitchEnum_CmpSuccess) == 0x000472, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetCurrentParty_OutPartyState) == 0x000478, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetCurrentParty_ReturnValue) == 0x000480, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_CreateDelegate_OutputDelegate_3) == 0x000484, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetCurrentParty_OutPartyState_1) == 0x000498, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetCurrentParty_OutPartyState_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetCurrentParty_ReturnValue_1) == 0x0004A0, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetCurrentParty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_IsRecruitParty_IsEnable_1) == 0x0004A1, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_IsRecruitParty_IsEnable_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0004A8, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_CustomEvent_Result) == 0x0004B8, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_Conv_StringToText_ReturnValue) == 0x0004C0, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0004D8, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetOwningPlayer_ReturnValue) == 0x0004E0, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0004E8, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_DynamicCast_bSuccess) == 0x0004F0, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_DynamicCast_AsSBPlayer_State) == 0x0004F8, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_DynamicCast_bSuccess_1) == 0x000500, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetPartyRecruitComponent_ReturnValue) == 0x000508, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetPartyRecruitComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetCharacterId_ReturnValue) == 0x000510, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_CreateDelegate_OutputDelegate_4) == 0x000520, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000530, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_CustomEvent_bWasSuccessful) == 0x000538, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, K2Node_CustomEvent_iRetCode) == 0x00053C, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::K2Node_CustomEvent_iRetCode' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_GetSBRetMessage_ReturnValue) == 0x000540, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000550, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000558, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_Create_ReturnValue_1) == 0x000570, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank, CallFunc_OnStartMatchmaking_Result) == 0x000578, "Member 'UMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank::CallFunc_OnStartMatchmaking_Result' has a wrong offset!");

// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnCancelRecruit
// 0x0008 (0x0008 - 0x0000)
struct UMG_ShopAdventurerRank_C_OnCancelRecruit final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A5C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IRetCode;                                          // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ShopAdventurerRank_C_OnCancelRecruit) == 0x000004, "Wrong alignment on UMG_ShopAdventurerRank_C_OnCancelRecruit");
static_assert(sizeof(UMG_ShopAdventurerRank_C_OnCancelRecruit) == 0x000008, "Wrong size on UMG_ShopAdventurerRank_C_OnCancelRecruit");
static_assert(offsetof(UMG_ShopAdventurerRank_C_OnCancelRecruit, bWasSuccessful) == 0x000000, "Member 'UMG_ShopAdventurerRank_C_OnCancelRecruit::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_C_OnCancelRecruit, IRetCode) == 0x000004, "Member 'UMG_ShopAdventurerRank_C_OnCancelRecruit::IRetCode' has a wrong offset!");

// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.PartyRecruitCancel_YesNoDialog
// 0x0001 (0x0001 - 0x0000)
struct UMG_ShopAdventurerRank_C_PartyRecruitCancel_YesNoDialog final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ShopAdventurerRank_C_PartyRecruitCancel_YesNoDialog) == 0x000001, "Wrong alignment on UMG_ShopAdventurerRank_C_PartyRecruitCancel_YesNoDialog");
static_assert(sizeof(UMG_ShopAdventurerRank_C_PartyRecruitCancel_YesNoDialog) == 0x000001, "Wrong size on UMG_ShopAdventurerRank_C_PartyRecruitCancel_YesNoDialog");
static_assert(offsetof(UMG_ShopAdventurerRank_C_PartyRecruitCancel_YesNoDialog, Result) == 0x000000, "Member 'UMG_ShopAdventurerRank_C_PartyRecruitCancel_YesNoDialog::Result' has a wrong offset!");

// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnClose_Event_2
// 0x0008 (0x0008 - 0x0000)
struct UMG_ShopAdventurerRank_C_OnClose_Event_2 final
{
public:
	class UUMG_MatchingMenu_C*                    Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ShopAdventurerRank_C_OnClose_Event_2) == 0x000008, "Wrong alignment on UMG_ShopAdventurerRank_C_OnClose_Event_2");
static_assert(sizeof(UMG_ShopAdventurerRank_C_OnClose_Event_2) == 0x000008, "Wrong size on UMG_ShopAdventurerRank_C_OnClose_Event_2");
static_assert(offsetof(UMG_ShopAdventurerRank_C_OnClose_Event_2, Sender) == 0x000000, "Member 'UMG_ShopAdventurerRank_C_OnClose_Event_2::Sender' has a wrong offset!");

// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnGuideMessageVisibility_Event
// 0x0001 (0x0001 - 0x0000)
struct UMG_ShopAdventurerRank_C_OnGuideMessageVisibility_Event final
{
public:
	bool                                          InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ShopAdventurerRank_C_OnGuideMessageVisibility_Event) == 0x000001, "Wrong alignment on UMG_ShopAdventurerRank_C_OnGuideMessageVisibility_Event");
static_assert(sizeof(UMG_ShopAdventurerRank_C_OnGuideMessageVisibility_Event) == 0x000001, "Wrong size on UMG_ShopAdventurerRank_C_OnGuideMessageVisibility_Event");
static_assert(offsetof(UMG_ShopAdventurerRank_C_OnGuideMessageVisibility_Event, InVisibility) == 0x000000, "Member 'UMG_ShopAdventurerRank_C_OnGuideMessageVisibility_Event::InVisibility' has a wrong offset!");

// Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.InAnimation
// 0x0008 (0x0008 - 0x0000)
struct UMG_ShopAdventurerRank_C_InAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ShopAdventurerRank_C_InAnimation) == 0x000008, "Wrong alignment on UMG_ShopAdventurerRank_C_InAnimation");
static_assert(sizeof(UMG_ShopAdventurerRank_C_InAnimation) == 0x000008, "Wrong size on UMG_ShopAdventurerRank_C_InAnimation");
static_assert(offsetof(UMG_ShopAdventurerRank_C_InAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UMG_ShopAdventurerRank_C_InAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

