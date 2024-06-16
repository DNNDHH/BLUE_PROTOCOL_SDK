#pragma once

 

// Package: BP_PlayerCharacter

#include "Basic.hpp"

#include "E_DamageReaction_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
// 0x0960 (0x0960 - 0x0000)
struct BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97D0[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97D1[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InOtherActor;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_ViewRotation;                         // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97D2[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97D3[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChatWindowVisible_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97D4[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character_1;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97D5[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97D6[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHandHoldingWait_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsJankenWait_ReturnValue;                 // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97D7[0x1];                                     // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerJointGestureInfo              CallFunc_GetJointGestureInfo_ReturnValue;          // 0x00AC(0x0014)(NoDestructor)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97D8[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_1;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97D9[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97DA[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character_2;        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97DB[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97DC[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97DD[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput;          // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_PreviousStateName;                    // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_NextStateName;                        // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97DE[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97DF[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_1;                     // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_InHitPosition;                        // 0x0198(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97E0[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InDamageCauser;                       // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_1;             // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97E1[0x3];                                     // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97E2[0x2];                                     // 0x01D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerMiniMapInfo                   K2Node_Event_Info;                                 // 0x01D4(0x000C)(ConstParm, NoDestructor)
	class FText                                   K2Node_Event_Name;                                 // 0x01E0(0x0018)(ConstParm)
	float                                         K2Node_InputAxisEvent_AxisValue_4;                 // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_InputAxisEvent_AxisValue_3;                 // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_InputAxisEvent_AxisValue_2;                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_InputAxisEvent_AxisValue_1;                 // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_InputAxisEvent_AxisValue;                   // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x020C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97E3[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue_1;            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97E4[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance_1;  // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97E5[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloat_ReturnValue;                     // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0244(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97E6[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloat_ReturnValue_1;                   // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97E7[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue_2;            // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97E8[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance_2;  // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97E9[0x3];                                     // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_2;          // 0x027C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97EA[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloat_ReturnValue_2;                   // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCameraComponent*               CallFunc_GetPlayerCameraComponent_ReturnValue;     // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerDamageCollisionTransformType         Temp_byte_Variable;                                // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x02A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x02A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x02A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97EB[0x1];                                     // 0x02A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_URL;                            // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Portal;                         // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBTravelOption                        K2Node_MakeStruct_SBTravelOption;                  // 0x02C8(0x0098)()
	bool                                          CallFunc_Request_ClientTravel_ReturnValue;         // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97EC[0x3];                                     // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0364(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebugMoveMode_ReturnValue;              // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0372(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97ED[0x5];                                     // 0x0373(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0378(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0388(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0390(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x039C(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	ESkillActionPosition                          K2Node_Event_Position;                             // 0x0424(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97EE[0x3];                                     // 0x0425(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Damage;                               // 0x042C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDamageType*                      K2Node_Event_DamageType;                           // 0x0430(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            K2Node_Event_InstigatedBy;                         // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser;                         // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0448(0x0010)(ZeroConstructor, NoDestructor)
	class UTargetCursor_C*                        CallFunc_Create_ReturnValue;                       // 0x0458(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0460(0x0010)(ZeroConstructor, NoDestructor)
	struct FKey                                   K2Node_InputActionEvent_Key;                       // 0x0470(0x0018)(HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97EF[0x4];                                     // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerMovementComponent*             K2Node_DynamicCast_AsSBPlayer_Movement_Component;  // 0x0490(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F0[0x3];                                     // 0x0499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x049C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x04A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWalking_ReturnValue;                    // 0x04A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F1[0x3];                                     // 0x04A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsVisible)>              K2Node_CreateDelegate_OutputDelegate_3;            // 0x04A8(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x04B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x04BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F2[0x3];                                     // 0x04BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x04C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x04C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x04C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x04CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x04CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x04CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;          // 0x04CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F3[0x2];                                     // 0x04CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputActionEvent_Key_1;                     // 0x04D0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x04E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_2;        // 0x04EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_3;        // 0x04EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F4[0x4];                                     // 0x04EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputKeyEvent_Key;                          // 0x04F0(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_InputKeyEvent_Key_1;                        // 0x0508(0x0018)(HasGetValueTypeHash)
	ESBWeaponEquipType                            K2Node_Event_EquipType;                            // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97F5[0x7];                                     // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputKeyEvent_Key_2;                        // 0x0528(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue;               // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F6[0x7];                                     // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F7[0x7];                                     // 0x0559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_HitActor;                             // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   Temp_struct_Variable;                              // 0x0570(0x0018)(HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_2;                     // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_4;        // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F8[0x7];                                     // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_2;             // 0x0598(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x05A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x05A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97F9[0x6];                                     // 0x05AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputActionEvent_Key_2;                     // 0x05B0(0x0018)(HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x05C8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanBattleCurrentMapLevel_ReturnValue;     // 0x05D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_5;        // 0x05DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97FA[0x5];                                     // 0x05DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_ExtraFoothold_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x05E0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x05F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97FB[0xC];                                     // 0x05F4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0600(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97FC[0x7];                                     // 0x0631(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0638(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ExtraFoothold_C*                    CallFunc_FinishSpawningActor_ReturnValue;          // 0x0640(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue_1;             // 0x0648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerDamageCollisionTransformType         K2Node_Event_TransformType;                        // 0x0649(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97FD[0x2];                                     // 0x064A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x064C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0658(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0664(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0670(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0674(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0678(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x067C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0688(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97FE[0xC];                                     // 0x0694(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x06A0(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             K2Node_Select_Default;                             // 0x06D0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsVisible;                     // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97FF[0x3];                                     // 0x0701(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0704(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0710(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x071C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult; // 0x0728(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_4;          // 0x07B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_6;        // 0x07B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_5;          // 0x07B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x07B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x07B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9800[0xB];                                     // 0x07B5(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x07C0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x07F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_CustomEvent_Rotation;                       // 0x07FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_WithFade;                       // 0x0808(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9801[0x3];                                     // 0x0809(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Delay;                          // 0x080C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TeleportTo_ReturnValue;                   // 0x0811(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TeleportTo_ReturnValue_1;                 // 0x0812(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDemoPlaying_ReturnValue;                // 0x0813(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDemoManager_IsValid;                   // 0x0814(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9802[0x3];                                     // 0x0815(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue;               // 0x0818(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0820(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9803[0x3];                                     // 0x0821(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_Location;                             // 0x0824(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_Rotation;                             // 0x0830(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWithFade;                            // 0x083C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9804[0x3];                                     // 0x083D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DelayTime;                            // 0x0840(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9805[0x4];                                     // 0x0844(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBScriptActor*                         CallFunc_GetActiveScriptActor_ReturnValue;         // 0x0848(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x0850(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9806[0x7];                                     // 0x0851(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBMount*                               CallFunc_GetImagineMount_ReturnValue;              // 0x0858(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x0860(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9807[0x3];                                     // 0x0861(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0864(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue_1;                      // 0x0870(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMovingOnGround_ReturnValue;             // 0x0874(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9808[0x3];                                     // 0x0875(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0878(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_2;         // 0x087C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9809[0x3];                                     // 0x087D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0880(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0884(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_3;         // 0x0888(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0889(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_980A[0x2];                                     // 0x088A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x088C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_980B[0x4];                                     // 0x0894(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0898(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShowPlaceGuide_bResult;                   // 0x08A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_980C[0x7];                                     // 0x08A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_C*                 K2Node_DynamicCast_AsBP_Player_Controller;         // 0x08A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_6;          // 0x08B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x08B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x08B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_980D[0x4];                                     // 0x08B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputActionEvent_Key_3;                     // 0x08B8(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_7;        // 0x08D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_980E[0x7];                                     // 0x08D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x08D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNamePlateWidget*                     K2Node_DynamicCast_AsSBName_Plate_Widget;          // 0x08E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x08E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_980F[0x7];                                     // 0x08E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x08F0(0x0010)(NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_1;            // 0x0900(0x0010)(NoDestructor)
	bool                                          CallFunc_IsFindByEnemy_ReturnValue;                // 0x0910(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0911(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0912(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSheathe_ReturnValue;                    // 0x0913(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x0914(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x0915(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0916(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9810[0x1];                                     // 0x0917(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_5;            // 0x0918(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0928(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentMapLevel_ReturnValue;            // 0x0929(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9811[0x6];                                     // 0x092A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_2;            // 0x0930(0x0010)(NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_3;            // 0x0940(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_22;                   // 0x0950(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter) == 0x000010, "Wrong alignment on BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter");
static_assert(sizeof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter) == 0x000960, "Wrong size on BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, EntryPoint) == 0x000000, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsDedicatedServer_ReturnValue) == 0x000014, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000018, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsBP_Player_Character) == 0x000020, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_InOtherActor) == 0x000030, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_ViewRotation) == 0x000038, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_ViewRotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetPlayerController_ReturnValue) == 0x000048, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000050, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000060, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsChatWindowVisible_ReturnValue) == 0x000068, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsChatWindowVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsBP_Player_Character_1) == 0x000070, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsBP_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetHUD_ReturnValue) == 0x000080, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000088, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_3) == 0x000098, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsSBPlayer_State) == 0x0000A0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_4) == 0x0000A8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsHandHoldingWait_ReturnValue) == 0x0000A9, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsHandHoldingWait_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsJankenWait_ReturnValue) == 0x0000AA, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsJankenWait_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetJointGestureInfo_ReturnValue) == 0x0000AC, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetJointGestureInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetSBPlayerState_ReturnValue) == 0x0000C0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000C8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue) == 0x0000C9, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Not_PreBool_ReturnValue) == 0x0000CA, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BooleanOR_ReturnValue) == 0x0000CB, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetSBPlayerState_ReturnValue_1) == 0x0000D0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetSBPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BooleanAND_ReturnValue) == 0x0000D8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BooleanAND_ReturnValue_1) == 0x0000D9, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x0000E0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0000E8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsBP_Player_Character_2) == 0x0000F0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsBP_Player_Character_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_5) == 0x0000F8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetUIManager_IsValid) == 0x0000F9, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetUIManager_ReturnValue) == 0x000100, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_1) == 0x000108, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetValidPlayerState_ReturnValue) == 0x000110, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_2) == 0x000118, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetCharacterName_self_CastInput) == 0x000120, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetCharacterName_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetCharacterName_ReturnValue) == 0x000130, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_PreviousStateName) == 0x000140, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_PreviousStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_NextStateName) == 0x000150, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_NextStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetAnimInstance_ReturnValue) == 0x000160, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetController_ReturnValue) == 0x000168, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000170, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_6) == 0x000178, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000180, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_7) == 0x000188, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetHUD_ReturnValue_1) == 0x000190, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_InHitPosition) == 0x000198, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_InHitPosition' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_InDamageCauser) == 0x0001A8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_InDamageCauser' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsBPI_Battle_HUD_1) == 0x0001B0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsBPI_Battle_HUD_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_8) == 0x0001C0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001C4, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_3) == 0x0001D0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_4) == 0x0001D1, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_Info) == 0x0001D4, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_Info' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_Name) == 0x0001E0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_Name' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputAxisEvent_AxisValue_4) == 0x0001F8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputAxisEvent_AxisValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputAxisEvent_AxisValue_3) == 0x0001FC, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputAxisEvent_AxisValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputAxisEvent_AxisValue_2) == 0x000200, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputAxisEvent_AxisValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputAxisEvent_AxisValue_1) == 0x000204, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputAxisEvent_AxisValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputAxisEvent_AxisValue) == 0x000208, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputAxisEvent_AxisValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Conv_StringToName_ReturnValue) == 0x00020C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetAnimInstance_ReturnValue_1) == 0x000218, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetAnimInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetDebugFunction_IsValid) == 0x000220, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetDebugFunction_ReturnValue) == 0x000228, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsSBCharacter_Anim_Instance_1) == 0x000230, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsSBCharacter_Anim_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_9) == 0x000238, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetFloat_ReturnValue) == 0x00023C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000240, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000244, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetDebugFunction_IsValid_1) == 0x00024C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetDebugFunction_ReturnValue_1) == 0x000250, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetFloat_ReturnValue_1) == 0x000258, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetAnimInstance_ReturnValue_2) == 0x000260, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetAnimInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000268, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsSBCharacter_Anim_Instance_2) == 0x000270, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsSBCharacter_Anim_Instance_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_10) == 0x000278, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Conv_StringToName_ReturnValue_2) == 0x00027C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Conv_StringToName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetDebugFunction_IsValid_2) == 0x000284, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetDebugFunction_ReturnValue_2) == 0x000288, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetFloat_ReturnValue_2) == 0x000290, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000294, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetPlayerCameraComponent_ReturnValue) == 0x000298, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetPlayerCameraComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, Temp_byte_Variable) == 0x0002A0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_5) == 0x0002A1, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_6) == 0x0002A2, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_7) == 0x0002A3, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_8) == 0x0002A4, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_9) == 0x0002A5, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_10) == 0x0002A6, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CustomEvent_URL) == 0x0002A8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CustomEvent_Portal) == 0x0002B8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CustomEvent_Portal' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_MakeStruct_SBTravelOption) == 0x0002C8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_MakeStruct_SBTravelOption' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Request_ClientTravel_ReturnValue) == 0x000360, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Request_ClientTravel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000364, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsDebugMoveMode_ReturnValue) == 0x000370, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsDebugMoveMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsLocallyControlled_ReturnValue) == 0x000371, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000372, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_ComponentBoundEvent_HitComponent) == 0x000378, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_ComponentBoundEvent_OtherActor) == 0x000380, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_ComponentBoundEvent_OtherComp) == 0x000388, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000390, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_ComponentBoundEvent_Hit) == 0x00039C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_Position) == 0x000424, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_Position' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_DeltaSeconds) == 0x000428, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_Damage) == 0x00042C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_DamageType) == 0x000430, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_DamageType' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_InstigatedBy) == 0x000438, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_DamageCauser) == 0x000440, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CreateDelegate_OutputDelegate_1) == 0x000448, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Create_ReturnValue) == 0x000458, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CreateDelegate_OutputDelegate_2) == 0x000460, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputActionEvent_Key) == 0x000470, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputActionEvent_Key' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_DeltaTime) == 0x000488, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsSBPlayer_Movement_Component) == 0x000490, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsSBPlayer_Movement_Component' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_11) == 0x000498, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Add_FloatFloat_ReturnValue) == 0x00049C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_VSize_ReturnValue) == 0x0004A0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsWalking_ReturnValue) == 0x0004A4, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsWalking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CreateDelegate_OutputDelegate_3) == 0x0004A8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0004B8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0004BC, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0004C0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_FClamp_ReturnValue) == 0x0004C4, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x0004C8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BooleanAND_ReturnValue_2) == 0x0004C9, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x0004CA, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_11) == 0x0004CB, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_12) == 0x0004CC, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsDedicatedServer_ReturnValue_3) == 0x0004CD, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsDedicatedServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputActionEvent_Key_1) == 0x0004D0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputActionEvent_Key_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_13) == 0x0004E8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x0004E9, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsLocallyControlled_ReturnValue_2) == 0x0004EA, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsLocallyControlled_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsLocallyControlled_ReturnValue_3) == 0x0004EB, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsLocallyControlled_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputKeyEvent_Key) == 0x0004F0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputKeyEvent_Key' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputKeyEvent_Key_1) == 0x000508, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputKeyEvent_Key_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_EquipType) == 0x000520, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_EquipType' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputKeyEvent_Key_2) == 0x000528, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputKeyEvent_Key_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsPlayInEditor_ReturnValue) == 0x000540, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsPlayInEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetGameState_ReturnValue) == 0x000548, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000550, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_12) == 0x000558, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_HitActor) == 0x000560, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_HitActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetPlayerController_ReturnValue_1) == 0x000568, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, Temp_struct_Variable) == 0x000570, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetHUD_ReturnValue_2) == 0x000588, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetHUD_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsLocallyControlled_ReturnValue_4) == 0x000590, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsLocallyControlled_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsBPI_Battle_HUD_2) == 0x000598, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsBPI_Battle_HUD_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_13) == 0x0005A8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_14) == 0x0005A9, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputActionEvent_Key_2) == 0x0005B0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputActionEvent_Key_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CreateDelegate_OutputDelegate_4) == 0x0005C8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_15) == 0x0005D8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_CanBattleCurrentMapLevel_ReturnValue) == 0x0005D9, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_CanBattleCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsLocallyControlled_ReturnValue_5) == 0x0005DA, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsLocallyControlled_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetAllActorsOfClass_OutActors) == 0x0005E0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Array_Length_ReturnValue) == 0x0005F0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_MakeTransform_ReturnValue) == 0x000600, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000630, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000638, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_FinishSpawningActor_ReturnValue) == 0x000640, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsPlayInEditor_ReturnValue_1) == 0x000648, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsPlayInEditor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_TransformType) == 0x000649, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_TransformType' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BreakTransform_Location) == 0x00064C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BreakTransform_Rotation) == 0x000658, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BreakTransform_Scale) == 0x000664, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BreakRotator_Roll) == 0x000670, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BreakRotator_Pitch) == 0x000674, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BreakRotator_Yaw) == 0x000678, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_MakeVector_ReturnValue) == 0x00067C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_MakeRotator_ReturnValue) == 0x000688, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_MakeTransform_ReturnValue_1) == 0x0006A0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Select_Default) == 0x0006D0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CustomEvent_bIsVisible) == 0x000700, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CustomEvent_bIsVisible' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BreakTransform_Location_1) == 0x000704, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BreakTransform_Rotation_1) == 0x000710, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BreakTransform_Scale_1) == 0x00071C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult) == 0x000728, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsDedicatedServer_ReturnValue_4) == 0x0007B0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsDedicatedServer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsLocallyControlled_ReturnValue_6) == 0x0007B1, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsLocallyControlled_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsDedicatedServer_ReturnValue_5) == 0x0007B2, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsDedicatedServer_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_16) == 0x0007B3, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_17) == 0x0007B4, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetRelativeTransform_ReturnValue) == 0x0007C0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CustomEvent_Location) == 0x0007F0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CustomEvent_Rotation) == 0x0007FC, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CustomEvent_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CustomEvent_WithFade) == 0x000808, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CustomEvent_WithFade' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CustomEvent_Delay) == 0x00080C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CustomEvent_Delay' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsServer_ReturnValue) == 0x000810, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_TeleportTo_ReturnValue) == 0x000811, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_TeleportTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_TeleportTo_ReturnValue_1) == 0x000812, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_TeleportTo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsDemoPlaying_ReturnValue) == 0x000813, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsDemoPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetDemoManager_IsValid) == 0x000814, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetDemoManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetDemoManager_ReturnValue) == 0x000818, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetDemoManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BooleanAND_ReturnValue_3) == 0x000820, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_Location) == 0x000824, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_Rotation) == 0x000830, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_bWithFade) == 0x00083C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_bWithFade' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_Event_DelayTime) == 0x000840, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_Event_DelayTime' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetActiveScriptActor_ReturnValue) == 0x000848, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetActiveScriptActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_18) == 0x000850, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetImagineMount_ReturnValue) == 0x000858, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetImagineMount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_19) == 0x000860, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetVelocity_ReturnValue) == 0x000864, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_VSize_ReturnValue_1) == 0x000870, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsMovingOnGround_ReturnValue) == 0x000874, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsMovingOnGround_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000878, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Greater_FloatFloat_ReturnValue_2) == 0x00087C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Greater_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000880, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_FClamp_ReturnValue_1) == 0x000884, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Greater_FloatFloat_ReturnValue_3) == 0x000888, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Greater_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BooleanAND_ReturnValue_4) == 0x000889, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x00088C, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetController_ReturnValue_1) == 0x000898, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_ShowPlaceGuide_bResult) == 0x0008A0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_ShowPlaceGuide_bResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsBP_Player_Controller) == 0x0008A8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsBP_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_14) == 0x0008B0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsDedicatedServer_ReturnValue_6) == 0x0008B1, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsDedicatedServer_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_20) == 0x0008B2, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, Temp_bool_Has_Been_Initd_Variable) == 0x0008B3, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_InputActionEvent_Key_3) == 0x0008B8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_InputActionEvent_Key_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsLocallyControlled_ReturnValue_7) == 0x0008D0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsLocallyControlled_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_GetUserWidgetObject_ReturnValue) == 0x0008D8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_AsSBName_Plate_Widget) == 0x0008E0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_AsSBName_Plate_Widget' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_DynamicCast_bSuccess_15) == 0x0008E8, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_MakeStruct_DataTableRowHandle) == 0x0008F0, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_MakeStruct_DataTableRowHandle_1) == 0x000900, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_MakeStruct_DataTableRowHandle_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsFindByEnemy_ReturnValue) == 0x000910, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsFindByEnemy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Greater_IntInt_ReturnValue) == 0x000911, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_Not_PreBool_ReturnValue_1) == 0x000912, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsSheathe_ReturnValue) == 0x000913, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsSheathe_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_BooleanAND_ReturnValue_5) == 0x000914, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_21) == 0x000915, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, Temp_bool_IsClosed_Variable) == 0x000916, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CreateDelegate_OutputDelegate_5) == 0x000918, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_CustomEvent_Result) == 0x000928, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsCurrentMapLevel_ReturnValue) == 0x000929, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_MakeStruct_DataTableRowHandle_2) == 0x000930, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_MakeStruct_DataTableRowHandle_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, K2Node_MakeStruct_DataTableRowHandle_3) == 0x000940, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::K2Node_MakeStruct_DataTableRowHandle_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter, CallFunc_IsValid_ReturnValue_22) == 0x000950, "Member 'BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerDeactivateGodMode
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerCharacter_C_OnPlayerDeactivateGodMode final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_OnPlayerDeactivateGodMode) == 0x000001, "Wrong alignment on BP_PlayerCharacter_C_OnPlayerDeactivateGodMode");
static_assert(sizeof(BP_PlayerCharacter_C_OnPlayerDeactivateGodMode) == 0x000001, "Wrong size on BP_PlayerCharacter_C_OnPlayerDeactivateGodMode");
static_assert(offsetof(BP_PlayerCharacter_C_OnPlayerDeactivateGodMode, Result) == 0x000000, "Member 'BP_PlayerCharacter_C_OnPlayerDeactivateGodMode::Result' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportWithDelay
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerCharacter_C_TeleportWithDelay final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bWithFade;                                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9812[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DelayTime;                                         // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_TeleportWithDelay) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_TeleportWithDelay");
static_assert(sizeof(BP_PlayerCharacter_C_TeleportWithDelay) == 0x000020, "Wrong size on BP_PlayerCharacter_C_TeleportWithDelay");
static_assert(offsetof(BP_PlayerCharacter_C_TeleportWithDelay, Location) == 0x000000, "Member 'BP_PlayerCharacter_C_TeleportWithDelay::Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_TeleportWithDelay, Rotation) == 0x00000C, "Member 'BP_PlayerCharacter_C_TeleportWithDelay::Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_TeleportWithDelay, bWithFade) == 0x000018, "Member 'BP_PlayerCharacter_C_TeleportWithDelay::bWithFade' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_TeleportWithDelay, DelayTime) == 0x00001C, "Member 'BP_PlayerCharacter_C_TeleportWithDelay::DelayTime' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportWithDelayImpl
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerCharacter_C_TeleportWithDelayImpl final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          WithFade;                                          // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9813[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Delay;                                             // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_TeleportWithDelayImpl) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_TeleportWithDelayImpl");
static_assert(sizeof(BP_PlayerCharacter_C_TeleportWithDelayImpl) == 0x000020, "Wrong size on BP_PlayerCharacter_C_TeleportWithDelayImpl");
static_assert(offsetof(BP_PlayerCharacter_C_TeleportWithDelayImpl, Location) == 0x000000, "Member 'BP_PlayerCharacter_C_TeleportWithDelayImpl::Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_TeleportWithDelayImpl, Rotation) == 0x00000C, "Member 'BP_PlayerCharacter_C_TeleportWithDelayImpl::Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_TeleportWithDelayImpl, WithFade) == 0x000018, "Member 'BP_PlayerCharacter_C_TeleportWithDelayImpl::WithFade' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_TeleportWithDelayImpl, Delay) == 0x00001C, "Member 'BP_PlayerCharacter_C_TeleportWithDelayImpl::Delay' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CustomEvent
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerCharacter_C_CustomEvent final
{
public:
	bool                                          bIsVisible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_CustomEvent) == 0x000001, "Wrong alignment on BP_PlayerCharacter_C_CustomEvent");
static_assert(sizeof(BP_PlayerCharacter_C_CustomEvent) == 0x000001, "Wrong size on BP_PlayerCharacter_C_CustomEvent");
static_assert(offsetof(BP_PlayerCharacter_C_CustomEvent, bIsVisible) == 0x000000, "Member 'BP_PlayerCharacter_C_CustomEvent::bIsVisible' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDamageCollisionTransformType
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerCharacter_C_SetDamageCollisionTransformType final
{
public:
	ESBPlayerDamageCollisionTransformType         TransformType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_SetDamageCollisionTransformType) == 0x000001, "Wrong alignment on BP_PlayerCharacter_C_SetDamageCollisionTransformType");
static_assert(sizeof(BP_PlayerCharacter_C_SetDamageCollisionTransformType) == 0x000001, "Wrong size on BP_PlayerCharacter_C_SetDamageCollisionTransformType");
static_assert(offsetof(BP_PlayerCharacter_C_SetDamageCollisionTransformType, TransformType) == 0x000000, "Member 'BP_PlayerCharacter_C_SetDamageCollisionTransformType::TransformType' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLastHitActorInfo
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerCharacter_C_OnLastHitActorInfo final
{
public:
	class AActor*                                 HitActor;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_OnLastHitActorInfo) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_OnLastHitActorInfo");
static_assert(sizeof(BP_PlayerCharacter_C_OnLastHitActorInfo) == 0x000008, "Wrong size on BP_PlayerCharacter_C_OnLastHitActorInfo");
static_assert(offsetof(BP_PlayerCharacter_C_OnLastHitActorInfo, HitActor) == 0x000000, "Member 'BP_PlayerCharacter_C_OnLastHitActorInfo::HitActor' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnsheatheByEquipType
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerCharacter_C_ReceiveUnsheatheByEquipType final
{
public:
	ESBWeaponEquipType                            EquipType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_ReceiveUnsheatheByEquipType) == 0x000001, "Wrong alignment on BP_PlayerCharacter_C_ReceiveUnsheatheByEquipType");
static_assert(sizeof(BP_PlayerCharacter_C_ReceiveUnsheatheByEquipType) == 0x000001, "Wrong size on BP_PlayerCharacter_C_ReceiveUnsheatheByEquipType");
static_assert(offsetof(BP_PlayerCharacter_C_ReceiveUnsheatheByEquipType, EquipType) == 0x000000, "Member 'BP_PlayerCharacter_C_ReceiveUnsheatheByEquipType::EquipType' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickMovingNoise
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerCharacter_C_TickMovingNoise final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_TickMovingNoise) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_TickMovingNoise");
static_assert(sizeof(BP_PlayerCharacter_C_TickMovingNoise) == 0x000004, "Wrong size on BP_PlayerCharacter_C_TickMovingNoise");
static_assert(offsetof(BP_PlayerCharacter_C_TickMovingNoise, DeltaTime) == 0x000000, "Member 'BP_PlayerCharacter_C_TickMovingNoise::DeltaTime' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveAnyDamage
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerCharacter_C_ReceiveAnyDamage final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9814[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      DamageType;                                        // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            InstigatedBy;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_ReceiveAnyDamage) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_ReceiveAnyDamage");
static_assert(sizeof(BP_PlayerCharacter_C_ReceiveAnyDamage) == 0x000020, "Wrong size on BP_PlayerCharacter_C_ReceiveAnyDamage");
static_assert(offsetof(BP_PlayerCharacter_C_ReceiveAnyDamage, Damage) == 0x000000, "Member 'BP_PlayerCharacter_C_ReceiveAnyDamage::Damage' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ReceiveAnyDamage, DamageType) == 0x000008, "Member 'BP_PlayerCharacter_C_ReceiveAnyDamage::DamageType' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ReceiveAnyDamage, InstigatedBy) == 0x000010, "Member 'BP_PlayerCharacter_C_ReceiveAnyDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ReceiveAnyDamage, DamageCauser) == 0x000018, "Member 'BP_PlayerCharacter_C_ReceiveAnyDamage::DamageCauser' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerCharacter_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_ReceiveTick");
static_assert(sizeof(BP_PlayerCharacter_C_ReceiveTick) == 0x000004, "Wrong size on BP_PlayerCharacter_C_ReceiveTick");
static_assert(offsetof(BP_PlayerCharacter_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PlayerCharacter_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCastSkill
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerCharacter_C_OnCastSkill final
{
public:
	ESkillActionPosition                          Position;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_OnCastSkill) == 0x000001, "Wrong alignment on BP_PlayerCharacter_C_OnCastSkill");
static_assert(sizeof(BP_PlayerCharacter_C_OnCastSkill) == 0x000001, "Wrong size on BP_PlayerCharacter_C_OnCastSkill");
static_assert(offsetof(BP_PlayerCharacter_C_OnCastSkill, Position) == 0x000000, "Member 'BP_PlayerCharacter_C_OnCastSkill::Position' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0024(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000024, "Member 'BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryClientTravelWithFadeout
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerCharacter_C_TryClientTravelWithFadeout final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Portal;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_TryClientTravelWithFadeout) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_TryClientTravelWithFadeout");
static_assert(sizeof(BP_PlayerCharacter_C_TryClientTravelWithFadeout) == 0x000020, "Wrong size on BP_PlayerCharacter_C_TryClientTravelWithFadeout");
static_assert(offsetof(BP_PlayerCharacter_C_TryClientTravelWithFadeout, URL) == 0x000000, "Member 'BP_PlayerCharacter_C_TryClientTravelWithFadeout::URL' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_TryClientTravelWithFadeout, Portal) == 0x000010, "Member 'BP_PlayerCharacter_C_TryClientTravelWithFadeout::Portal' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20");
static_assert(sizeof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20) == 0x000004, "Wrong size on BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20");
static_assert(offsetof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20, AxisValue) == 0x000000, "Member 'BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20::AxisValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17");
static_assert(sizeof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17) == 0x000004, "Wrong size on BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17");
static_assert(offsetof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17, AxisValue) == 0x000000, "Member 'BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17::AxisValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12");
static_assert(sizeof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12) == 0x000004, "Wrong size on BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12");
static_assert(offsetof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12, AxisValue) == 0x000000, "Member 'BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12::AxisValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8");
static_assert(sizeof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8) == 0x000004, "Wrong size on BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8");
static_assert(offsetof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8, AxisValue) == 0x000000, "Member 'BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8::AxisValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5");
static_assert(sizeof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5) == 0x000004, "Wrong size on BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5");
static_assert(offsetof(BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5, AxisValue) == 0x000000, "Member 'BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5::AxisValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeadNotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCharacter_C_OnDeadNotifyMessage final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PlayerCharacter_C_OnDeadNotifyMessage) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_OnDeadNotifyMessage");
static_assert(sizeof(BP_PlayerCharacter_C_OnDeadNotifyMessage) == 0x000018, "Wrong size on BP_PlayerCharacter_C_OnDeadNotifyMessage");
static_assert(offsetof(BP_PlayerCharacter_C_OnDeadNotifyMessage, Param_Name) == 0x000000, "Member 'BP_PlayerCharacter_C_OnDeadNotifyMessage::Param_Name' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetInitialMiniMapInfo
// 0x000C (0x000C - 0x0000)
struct BP_PlayerCharacter_C_OnSetInitialMiniMapInfo final
{
public:
	struct FSBPlayerMiniMapInfo                   Info;                                              // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_OnSetInitialMiniMapInfo) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_OnSetInitialMiniMapInfo");
static_assert(sizeof(BP_PlayerCharacter_C_OnSetInitialMiniMapInfo) == 0x00000C, "Wrong size on BP_PlayerCharacter_C_OnSetInitialMiniMapInfo");
static_assert(offsetof(BP_PlayerCharacter_C_OnSetInitialMiniMapInfo, Info) == 0x000000, "Member 'BP_PlayerCharacter_C_OnSetInitialMiniMapInfo::Info' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowHitIndicator
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCharacter_C_ShowHitIndicator final
{
public:
	struct FVector                                InHitPosition;                                     // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9815[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 InDamageCauser;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_ShowHitIndicator) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_ShowHitIndicator");
static_assert(sizeof(BP_PlayerCharacter_C_ShowHitIndicator) == 0x000018, "Wrong size on BP_PlayerCharacter_C_ShowHitIndicator");
static_assert(offsetof(BP_PlayerCharacter_C_ShowHitIndicator, InHitPosition) == 0x000000, "Member 'BP_PlayerCharacter_C_ShowHitIndicator::InHitPosition' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ShowHitIndicator, InDamageCauser) == 0x000010, "Member 'BP_PlayerCharacter_C_ShowHitIndicator::InDamageCauser' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveStateChange
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerCharacter_C_ReceiveStateChange final
{
public:
	class FString                                 PreviousStateName;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 NextStateName;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_ReceiveStateChange) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_ReceiveStateChange");
static_assert(sizeof(BP_PlayerCharacter_C_ReceiveStateChange) == 0x000020, "Wrong size on BP_PlayerCharacter_C_ReceiveStateChange");
static_assert(offsetof(BP_PlayerCharacter_C_ReceiveStateChange, PreviousStateName) == 0x000000, "Member 'BP_PlayerCharacter_C_ReceiveStateChange::PreviousStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ReceiveStateChange, NextStateName) == 0x000010, "Member 'BP_PlayerCharacter_C_ReceiveStateChange::NextStateName' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnInteraction
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCharacter_C_OnInteraction final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_OnInteraction) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_OnInteraction");
static_assert(sizeof(BP_PlayerCharacter_C_OnInteraction) == 0x000018, "Wrong size on BP_PlayerCharacter_C_OnInteraction");
static_assert(offsetof(BP_PlayerCharacter_C_OnInteraction, InOtherActor) == 0x000000, "Member 'BP_PlayerCharacter_C_OnInteraction::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OnInteraction, ViewRotation) == 0x000008, "Member 'BP_PlayerCharacter_C_OnInteraction::ViewRotation' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCharacter_C_InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0");
static_assert(sizeof(BP_PlayerCharacter_C_InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0) == 0x000018, "Wrong size on BP_PlayerCharacter_C_InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0");
static_assert(offsetof(BP_PlayerCharacter_C_InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0, Key) == 0x000000, "Member 'BP_PlayerCharacter_C_InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0::Key' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_DebugMenu_K2Node_InputActionEvent_1
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCharacter_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_1 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_1) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_1");
static_assert(sizeof(BP_PlayerCharacter_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_1) == 0x000018, "Wrong size on BP_PlayerCharacter_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_1");
static_assert(offsetof(BP_PlayerCharacter_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_1, Key) == 0x000000, "Member 'BP_PlayerCharacter_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_1::Key' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_0
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCharacter_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_0) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_0");
static_assert(sizeof(BP_PlayerCharacter_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_0) == 0x000018, "Wrong size on BP_PlayerCharacter_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_0");
static_assert(offsetof(BP_PlayerCharacter_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_0, Key) == 0x000000, "Member 'BP_PlayerCharacter_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_0::Key' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCharacter_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1");
static_assert(sizeof(BP_PlayerCharacter_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1) == 0x000018, "Wrong size on BP_PlayerCharacter_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1");
static_assert(offsetof(BP_PlayerCharacter_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1, Key) == 0x000000, "Member 'BP_PlayerCharacter_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1::Key' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_2
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCharacter_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_2 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_2) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_2");
static_assert(sizeof(BP_PlayerCharacter_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_2) == 0x000018, "Wrong size on BP_PlayerCharacter_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_2");
static_assert(offsetof(BP_PlayerCharacter_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_2, Key) == 0x000000, "Member 'BP_PlayerCharacter_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_2::Key' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2");
static_assert(sizeof(BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2) == 0x000018, "Wrong size on BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2");
static_assert(offsetof(BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2, Key) == 0x000000, "Member 'BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2::Key' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3");
static_assert(sizeof(BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3) == 0x000018, "Wrong size on BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3");
static_assert(offsetof(BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3, Key) == 0x000000, "Member 'BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3::Key' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHairMaterial
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerCharacter_C_UpdateHairMaterial final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_UpdateHairMaterial) == 0x000001, "Wrong alignment on BP_PlayerCharacter_C_UpdateHairMaterial");
static_assert(sizeof(BP_PlayerCharacter_C_UpdateHairMaterial) == 0x000001, "Wrong size on BP_PlayerCharacter_C_UpdateHairMaterial");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateHairMaterial, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PlayerCharacter_C_UpdateHairMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Sheathe
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerCharacter_C_Sheathe final
{
public:
	bool                                          CallFunc_IsCurrentMapLevel_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFindByEnemy_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9816[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0008(0x0010)(NoDestructor)
	bool                                          CallFunc_IsSheathe_ReturnValue;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_Sheathe) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_Sheathe");
static_assert(sizeof(BP_PlayerCharacter_C_Sheathe) == 0x000020, "Wrong size on BP_PlayerCharacter_C_Sheathe");
static_assert(offsetof(BP_PlayerCharacter_C_Sheathe, CallFunc_IsCurrentMapLevel_ReturnValue) == 0x000000, "Member 'BP_PlayerCharacter_C_Sheathe::CallFunc_IsCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Sheathe, CallFunc_IsFindByEnemy_ReturnValue) == 0x000001, "Member 'BP_PlayerCharacter_C_Sheathe::CallFunc_IsFindByEnemy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Sheathe, CallFunc_Greater_IntInt_ReturnValue) == 0x000002, "Member 'BP_PlayerCharacter_C_Sheathe::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Sheathe, K2Node_MakeStruct_DataTableRowHandle) == 0x000008, "Member 'BP_PlayerCharacter_C_Sheathe::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Sheathe, CallFunc_IsSheathe_ReturnValue) == 0x000018, "Member 'BP_PlayerCharacter_C_Sheathe::CallFunc_IsSheathe_ReturnValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateAtGatheringPopup
// 0x0130 (0x0130 - 0x0000)
struct BP_PlayerCharacter_C_UpdateAtGatheringPopup final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0030)(IsPlainOldData, NoDestructor)
	class UWidgetComponent*                       CallFunc_AddComponent_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9817[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0098(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UAtGatheringPopup_C*                    CallFunc_Create_ReturnValue;                       // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_UpdateAtGatheringPopup) == 0x000010, "Wrong alignment on BP_PlayerCharacter_C_UpdateAtGatheringPopup");
static_assert(sizeof(BP_PlayerCharacter_C_UpdateAtGatheringPopup) == 0x000130, "Wrong size on BP_PlayerCharacter_C_UpdateAtGatheringPopup");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_AddComponent_ReturnValue) == 0x000030, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000038, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000048, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000050, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_GetCameraLocation_ReturnValue) == 0x00005C, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_BreakRotator_Roll) == 0x000068, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_BreakRotator_Pitch) == 0x00006C, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_BreakRotator_Yaw) == 0x000070, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_FindLookAtRotation_ReturnValue) == 0x000074, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_BreakRotator_Roll_1) == 0x000080, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_BreakRotator_Pitch_1) == 0x000084, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_BreakRotator_Yaw_1) == 0x000088, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_MakeRotator_ReturnValue) == 0x00008C, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000098, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_Create_ReturnValue) == 0x000120, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_IsValid_ReturnValue) == 0x000128, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UpdateAtGatheringPopup, CallFunc_IsValid_ReturnValue_1) == 0x000129, "Member 'BP_PlayerCharacter_C_UpdateAtGatheringPopup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableAtGatheringPopup
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerCharacter_C_EnableAtGatheringPopup final
{
public:
	bool                                          IsEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_EnableAtGatheringPopup) == 0x000001, "Wrong alignment on BP_PlayerCharacter_C_EnableAtGatheringPopup");
static_assert(sizeof(BP_PlayerCharacter_C_EnableAtGatheringPopup) == 0x000001, "Wrong size on BP_PlayerCharacter_C_EnableAtGatheringPopup");
static_assert(offsetof(BP_PlayerCharacter_C_EnableAtGatheringPopup, IsEnabled) == 0x000000, "Member 'BP_PlayerCharacter_C_EnableAtGatheringPopup::IsEnabled' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeLifeGaugeColor
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerCharacter_C_ChangeLifeGaugeColor final
{
public:
	bool                                          IsHealChainColor;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9818[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerNamePlate_C*                     K2Node_DynamicCast_AsPlayer_Name_Plate;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_ChangeLifeGaugeColor) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_ChangeLifeGaugeColor");
static_assert(sizeof(BP_PlayerCharacter_C_ChangeLifeGaugeColor) == 0x000020, "Wrong size on BP_PlayerCharacter_C_ChangeLifeGaugeColor");
static_assert(offsetof(BP_PlayerCharacter_C_ChangeLifeGaugeColor, IsHealChainColor) == 0x000000, "Member 'BP_PlayerCharacter_C_ChangeLifeGaugeColor::IsHealChainColor' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ChangeLifeGaugeColor, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'BP_PlayerCharacter_C_ChangeLifeGaugeColor::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ChangeLifeGaugeColor, K2Node_DynamicCast_AsPlayer_Name_Plate) == 0x000010, "Member 'BP_PlayerCharacter_C_ChangeLifeGaugeColor::K2Node_DynamicCast_AsPlayer_Name_Plate' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_ChangeLifeGaugeColor, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PlayerCharacter_C_ChangeLifeGaugeColor::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OpenOtherPCMenu
// 0x0058 (0x0058 - 0x0000)
struct BP_PlayerCharacter_C_OpenOtherPCMenu final
{
public:
	class ASBPlayerCharacter*                     InOtherPC;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TempPlayerName;                                    // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UOtherPCMenu_C*                         CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9819[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_981A[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_OpenOtherPCMenu) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_OpenOtherPCMenu");
static_assert(sizeof(BP_PlayerCharacter_C_OpenOtherPCMenu) == 0x000058, "Wrong size on BP_PlayerCharacter_C_OpenOtherPCMenu");
static_assert(offsetof(BP_PlayerCharacter_C_OpenOtherPCMenu, InOtherPC) == 0x000000, "Member 'BP_PlayerCharacter_C_OpenOtherPCMenu::InOtherPC' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OpenOtherPCMenu, TempPlayerName) == 0x000008, "Member 'BP_PlayerCharacter_C_OpenOtherPCMenu::TempPlayerName' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OpenOtherPCMenu, CallFunc_Create_ReturnValue) == 0x000018, "Member 'BP_PlayerCharacter_C_OpenOtherPCMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OpenOtherPCMenu, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PlayerCharacter_C_OpenOtherPCMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OpenOtherPCMenu, CallFunc_GetValidPlayerState_ReturnValue) == 0x000028, "Member 'BP_PlayerCharacter_C_OpenOtherPCMenu::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OpenOtherPCMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_PlayerCharacter_C_OpenOtherPCMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OpenOtherPCMenu, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_PlayerCharacter_C_OpenOtherPCMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OpenOtherPCMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'BP_PlayerCharacter_C_OpenOtherPCMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugPrintEquipWeapon
// 0x00B8 (0x00B8 - 0x0000)
struct BP_PlayerCharacter_C_DebugPrintEquipWeapon final
{
public:
	class FString                                 OutputString;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_981B[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBEquipWeapon>                 CallFunc_GetEquipWeapons_ReturnValue;              // 0x0020(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEquipWeapon                         CallFunc_Array_Get_Item;                           // 0x003C(0x002C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_981C[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_981D[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_DebugPrintEquipWeapon) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_DebugPrintEquipWeapon");
static_assert(sizeof(BP_PlayerCharacter_C_DebugPrintEquipWeapon) == 0x0000B8, "Wrong size on BP_PlayerCharacter_C_DebugPrintEquipWeapon");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, OutputString) == 0x000000, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::OutputString' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_GetEquipWeapons_ReturnValue) == 0x000020, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_GetEquipWeapons_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_Array_Get_Item) == 0x00003C, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_Concat_StrStr_ReturnValue) == 0x000080, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000090, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_IsLocallyControlled_ReturnValue) == 0x0000A0, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DebugPrintEquipWeapon, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000A8, "Member 'BP_PlayerCharacter_C_DebugPrintEquipWeapon::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSocketOffset
// 0x0054 (0x0054 - 0x0000)
struct BP_PlayerCharacter_C_GetSocketOffset final
{
public:
	class FName                                   SocketName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x0008(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_981E[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_GetSocketOffset) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_GetSocketOffset");
static_assert(sizeof(BP_PlayerCharacter_C_GetSocketOffset) == 0x000054, "Wrong size on BP_PlayerCharacter_C_GetSocketOffset");
static_assert(offsetof(BP_PlayerCharacter_C_GetSocketOffset, SocketName) == 0x000000, "Member 'BP_PlayerCharacter_C_GetSocketOffset::SocketName' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetSocketOffset, Offset) == 0x000008, "Member 'BP_PlayerCharacter_C_GetSocketOffset::Offset' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetSocketOffset, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'BP_PlayerCharacter_C_GetSocketOffset::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetSocketOffset, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000020, "Member 'BP_PlayerCharacter_C_GetSocketOffset::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetSocketOffset, CallFunc_GetSocketLocation_ReturnValue) == 0x00002C, "Member 'BP_PlayerCharacter_C_GetSocketOffset::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetSocketOffset, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_PlayerCharacter_C_GetSocketOffset::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetSocketOffset, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00003C, "Member 'BP_PlayerCharacter_C_GetSocketOffset::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetSocketOffset, CallFunc_LessLess_VectorRotator_ReturnValue) == 0x000048, "Member 'BP_PlayerCharacter_C_GetSocketOffset::CallFunc_LessLess_VectorRotator_ReturnValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponSocketOffset
// 0x0060 (0x0060 - 0x0000)
struct BP_PlayerCharacter_C_GetWeaponSocketOffset final
{
public:
	class FName                                   SocketName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x0008(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_981F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBWeapon*                              CallFunc_GetWeaponByInventoryIndex_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9820[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_GetWeaponSocketOffset) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_GetWeaponSocketOffset");
static_assert(sizeof(BP_PlayerCharacter_C_GetWeaponSocketOffset) == 0x000060, "Wrong size on BP_PlayerCharacter_C_GetWeaponSocketOffset");
static_assert(offsetof(BP_PlayerCharacter_C_GetWeaponSocketOffset, SocketName) == 0x000000, "Member 'BP_PlayerCharacter_C_GetWeaponSocketOffset::SocketName' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetWeaponSocketOffset, Offset) == 0x000008, "Member 'BP_PlayerCharacter_C_GetWeaponSocketOffset::Offset' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetWeaponSocketOffset, CallFunc_GetWeaponByInventoryIndex_ReturnValue) == 0x000018, "Member 'BP_PlayerCharacter_C_GetWeaponSocketOffset::CallFunc_GetWeaponByInventoryIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetWeaponSocketOffset, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_PlayerCharacter_C_GetWeaponSocketOffset::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetWeaponSocketOffset, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'BP_PlayerCharacter_C_GetWeaponSocketOffset::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetWeaponSocketOffset, CallFunc_GetSocketLocation_ReturnValue) == 0x000030, "Member 'BP_PlayerCharacter_C_GetWeaponSocketOffset::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetWeaponSocketOffset, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00003C, "Member 'BP_PlayerCharacter_C_GetWeaponSocketOffset::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetWeaponSocketOffset, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000048, "Member 'BP_PlayerCharacter_C_GetWeaponSocketOffset::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetWeaponSocketOffset, CallFunc_LessLess_VectorRotator_ReturnValue) == 0x000054, "Member 'BP_PlayerCharacter_C_GetWeaponSocketOffset::CallFunc_LessLess_VectorRotator_ReturnValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnSheathe
// 0x0048 (0x0048 - 0x0000)
struct BP_PlayerCharacter_C_UnSheathe final
{
public:
	ESBWeaponEquipType                            EquipType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9821[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0008(0x0010)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9822[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_1;            // 0x0020(0x0010)(NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_2;            // 0x0030(0x0010)(NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_UnSheathe) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_UnSheathe");
static_assert(sizeof(BP_PlayerCharacter_C_UnSheathe) == 0x000048, "Wrong size on BP_PlayerCharacter_C_UnSheathe");
static_assert(offsetof(BP_PlayerCharacter_C_UnSheathe, EquipType) == 0x000000, "Member 'BP_PlayerCharacter_C_UnSheathe::EquipType' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UnSheathe, K2Node_MakeStruct_DataTableRowHandle) == 0x000008, "Member 'BP_PlayerCharacter_C_UnSheathe::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UnSheathe, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'BP_PlayerCharacter_C_UnSheathe::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UnSheathe, K2Node_MakeStruct_DataTableRowHandle_1) == 0x000020, "Member 'BP_PlayerCharacter_C_UnSheathe::K2Node_MakeStruct_DataTableRowHandle_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UnSheathe, K2Node_MakeStruct_DataTableRowHandle_2) == 0x000030, "Member 'BP_PlayerCharacter_C_UnSheathe::K2Node_MakeStruct_DataTableRowHandle_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_UnSheathe, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'BP_PlayerCharacter_C_UnSheathe::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitEquipWeaponStatus
// 0x0078 (0x0078 - 0x0000)
struct BP_PlayerCharacter_C_InitEquipWeaponStatus final
{
public:
	TArray<int32>                                 OutEquipWeaponStatus;                              // 0x0000(0x0010)(Parm, OutParm)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9823[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDefaultWeaponParam                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x0030)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9824[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_PlayerCharacter_C_InitEquipWeaponStatus) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_InitEquipWeaponStatus");
static_assert(sizeof(BP_PlayerCharacter_C_InitEquipWeaponStatus) == 0x000078, "Wrong size on BP_PlayerCharacter_C_InitEquipWeaponStatus");
static_assert(offsetof(BP_PlayerCharacter_C_InitEquipWeaponStatus, OutEquipWeaponStatus) == 0x000000, "Member 'BP_PlayerCharacter_C_InitEquipWeaponStatus::OutEquipWeaponStatus' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_InitEquipWeaponStatus, CallFunc_GetClassType_ReturnValue) == 0x000010, "Member 'BP_PlayerCharacter_C_InitEquipWeaponStatus::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_InitEquipWeaponStatus, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'BP_PlayerCharacter_C_InitEquipWeaponStatus::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_InitEquipWeaponStatus, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'BP_PlayerCharacter_C_InitEquipWeaponStatus::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_InitEquipWeaponStatus, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'BP_PlayerCharacter_C_InitEquipWeaponStatus::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_InitEquipWeaponStatus, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000060, "Member 'BP_PlayerCharacter_C_InitEquipWeaponStatus::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_InitEquipWeaponStatus, K2Node_MakeArray_Array) == 0x000068, "Member 'BP_PlayerCharacter_C_InitEquipWeaponStatus::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Imagine Arts Voice Event
// 0x0068 (0x0068 - 0x0000)
struct BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event final
{
public:
	class UAkAudioEvent*                          Event;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAkEventLOD                                 LOD;                                               // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9825[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBImagineSkillInfo*              CallFunc_GetSetupImagineSkill_ReturnValue;         // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UBP_ImagineSkillAbstract_Arts_C*  K2Node_DynamicCast_AsBP_Imagine_Skill_Abstract_Arts; // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9826[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UBP_ImagineSkillAbstract_Mount_C* K2Node_DynamicCast_AsBP_Imagine_Skill_Abstract_Mount; // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9827[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_DynamicCast_AsAk_Audio_Event;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9828[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_DynamicCast_AsAk_Audio_Event_1;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event");
static_assert(sizeof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event) == 0x000068, "Wrong size on BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, Event) == 0x000000, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::Event' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, LOD) == 0x000008, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::LOD' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, CallFunc_GetSetupImagineSkill_ReturnValue) == 0x000010, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::CallFunc_GetSetupImagineSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, K2Node_DynamicCast_AsBP_Imagine_Skill_Abstract_Arts) == 0x000018, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::K2Node_DynamicCast_AsBP_Imagine_Skill_Abstract_Arts' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, K2Node_DynamicCast_AsBP_Imagine_Skill_Abstract_Mount) == 0x000028, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::K2Node_DynamicCast_AsBP_Imagine_Skill_Abstract_Mount' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000038, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x000040, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, K2Node_DynamicCast_AsAk_Audio_Event) == 0x000048, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::K2Node_DynamicCast_AsAk_Audio_Event' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, K2Node_DynamicCast_AsAk_Audio_Event_1) == 0x000058, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::K2Node_DynamicCast_AsAk_Audio_Event_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event, K2Node_DynamicCast_bSuccess_3) == 0x000060, "Member 'BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OffsetNamePlateLocation
// 0x013C (0x013C - 0x0000)
struct BP_PlayerCharacter_C_OffsetNamePlateLocation final
{
public:
	bool                                          IsOffset;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9829[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OffsetDistance;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddLocalOffset_SweepHitResult;         // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_982A[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddLocalOffset_SweepHitResult_1;       // 0x00B0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_OffsetNamePlateLocation) == 0x000004, "Wrong alignment on BP_PlayerCharacter_C_OffsetNamePlateLocation");
static_assert(sizeof(BP_PlayerCharacter_C_OffsetNamePlateLocation) == 0x00013C, "Wrong size on BP_PlayerCharacter_C_OffsetNamePlateLocation");
static_assert(offsetof(BP_PlayerCharacter_C_OffsetNamePlateLocation, IsOffset) == 0x000000, "Member 'BP_PlayerCharacter_C_OffsetNamePlateLocation::IsOffset' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OffsetNamePlateLocation, OffsetDistance) == 0x000004, "Member 'BP_PlayerCharacter_C_OffsetNamePlateLocation::OffsetDistance' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OffsetNamePlateLocation, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_PlayerCharacter_C_OffsetNamePlateLocation::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OffsetNamePlateLocation, CallFunc_MakeVector_ReturnValue) == 0x00000C, "Member 'BP_PlayerCharacter_C_OffsetNamePlateLocation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OffsetNamePlateLocation, CallFunc_K2_AddLocalOffset_SweepHitResult) == 0x000018, "Member 'BP_PlayerCharacter_C_OffsetNamePlateLocation::CallFunc_K2_AddLocalOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OffsetNamePlateLocation, CallFunc_MakeVector_ReturnValue_1) == 0x0000A0, "Member 'BP_PlayerCharacter_C_OffsetNamePlateLocation::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OffsetNamePlateLocation, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000AC, "Member 'BP_PlayerCharacter_C_OffsetNamePlateLocation::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OffsetNamePlateLocation, CallFunc_K2_AddLocalOffset_SweepHitResult_1) == 0x0000B0, "Member 'BP_PlayerCharacter_C_OffsetNamePlateLocation::CallFunc_K2_AddLocalOffset_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_OffsetNamePlateLocation, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x000138, "Member 'BP_PlayerCharacter_C_OffsetNamePlateLocation::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DeadNotifyMessage
// 0x00D0 (0x00D0 - 0x0000)
struct BP_PlayerCharacter_C_DeadNotifyMessage final
{
public:
	class FText                                   DeadCharacterName;                                 // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_982B[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            CallFunc_GetCurrentPartyMember_OutPartyMembers;    // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetCurrentPartyMember_ReturnValue;        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_982C[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_982D[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput;          // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_982E[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_982F[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9830[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerCharacter_C_DeadNotifyMessage) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_DeadNotifyMessage");
static_assert(sizeof(BP_PlayerCharacter_C_DeadNotifyMessage) == 0x0000D0, "Wrong size on BP_PlayerCharacter_C_DeadNotifyMessage");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, DeadCharacterName) == 0x000000, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::DeadCharacterName' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_Conv_TextToString_ReturnValue) == 0x000018, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_TextIsEmpty_ReturnValue) == 0x000028, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, Temp_int_Array_Index_Variable) == 0x000030, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_GetCurrentPartyMember_OutPartyMembers) == 0x000038, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_GetCurrentPartyMember_OutPartyMembers' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_GetCurrentPartyMember_ReturnValue) == 0x000048, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_GetCurrentPartyMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_GetSBPlayerState_ReturnValue) == 0x000050, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_GetCharacterName_self_CastInput) == 0x000060, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_GetCharacterName_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_GetCharacterName_ReturnValue) == 0x000070, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000080, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_IsEmpty_ReturnValue) == 0x000081, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_Array_Get_Item) == 0x000088, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000095, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_GetPlayerController_ReturnValue) == 0x000098, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000A0, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_IsValid_ReturnValue_1) == 0x0000A9, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, CallFunc_GetHUD_ReturnValue) == 0x0000B0, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x0000B8, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_DeadNotifyMessage, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'BP_PlayerCharacter_C_DeadNotifyMessage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDamageReaction
// 0x0030 (0x0030 - 0x0000)
struct BP_PlayerCharacter_C_GetDamageReaction final
{
public:
	struct FSBStunInfo                            StunInfo;                                          // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	E_DamageReaction                              DamageReaction;                                    // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9831[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CallFunc_GetDamageReactionPattern_ReturnValue;     // 0x0018(0x0010)(NoDestructor)
	E_DamageReaction                              CallFunc_GetDamageReactionByStunLevel_DamageReaction; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_GetDamageReaction) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_GetDamageReaction");
static_assert(sizeof(BP_PlayerCharacter_C_GetDamageReaction) == 0x000030, "Wrong size on BP_PlayerCharacter_C_GetDamageReaction");
static_assert(offsetof(BP_PlayerCharacter_C_GetDamageReaction, StunInfo) == 0x000000, "Member 'BP_PlayerCharacter_C_GetDamageReaction::StunInfo' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetDamageReaction, DamageReaction) == 0x000014, "Member 'BP_PlayerCharacter_C_GetDamageReaction::DamageReaction' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetDamageReaction, CallFunc_GetDamageReactionPattern_ReturnValue) == 0x000018, "Member 'BP_PlayerCharacter_C_GetDamageReaction::CallFunc_GetDamageReactionPattern_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerCharacter_C_GetDamageReaction, CallFunc_GetDamageReactionByStunLevel_DamageReaction) == 0x000028, "Member 'BP_PlayerCharacter_C_GetDamageReaction::CallFunc_GetDamageReactionByStunLevel_DamageReaction' has a wrong offset!");

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetEnemyStepJumpCollisionComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerCharacter_C_GetEnemyStepJumpCollisionComponent final
{
public:
	class USphereComponent*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerCharacter_C_GetEnemyStepJumpCollisionComponent) == 0x000008, "Wrong alignment on BP_PlayerCharacter_C_GetEnemyStepJumpCollisionComponent");
static_assert(sizeof(BP_PlayerCharacter_C_GetEnemyStepJumpCollisionComponent) == 0x000008, "Wrong size on BP_PlayerCharacter_C_GetEnemyStepJumpCollisionComponent");
static_assert(offsetof(BP_PlayerCharacter_C_GetEnemyStepJumpCollisionComponent, ReturnValue) == 0x000000, "Member 'BP_PlayerCharacter_C_GetEnemyStepJumpCollisionComponent::ReturnValue' has a wrong offset!");

}

