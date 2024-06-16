#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty
// 0x0088 (0x0088 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9149[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, int32 ReturnPartyResultMessageIndex)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 ReturnPartyResultMessageIndex)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0039(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_914A[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ReturnPartyResultMessageIndex;  // 0x003C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_914B[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance_1;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty) == 0x000088, "Wrong size on BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, CallFunc_IsStandalone_ReturnValue) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, K2Node_DynamicCast_AsSBGame_Instance) == 0x000030, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, K2Node_CustomEvent_bWasSuccessful) == 0x000039, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, K2Node_CustomEvent_ReturnPartyResultMessageIndex) == 0x00003C, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::K2Node_CustomEvent_ReturnPartyResultMessageIndex' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, CallFunc_GetTextFromAsset_ReturnValue) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, CallFunc_GetGameInstance_ReturnValue_1) == 0x000070, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, K2Node_DynamicCast_AsSBGame_Instance_1) == 0x000078, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::K2Node_DynamicCast_AsSBGame_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.OnReturnDisconnectedPartyComplete_Event
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_914C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ReturnPartyResultMessageIndex;                     // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event, bWasSuccessful) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event, ReturnPartyResultMessageIndex) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event::ReturnPartyResultMessageIndex' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.RequestGetBagItems_API
// 0x0028 (0x0028 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_914D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_914E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_GetBagItemList_ReturnValue;       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API) == 0x000028, "Wrong size on BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API, bResult) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API::bResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API, CallFunc_GetSBPlayerState_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API, CallFunc_Request_GetBagItemList_ReturnValue) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API::CallFunc_Request_GetBagItemList_ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.GetStorageComponent
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent final
{
public:
	class USBPlayerStorageComponent*              StorageComponent;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_914F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent) == 0x000020, "Wrong size on BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent, StorageComponent) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent::StorageComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent, CallFunc_GetSBPlayerState_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");

}

