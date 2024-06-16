#pragma once

 

// Package: BP_PartyPortal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PartyPortal.BP_PartyPortal_C.PartyWarpStart__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_PartyPortal_C_PartyWarpStart__DelegateSignature final
{
public:
	class ASBPlayerCharacter*                     WarpTarget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PartyPortal_C_PartyWarpStart__DelegateSignature) == 0x000008, "Wrong alignment on BP_PartyPortal_C_PartyWarpStart__DelegateSignature");
static_assert(sizeof(BP_PartyPortal_C_PartyWarpStart__DelegateSignature) == 0x000008, "Wrong size on BP_PartyPortal_C_PartyWarpStart__DelegateSignature");
static_assert(offsetof(BP_PartyPortal_C_PartyWarpStart__DelegateSignature, WarpTarget) == 0x000000, "Member 'BP_PartyPortal_C_PartyWarpStart__DelegateSignature::WarpTarget' has a wrong offset!");

// Function BP_PartyPortal.BP_PartyPortal_C.ExecuteUbergraph_BP_PartyPortal
// 0x00E0 (0x00E0 - 0x0000)
struct BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6377[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6378[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Other_Actor, const struct FRotator& View_Rotation)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6379[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_InteractionWarpGoal_C*              K2Node_CustomEvent_WarpGoal;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_CustomEvent_AccessPlayer;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPartyId_ReturnValue;                   // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_637A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UArrowComponent*                        CallFunc_Array_Random_OutItem;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_637B[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Other_Actor;                    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_CustomEvent_View_Rotation;                  // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_637C[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_637D[0x5];                                     // 0x009B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInParty_ReturnValue;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_637E[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartyId_ReturnValue_1;                 // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestLocalWarpToLocation_ReturnValue;   // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal) == 0x000008, "Wrong alignment on BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal");
static_assert(sizeof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal) == 0x0000E0, "Wrong size on BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, EntryPoint) == 0x000000, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, K2Node_CustomEvent_WarpGoal) == 0x000028, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::K2Node_CustomEvent_WarpGoal' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, K2Node_CustomEvent_AccessPlayer) == 0x000030, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::K2Node_CustomEvent_AccessPlayer' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_GetPartyId_ReturnValue) == 0x000038, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_GetPartyId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_Array_Random_OutItem) == 0x000050, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_Array_Random_OutIndex) == 0x000058, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x00005C, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000068, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, K2Node_CustomEvent_Other_Actor) == 0x000078, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::K2Node_CustomEvent_Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, K2Node_CustomEvent_View_Rotation) == 0x000080, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::K2Node_CustomEvent_View_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000090, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_HasAuthority_ReturnValue_1) == 0x000099, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_IsValid_ReturnValue_1) == 0x00009A, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x0000A0, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A8, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, K2Node_DynamicCast_AsBP_Player_Character) == 0x0000B8, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_IsInParty_ReturnValue) == 0x0000C1, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_IsInParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_GetPartyId_ReturnValue_1) == 0x0000C8, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_GetPartyId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000D8, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_BooleanAND_ReturnValue) == 0x0000D9, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_RequestLocalWarpToLocation_ReturnValue) == 0x0000DA, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_RequestLocalWarpToLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000DB, "Member 'BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_PartyPortal.BP_PartyPortal_C.Interacted
// 0x0018 (0x0018 - 0x0000)
struct BP_PartyPortal_C_Interacted final
{
public:
	class AActor*                                 Other_Actor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               View_Rotation;                                     // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PartyPortal_C_Interacted) == 0x000008, "Wrong alignment on BP_PartyPortal_C_Interacted");
static_assert(sizeof(BP_PartyPortal_C_Interacted) == 0x000018, "Wrong size on BP_PartyPortal_C_Interacted");
static_assert(offsetof(BP_PartyPortal_C_Interacted, Other_Actor) == 0x000000, "Member 'BP_PartyPortal_C_Interacted::Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_Interacted, View_Rotation) == 0x000008, "Member 'BP_PartyPortal_C_Interacted::View_Rotation' has a wrong offset!");

// Function BP_PartyPortal.BP_PartyPortal_C.Teleport_FadeIn
// 0x0010 (0x0010 - 0x0000)
struct BP_PartyPortal_C_Teleport_FadeIn final
{
public:
	class ABP_InteractionWarpGoal_C*              WarpGoal;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     AccessPlayer;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PartyPortal_C_Teleport_FadeIn) == 0x000008, "Wrong alignment on BP_PartyPortal_C_Teleport_FadeIn");
static_assert(sizeof(BP_PartyPortal_C_Teleport_FadeIn) == 0x000010, "Wrong size on BP_PartyPortal_C_Teleport_FadeIn");
static_assert(offsetof(BP_PartyPortal_C_Teleport_FadeIn, WarpGoal) == 0x000000, "Member 'BP_PartyPortal_C_Teleport_FadeIn::WarpGoal' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_Teleport_FadeIn, AccessPlayer) == 0x000008, "Member 'BP_PartyPortal_C_Teleport_FadeIn::AccessPlayer' has a wrong offset!");

// Function BP_PartyPortal.BP_PartyPortal_C.DebugPrint
// 0x0020 (0x0020 - 0x0000)
struct BP_PartyPortal_C_DebugPrint final
{
public:
	class FString                                 InString;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PartyPortal_C_DebugPrint) == 0x000008, "Wrong alignment on BP_PartyPortal_C_DebugPrint");
static_assert(sizeof(BP_PartyPortal_C_DebugPrint) == 0x000020, "Wrong size on BP_PartyPortal_C_DebugPrint");
static_assert(offsetof(BP_PartyPortal_C_DebugPrint, InString) == 0x000000, "Member 'BP_PartyPortal_C_DebugPrint::InString' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_DebugPrint, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'BP_PartyPortal_C_DebugPrint::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function BP_PartyPortal.BP_PartyPortal_C.SetGoalActor
// 0x0008 (0x0008 - 0x0000)
struct BP_PartyPortal_C_SetGoalActor final
{
public:
	class ABP_InteractionWarpGoal_C*              GoalTargetActor;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PartyPortal_C_SetGoalActor) == 0x000008, "Wrong alignment on BP_PartyPortal_C_SetGoalActor");
static_assert(sizeof(BP_PartyPortal_C_SetGoalActor) == 0x000008, "Wrong size on BP_PartyPortal_C_SetGoalActor");
static_assert(offsetof(BP_PartyPortal_C_SetGoalActor, GoalTargetActor) == 0x000000, "Member 'BP_PartyPortal_C_SetGoalActor::GoalTargetActor' has a wrong offset!");

// Function BP_PartyPortal.BP_PartyPortal_C.GetWarpPlayers
// 0x00A0 (0x00A0 - 0x0000)
struct BP_PartyPortal_C_GetWarpPlayers final
{
public:
	const class ASBPlayerCharacter*               Param_Owner;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASBPlayerCharacter*>             WarpPlayers;                                       // 0x0008(0x0010)(Parm, OutParm)
	class FString                                 TmpPartyId;                                        // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class ASBPlayerCharacter*>             TmpWarpPlayers;                                    // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_637F[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartyId_ReturnValue;                   // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInParty_ReturnValue;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6380[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6381[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6382[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPartyId_ReturnValue_1;                 // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6383[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PartyPortal_C_GetWarpPlayers) == 0x000008, "Wrong alignment on BP_PartyPortal_C_GetWarpPlayers");
static_assert(sizeof(BP_PartyPortal_C_GetWarpPlayers) == 0x0000A0, "Wrong size on BP_PartyPortal_C_GetWarpPlayers");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, Param_Owner) == 0x000000, "Member 'BP_PartyPortal_C_GetWarpPlayers::Param_Owner' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, WarpPlayers) == 0x000008, "Member 'BP_PartyPortal_C_GetWarpPlayers::WarpPlayers' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, TmpPartyId) == 0x000018, "Member 'BP_PartyPortal_C_GetWarpPlayers::TmpPartyId' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, TmpWarpPlayers) == 0x000028, "Member 'BP_PartyPortal_C_GetWarpPlayers::TmpWarpPlayers' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BP_PartyPortal_C_GetWarpPlayers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_GetPartyId_ReturnValue) == 0x000040, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_GetPartyId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_IsInParty_ReturnValue) == 0x000050, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_IsInParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_GetGameState_ReturnValue) == 0x000058, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_Array_AddUnique_ReturnValue) == 0x000060, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'BP_PartyPortal_C_GetWarpPlayers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000078, "Member 'BP_PartyPortal_C_GetWarpPlayers::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'BP_PartyPortal_C_GetWarpPlayers::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_Array_AddUnique_ReturnValue_1) == 0x000084, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_GetPartyId_ReturnValue_1) == 0x000088, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_GetPartyId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000099, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyPortal_C_GetWarpPlayers, CallFunc_Add_IntInt_ReturnValue) == 0x00009C, "Member 'BP_PartyPortal_C_GetWarpPlayers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

