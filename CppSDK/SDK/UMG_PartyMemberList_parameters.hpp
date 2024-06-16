#pragma once

 

// Package: UMG_PartyMemberList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_PartyMemberList.UMG_PartyMemberList_C.ExecuteUbergraph_UMG_PartyMemberList
// 0x0118 (0x0118 - 0x0000)
struct UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7207[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7208[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7209[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_720A[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_720B[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_720C[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_720D[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_720E[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_720F[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7210[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyMemberInfo_C*                     K2Node_DynamicCast_AsParty_Member_Info;            // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7211[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerProfileSummaryData>      CallFunc_GetFriendList_ReturnValue;                // 0x0108(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList) == 0x000008, "Wrong alignment on UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList");
static_assert(sizeof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList) == 0x000118, "Wrong size on UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, EntryPoint) == 0x000000, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000010, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000028, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetChildrenCount_ReturnValue) == 0x000034, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_AsSBPlayer_State) == 0x000038, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetGameInstance_ReturnValue_1) == 0x000048, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x000060, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_bSuccess_3) == 0x000068, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_CreateDelegate_OutputDelegate_1) == 0x00006C, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_CreateDelegate_OutputDelegate_2) == 0x00007C, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_CreateDelegate_OutputDelegate_3) == 0x00008C, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000A0, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x0000B0, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_bSuccess_4) == 0x0000B8, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0000C0, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_IsValid_ReturnValue_1) == 0x0000C8, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetValidPlayerState_ReturnValue) == 0x0000D0, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, Temp_int_Variable) == 0x0000D8, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_IsValid_ReturnValue_2) == 0x0000DC, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetChildAt_ReturnValue) == 0x0000E0, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_AsParty_Member_Info) == 0x0000E8, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_AsParty_Member_Info' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, K2Node_DynamicCast_bSuccess_5) == 0x0000F0, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000F1, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_Add_IntInt_ReturnValue) == 0x0000F4, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0000F8, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetConcernedList_ReturnValue) == 0x000100, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList, CallFunc_GetFriendList_ReturnValue) == 0x000108, "Member 'UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList::CallFunc_GetFriendList_ReturnValue' has a wrong offset!");

// Function UMG_PartyMemberList.UMG_PartyMemberList_C.ResetPartyMemberList
// 0x01F0 (0x01F0 - 0x0000)
struct UMG_PartyMemberList_C_ResetPartyMemberList final
{
public:
	class USBPartyMemberStateGeneral*             LocalOwnPartyMemberStateGeneral;                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGameModeInfo                        LocalPlayerOwnGameModeInfo;                        // 0x0008(0x0030)(Edit, BlueprintVisible)
	TArray<class USBPartyMemberState*>            LocalPersistentPartyMemberList;                    // 0x0038(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalPersistentPartyMemberCount;                   // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyMemberInfo_C*                     CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetSessionId_self_CastInput;              // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetSessionId_ReturnValue;                 // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7212[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPartyMemberInfo_C*                     CallFunc_Create_ReturnValue_1;                     // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGameModeInfo                        CallFunc_GetCurrentGameModeInfo_OutGameModeInfo;   // 0x0090(0x0030)()
	bool                                          CallFunc_GetCurrentGameModeInfo_ReturnValue;       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7213[0x2];                                     // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7214[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7215[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7216[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General; // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7217[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetSessionId_self_CastInput_1;            // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetSessionId_ReturnValue_1;               // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x011E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7218[0x1];                                     // 0x011F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStartImmediately_ReturnValue;           // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7219[0x1];                                     // 0x0127(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_721A[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPartyListIndex_Index;                  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_721B[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGameModeInfo                        CallFunc_GetCurrentGameModeInfo_OutGameModeInfo_1; // 0x0148(0x0030)()
	bool                                          CallFunc_GetCurrentGameModeInfo_ReturnValue_1;     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_721C[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDungeonEntryClosed_ReturnValue;         // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_721D[0x6];                                     // 0x0192(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue_1;      // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue_2;      // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_721E[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetCurrentPartyMember_OutPartyMembers;    // 0x01B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetCurrentPartyMember_ReturnValue;        // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_721F[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_Array_Get_Item_1;                         // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7220[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General_1; // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7221[0x2];                                     // 0x01E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PartyMemberList_C_ResetPartyMemberList) == 0x000008, "Wrong alignment on UMG_PartyMemberList_C_ResetPartyMemberList");
static_assert(sizeof(UMG_PartyMemberList_C_ResetPartyMemberList) == 0x0001F0, "Wrong size on UMG_PartyMemberList_C_ResetPartyMemberList");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, LocalOwnPartyMemberStateGeneral) == 0x000000, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::LocalOwnPartyMemberStateGeneral' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, LocalPlayerOwnGameModeInfo) == 0x000008, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::LocalPlayerOwnGameModeInfo' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, LocalPersistentPartyMemberList) == 0x000038, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::LocalPersistentPartyMemberList' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, LocalPersistentPartyMemberCount) == 0x000048, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::LocalPersistentPartyMemberCount' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, Temp_int_Array_Index_Variable) == 0x000054, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Create_ReturnValue) == 0x000058, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetSessionId_self_CastInput) == 0x000060, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetSessionId_self_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetSessionId_ReturnValue) == 0x000070, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetSessionId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, Temp_int_Variable) == 0x000080, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Create_ReturnValue_1) == 0x000088, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetCurrentGameModeInfo_OutGameModeInfo) == 0x000090, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetCurrentGameModeInfo_OutGameModeInfo' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetCurrentGameModeInfo_ReturnValue) == 0x0000C0, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetCurrentGameModeInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_BooleanOR_ReturnValue) == 0x0000C1, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, Temp_int_Array_Index_Variable_1) == 0x0000C4, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_BooleanOR_ReturnValue_1) == 0x0000C8, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Array_Length_ReturnValue) == 0x0000CC, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D0, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_BooleanAND_ReturnValue) == 0x0000D1, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Array_Length_ReturnValue_1) == 0x0000D4, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D8, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Array_Get_Item) == 0x0000E0, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, K2Node_DynamicCast_AsSBParty_Member_State_General) == 0x0000E8, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::K2Node_DynamicCast_AsSBParty_Member_State_General' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_IsValid_ReturnValue) == 0x0000F1, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetSessionId_self_CastInput_1) == 0x0000F8, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetSessionId_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetSessionId_ReturnValue_1) == 0x000108, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetSessionId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Array_Length_ReturnValue_2) == 0x000118, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x00011C, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Less_IntInt_ReturnValue) == 0x00011D, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_BooleanAND_ReturnValue_1) == 0x00011E, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetChildrenCount_ReturnValue) == 0x000120, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000124, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_IsStartImmediately_ReturnValue) == 0x000125, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_IsStartImmediately_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Not_PreBool_ReturnValue) == 0x000126, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000128, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000130, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, Temp_int_Loop_Counter_Variable_1) == 0x000138, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Add_IntInt_ReturnValue_2) == 0x00013C, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetPartyListIndex_Index) == 0x000140, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetPartyListIndex_Index' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, K2Node_SwitchInteger_CmpSuccess) == 0x000144, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetCurrentGameModeInfo_OutGameModeInfo_1) == 0x000148, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetCurrentGameModeInfo_OutGameModeInfo_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetCurrentGameModeInfo_ReturnValue_1) == 0x000178, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetCurrentGameModeInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetGameState_ReturnValue) == 0x000180, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000188, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, K2Node_DynamicCast_bSuccess_1) == 0x000190, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_IsDungeonEntryClosed_ReturnValue) == 0x000191, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_IsDungeonEntryClosed_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_AddChildToUniformGrid_ReturnValue_1) == 0x000198, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_AddChildToUniformGrid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_AddChildToUniformGrid_ReturnValue_2) == 0x0001A0, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_AddChildToUniformGrid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001A8, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetCurrentPartyMember_OutPartyMembers) == 0x0001B0, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetCurrentPartyMember_OutPartyMembers' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_GetCurrentPartyMember_ReturnValue) == 0x0001C0, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_GetCurrentPartyMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Array_Get_Item_1) == 0x0001C8, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Array_Length_ReturnValue_3) == 0x0001D0, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, K2Node_DynamicCast_AsSBParty_Member_State_General_1) == 0x0001D8, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::K2Node_DynamicCast_AsSBParty_Member_State_General_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, K2Node_DynamicCast_bSuccess_2) == 0x0001E0, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001E1, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Array_Add_ReturnValue) == 0x0001E4, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_IsLocalPlayer_ReturnValue) == 0x0001E8, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_ResetPartyMemberList, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001E9, "Member 'UMG_PartyMemberList_C_ResetPartyMemberList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function UMG_PartyMemberList.UMG_PartyMemberList_C.GetPartyListIndex
// 0x0040 (0x0040 - 0x0000)
struct UMG_PartyMemberList_C_GetPartyListIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7222[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_DxBattle*                  K2Node_DynamicCast_AsSBGame_State_Dx_Battle;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7223[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_RaidBattle*                K2Node_DynamicCast_AsSBGame_State_Raid_Battle;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7224[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPartyListIndex_ReturnValue;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PartyMemberList_C_GetPartyListIndex) == 0x000008, "Wrong alignment on UMG_PartyMemberList_C_GetPartyListIndex");
static_assert(sizeof(UMG_PartyMemberList_C_GetPartyListIndex) == 0x000040, "Wrong size on UMG_PartyMemberList_C_GetPartyListIndex");
static_assert(offsetof(UMG_PartyMemberList_C_GetPartyListIndex, Param_Index) == 0x000000, "Member 'UMG_PartyMemberList_C_GetPartyListIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_GetPartyListIndex, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'UMG_PartyMemberList_C_GetPartyListIndex::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_GetPartyListIndex, K2Node_DynamicCast_AsSBGame_State_Dx_Battle) == 0x000010, "Member 'UMG_PartyMemberList_C_GetPartyListIndex::K2Node_DynamicCast_AsSBGame_State_Dx_Battle' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_GetPartyListIndex, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UMG_PartyMemberList_C_GetPartyListIndex::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_GetPartyListIndex, CallFunc_GetGameState_ReturnValue_1) == 0x000020, "Member 'UMG_PartyMemberList_C_GetPartyListIndex::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_GetPartyListIndex, K2Node_DynamicCast_AsSBGame_State_Raid_Battle) == 0x000028, "Member 'UMG_PartyMemberList_C_GetPartyListIndex::K2Node_DynamicCast_AsSBGame_State_Raid_Battle' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_GetPartyListIndex, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'UMG_PartyMemberList_C_GetPartyListIndex::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_GetPartyListIndex, CallFunc_GetPartyListIndex_ReturnValue) == 0x000034, "Member 'UMG_PartyMemberList_C_GetPartyListIndex::CallFunc_GetPartyListIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_C_GetPartyListIndex, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000038, "Member 'UMG_PartyMemberList_C_GetPartyListIndex::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

}

