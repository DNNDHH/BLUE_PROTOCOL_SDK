#pragma once

 

// Package: BP_PlayerName_Layoutable

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.ExecuteUbergraph_BP_PlayerName_Layoutable
// 0x0128 (0x0128 - 0x0000)
struct BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6823[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InName;                         // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_CustomEvent_InPawn;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6824[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6825[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleStatusInterface> CallFunc_GetBattleStatusComponent_self_CastInput;  // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBBattleStatusComponent*               CallFunc_GetBattleStatusComponent_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6826[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& InName)>  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6827[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_CustomEvent_InPlayerState;                  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_CustomEvent_PlayerController;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6828[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6829[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_682A[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_682B[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_682C[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_682D[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_682E[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ASBPlayerController* PlayerController)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0104(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_682F[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_2;             // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable) == 0x000008, "Wrong alignment on BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable");
static_assert(sizeof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable) == 0x000128, "Wrong size on BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, EntryPoint) == 0x000000, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_CustomEvent_InName) == 0x000008, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_CustomEvent_InName' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_CustomEvent_InPawn) == 0x000018, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_CustomEvent_InPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000028, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, CallFunc_GetBattleStatusComponent_self_CastInput) == 0x000038, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::CallFunc_GetBattleStatusComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, CallFunc_GetBattleStatusComponent_ReturnValue) == 0x000048, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::CallFunc_GetBattleStatusComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, CallFunc_IsValid_ReturnValue_2) == 0x000061, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_CustomEvent_InPlayerState) == 0x000078, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_CustomEvent_InPlayerState' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_CustomEvent_PlayerController) == 0x000080, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_CustomEvent_PlayerController' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, CallFunc_IsValid_ReturnValue_3) == 0x000088, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_AsSBPlayer_State) == 0x000090, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, CallFunc_IsValid_ReturnValue_4) == 0x000099, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, CallFunc_GetPlayerController_ReturnValue) == 0x0000A0, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000A8, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x0000B8, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_bSuccess_3) == 0x0000C0, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000C4, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000D8, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0000E0, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_bSuccess_4) == 0x0000E8, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000F0, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x0000F8, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_bSuccess_5) == 0x000100, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_CreateDelegate_OutputDelegate_3) == 0x000104, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_AsSBPlayer_State_2) == 0x000118, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_AsSBPlayer_State_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable, K2Node_DynamicCast_bSuccess_6) == 0x000120, "Member 'BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");

// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnChangePlayerCharacter
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerName_Layoutable_C_OnChangePlayerCharacter final
{
public:
	class APawn*                                  InPawn;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerName_Layoutable_C_OnChangePlayerCharacter) == 0x000008, "Wrong alignment on BP_PlayerName_Layoutable_C_OnChangePlayerCharacter");
static_assert(sizeof(BP_PlayerName_Layoutable_C_OnChangePlayerCharacter) == 0x000008, "Wrong size on BP_PlayerName_Layoutable_C_OnChangePlayerCharacter");
static_assert(offsetof(BP_PlayerName_Layoutable_C_OnChangePlayerCharacter, InPawn) == 0x000000, "Member 'BP_PlayerName_Layoutable_C_OnChangePlayerCharacter::InPawn' has a wrong offset!");

// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnCharacterNameChangeDelegate_Event_0
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerName_Layoutable_C_OnCharacterNameChangeDelegate_Event_0 final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerName_Layoutable_C_OnCharacterNameChangeDelegate_Event_0) == 0x000008, "Wrong alignment on BP_PlayerName_Layoutable_C_OnCharacterNameChangeDelegate_Event_0");
static_assert(sizeof(BP_PlayerName_Layoutable_C_OnCharacterNameChangeDelegate_Event_0) == 0x000010, "Wrong size on BP_PlayerName_Layoutable_C_OnCharacterNameChangeDelegate_Event_0");
static_assert(offsetof(BP_PlayerName_Layoutable_C_OnCharacterNameChangeDelegate_Event_0, InName) == 0x000000, "Member 'BP_PlayerName_Layoutable_C_OnCharacterNameChangeDelegate_Event_0::InName' has a wrong offset!");

// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.InitPlayerStateDelegate
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerName_Layoutable_C_InitPlayerStateDelegate final
{
public:
	class ASBPlayerState*                         InPlayerState;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerName_Layoutable_C_InitPlayerStateDelegate) == 0x000008, "Wrong alignment on BP_PlayerName_Layoutable_C_InitPlayerStateDelegate");
static_assert(sizeof(BP_PlayerName_Layoutable_C_InitPlayerStateDelegate) == 0x000008, "Wrong size on BP_PlayerName_Layoutable_C_InitPlayerStateDelegate");
static_assert(offsetof(BP_PlayerName_Layoutable_C_InitPlayerStateDelegate, InPlayerState) == 0x000000, "Member 'BP_PlayerName_Layoutable_C_InitPlayerStateDelegate::InPlayerState' has a wrong offset!");

// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnAttachedClientPlayerStateDelegate_Event_0
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerName_Layoutable_C_OnAttachedClientPlayerStateDelegate_Event_0 final
{
public:
	class ASBPlayerController*                    PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerName_Layoutable_C_OnAttachedClientPlayerStateDelegate_Event_0) == 0x000008, "Wrong alignment on BP_PlayerName_Layoutable_C_OnAttachedClientPlayerStateDelegate_Event_0");
static_assert(sizeof(BP_PlayerName_Layoutable_C_OnAttachedClientPlayerStateDelegate_Event_0) == 0x000008, "Wrong size on BP_PlayerName_Layoutable_C_OnAttachedClientPlayerStateDelegate_Event_0");
static_assert(offsetof(BP_PlayerName_Layoutable_C_OnAttachedClientPlayerStateDelegate_Event_0, PlayerController) == 0x000000, "Member 'BP_PlayerName_Layoutable_C_OnAttachedClientPlayerStateDelegate_Event_0::PlayerController' has a wrong offset!");

// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetLayoutEditMode
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerName_Layoutable_C_SetLayoutEditMode final
{
public:
	bool                                          Param_LayoutEditMode;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerName_Layoutable_C_SetLayoutEditMode) == 0x000001, "Wrong alignment on BP_PlayerName_Layoutable_C_SetLayoutEditMode");
static_assert(sizeof(BP_PlayerName_Layoutable_C_SetLayoutEditMode) == 0x000001, "Wrong size on BP_PlayerName_Layoutable_C_SetLayoutEditMode");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetLayoutEditMode, Param_LayoutEditMode) == 0x000000, "Member 'BP_PlayerName_Layoutable_C_SetLayoutEditMode::Param_LayoutEditMode' has a wrong offset!");

// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetPlayerName
// 0x0060 (0x0060 - 0x0000)
struct BP_PlayerName_Layoutable_C_SetPlayerName final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6830[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6831[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput;          // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(BP_PlayerName_Layoutable_C_SetPlayerName) == 0x000008, "Wrong alignment on BP_PlayerName_Layoutable_C_SetPlayerName");
static_assert(sizeof(BP_PlayerName_Layoutable_C_SetPlayerName) == 0x000060, "Wrong size on BP_PlayerName_Layoutable_C_SetPlayerName");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetPlayerName, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'BP_PlayerName_Layoutable_C_SetPlayerName::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetPlayerName, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000008, "Member 'BP_PlayerName_Layoutable_C_SetPlayerName::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetPlayerName, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerName_Layoutable_C_SetPlayerName::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetPlayerName, K2Node_DynamicCast_AsSBPlayer_State) == 0x000018, "Member 'BP_PlayerName_Layoutable_C_SetPlayerName::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetPlayerName, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'BP_PlayerName_Layoutable_C_SetPlayerName::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetPlayerName, CallFunc_GetCharacterName_self_CastInput) == 0x000028, "Member 'BP_PlayerName_Layoutable_C_SetPlayerName::CallFunc_GetCharacterName_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetPlayerName, CallFunc_GetCharacterName_ReturnValue) == 0x000038, "Member 'BP_PlayerName_Layoutable_C_SetPlayerName::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetPlayerName, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'BP_PlayerName_Layoutable_C_SetPlayerName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetAchievementName
// 0x00F0 (0x00F0 - 0x0000)
struct BP_PlayerName_Layoutable_C_SetAchievementName final
{
public:
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6832[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6833[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6834[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetAchievementSelected_self_CastInput;    // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetAchievementSelected_ReturnValue;       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6835[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x0050(0x0078)()
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
};
static_assert(alignof(BP_PlayerName_Layoutable_C_SetAchievementName) == 0x000008, "Wrong alignment on BP_PlayerName_Layoutable_C_SetAchievementName");
static_assert(sizeof(BP_PlayerName_Layoutable_C_SetAchievementName) == 0x0000F0, "Wrong size on BP_PlayerName_Layoutable_C_SetAchievementName");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, CallFunc_GetMasterDataManager_IsValid) == 0x000000, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000018, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, K2Node_DynamicCast_AsSBPlayer_State) == 0x000028, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, CallFunc_GetAchievementSelected_self_CastInput) == 0x000038, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::CallFunc_GetAchievementSelected_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, CallFunc_GetAchievementSelected_ReturnValue) == 0x000048, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::CallFunc_GetAchievementSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, CallFunc_Greater_IntInt_ReturnValue) == 0x00004C, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, CallFunc_GetAchievementMasterData_IsExists) == 0x00004D, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, CallFunc_GetAchievementMasterData_ReturnValue) == 0x000050, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, CallFunc_GetAchievementName_ReturnValue) == 0x0000C8, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerName_Layoutable_C_SetAchievementName, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'BP_PlayerName_Layoutable_C_SetAchievementName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

