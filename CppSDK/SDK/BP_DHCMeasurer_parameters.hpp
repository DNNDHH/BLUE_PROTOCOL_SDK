#pragma once

 

// Package: BP_DHCMeasurer

#include "Basic.hpp"

#include "ST_DHCStatus_structs.hpp"
#include "EN_DHCMessage_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EN_DHCStatus_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_StateChanged__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct BP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature final
{
public:
	EN_DHCStatus                                  DHCState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalPlayerJoined;                                 // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature) == 0x000001, "Wrong alignment on BP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature");
static_assert(sizeof(BP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature) == 0x000002, "Wrong size on BP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature");
static_assert(offsetof(BP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature, DHCState) == 0x000000, "Member 'BP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature::DHCState' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature, LocalPlayerJoined) == 0x000001, "Member 'BP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature::LocalPlayerJoined' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.ExecuteUbergraph_BP_DHCMeasurer
// 0x06E0 (0x06E0 - 0x0000)
struct BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_559E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetFirstLocalPlayerController_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_559F[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55A0[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue;               // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55A1[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55A2[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue_1;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55A3[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default;                             // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55A4[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Add_TimespanTimespan_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMilliseconds_ReturnValue;         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55A5[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue_2;                     // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55A6[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue_1;               // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55A7[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue_1;       // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55A8[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue_1;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55A9[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_Select_Default_1;                           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EN_DHCStatus                                  Temp_byte_Variable;                                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55AA[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue_3;                     // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue_2;               // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55AB[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue_2;       // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue_3;               // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue_2;             // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55AC[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue_3;       // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55AD[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default_2;                           // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55AE[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_CustomEvent_Other_Actor_1;                  // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegisterPlayers_Initialized;              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_3;               // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBAttribute                                  K2Node_CustomEvent_ElementType;                    // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue_3;             // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_4;          // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55AF[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Other_Actor;                    // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_CustomEvent_View_Rotation;                  // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(class AActor* Other_Actor, const struct FRotator& View_Rotation)> K2Node_CreateDelegate_OutputDelegate;              // 0x016C(0x0010)(ZeroConstructor, NoDestructor)
	float                                         Temp_float_Variable_3;                             // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBAttribute ElementType)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class ASBEnemyCharacter* DamagedActor, float Damage, struct FSBDamageEvent& DamageEvent, class AController* InstigatedBy, class AActor* DamageCauser)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0190(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_4;               // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55B0[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_CuaseCharacter;                 // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Damage_1;                       // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55B1[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_CustomEvent_DamagedActor;                   // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Damage;                         // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55B2[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageEvent                         K2Node_CustomEvent_DamageEvent;                    // 0x01C8(0x01A0)(ConstParm, ContainsInstancedReference)
	class AController*                            K2Node_CustomEvent_InstigatedBy;                   // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamageCauser;                   // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerStatusRef_Index;                 // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55B3[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_5;          // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55B4[0x3];                                     // 0x0385(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue_4;               // 0x0388(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0391(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0392(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0393(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EN_DHCMessage                                 K2Node_CustomEvent_Type;                           // 0x0394(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0395(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_5;               // 0x0396(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0397(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55B5[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_Array_Get_Item;                           // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55B6[0x3];                                     // 0x03AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_DHCStatus                          K2Node_MakeStruct_ST_DHCStatus;                    // 0x03B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55B7[0x4];                                     // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55B8[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55B9[0x6];                                     // 0x03E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue_4;                     // 0x03E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue_4;       // 0x03F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_Select_Default_3;                           // 0x03F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_4;                             // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55BA[0x4];                                     // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue_1;  // 0x0408(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Add_TimespanTimespan_ReturnValue_1;       // 0x0410(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerController*>              K2Node_CustomEvent_RegisterPlayers;                // 0x0418(0x0010)(ConstParm, ReferenceParm)
	float                                         CallFunc_GetTotalMilliseconds_ReturnValue_1;       // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x042C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55BB[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0444(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_6;          // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0449(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_7;          // 0x044A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x044B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55BC[0x4];                                     // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBBattleArea*                          Temp_object_Variable;                              // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0458(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55BD[0x3];                                     // 0x0469(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_5;                             // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_DHCStatus                                  Temp_byte_Variable_1;                              // 0x0474(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55BE[0x3];                                     // 0x0475(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_4;                           // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0480(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55BF[0x3];                                     // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0488(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x048C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_DHCMessage                                 Temp_byte_Variable_2;                              // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C0[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0498(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_5;                           // 0x04B8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_6;               // 0x04BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55C1[0x3];                                     // 0x04BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x04C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x04D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x04E0(0x0018)()
	bool                                          CallFunc_IsPlayInEditor_ReturnValue_4;             // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x04F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55C2[0x6];                                     // 0x04FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerController*>              K2Node_CustomEvent_ExitMembers;                    // 0x0500(0x0010)(ConstParm, ReferenceParm)
	struct FDateTime                              K2Node_Select_Default_6;                           // 0x0510(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_8;          // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55C3[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue_2;  // 0x0520(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Add_TimespanTimespan_ReturnValue_2;       // 0x0528(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMilliseconds_ReturnValue_2;       // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x053C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_2;                     // 0x0540(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0544(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55C4[0x3];                                     // 0x0545(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x0548(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_7;                           // 0x054C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0550(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0554(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55C5[0x3];                                     // 0x0555(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD;                 // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55C6[0x7];                                     // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBBattleContentsHUD*                   CallFunc_GetBattleContentsHUD_ReturnValue;         // 0x0580(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_1;                     // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleContentsHUD_C*                   K2Node_DynamicCast_AsBattle_Contents_HUD;          // 0x0590(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0598(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55C7[0x7];                                     // 0x0599(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD_1;               // 0x05A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x05A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55C8[0x7];                                     // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBBattleContentsHUD*                   CallFunc_GetBattleContentsHUD_ReturnValue_1;       // 0x05B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x05B8(0x0010)(ZeroConstructor, NoDestructor)
	class UBattleContentsHUD_C*                   K2Node_DynamicCast_AsBattle_Contents_HUD_1;        // 0x05C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55C9[0x7];                                     // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetCurrentHUD_ReturnValue;                // 0x05D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDhcBattleHUD_C*                        K2Node_DynamicCast_AsDhc_Battle_HUD;               // 0x05E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x05E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x05E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Invincible;                     // 0x05EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x05EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_3;                               // 0x05EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Temp_object_Variable_1;                            // 0x05F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_Array_Get_Item_1;                         // 0x05F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0600(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55CA[0x4];                                     // 0x0604(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0611(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55CB[0x6];                                     // 0x0612(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_CustomEvent_PlayerCharacter;                // 0x0618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Clear;                          // 0x0620(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55CC[0x7];                                     // 0x0621(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Select_Default_8;                           // 0x0628(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0630(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0638(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55CD[0x7];                                     // 0x0639(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0640(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBBattleParamInterface> K2Node_DynamicCast_AsSBBattle_Param_Interface;     // 0x0648(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0658(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55CE[0x7];                                     // 0x0659(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDhcBattleComponent*                  CallFunc_GetDhcBattleComponent_ReturnValue;        // 0x0660(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0668(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55CF[0x7];                                     // 0x0669(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_SetBattleArea_self_CastInput;             // 0x0670(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetBattleArea_ReturnValue;                // 0x0680(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55D0[0x3];                                     // 0x0681(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0684(0x0010)(ZeroConstructor, NoDestructor)
	float                                         Temp_float_Variable_6;                             // 0x0694(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_DHCStatus                                  Temp_byte_Variable_3;                              // 0x0698(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55D1[0x3];                                     // 0x0699(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_9;                           // 0x069C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x06A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55D2[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBBattleArea*                          K2Node_Select_Default_10;                          // 0x06A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetBattleArea_ReturnValue_1;              // 0x06B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_2;       // 0x06B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55D3[0x1];                                     // 0x06B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x06B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x06B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x06C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x06C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x06D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer");
static_assert(sizeof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer) == 0x0006E0, "Wrong size on BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, EntryPoint) == 0x000000, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetFirstLocalPlayerController_ReturnValue) == 0x000008, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetFirstLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_AsSBPlayer_State) == 0x000010, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_bool_Variable) == 0x000020, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_UtcNow_ReturnValue) == 0x000028, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_HasAuthority_ReturnValue) == 0x000030, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_bool_Variable_1) == 0x000031, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_bool_Variable_2) == 0x000032, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsPlayInEditor_ReturnValue) == 0x000033, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsPlayInEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsDedicatedServer_ReturnValue) == 0x000034, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Not_PreBool_ReturnValue) == 0x000035, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_bool_Variable_3) == 0x000036, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_BooleanAND_ReturnValue) == 0x000037, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_HasAuthority_ReturnValue_1) == 0x000038, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_float_Variable) == 0x00003C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000040, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_BooleanAND_ReturnValue_1) == 0x000041, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_MakeTimespan_ReturnValue) == 0x000048, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_int_Array_Index_Variable_1) == 0x000058, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_float_Variable_1) == 0x00005C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_UtcNow_ReturnValue_1) == 0x000060, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_UtcNow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_DateTimeTimespan_ReturnValue) == 0x000068, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_HasAuthority_ReturnValue_2) == 0x000070, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default) == 0x000078, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000080, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_float_Variable_2) == 0x000088, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_TimespanTimespan_ReturnValue) == 0x000090, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_TimespanTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetTotalMilliseconds_ReturnValue) == 0x000098, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetTotalMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_UtcNow_ReturnValue_2) == 0x0000A0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_UtcNow_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_FTrunc_ReturnValue) == 0x0000A8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_MakeTimespan_ReturnValue_1) == 0x0000B0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_MakeTimespan_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000B8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_DateTimeTimespan_ReturnValue_1) == 0x0000C0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_DateTimeTimespan_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x0000C8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_int_Loop_Counter_Variable_1) == 0x0000CC, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsPlayInEditor_ReturnValue_1) == 0x0000D0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsPlayInEditor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_BooleanAND_ReturnValue_2) == 0x0000D1, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D4, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default_1) == 0x0000D8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_byte_Variable) == 0x0000E0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_UtcNow_ReturnValue_3) == 0x0000E8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_UtcNow_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_MakeTimespan_ReturnValue_2) == 0x0000F0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_MakeTimespan_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsDedicatedServer_ReturnValue_3) == 0x0000F8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsDedicatedServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_DateTimeTimespan_ReturnValue_2) == 0x000100, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_DateTimeTimespan_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_MakeTimespan_ReturnValue_3) == 0x000108, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_MakeTimespan_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsPlayInEditor_ReturnValue_2) == 0x000110, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsPlayInEditor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_DateTimeTimespan_ReturnValue_3) == 0x000118, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_DateTimeTimespan_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_BooleanAND_ReturnValue_3) == 0x000120, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default_2) == 0x000128, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_Other_Actor_1) == 0x000138, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_Other_Actor_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetController_ReturnValue) == 0x000140, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_RegisterPlayers_Initialized) == 0x000148, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_RegisterPlayers_Initialized' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_HasAuthority_ReturnValue_3) == 0x000149, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_HasAuthority_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_ElementType) == 0x00014A, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_ElementType' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsPlayInEditor_ReturnValue_3) == 0x00014B, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsPlayInEditor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_IntInt_ReturnValue_2) == 0x00014C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsDedicatedServer_ReturnValue_4) == 0x000150, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsDedicatedServer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_Other_Actor) == 0x000158, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_View_Rotation) == 0x000160, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_View_Rotation' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CreateDelegate_OutputDelegate) == 0x00016C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_float_Variable_3) == 0x00017C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CreateDelegate_OutputDelegate_1) == 0x000180, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CreateDelegate_OutputDelegate_2) == 0x000190, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_HasAuthority_ReturnValue_4) == 0x0001A0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_HasAuthority_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_CuaseCharacter) == 0x0001A8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_CuaseCharacter' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_Damage_1) == 0x0001B0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_Damage_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_DamagedActor) == 0x0001B8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_Damage) == 0x0001C0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_DamageEvent) == 0x0001C8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_DamageEvent' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_InstigatedBy) == 0x000368, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_DamageCauser) == 0x000370, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetPlayerStatusRef_Index) == 0x000378, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetPlayerStatusRef_Index' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00037C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Event_DeltaSeconds) == 0x000380, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsDedicatedServer_ReturnValue_5) == 0x000384, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsDedicatedServer_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_MakeTimespan_ReturnValue_4) == 0x000388, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_MakeTimespan_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_BooleanAND_ReturnValue_4) == 0x000390, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_SwitchEnum_CmpSuccess) == 0x000391, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_SwitchEnum_CmpSuccess_1) == 0x000392, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_SwitchEnum_CmpSuccess_2) == 0x000393, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_Type) == 0x000394, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Not_PreBool_ReturnValue_1) == 0x000395, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_HasAuthority_ReturnValue_5) == 0x000396, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_HasAuthority_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsValid_ReturnValue_1) == 0x000397, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_BooleanAND_ReturnValue_5) == 0x000398, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Array_Get_Item) == 0x0003A0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Array_Length_ReturnValue) == 0x0003A8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Less_IntInt_ReturnValue) == 0x0003AC, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_MakeStruct_ST_DHCStatus) == 0x0003B0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_MakeStruct_ST_DHCStatus' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Array_Add_ReturnValue) == 0x0003C0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_K2_GetPawn_ReturnValue) == 0x0003C8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Array_Length_ReturnValue_1) == 0x0003D0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0003D8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_bSuccess_1) == 0x0003E0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0003E1, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_UtcNow_ReturnValue_4) == 0x0003E8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_UtcNow_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_DateTimeTimespan_ReturnValue_4) == 0x0003F0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_DateTimeTimespan_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default_3) == 0x0003F8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_float_Variable_4) == 0x000400, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_float_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Subtract_DateTimeDateTime_ReturnValue_1) == 0x000408, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Subtract_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_TimespanTimespan_ReturnValue_1) == 0x000410, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_TimespanTimespan_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_RegisterPlayers) == 0x000418, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_RegisterPlayers' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetTotalMilliseconds_ReturnValue_1) == 0x000428, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetTotalMilliseconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_FTrunc_ReturnValue_1) == 0x00042C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000430, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetPlayerController_ReturnValue) == 0x000438, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000440, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Array_Find_ReturnValue) == 0x000444, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsDedicatedServer_ReturnValue_6) == 0x000448, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsDedicatedServer_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000449, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsDedicatedServer_ReturnValue_7) == 0x00044A, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsDedicatedServer_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_bool_Variable_4) == 0x00044B, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_object_Variable) == 0x000450, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CreateDelegate_OutputDelegate_3) == 0x000458, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_bool_Variable_5) == 0x000468, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_float_Variable_5) == 0x00046C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_float_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_FloatFloat_ReturnValue) == 0x000470, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_byte_Variable_1) == 0x000474, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default_4) == 0x000478, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00047C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_int_Variable) == 0x000480, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000484, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_int_Variable_1) == 0x000488, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_int_Variable_2) == 0x00048C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_byte_Variable_2) == 0x000490, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetDisplayName_ReturnValue) == 0x000498, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Concat_StrStr_ReturnValue) == 0x0004A8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default_5) == 0x0004B8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_HasAuthority_ReturnValue_6) == 0x0004BC, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_HasAuthority_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetTextFromAsset_ReturnValue) == 0x0004C0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0004D0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Conv_StringToText_ReturnValue) == 0x0004E0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsPlayInEditor_ReturnValue_4) == 0x0004F8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsPlayInEditor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_BooleanAND_ReturnValue_6) == 0x0004F9, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_ExitMembers) == 0x000500, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_ExitMembers' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default_6) == 0x000510, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsDedicatedServer_ReturnValue_8) == 0x000518, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsDedicatedServer_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Subtract_DateTimeDateTime_ReturnValue_2) == 0x000520, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Subtract_DateTimeDateTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_TimespanTimespan_ReturnValue_2) == 0x000528, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_TimespanTimespan_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetPlayerController_ReturnValue_1) == 0x000530, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetTotalMilliseconds_ReturnValue_2) == 0x000538, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetTotalMilliseconds_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Array_Find_ReturnValue_1) == 0x00053C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_FTrunc_ReturnValue_2) == 0x000540, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_FTrunc_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000544, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Multiply_IntFloat_ReturnValue_2) == 0x000548, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Multiply_IntFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default_7) == 0x00054C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000550, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000554, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetPlayerController_ReturnValue_2) == 0x000558, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetHUD_ReturnValue) == 0x000560, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_AsSBBattle_HUD) == 0x000568, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_AsSBBattle_HUD' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_bSuccess_2) == 0x000570, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetPlayerController_ReturnValue_3) == 0x000578, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetBattleContentsHUD_ReturnValue) == 0x000580, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetBattleContentsHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetHUD_ReturnValue_1) == 0x000588, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_AsBattle_Contents_HUD) == 0x000590, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_AsBattle_Contents_HUD' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_bSuccess_3) == 0x000598, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_AsSBBattle_HUD_1) == 0x0005A0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_AsSBBattle_HUD_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_bSuccess_4) == 0x0005A8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetBattleContentsHUD_ReturnValue_1) == 0x0005B0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetBattleContentsHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CreateDelegate_OutputDelegate_4) == 0x0005B8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_AsBattle_Contents_HUD_1) == 0x0005C8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_AsBattle_Contents_HUD_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_bSuccess_5) == 0x0005D0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetCurrentHUD_ReturnValue) == 0x0005D8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetCurrentHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_AsDhc_Battle_HUD) == 0x0005E0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_AsDhc_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_bSuccess_6) == 0x0005E8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_SwitchEnum_CmpSuccess_3) == 0x0005E9, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_Invincible) == 0x0005EA, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_Invincible' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsValid_ReturnValue_2) == 0x0005EB, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_int_Variable_3) == 0x0005EC, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_object_Variable_1) == 0x0005F0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Array_Get_Item_1) == 0x0005F8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Array_Length_ReturnValue_2) == 0x000600, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000608, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Less_IntInt_ReturnValue_1) == 0x000610, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_bool_Variable_6) == 0x000611, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_PlayerCharacter) == 0x000618, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CustomEvent_Clear) == 0x000620, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CustomEvent_Clear' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default_8) == 0x000628, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000630, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_bSuccess_7) == 0x000638, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000640, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_AsSBBattle_Param_Interface) == 0x000648, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_AsSBBattle_Param_Interface' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_DynamicCast_bSuccess_8) == 0x000658, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_GetDhcBattleComponent_ReturnValue) == 0x000660, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_GetDhcBattleComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_IsValid_ReturnValue_3) == 0x000668, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_SetBattleArea_self_CastInput) == 0x000670, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_SetBattleArea_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_SetBattleArea_ReturnValue) == 0x000680, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_SetBattleArea_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_CreateDelegate_OutputDelegate_5) == 0x000684, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_float_Variable_6) == 0x000694, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_float_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, Temp_byte_Variable_3) == 0x000698, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default_9) == 0x00069C, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Less_FloatFloat_ReturnValue) == 0x0006A0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, K2Node_Select_Default_10) == 0x0006A8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_BooleanAND_ReturnValue_7) == 0x0006B0, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_SetBattleArea_ReturnValue_1) == 0x0006B1, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_SetBattleArea_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_LessEqual_FloatFloat_ReturnValue_2) == 0x0006B2, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_LessEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_RandomFloatInRange_ReturnValue) == 0x0006B4, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0006B8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0006C4, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_MakeVector_ReturnValue) == 0x0006C8, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer, CallFunc_Add_VectorVector_ReturnValue) == 0x0006D4, "Member 'BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.SetCurrentMesurerForPlayer
// 0x0010 (0x0010 - 0x0000)
struct BP_DHCMeasurer_C_SetCurrentMesurerForPlayer final
{
public:
	class APawn*                                  PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Clear;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_SetCurrentMesurerForPlayer) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_SetCurrentMesurerForPlayer");
static_assert(sizeof(BP_DHCMeasurer_C_SetCurrentMesurerForPlayer) == 0x000010, "Wrong size on BP_DHCMeasurer_C_SetCurrentMesurerForPlayer");
static_assert(offsetof(BP_DHCMeasurer_C_SetCurrentMesurerForPlayer, PlayerCharacter) == 0x000000, "Member 'BP_DHCMeasurer_C_SetCurrentMesurerForPlayer::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_SetCurrentMesurerForPlayer, Clear) == 0x000008, "Member 'BP_DHCMeasurer_C_SetCurrentMesurerForPlayer::Clear' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.SetMokujinInvincible
// 0x0001 (0x0001 - 0x0000)
struct BP_DHCMeasurer_C_SetMokujinInvincible final
{
public:
	bool                                          Invincible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_SetMokujinInvincible) == 0x000001, "Wrong alignment on BP_DHCMeasurer_C_SetMokujinInvincible");
static_assert(sizeof(BP_DHCMeasurer_C_SetMokujinInvincible) == 0x000001, "Wrong size on BP_DHCMeasurer_C_SetMokujinInvincible");
static_assert(offsetof(BP_DHCMeasurer_C_SetMokujinInvincible, Invincible) == 0x000000, "Member 'BP_DHCMeasurer_C_SetMokujinInvincible::Invincible' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCClientExit
// 0x0010 (0x0010 - 0x0000)
struct BP_DHCMeasurer_C_DHCClientExit final
{
public:
	TArray<class APlayerController*>              ExitMembers;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_DHCMeasurer_C_DHCClientExit) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_DHCClientExit");
static_assert(sizeof(BP_DHCMeasurer_C_DHCClientExit) == 0x000010, "Wrong size on BP_DHCMeasurer_C_DHCClientExit");
static_assert(offsetof(BP_DHCMeasurer_C_DHCClientExit, ExitMembers) == 0x000000, "Member 'BP_DHCMeasurer_C_DHCClientExit::ExitMembers' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCClientInit
// 0x0010 (0x0010 - 0x0000)
struct BP_DHCMeasurer_C_DHCClientInit final
{
public:
	TArray<class APlayerController*>              Param_RegisterPlayers;                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_DHCMeasurer_C_DHCClientInit) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_DHCClientInit");
static_assert(sizeof(BP_DHCMeasurer_C_DHCClientInit) == 0x000010, "Wrong size on BP_DHCMeasurer_C_DHCClientInit");
static_assert(offsetof(BP_DHCMeasurer_C_DHCClientInit, Param_RegisterPlayers) == 0x000000, "Member 'BP_DHCMeasurer_C_DHCClientInit::Param_RegisterPlayers' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.ShowMessage
// 0x0001 (0x0001 - 0x0000)
struct BP_DHCMeasurer_C_ShowMessage final
{
public:
	EN_DHCMessage                                 Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_ShowMessage) == 0x000001, "Wrong alignment on BP_DHCMeasurer_C_ShowMessage");
static_assert(sizeof(BP_DHCMeasurer_C_ShowMessage) == 0x000001, "Wrong size on BP_DHCMeasurer_C_ShowMessage");
static_assert(offsetof(BP_DHCMeasurer_C_ShowMessage, Type) == 0x000000, "Member 'BP_DHCMeasurer_C_ShowMessage::Type' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_DHCMeasurer_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_DHCMeasurer_C_ReceiveTick");
static_assert(sizeof(BP_DHCMeasurer_C_ReceiveTick) == 0x000004, "Wrong size on BP_DHCMeasurer_C_ReceiveTick");
static_assert(offsetof(BP_DHCMeasurer_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_DHCMeasurer_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.AddDamageEnemy
// 0x01C0 (0x01C0 - 0x0000)
struct BP_DHCMeasurer_C_AddDamageEnemy final
{
public:
	class ASBEnemyCharacter*                      DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55D4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageEvent                         DamageEvent;                                       // 0x0010(0x01A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AController*                            InstigatedBy;                                      // 0x01B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x01B8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_AddDamageEnemy) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_AddDamageEnemy");
static_assert(sizeof(BP_DHCMeasurer_C_AddDamageEnemy) == 0x0001C0, "Wrong size on BP_DHCMeasurer_C_AddDamageEnemy");
static_assert(offsetof(BP_DHCMeasurer_C_AddDamageEnemy, DamagedActor) == 0x000000, "Member 'BP_DHCMeasurer_C_AddDamageEnemy::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_AddDamageEnemy, Damage) == 0x000008, "Member 'BP_DHCMeasurer_C_AddDamageEnemy::Damage' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_AddDamageEnemy, DamageEvent) == 0x000010, "Member 'BP_DHCMeasurer_C_AddDamageEnemy::DamageEvent' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_AddDamageEnemy, InstigatedBy) == 0x0001B0, "Member 'BP_DHCMeasurer_C_AddDamageEnemy::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_AddDamageEnemy, DamageCauser) == 0x0001B8, "Member 'BP_DHCMeasurer_C_AddDamageEnemy::DamageCauser' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.AddDamage
// 0x0010 (0x0010 - 0x0000)
struct BP_DHCMeasurer_C_AddDamage final
{
public:
	class AActor*                                 CuaseCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_AddDamage) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_AddDamage");
static_assert(sizeof(BP_DHCMeasurer_C_AddDamage) == 0x000010, "Wrong size on BP_DHCMeasurer_C_AddDamage");
static_assert(offsetof(BP_DHCMeasurer_C_AddDamage, CuaseCharacter) == 0x000000, "Member 'BP_DHCMeasurer_C_AddDamage::CuaseCharacter' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_AddDamage, Damage) == 0x000008, "Member 'BP_DHCMeasurer_C_AddDamage::Damage' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_OutWarp
// 0x0018 (0x0018 - 0x0000)
struct BP_DHCMeasurer_C_CE_OutWarp final
{
public:
	class AActor*                                 Other_Actor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               View_Rotation;                                     // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_CE_OutWarp) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_CE_OutWarp");
static_assert(sizeof(BP_DHCMeasurer_C_CE_OutWarp) == 0x000018, "Wrong size on BP_DHCMeasurer_C_CE_OutWarp");
static_assert(offsetof(BP_DHCMeasurer_C_CE_OutWarp, Other_Actor) == 0x000000, "Member 'BP_DHCMeasurer_C_CE_OutWarp::Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_CE_OutWarp, View_Rotation) == 0x000008, "Member 'BP_DHCMeasurer_C_CE_OutWarp::View_Rotation' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_BurstCount
// 0x0001 (0x0001 - 0x0000)
struct BP_DHCMeasurer_C_CE_BurstCount final
{
public:
	ESBAttribute                                  ElementType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_CE_BurstCount) == 0x000001, "Wrong alignment on BP_DHCMeasurer_C_CE_BurstCount");
static_assert(sizeof(BP_DHCMeasurer_C_CE_BurstCount) == 0x000001, "Wrong size on BP_DHCMeasurer_C_CE_BurstCount");
static_assert(offsetof(BP_DHCMeasurer_C_CE_BurstCount, ElementType) == 0x000000, "Member 'BP_DHCMeasurer_C_CE_BurstCount::ElementType' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_InWarp
// 0x0008 (0x0008 - 0x0000)
struct BP_DHCMeasurer_C_CE_InWarp final
{
public:
	class ASBPlayerCharacter*                     Other_Actor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_CE_InWarp) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_CE_InWarp");
static_assert(sizeof(BP_DHCMeasurer_C_CE_InWarp) == 0x000008, "Wrong size on BP_DHCMeasurer_C_CE_InWarp");
static_assert(offsetof(BP_DHCMeasurer_C_CE_InWarp, Other_Actor) == 0x000000, "Member 'BP_DHCMeasurer_C_CE_InWarp::Other_Actor' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCInitalize
// 0x0070 (0x0070 - 0x0000)
struct BP_DHCMeasurer_C_DHCInitalize final
{
public:
	bool                                          CallFunc_IsPlayInEditor_ReturnValue;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55D5[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55D6[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55D7[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55D8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55D9[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55DA[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_DHCInitalize) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_DHCInitalize");
static_assert(sizeof(BP_DHCMeasurer_C_DHCInitalize) == 0x000070, "Wrong size on BP_DHCMeasurer_C_DHCInitalize");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_IsPlayInEditor_ReturnValue) == 0x000000, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_IsPlayInEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_IsDedicatedServer_ReturnValue) == 0x000001, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_DHCMeasurer_C_DHCInitalize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_BooleanAND_ReturnValue) == 0x000008, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_DHCMeasurer_C_DHCInitalize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_MakeTimespan_ReturnValue) == 0x000018, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_UtcNow_ReturnValue) == 0x000020, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, Temp_bool_Variable) == 0x000028, "Member 'BP_DHCMeasurer_C_DHCInitalize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_Add_DateTimeTimespan_ReturnValue) == 0x000030, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_Add_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, K2Node_Select_Default) == 0x000038, "Member 'BP_DHCMeasurer_C_DHCInitalize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_K2_GetPawn_ReturnValue) == 0x000050, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_DHCMeasurer_C_DHCInitalize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000060, "Member 'BP_DHCMeasurer_C_DHCInitalize::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_DHCInitalize, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_DHCMeasurer_C_DHCInitalize::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.TimeOutWarp
// 0x0040 (0x0040 - 0x0000)
struct BP_DHCMeasurer_C_TimeOutWarp final
{
public:
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55DB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55DC[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55DD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55DE[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55DF[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_TimeOutWarp) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_TimeOutWarp");
static_assert(sizeof(BP_DHCMeasurer_C_TimeOutWarp) == 0x000040, "Wrong size on BP_DHCMeasurer_C_TimeOutWarp");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, Temp_bool_True_if_break_was_hit_Variable) == 0x000000, "Member 'BP_DHCMeasurer_C_TimeOutWarp::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_DHCMeasurer_C_TimeOutWarp::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'BP_DHCMeasurer_C_TimeOutWarp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_DHCMeasurer_C_TimeOutWarp::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_DHCMeasurer_C_TimeOutWarp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_DHCMeasurer_C_TimeOutWarp::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_DHCMeasurer_C_TimeOutWarp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, CallFunc_K2_GetPawn_ReturnValue) == 0x000028, "Member 'BP_DHCMeasurer_C_TimeOutWarp::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_DHCMeasurer_C_TimeOutWarp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'BP_DHCMeasurer_C_TimeOutWarp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_DHCMeasurer_C_TimeOutWarp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_TimeOutWarp, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'BP_DHCMeasurer_C_TimeOutWarp::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.RegisterPlayers
// 0x00D8 (0x00D8 - 0x0000)
struct BP_DHCMeasurer_C_RegisterPlayers final
{
public:
	class AController*                            UserController;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Initialized;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55E0[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    TmpPlayerController;                               // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55E1[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55E2[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartyId_ReturnValue;                   // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInParty_ReturnValue;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55E3[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55E4[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55E5[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASBPlayerCharacter*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0068(0x0010)(ReferenceParm)
	class ASBPlayerCharacter*                     CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55E6[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInParty_ReturnValue_1;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55E7[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55E8[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartyId_ReturnValue_1;                 // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55E9[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55EA[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55EB[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_RegisterPlayers) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_RegisterPlayers");
static_assert(sizeof(BP_DHCMeasurer_C_RegisterPlayers) == 0x0000D8, "Wrong size on BP_DHCMeasurer_C_RegisterPlayers");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, UserController) == 0x000000, "Member 'BP_DHCMeasurer_C_RegisterPlayers::UserController' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, Initialized) == 0x000008, "Member 'BP_DHCMeasurer_C_RegisterPlayers::Initialized' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, TmpPlayerController) == 0x000010, "Member 'BP_DHCMeasurer_C_RegisterPlayers::TmpPlayerController' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000018, "Member 'BP_DHCMeasurer_C_RegisterPlayers::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_DHCMeasurer_C_RegisterPlayers::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_K2_GetPawn_ReturnValue) == 0x000028, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000030, "Member 'BP_DHCMeasurer_C_RegisterPlayers::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_DHCMeasurer_C_RegisterPlayers::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_GetPartyId_ReturnValue) == 0x000040, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_GetPartyId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_IsInParty_ReturnValue) == 0x000050, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_IsInParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, Temp_int_Array_Index_Variable) == 0x00005C, "Member 'BP_DHCMeasurer_C_RegisterPlayers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_BooleanAND_ReturnValue) == 0x000060, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_GetAllActorsOfClass_OutActors) == 0x000068, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_Array_AddUnique_ReturnValue) == 0x000080, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_GetController_ReturnValue) == 0x000088, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_IsInParty_ReturnValue_1) == 0x000090, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_IsInParty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000098, "Member 'BP_DHCMeasurer_C_RegisterPlayers::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, K2Node_DynamicCast_bSuccess_2) == 0x0000A0, "Member 'BP_DHCMeasurer_C_RegisterPlayers::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_GetPartyId_ReturnValue_1) == 0x0000A8, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_GetPartyId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_Array_AddUnique_ReturnValue_1) == 0x0000B8, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000BC, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_Array_Length_ReturnValue_1) == 0x0000C0, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C4, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, Temp_int_Loop_Counter_Variable) == 0x0000C8, "Member 'BP_DHCMeasurer_C_RegisterPlayers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_RegisterPlayers, CallFunc_Add_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_DHCMeasurer_C_RegisterPlayers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.IsInUse
// 0x000C (0x000C - 0x0000)
struct BP_DHCMeasurer_C_IsInUse final
{
public:
	bool                                          IsUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55EC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_IsInUse) == 0x000004, "Wrong alignment on BP_DHCMeasurer_C_IsInUse");
static_assert(sizeof(BP_DHCMeasurer_C_IsInUse) == 0x00000C, "Wrong size on BP_DHCMeasurer_C_IsInUse");
static_assert(offsetof(BP_DHCMeasurer_C_IsInUse, IsUse) == 0x000000, "Member 'BP_DHCMeasurer_C_IsInUse::IsUse' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_IsInUse, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_DHCMeasurer_C_IsInUse::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_IsInUse, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'BP_DHCMeasurer_C_IsInUse::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetPlayerStatusRef
// 0x0058 (0x0058 - 0x0000)
struct BP_DHCMeasurer_C_GetPlayerStatusRef final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StructIdx;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55ED[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55EE[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55EF[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_DHCStatus                          CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_GetPlayerStatusRef) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_GetPlayerStatusRef");
static_assert(sizeof(BP_DHCMeasurer_C_GetPlayerStatusRef) == 0x000058, "Wrong size on BP_DHCMeasurer_C_GetPlayerStatusRef");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, Player) == 0x000000, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::Player' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, Param_Index) == 0x000008, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, StructIdx) == 0x00000C, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::StructIdx' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, Temp_bool_True_if_break_was_hit_Variable) == 0x000010, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, K2Node_DynamicCast_AsPlayer_Controller) == 0x000020, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetPlayerStatusRef, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000052, "Member 'BP_DHCMeasurer_C_GetPlayerStatusRef::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCPlayerNum
// 0x0008 (0x0008 - 0x0000)
struct BP_DHCMeasurer_C_GetDHCPlayerNum final
{
public:
	int32                                         PlayerNum;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_GetDHCPlayerNum) == 0x000004, "Wrong alignment on BP_DHCMeasurer_C_GetDHCPlayerNum");
static_assert(sizeof(BP_DHCMeasurer_C_GetDHCPlayerNum) == 0x000008, "Wrong size on BP_DHCMeasurer_C_GetDHCPlayerNum");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerNum, PlayerNum) == 0x000000, "Member 'BP_DHCMeasurer_C_GetDHCPlayerNum::PlayerNum' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerNum, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_DHCMeasurer_C_GetDHCPlayerNum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCPlayerInfo
// 0x00F8 (0x00F8 - 0x0000)
struct BP_DHCMeasurer_C_GetDHCPlayerInfo final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55F0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           PlayerState;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	float                                         TotalDamage;                                       // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamagePerSec;                                      // 0x0024(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           InPlayerState;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55F1[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EN_DHCStatus                                  Temp_byte_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55F2[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55F3[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55F4[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55F5[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EN_DHCStatus                                  Temp_byte_Variable_1;                              // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55F6[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default;                             // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  K2Node_DynamicCast_AsSBOnline_Player_State;        // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55F7[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Add_TimespanTimespan_ReturnValue;         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMilliseconds_ReturnValue;         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_GetDHCPlayerInfo) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_GetDHCPlayerInfo");
static_assert(sizeof(BP_DHCMeasurer_C_GetDHCPlayerInfo) == 0x0000F8, "Wrong size on BP_DHCMeasurer_C_GetDHCPlayerInfo");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, Param_Index) == 0x000000, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, PlayerState) == 0x000008, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::PlayerState' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, Param_Name) == 0x000010, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::Param_Name' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, TotalDamage) == 0x000020, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::TotalDamage' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, DamagePerSec) == 0x000024, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::DamagePerSec' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, InPlayerState) == 0x000028, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::InPlayerState' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, Damage) == 0x000030, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::Damage' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, Temp_string_Variable) == 0x000038, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, Temp_byte_Variable) == 0x000048, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, Temp_float_Variable) == 0x00004C, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, Temp_float_Variable_1) == 0x000050, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_MakeTimespan_ReturnValue) == 0x000058, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_IsDedicatedServer_ReturnValue) == 0x000060, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_UtcNow_ReturnValue) == 0x000068, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_IsPlayInEditor_ReturnValue) == 0x000070, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_IsPlayInEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_Add_DateTimeTimespan_ReturnValue) == 0x000078, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_Add_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_BooleanAND_ReturnValue) == 0x000080, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, Temp_byte_Variable_1) == 0x000081, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, Temp_bool_Variable) == 0x000082, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000083, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, K2Node_Select_Default) == 0x000088, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000090, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, K2Node_DynamicCast_AsSBOnline_Player_State) == 0x000098, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::K2Node_DynamicCast_AsSBOnline_Player_State' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_Add_TimespanTimespan_ReturnValue) == 0x0000B0, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_Add_TimespanTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_GetCharacterName_ReturnValue) == 0x0000B8, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_GetTotalMilliseconds_ReturnValue) == 0x0000C8, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_GetTotalMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_FTrunc_ReturnValue) == 0x0000CC, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000D0, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, Temp_float_Variable_2) == 0x0000D4, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000D8, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, K2Node_Select_Default_1) == 0x0000DC, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x0000E0, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000E4, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000E8, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, K2Node_Select_Default_2) == 0x0000EC, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCPlayerInfo, CallFunc_Less_IntInt_ReturnValue) == 0x0000F4, "Member 'BP_DHCMeasurer_C_GetDHCPlayerInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCRemainTime
// 0x0148 (0x0148 - 0x0000)
struct BP_DHCMeasurer_C_GetDHCRemainTime final
{
public:
	float                                         LeftTimeSec;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_DHCStatus                                  Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55F8[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_DHCStatus                                  Temp_byte_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55F9[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_4;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_DHCStatus                                  Temp_byte_Variable_2;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55FA[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_5;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55FB[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55FC[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue_1;             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Temp_float_Variable_6;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue_1;               // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue_1;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue_2;               // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55FD[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue_1;       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue_2;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55FE[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_7;                             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue_2;                     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue_2;       // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EN_DHCStatus                                  Temp_byte_Variable_3;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55FF[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default;                             // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Add_TimespanTimespan_ReturnValue;         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMilliseconds_ReturnValue;         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5600[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5601[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default_2;                           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5602[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue_1;  // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5603[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Add_TimespanTimespan_ReturnValue_1;       // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMilliseconds_ReturnValue_1;       // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5604[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default_3;                           // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5605[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue_2;  // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5606[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Add_TimespanTimespan_ReturnValue_2;       // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMilliseconds_ReturnValue_2;       // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_4;                           // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_2;                     // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_5;                           // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_6;                           // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_GetDHCRemainTime) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_GetDHCRemainTime");
static_assert(sizeof(BP_DHCMeasurer_C_GetDHCRemainTime) == 0x000148, "Wrong size on BP_DHCMeasurer_C_GetDHCRemainTime");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, LeftTimeSec) == 0x000000, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::LeftTimeSec' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_float_Variable) == 0x000004, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_byte_Variable) == 0x000008, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_float_Variable_1) == 0x00000C, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_float_Variable_2) == 0x000010, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_float_Variable_3) == 0x000014, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_byte_Variable_1) == 0x000018, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_float_Variable_4) == 0x00001C, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_float_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_byte_Variable_2) == 0x000020, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_float_Variable_5) == 0x000024, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_float_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_IsDedicatedServer_ReturnValue) == 0x000028, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_UtcNow_ReturnValue) == 0x000030, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_MakeTimespan_ReturnValue) == 0x000038, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000040, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Add_DateTimeTimespan_ReturnValue) == 0x000048, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Add_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_IsPlayInEditor_ReturnValue) == 0x000050, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_IsPlayInEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_IsPlayInEditor_ReturnValue_1) == 0x000051, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_IsPlayInEditor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_BooleanAND_ReturnValue) == 0x000052, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_BooleanAND_ReturnValue_1) == 0x000053, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_float_Variable_6) == 0x000054, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_float_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_MakeTimespan_ReturnValue_1) == 0x000058, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_MakeTimespan_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_UtcNow_ReturnValue_1) == 0x000060, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_UtcNow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_MakeTimespan_ReturnValue_2) == 0x000068, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_MakeTimespan_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x000070, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Add_DateTimeTimespan_ReturnValue_1) == 0x000078, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Add_DateTimeTimespan_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_IsPlayInEditor_ReturnValue_2) == 0x000080, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_IsPlayInEditor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_BooleanAND_ReturnValue_2) == 0x000081, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_float_Variable_7) == 0x000084, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_float_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_UtcNow_ReturnValue_2) == 0x000088, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_UtcNow_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Add_DateTimeTimespan_ReturnValue_2) == 0x000090, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Add_DateTimeTimespan_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_byte_Variable_3) == 0x000098, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_bool_Variable) == 0x000099, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, K2Node_Select_Default) == 0x0000A0, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x0000A8, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Add_TimespanTimespan_ReturnValue) == 0x0000B0, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Add_TimespanTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_GetTotalMilliseconds_ReturnValue) == 0x0000B8, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_GetTotalMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_FTrunc_ReturnValue) == 0x0000BC, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_bool_Variable_1) == 0x0000C0, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000C4, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, K2Node_Select_Default_1) == 0x0000C8, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, K2Node_Select_Default_2) == 0x0000D0, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000D8, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Subtract_DateTimeDateTime_ReturnValue_1) == 0x0000E0, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Subtract_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, Temp_bool_Variable_2) == 0x0000E8, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Add_TimespanTimespan_ReturnValue_1) == 0x0000F0, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Add_TimespanTimespan_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_GetTotalMilliseconds_ReturnValue_1) == 0x0000F8, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_GetTotalMilliseconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, K2Node_Select_Default_3) == 0x000100, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_FTrunc_ReturnValue_1) == 0x000108, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Subtract_DateTimeDateTime_ReturnValue_2) == 0x000110, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Subtract_DateTimeDateTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000118, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Add_TimespanTimespan_ReturnValue_2) == 0x000120, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Add_TimespanTimespan_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000128, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_GetTotalMilliseconds_ReturnValue_2) == 0x00012C, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_GetTotalMilliseconds_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, K2Node_Select_Default_4) == 0x000130, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_FTrunc_ReturnValue_2) == 0x000134, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_FTrunc_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Multiply_IntFloat_ReturnValue_2) == 0x000138, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Multiply_IntFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, K2Node_Select_Default_5) == 0x00013C, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000140, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetDHCRemainTime, K2Node_Select_Default_6) == 0x000144, "Member 'BP_DHCMeasurer_C_GetDHCRemainTime::K2Node_Select_Default_6' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_DHCStatus
// 0x0050 (0x0050 - 0x0000)
struct BP_DHCMeasurer_C_OnRep_DHCStatus final
{
public:
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5607[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5608[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_OnRep_DHCStatus) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_OnRep_DHCStatus");
static_assert(sizeof(BP_DHCMeasurer_C_OnRep_DHCStatus) == 0x000050, "Wrong size on BP_DHCMeasurer_C_OnRep_DHCStatus");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_DHCStatus, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000000, "Member 'BP_DHCMeasurer_C_OnRep_DHCStatus::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_DHCStatus, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000008, "Member 'BP_DHCMeasurer_C_OnRep_DHCStatus::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_DHCStatus, CallFunc_IsDedicatedServer_ReturnValue) == 0x000018, "Member 'BP_DHCMeasurer_C_OnRep_DHCStatus::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_DHCStatus, CallFunc_GetDisplayName_ReturnValue) == 0x000020, "Member 'BP_DHCMeasurer_C_OnRep_DHCStatus::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_DHCStatus, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'BP_DHCMeasurer_C_OnRep_DHCStatus::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_DHCStatus, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'BP_DHCMeasurer_C_OnRep_DHCStatus::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetCurrentPartyId
// 0x0078 (0x0078 - 0x0000)
struct BP_DHCMeasurer_C_GetCurrentPartyId final
{
public:
	class FString                                 PartyId;                                           // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpPartyId;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5609[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_560A[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_560B[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_560C[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPartyId_ReturnValue;                   // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_560D[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_GetCurrentPartyId) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_GetCurrentPartyId");
static_assert(sizeof(BP_DHCMeasurer_C_GetCurrentPartyId) == 0x000078, "Wrong size on BP_DHCMeasurer_C_GetCurrentPartyId");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, PartyId) == 0x000000, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::PartyId' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, TmpPartyId) == 0x000010, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::TmpPartyId' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, Temp_bool_True_if_break_was_hit_Variable) == 0x000020, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, Temp_int_Array_Index_Variable) == 0x000024, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, CallFunc_K2_GetPawn_ReturnValue) == 0x000040, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000048, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, CallFunc_GetPartyId_ReturnValue) == 0x000058, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::CallFunc_GetPartyId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, CallFunc_IsEmpty_ReturnValue) == 0x000068, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetCurrentPartyId, CallFunc_BooleanAND_ReturnValue) == 0x000071, "Member 'BP_DHCMeasurer_C_GetCurrentPartyId::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.RequestBGM
// 0x0001 (0x0001 - 0x0000)
struct BP_DHCMeasurer_C_RequestBGM final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_RequestBGM) == 0x000001, "Wrong alignment on BP_DHCMeasurer_C_RequestBGM");
static_assert(sizeof(BP_DHCMeasurer_C_RequestBGM) == 0x000001, "Wrong size on BP_DHCMeasurer_C_RequestBGM");
static_assert(offsetof(BP_DHCMeasurer_C_RequestBGM, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'BP_DHCMeasurer_C_RequestBGM::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.ResetLocalPlayerStatusForEnter
// 0x0030 (0x0030 - 0x0000)
struct BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter final
{
public:
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_560E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_560F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSpecialSkill*                  CallFunc_GetPlayerSpecialSkillComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxGaugeDefault_ReturnValue;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter");
static_assert(sizeof(BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter) == 0x000030, "Wrong size on BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter");
static_assert(offsetof(BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter, CallFunc_GetPlayerPawn_ReturnValue) == 0x000000, "Member 'BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter, CallFunc_IsDedicatedServer_ReturnValue) == 0x000008, "Member 'BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter, CallFunc_GetPlayerSpecialSkillComponent_ReturnValue) == 0x000020, "Member 'BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter::CallFunc_GetPlayerSpecialSkillComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter, CallFunc_GetMaxGaugeDefault_ReturnValue) == 0x000028, "Member 'BP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter::CallFunc_GetMaxGaugeDefault_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_ExitIntervalDate
// 0x0110 (0x0110 - 0x0000)
struct BP_DHCMeasurer_C_OnRep_ExitIntervalDate final
{
public:
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_AsTimespan_Timespan_ReturnValue;          // 0x0008(0x0018)()
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5610[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5611[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5612[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5613[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue;  // 0x0068(0x0018)()
	class FText                                   CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue_1; // 0x0080(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_OnRep_ExitIntervalDate");
static_assert(sizeof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate) == 0x000110, "Wrong size on BP_DHCMeasurer_C_OnRep_ExitIntervalDate");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_MakeTimespan_ReturnValue) == 0x000000, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_AsTimespan_Timespan_ReturnValue) == 0x000008, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_AsTimespan_Timespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_IsDedicatedServer_ReturnValue) == 0x000020, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_IsPlayInEditor_ReturnValue) == 0x000038, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_IsPlayInEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_UtcNow_ReturnValue) == 0x000040, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_BooleanAND_ReturnValue) == 0x000048, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_Add_DateTimeTimespan_ReturnValue) == 0x000050, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_Add_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_HasAuthority_ReturnValue) == 0x000058, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, Temp_bool_Variable) == 0x000059, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, K2Node_Select_Default) == 0x000060, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue) == 0x000068, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue_1) == 0x000080, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000098, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_Conv_TextToString_ReturnValue_2) == 0x0000A8, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B8, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x0000C8, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D0, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000E0, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000F0, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_ExitIntervalDate, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000100, "Member 'BP_DHCMeasurer_C_OnRep_ExitIntervalDate::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_MesuringStartDate
// 0x0038 (0x0038 - 0x0000)
struct BP_DHCMeasurer_C_OnRep_MesuringStartDate final
{
public:
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5614[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Add_DateTimeTimespan_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayInEditor_ReturnValue;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5615[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DHCMeasurer_C_OnRep_MesuringStartDate) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_OnRep_MesuringStartDate");
static_assert(sizeof(BP_DHCMeasurer_C_OnRep_MesuringStartDate) == 0x000038, "Wrong size on BP_DHCMeasurer_C_OnRep_MesuringStartDate");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_MesuringStartDate, CallFunc_UtcNow_ReturnValue) == 0x000000, "Member 'BP_DHCMeasurer_C_OnRep_MesuringStartDate::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_MesuringStartDate, CallFunc_MakeTimespan_ReturnValue) == 0x000008, "Member 'BP_DHCMeasurer_C_OnRep_MesuringStartDate::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_MesuringStartDate, CallFunc_IsDedicatedServer_ReturnValue) == 0x000010, "Member 'BP_DHCMeasurer_C_OnRep_MesuringStartDate::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_MesuringStartDate, CallFunc_Add_DateTimeTimespan_ReturnValue) == 0x000018, "Member 'BP_DHCMeasurer_C_OnRep_MesuringStartDate::CallFunc_Add_DateTimeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_MesuringStartDate, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_DHCMeasurer_C_OnRep_MesuringStartDate::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_MesuringStartDate, CallFunc_IsPlayInEditor_ReturnValue) == 0x000021, "Member 'BP_DHCMeasurer_C_OnRep_MesuringStartDate::CallFunc_IsPlayInEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_MesuringStartDate, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'BP_DHCMeasurer_C_OnRep_MesuringStartDate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_MesuringStartDate, Temp_bool_Variable) == 0x000023, "Member 'BP_DHCMeasurer_C_OnRep_MesuringStartDate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_MesuringStartDate, K2Node_Select_Default) == 0x000028, "Member 'BP_DHCMeasurer_C_OnRep_MesuringStartDate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_OnRep_MesuringStartDate, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000030, "Member 'BP_DHCMeasurer_C_OnRep_MesuringStartDate::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetScore
// 0x0058 (0x0058 - 0x0000)
struct BP_DHCMeasurer_C_GetScore final
{
public:
	class APlayerState*                           InPlayerState;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5616[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetDHCPlayerInfo_PlayerState;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDHCPlayerInfo_Name;                    // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_TotalDamage;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_DamagePerSec;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_DHCStatus                          CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_GetScore) == 0x000008, "Wrong alignment on BP_DHCMeasurer_C_GetScore");
static_assert(sizeof(BP_DHCMeasurer_C_GetScore) == 0x000058, "Wrong size on BP_DHCMeasurer_C_GetScore");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, InPlayerState) == 0x000000, "Member 'BP_DHCMeasurer_C_GetScore::InPlayerState' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, ReturnValue) == 0x000008, "Member 'BP_DHCMeasurer_C_GetScore::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_DHCMeasurer_C_GetScore::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_DHCMeasurer_C_GetScore::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, CallFunc_GetDHCPlayerInfo_PlayerState) == 0x000018, "Member 'BP_DHCMeasurer_C_GetScore::CallFunc_GetDHCPlayerInfo_PlayerState' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, CallFunc_GetDHCPlayerInfo_Name) == 0x000020, "Member 'BP_DHCMeasurer_C_GetScore::CallFunc_GetDHCPlayerInfo_Name' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, CallFunc_GetDHCPlayerInfo_TotalDamage) == 0x000030, "Member 'BP_DHCMeasurer_C_GetScore::CallFunc_GetDHCPlayerInfo_TotalDamage' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, CallFunc_GetDHCPlayerInfo_DamagePerSec) == 0x000034, "Member 'BP_DHCMeasurer_C_GetScore::CallFunc_GetDHCPlayerInfo_DamagePerSec' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_DHCMeasurer_C_GetScore::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_DHCMeasurer_C_GetScore::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_DHCMeasurer_C_GetScore::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_DHCMeasurer_C_GetScore::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DHCMeasurer_C_GetScore, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000051, "Member 'BP_DHCMeasurer_C_GetScore::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetIsSoloPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_DHCMeasurer_C_GetIsSoloPlay final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DHCMeasurer_C_GetIsSoloPlay) == 0x000001, "Wrong alignment on BP_DHCMeasurer_C_GetIsSoloPlay");
static_assert(sizeof(BP_DHCMeasurer_C_GetIsSoloPlay) == 0x000001, "Wrong size on BP_DHCMeasurer_C_GetIsSoloPlay");
static_assert(offsetof(BP_DHCMeasurer_C_GetIsSoloPlay, ReturnValue) == 0x000000, "Member 'BP_DHCMeasurer_C_GetIsSoloPlay::ReturnValue' has a wrong offset!");

}

