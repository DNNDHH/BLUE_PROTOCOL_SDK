#pragma once

 

// Package: PartyIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function PartyIcon.PartyIcon_C.ExecuteUbergraph_PartyIcon
// 0x0238 (0x0238 - 0x0000)
struct PartyIcon_C_ExecuteUbergraph_PartyIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class ASBPlayerController* PlayerController)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class USBPartyMemberState* MemberState)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_InQuestId_1;                    // 0x0044(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F1E[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       K2Node_CustomEvent_InComponent_1;                  // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInFirst;                       // 0x0058(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F1F[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInterruptQuestPlayInfo              K2Node_CustomEvent_InPlayInfo;                     // 0x0060(0x0018)(ConstParm, NoDestructor)
	class FName                                   K2Node_CustomEvent_InQuestId;                      // 0x0078(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InSuccess;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F20[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       K2Node_CustomEvent_InComponent;                    // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F21[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5F22[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           K2Node_CustomEvent_OwnerCharacter;                 // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F23[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class USBPlayerInterruptQuestComponent* InComponent)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5F24[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F25[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F26[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F27[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F28[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue;   // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue_1; // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F29[0x6];                                     // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FSBInterruptQuestPlayInfo& InPlayInfo)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F2A[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x014C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5F2B[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_CustomEvent_PlayerController;               // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F2C[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    K2Node_CustomEvent_MemberState;                    // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_AnimationSpeed;                       // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F2D[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F2E[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F2F[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_2;             // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F30[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F31[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_3;             // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F32[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue_2; // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F33[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName& InQuestId, bool InSuccess)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x01F4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5F34[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           K2Node_Event_OwnerCharacter;                       // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName& InQuestId)>       K2Node_CreateDelegate_OutputDelegate_9;            // 0x0210(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F35[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x0224(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(PartyIcon_C_ExecuteUbergraph_PartyIcon) == 0x000008, "Wrong alignment on PartyIcon_C_ExecuteUbergraph_PartyIcon");
static_assert(sizeof(PartyIcon_C_ExecuteUbergraph_PartyIcon) == 0x000238, "Wrong size on PartyIcon_C_ExecuteUbergraph_PartyIcon");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, EntryPoint) == 0x000000, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CustomEvent_InQuestId_1) == 0x000044, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CustomEvent_InQuestId_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CustomEvent_InComponent_1) == 0x000050, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CustomEvent_InComponent_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CustomEvent_bInFirst) == 0x000058, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CustomEvent_bInFirst' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CustomEvent_InPlayInfo) == 0x000060, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CustomEvent_InPlayInfo' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CustomEvent_InQuestId) == 0x000078, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CustomEvent_InQuestId' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CustomEvent_InSuccess) == 0x000080, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CustomEvent_InSuccess' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CustomEvent_InComponent) == 0x000088, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CustomEvent_InComponent' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000090, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate_4) == 0x000094, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CustomEvent_OwnerCharacter) == 0x0000A8, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CustomEvent_OwnerCharacter' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000B4, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetPlayerController_ReturnValue) == 0x0000C8, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000D0, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000E0, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_AsSBPlayer_State) == 0x0000F0, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_bSuccess_1) == 0x0000F8, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x000100, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_bSuccess_2) == 0x000108, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetInterruptQuestComponent_ReturnValue) == 0x000110, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetInterruptQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetInterruptQuestComponent_ReturnValue_1) == 0x000118, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetInterruptQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, Temp_bool_Has_Been_Initd_Variable) == 0x000120, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, Temp_bool_IsClosed_Variable) == 0x000121, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetGameInstance_ReturnValue) == 0x000128, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate_6) == 0x000130, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000140, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_bSuccess_3) == 0x000148, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate_7) == 0x00014C, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CustomEvent_PlayerController) == 0x000160, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CustomEvent_PlayerController' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetCurrentParty_OutPartyState) == 0x000168, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetCurrentParty_ReturnValue) == 0x000170, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CustomEvent_MemberState) == 0x000178, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CustomEvent_MemberState' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetPlayerController_ReturnValue_2) == 0x000180, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_Event_AnimationSpeed) == 0x000188, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_Event_AnimationSpeed' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000190, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_bSuccess_4) == 0x000198, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetGameInstance_ReturnValue_1) == 0x0001A0, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x0001A8, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_bSuccess_5) == 0x0001B0, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_AsSBPlayer_State_2) == 0x0001B8, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_AsSBPlayer_State_2' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_bSuccess_6) == 0x0001C0, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetPlayerController_ReturnValue_3) == 0x0001C8, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_IsValid_ReturnValue_2) == 0x0001D0, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_AsSBPlayer_State_3) == 0x0001D8, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_AsSBPlayer_State_3' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_DynamicCast_bSuccess_7) == 0x0001E0, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_GetInterruptQuestComponent_ReturnValue_2) == 0x0001E8, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_GetInterruptQuestComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_IsValid_ReturnValue_3) == 0x0001F0, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate_8) == 0x0001F4, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_Event_OwnerCharacter) == 0x000208, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_Event_OwnerCharacter' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate_9) == 0x000210, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, CallFunc_BooleanOR_ReturnValue) == 0x000220, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_ExecuteUbergraph_PartyIcon, K2Node_CreateDelegate_OutputDelegate_10) == 0x000224, "Member 'PartyIcon_C_ExecuteUbergraph_PartyIcon::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.RequestSetOwnerCharacter
// 0x0008 (0x0008 - 0x0000)
struct PartyIcon_C_RequestSetOwnerCharacter final
{
public:
	class ASBCharacter*                           Param_OwnerCharacter;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyIcon_C_RequestSetOwnerCharacter) == 0x000008, "Wrong alignment on PartyIcon_C_RequestSetOwnerCharacter");
static_assert(sizeof(PartyIcon_C_RequestSetOwnerCharacter) == 0x000008, "Wrong size on PartyIcon_C_RequestSetOwnerCharacter");
static_assert(offsetof(PartyIcon_C_RequestSetOwnerCharacter, Param_OwnerCharacter) == 0x000000, "Member 'PartyIcon_C_RequestSetOwnerCharacter::Param_OwnerCharacter' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.RequestSetAnimationSpeed
// 0x0004 (0x0004 - 0x0000)
struct PartyIcon_C_RequestSetAnimationSpeed final
{
public:
	float                                         AnimationSpeed;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyIcon_C_RequestSetAnimationSpeed) == 0x000004, "Wrong alignment on PartyIcon_C_RequestSetAnimationSpeed");
static_assert(sizeof(PartyIcon_C_RequestSetAnimationSpeed) == 0x000004, "Wrong size on PartyIcon_C_RequestSetAnimationSpeed");
static_assert(offsetof(PartyIcon_C_RequestSetAnimationSpeed, AnimationSpeed) == 0x000000, "Member 'PartyIcon_C_RequestSetAnimationSpeed::AnimationSpeed' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.PartyPlayerStateChange
// 0x0008 (0x0008 - 0x0000)
struct PartyIcon_C_PartyPlayerStateChange final
{
public:
	class USBPartyMemberState*                    MemberState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyIcon_C_PartyPlayerStateChange) == 0x000008, "Wrong alignment on PartyIcon_C_PartyPlayerStateChange");
static_assert(sizeof(PartyIcon_C_PartyPlayerStateChange) == 0x000008, "Wrong size on PartyIcon_C_PartyPlayerStateChange");
static_assert(offsetof(PartyIcon_C_PartyPlayerStateChange, MemberState) == 0x000000, "Member 'PartyIcon_C_PartyPlayerStateChange::MemberState' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.OnAttachedClientPlayerStateDelegate_����_0
// 0x0008 (0x0008 - 0x0000)
struct PartyIcon_C_OnAttachedClientPlayerStateDelegate______0 final
{
public:
	class ASBPlayerController*                    PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyIcon_C_OnAttachedClientPlayerStateDelegate______0) == 0x000008, "Wrong alignment on PartyIcon_C_OnAttachedClientPlayerStateDelegate______0");
static_assert(sizeof(PartyIcon_C_OnAttachedClientPlayerStateDelegate______0) == 0x000008, "Wrong size on PartyIcon_C_OnAttachedClientPlayerStateDelegate______0");
static_assert(offsetof(PartyIcon_C_OnAttachedClientPlayerStateDelegate______0, PlayerController) == 0x000000, "Member 'PartyIcon_C_OnAttachedClientPlayerStateDelegate______0::PlayerController' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.SetOwnerCharacter
// 0x0008 (0x0008 - 0x0000)
struct PartyIcon_C_SetOwnerCharacter final
{
public:
	class ASBCharacter*                           Param_OwnerCharacter;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyIcon_C_SetOwnerCharacter) == 0x000008, "Wrong alignment on PartyIcon_C_SetOwnerCharacter");
static_assert(sizeof(PartyIcon_C_SetOwnerCharacter) == 0x000008, "Wrong size on PartyIcon_C_SetOwnerCharacter");
static_assert(offsetof(PartyIcon_C_SetOwnerCharacter, Param_OwnerCharacter) == 0x000000, "Member 'PartyIcon_C_SetOwnerCharacter::Param_OwnerCharacter' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.InterruptProgressUpdate
// 0x0008 (0x0008 - 0x0000)
struct PartyIcon_C_InterruptProgressUpdate final
{
public:
	class USBPlayerInterruptQuestComponent*       InComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyIcon_C_InterruptProgressUpdate) == 0x000008, "Wrong alignment on PartyIcon_C_InterruptProgressUpdate");
static_assert(sizeof(PartyIcon_C_InterruptProgressUpdate) == 0x000008, "Wrong size on PartyIcon_C_InterruptProgressUpdate");
static_assert(offsetof(PartyIcon_C_InterruptProgressUpdate, InComponent) == 0x000000, "Member 'PartyIcon_C_InterruptProgressUpdate::InComponent' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.InterruptSuccsess
// 0x000C (0x000C - 0x0000)
struct PartyIcon_C_InterruptSuccsess final
{
public:
	class FName                                   InQuestId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InSuccess;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyIcon_C_InterruptSuccsess) == 0x000004, "Wrong alignment on PartyIcon_C_InterruptSuccsess");
static_assert(sizeof(PartyIcon_C_InterruptSuccsess) == 0x00000C, "Wrong size on PartyIcon_C_InterruptSuccsess");
static_assert(offsetof(PartyIcon_C_InterruptSuccsess, InQuestId) == 0x000000, "Member 'PartyIcon_C_InterruptSuccsess::InQuestId' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_InterruptSuccsess, InSuccess) == 0x000008, "Member 'PartyIcon_C_InterruptSuccsess::InSuccess' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.InterruptPlayerInfo
// 0x0018 (0x0018 - 0x0000)
struct PartyIcon_C_InterruptPlayerInfo final
{
public:
	struct FSBInterruptQuestPlayInfo              InPlayInfo;                                        // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PartyIcon_C_InterruptPlayerInfo) == 0x000008, "Wrong alignment on PartyIcon_C_InterruptPlayerInfo");
static_assert(sizeof(PartyIcon_C_InterruptPlayerInfo) == 0x000018, "Wrong size on PartyIcon_C_InterruptPlayerInfo");
static_assert(offsetof(PartyIcon_C_InterruptPlayerInfo, InPlayInfo) == 0x000000, "Member 'PartyIcon_C_InterruptPlayerInfo::InPlayInfo' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.OnJoinInterrupt
// 0x0010 (0x0010 - 0x0000)
struct PartyIcon_C_OnJoinInterrupt final
{
public:
	class USBPlayerInterruptQuestComponent*       InComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInFirst;                                          // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyIcon_C_OnJoinInterrupt) == 0x000008, "Wrong alignment on PartyIcon_C_OnJoinInterrupt");
static_assert(sizeof(PartyIcon_C_OnJoinInterrupt) == 0x000010, "Wrong size on PartyIcon_C_OnJoinInterrupt");
static_assert(offsetof(PartyIcon_C_OnJoinInterrupt, InComponent) == 0x000000, "Member 'PartyIcon_C_OnJoinInterrupt::InComponent' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_OnJoinInterrupt, bInFirst) == 0x000008, "Member 'PartyIcon_C_OnJoinInterrupt::bInFirst' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.InterruptQuest
// 0x0008 (0x0008 - 0x0000)
struct PartyIcon_C_InterruptQuest final
{
public:
	class FName                                   InQuestId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyIcon_C_InterruptQuest) == 0x000004, "Wrong alignment on PartyIcon_C_InterruptQuest");
static_assert(sizeof(PartyIcon_C_InterruptQuest) == 0x000008, "Wrong size on PartyIcon_C_InterruptQuest");
static_assert(offsetof(PartyIcon_C_InterruptQuest, InQuestId) == 0x000000, "Member 'PartyIcon_C_InterruptQuest::InQuestId' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.CheckParty
// 0x0070 (0x0070 - 0x0000)
struct PartyIcon_C_CheckParty final
{
public:
	TArray<class USBPartyMemberState*>            TmpCurrentPartyMember;                             // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F36[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F37[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetParty_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPartyType                                  CallFunc_GetPartyType_ReturnValue;                 // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F38[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F39[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetCurrentPartyMember_OutPartyMembers;    // 0x0058(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetCurrentPartyMember_ReturnValue;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyIcon_C_CheckParty) == 0x000008, "Wrong alignment on PartyIcon_C_CheckParty");
static_assert(sizeof(PartyIcon_C_CheckParty) == 0x000070, "Wrong size on PartyIcon_C_CheckParty");
static_assert(offsetof(PartyIcon_C_CheckParty, TmpCurrentPartyMember) == 0x000000, "Member 'PartyIcon_C_CheckParty::TmpCurrentPartyMember' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, Temp_int_Array_Index_Variable) == 0x000010, "Member 'PartyIcon_C_CheckParty::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'PartyIcon_C_CheckParty::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'PartyIcon_C_CheckParty::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000020, "Member 'PartyIcon_C_CheckParty::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'PartyIcon_C_CheckParty::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'PartyIcon_C_CheckParty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_GetValidPlayerState_ReturnValue) == 0x000030, "Member 'PartyIcon_C_CheckParty::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_Array_Get_Item) == 0x000038, "Member 'PartyIcon_C_CheckParty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_GetParty_ReturnValue) == 0x000040, "Member 'PartyIcon_C_CheckParty::CallFunc_GetParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_IsLocalPlayer_ReturnValue) == 0x000048, "Member 'PartyIcon_C_CheckParty::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_GetPartyType_ReturnValue) == 0x000049, "Member 'PartyIcon_C_CheckParty::CallFunc_GetPartyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00004A, "Member 'PartyIcon_C_CheckParty::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'PartyIcon_C_CheckParty::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'PartyIcon_C_CheckParty::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_Less_IntInt_ReturnValue) == 0x000051, "Member 'PartyIcon_C_CheckParty::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_BooleanAND_ReturnValue) == 0x000052, "Member 'PartyIcon_C_CheckParty::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_GetCurrentPartyMember_OutPartyMembers) == 0x000058, "Member 'PartyIcon_C_CheckParty::CallFunc_GetCurrentPartyMember_OutPartyMembers' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckParty, CallFunc_GetCurrentPartyMember_ReturnValue) == 0x000068, "Member 'PartyIcon_C_CheckParty::CallFunc_GetCurrentPartyMember_ReturnValue' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.CheckFollow
// 0x0078 (0x0078 - 0x0000)
struct PartyIcon_C_CheckFollow final
{
public:
	TArray<struct FPlayerProfileSummaryData>      InFriendList;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F3A[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F3B[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F3C[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F3D[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriendsToCharacterId_ReturnValue;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyIcon_C_CheckFollow) == 0x000008, "Wrong alignment on PartyIcon_C_CheckFollow");
static_assert(sizeof(PartyIcon_C_CheckFollow) == 0x000078, "Wrong size on PartyIcon_C_CheckFollow");
static_assert(offsetof(PartyIcon_C_CheckFollow, InFriendList) == 0x000000, "Member 'PartyIcon_C_CheckFollow::InFriendList' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, CallFunc_GetSBPlayerController_ReturnValue) == 0x000010, "Member 'PartyIcon_C_CheckFollow::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'PartyIcon_C_CheckFollow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, CallFunc_GetConcernedList_ReturnValue) == 0x000020, "Member 'PartyIcon_C_CheckFollow::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'PartyIcon_C_CheckFollow::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'PartyIcon_C_CheckFollow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000030, "Member 'PartyIcon_C_CheckFollow::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'PartyIcon_C_CheckFollow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, CallFunc_GetValidPlayerState_ReturnValue) == 0x000040, "Member 'PartyIcon_C_CheckFollow::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'PartyIcon_C_CheckFollow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, CallFunc_GetCharacterId_self_CastInput) == 0x000050, "Member 'PartyIcon_C_CheckFollow::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, CallFunc_GetCharacterId_ReturnValue) == 0x000060, "Member 'PartyIcon_C_CheckFollow::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckFollow, CallFunc_IsFriendsToCharacterId_ReturnValue) == 0x000070, "Member 'PartyIcon_C_CheckFollow::CallFunc_IsFriendsToCharacterId_ReturnValue' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.CheckGroup
// 0x00A0 (0x00A0 - 0x0000)
struct PartyIcon_C_CheckGroup final
{
public:
	TArray<class FString>                         Param_Name;                                        // 0x0000(0x0010)(Edit, BlueprintVisible)
	bool                                          bIsContainTeams;                                   // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F3E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         OwnerPlayerState;                                  // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         LocalPlayerState;                                  // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalityJoined;                                    // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OwnerJoined;                                       // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F3F[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F40[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F41[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue;   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsQuestJoined_ReturnValue;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInTeamMember_ReturnValue;               // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F42[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F43[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F44[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F45[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue_1; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsQuestJoined_ReturnValue_1;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyIcon_C_CheckGroup) == 0x000008, "Wrong alignment on PartyIcon_C_CheckGroup");
static_assert(sizeof(PartyIcon_C_CheckGroup) == 0x0000A0, "Wrong size on PartyIcon_C_CheckGroup");
static_assert(offsetof(PartyIcon_C_CheckGroup, Param_Name) == 0x000000, "Member 'PartyIcon_C_CheckGroup::Param_Name' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, bIsContainTeams) == 0x000010, "Member 'PartyIcon_C_CheckGroup::bIsContainTeams' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, OwnerPlayerState) == 0x000018, "Member 'PartyIcon_C_CheckGroup::OwnerPlayerState' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, LocalPlayerState) == 0x000020, "Member 'PartyIcon_C_CheckGroup::LocalPlayerState' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, LocalityJoined) == 0x000028, "Member 'PartyIcon_C_CheckGroup::LocalityJoined' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, OwnerJoined) == 0x000029, "Member 'PartyIcon_C_CheckGroup::OwnerJoined' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000030, "Member 'PartyIcon_C_CheckGroup::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'PartyIcon_C_CheckGroup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'PartyIcon_C_CheckGroup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_GetValidPlayerState_ReturnValue) == 0x000040, "Member 'PartyIcon_C_CheckGroup::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'PartyIcon_C_CheckGroup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_GetInterruptQuestComponent_ReturnValue) == 0x000050, "Member 'PartyIcon_C_CheckGroup::CallFunc_GetInterruptQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_IsQuestJoined_ReturnValue) == 0x000058, "Member 'PartyIcon_C_CheckGroup::CallFunc_IsQuestJoined_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_IsInTeamMember_ReturnValue) == 0x000059, "Member 'PartyIcon_C_CheckGroup::CallFunc_IsInTeamMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_IsValid_ReturnValue_2) == 0x00005A, "Member 'PartyIcon_C_CheckGroup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_IsValid_ReturnValue_3) == 0x00005B, "Member 'PartyIcon_C_CheckGroup::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_BooleanAND_ReturnValue) == 0x00005C, "Member 'PartyIcon_C_CheckGroup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_GetPlayerController_ReturnValue) == 0x000060, "Member 'PartyIcon_C_CheckGroup::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_BooleanAND_ReturnValue_1) == 0x000068, "Member 'PartyIcon_C_CheckGroup::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_IsValid_ReturnValue_4) == 0x000069, "Member 'PartyIcon_C_CheckGroup::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000070, "Member 'PartyIcon_C_CheckGroup::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'PartyIcon_C_CheckGroup::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, K2Node_DynamicCast_AsSBPlayer_State) == 0x000080, "Member 'PartyIcon_C_CheckGroup::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, K2Node_DynamicCast_bSuccess_2) == 0x000088, "Member 'PartyIcon_C_CheckGroup::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_GetInterruptQuestComponent_ReturnValue_1) == 0x000090, "Member 'PartyIcon_C_CheckGroup::CallFunc_GetInterruptQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckGroup, CallFunc_IsQuestJoined_ReturnValue_1) == 0x000098, "Member 'PartyIcon_C_CheckGroup::CallFunc_IsQuestJoined_ReturnValue_1' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.CheckNPC
// 0x0018 (0x0018 - 0x0000)
struct PartyIcon_C_CheckNPC final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F46[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_DynamicCast_AsSBEnemy_Character;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyIcon_C_CheckNPC) == 0x000008, "Wrong alignment on PartyIcon_C_CheckNPC");
static_assert(sizeof(PartyIcon_C_CheckNPC) == 0x000018, "Wrong size on PartyIcon_C_CheckNPC");
static_assert(offsetof(PartyIcon_C_CheckNPC, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PartyIcon_C_CheckNPC::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckNPC, K2Node_DynamicCast_AsSBEnemy_Character) == 0x000008, "Member 'PartyIcon_C_CheckNPC::K2Node_DynamicCast_AsSBEnemy_Character' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckNPC, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'PartyIcon_C_CheckNPC::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.Failed Retry
// 0x0010 (0x0010 - 0x0000)
struct PartyIcon_C_Failed_Retry final
{
public:
	class FString                                 InString;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyIcon_C_Failed_Retry) == 0x000008, "Wrong alignment on PartyIcon_C_Failed_Retry");
static_assert(sizeof(PartyIcon_C_Failed_Retry) == 0x000010, "Wrong size on PartyIcon_C_Failed_Retry");
static_assert(offsetof(PartyIcon_C_Failed_Retry, InString) == 0x000000, "Member 'PartyIcon_C_Failed_Retry::InString' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.CheckLeader
// 0x0080 (0x0080 - 0x0000)
struct PartyIcon_C_CheckLeader final
{
public:
	TArray<class USBPartyMemberState*>            TmpCurrentMember;                                  // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F47[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPartyLeader_ReturnValue;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F48[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetParty_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPartyType                                  CallFunc_GetPartyType_ReturnValue;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F49[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F4A[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F4B[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F4C[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F4D[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetCurrentPartyMember_OutPartyMembers;    // 0x0068(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetCurrentPartyMember_ReturnValue;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyIcon_C_CheckLeader) == 0x000008, "Wrong alignment on PartyIcon_C_CheckLeader");
static_assert(sizeof(PartyIcon_C_CheckLeader) == 0x000080, "Wrong size on PartyIcon_C_CheckLeader");
static_assert(offsetof(PartyIcon_C_CheckLeader, TmpCurrentMember) == 0x000000, "Member 'PartyIcon_C_CheckLeader::TmpCurrentMember' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, Temp_int_Array_Index_Variable) == 0x000010, "Member 'PartyIcon_C_CheckLeader::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, Temp_bool_True_if_break_was_hit_Variable) == 0x000014, "Member 'PartyIcon_C_CheckLeader::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'PartyIcon_C_CheckLeader::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_Array_Get_Item) == 0x000018, "Member 'PartyIcon_C_CheckLeader::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'PartyIcon_C_CheckLeader::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_IsPartyLeader_ReturnValue) == 0x000024, "Member 'PartyIcon_C_CheckLeader::CallFunc_IsPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_GetParty_ReturnValue) == 0x000028, "Member 'PartyIcon_C_CheckLeader::CallFunc_GetParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_GetPartyType_ReturnValue) == 0x000030, "Member 'PartyIcon_C_CheckLeader::CallFunc_GetPartyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_IsLocalPlayer_ReturnValue) == 0x000031, "Member 'PartyIcon_C_CheckLeader::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, K2Node_SwitchEnum_CmpSuccess) == 0x000032, "Member 'PartyIcon_C_CheckLeader::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'PartyIcon_C_CheckLeader::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'PartyIcon_C_CheckLeader::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'PartyIcon_C_CheckLeader::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'PartyIcon_C_CheckLeader::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000048, "Member 'PartyIcon_C_CheckLeader::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'PartyIcon_C_CheckLeader::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'PartyIcon_C_CheckLeader::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_GetValidPlayerState_ReturnValue) == 0x000058, "Member 'PartyIcon_C_CheckLeader::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000060, "Member 'PartyIcon_C_CheckLeader::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_GetCurrentPartyMember_OutPartyMembers) == 0x000068, "Member 'PartyIcon_C_CheckLeader::CallFunc_GetCurrentPartyMember_OutPartyMembers' has a wrong offset!");
static_assert(offsetof(PartyIcon_C_CheckLeader, CallFunc_GetCurrentPartyMember_ReturnValue) == 0x000078, "Member 'PartyIcon_C_CheckLeader::CallFunc_GetCurrentPartyMember_ReturnValue' has a wrong offset!");

// Function PartyIcon.PartyIcon_C.RequestSetIconColorName
// 0x0010 (0x0010 - 0x0000)
struct PartyIcon_C_RequestSetIconColorName final
{
public:
	class FString                                 ColorName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyIcon_C_RequestSetIconColorName) == 0x000008, "Wrong alignment on PartyIcon_C_RequestSetIconColorName");
static_assert(sizeof(PartyIcon_C_RequestSetIconColorName) == 0x000010, "Wrong size on PartyIcon_C_RequestSetIconColorName");
static_assert(offsetof(PartyIcon_C_RequestSetIconColorName, ColorName) == 0x000000, "Member 'PartyIcon_C_RequestSetIconColorName::ColorName' has a wrong offset!");

}

