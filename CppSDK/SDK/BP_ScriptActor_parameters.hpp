#pragma once

 

// Package: BP_ScriptActor

#include "Basic.hpp"

#include "ScriptEnvironmentMeshData_structs.hpp"
#include "Engine_structs.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"
#include "ScriptTalkModeViewParameter_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "LayoutPresetTypes_structs.hpp"
#include "ScriptParticleData_structs.hpp"
#include "ScriptSubActorData_structs.hpp"
#include "ScriptCameraSetting_structs.hpp"
#include "ScriptCameraShakeData_structs.hpp"


namespace SDK::Params
{

// Function BP_ScriptActor.BP_ScriptActor_C.ExecuteUbergraph_BP_ScriptActor
// 0x2610 (0x2610 - 0x0000)
struct BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B95[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_FmMenu_C*                          CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USystemMessage_C*                       CallFunc_Create_ReturnValue_1;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UWBP_Titel2nd_C*                        CallFunc_Create_ReturnValue_2;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ELayoutPresetTypes Preset)>    K2Node_CreateDelegate_OutputDelegate_3;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7B96[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectInitializeHUD_C*                 CallFunc_Create_ReturnValue_3;                     // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InSelectItemIndex)>      K2Node_CreateDelegate_OutputDelegate_4;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ChoiceDialog_C*                     CallFunc_Create_ReturnValue_4;                     // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_MatchingMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_5;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_C*                    CallFunc_Create_ReturnValue_5;                     // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_6;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName DungeonId)>        K2Node_CreateDelegate_OutputDelegate_6;            // 0x00DC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_7;      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_8;      // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue;            // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue_1;          // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B97[0x5];                                     // 0x0113(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_9;      // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B98[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B99[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B9A[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_10;     // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTheaterComponent*                    CallFunc_GetTheaterComponent_ReturnValue;          // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B9B[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptFadeWidget_C*                    CallFunc_Create_ReturnValue_6;                     // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_7;            // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate_8;            // 0x0170(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_9;            // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_LimitAngleDifference_OutTarget;           // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_11;     // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTheaterComponent*                    CallFunc_GetTheaterComponent_ReturnValue_1;        // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B9C[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded_4;                       // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASAnimationSet*                        K2Node_DynamicCast_AsASAnimation_Set;              // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B9D[0x6];                                     // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_12;     // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_13;     // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInMission_ReturnValue;                  // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B9E[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerLoginBonusComponent*           CallFunc_GetLoginBonusComponent_ReturnValue;       // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful_2;               // 0x01F8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B9F[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_2;                    // 0x01FC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_14;     // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BA0[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerLoginBonusComponent*           CallFunc_GetLoginBonusComponent_ReturnValue_1;     // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNeedLoginBonusWindow_ReturnValue;       // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BA1[0x5];                                     // 0x021B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_15;     // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaCreateData*                     K2Node_DynamicCast_AsSBChara_Create_Data;          // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BA2[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x0248(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BA3[0x6];                                     // 0x025A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0270(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_16;     // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaPartsFaceComponent*             K2Node_Event_FaceComponent;                        // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Speed;                                // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Duration;                             // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLipSyncSpeed_ReturnValue;              // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BA4[0x3];                                     // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_17;     // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x02B8(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_18;     // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_19;     // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class ASBFieldActorFreeBuffPoint*       K2Node_Event_BuffPoint;                            // 0x02D8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           K2Node_Event_PlayerCharacter;                      // 0x02E0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x02E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BA5[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_5;                       // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AStaticMeshActor*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x0300(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_RowName;                              // 0x0320(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCastShadow;                          // 0x0328(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BA6[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0330(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FScriptEnvironmentMeshData             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0340(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BA7[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BA8[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsActor_1;                 // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BA9[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AInstancedStaticMeshActor*>      CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0390(0x0010)(ReferenceParm)
	class AInstancedStaticMeshActor*              CallFunc_Array_Get_Item;                           // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BAA[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x03C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BAB[0x4];                                     // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x03E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BAC[0x3];                                     // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x03F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x03FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0400(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0411(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0412(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BAD[0x5];                                     // 0x0413(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_20;     // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_21;     // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x0428(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_6;                       // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BAE[0x7];                                     // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BAF[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0470(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0479(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BB0[0x2];                                     // 0x047A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_11;           // 0x047C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x048C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x048D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BB1[0x2];                                     // 0x048E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_22;     // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InWarpPointId;                        // 0x0498(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWarpPointComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x04A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestAddActivate_ReturnValue;           // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BB2[0x7];                                     // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BB3[0x7];                                     // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInitialLoadCompleted_ReturnValue;       // 0x04D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BB4[0x6];                                     // 0x04D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x04E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(int32 InSelectItemIndex)>      K2Node_CreateDelegate_OutputDelegate_12;           // 0x04EC(0x0010)(ZeroConstructor, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x04FC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x0584(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BB5[0x3];                                     // 0x0585(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InMailId;                             // 0x0588(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0590(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0598(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BB6[0x7];                                     // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x05B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BB7[0x7];                                     // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue;             // 0x05C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x05D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x05E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BB8[0x3];                                     // 0x05F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_1;                    // 0x05F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ChoiceDialog_C*                     CallFunc_Create_ReturnValue_7;                     // 0x05F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InId_3;                               // 0x0600(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InSettingId;                          // 0x0608(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InTransitionTime;                     // 0x0610(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x0614(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7BB9[0x4];                                     // 0x0624(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ScriptPostProcessActor_C*           K2Node_DynamicCast_AsBP_Script_Post_Process_Actor; // 0x0628(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ApplyDofSettings_bResult;                 // 0x0631(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BBA[0x6];                                     // 0x0632(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ScriptPostProcessActor_C*           K2Node_DynamicCast_AsBP_Script_Post_Process_Actor_1; // 0x0638(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BBB[0x7];                                     // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class AActor*                           K2Node_Event_InTargetActor;                        // 0x0648(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InParticleId;                         // 0x0650(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InAttachSocketId;                     // 0x0658(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_InOffsetLocation_1;                   // 0x0660(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BBC[0x4];                                     // 0x066C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_23;     // 0x0670(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptParticleData                    CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0678(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x06A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BBD[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x06A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x06B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        K2Node_DynamicCast_AsParticle_System;              // 0x06B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x06C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BBE[0x7];                                     // 0x06C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        K2Node_DynamicCast_AsParticle_System_1;            // 0x06C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x06D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x06D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BBF[0x5];                                     // 0x06D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InQuestion;                           // 0x06D8(0x0018)(ConstParm)
	TArray<class FText>                           K2Node_Event_InItems_1;                            // 0x06F0(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_InSelectItemIndex_1;            // 0x0700(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InCharacterId;                        // 0x0704(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_Location;                             // 0x070C(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptSubActorData                    CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x0718(0x0088)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x07A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x07A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x07A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BC0[0x5];                                     // 0x07A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_24;     // 0x07A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_2;                            // 0x07B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        K2Node_DynamicCast_AsParticle_System_2;            // 0x07B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x07C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BC1[0x7];                                     // 0x07C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_25;     // 0x07C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_SpawnSubActor_Internal_ReturnValue;       // 0x07D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_SpawnSubActor_Internal_ReturnValue_1;     // 0x07D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_26;     // 0x07E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InActor;                              // 0x07E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_InTargetLocation_1;                   // 0x07F0(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BC2[0x4];                                     // 0x07FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_27;     // 0x0800(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0808(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x080C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x0818(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_2;                         // 0x081C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BC3[0x4];                                     // 0x0824(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0828(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0838(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0848(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0858(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_SourceActor;                          // 0x0868(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DestinationActor;                     // 0x0870(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsMount;                             // 0x0878(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0879(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x087A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BC4[0x1];                                     // 0x087B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x087C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Actor_Yaw_Diff_YawDiff;               // 0x0888(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x088C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BC5[0x3];                                     // 0x088D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0890(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x08A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BC6[0x7];                                     // 0x08A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x08A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBInteractionTargetComponent*          CallFunc_GetComponentByClass_ReturnValue_2;        // 0x08B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x08C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BC7[0x4];                                     // 0x08CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x08D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x08D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BC8[0x7];                                     // 0x08D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_28;     // 0x08E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x08E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x08F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BC9[0x7];                                     // 0x08F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue; // 0x08F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x0900(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BCA[0x7];                                     // 0x0901(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class AActor*                           K2Node_CustomEvent_InActor;                        // 0x0908(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_InTargetLocation;               // 0x0910(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x091C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BCB[0x3];                                     // 0x091D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0920(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x092C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue_1;         // 0x0938(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0944(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0948(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x094C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0950(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0954(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0958(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x095C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BCC[0x3];                                     // 0x095D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDemoSubTitle_C*                        CallFunc_Create_ReturnValue_8;                     // 0x0960(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, TArray<class FString>& NappoIds)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x0968(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode, bool Is_new, TArray<int32>& Gained_achievement_ids)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x0978(0x0010)(ZeroConstructor, NoDestructor)
	ESBContentLockType                            K2Node_Event_InContentLockType;                    // 0x0988(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInLock;                              // 0x0989(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BCD[0x2];                                     // 0x098A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_16;           // 0x098C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetContentLock_ReturnValue;               // 0x099C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BCE[0x3];                                     // 0x099D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x09A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x09A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BCF[0x7];                                     // 0x09A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x09B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x09B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BD0[0x7];                                     // 0x09B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x09C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_11;                      // 0x09C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_SetContentLock_ReturnValue;       // 0x09C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BD1[0x2];                                     // 0x09CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InEmoteId;                            // 0x09CC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BD2[0x4];                                     // 0x09D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x09D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x09E0(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x09F0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BD3[0x7];                                     // 0x09F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x09F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x0A00(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSystemMessageManager_IsValid;          // 0x0A01(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BD4[0x6];                                     // 0x0A02(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue;      // 0x0A08(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_10;                      // 0x0A10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BD5[0x7];                                     // 0x0A11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHappyNappo_C*                          CallFunc_Create_ReturnValue_9;                     // 0x0A18(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptFastForwardWidget_C*             CallFunc_Create_ReturnValue_10;                    // 0x0A20(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue;                      // 0x0A28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BD6[0x3];                                     // 0x0A29(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName DungeonId)>        K2Node_CreateDelegate_OutputDelegate_17;           // 0x0A2C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0A3C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BD7[0x3];                                     // 0x0A3D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCameraControlByPassWidget*           CallFunc_Create_ReturnValue_11;                    // 0x0A40(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InKey;                                // 0x0A48(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_InValue;                              // 0x0A50(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBKeyPair                             K2Node_MakeStruct_SBKeyPair;                       // 0x0A60(0x0018)()
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_2;          // 0x0A78(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBKeyPair>                     K2Node_MakeArray_Array_1;                          // 0x0A88(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Request_SetKeyValue_ReturnValue;          // 0x0A98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BD8[0x7];                                     // 0x0A99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0AA0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_18;           // 0x0AB0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0AC0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue_1;                    // 0x0AD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BD9[0x7];                                     // 0x0AD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x0AD8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_9;              // 0x0AE8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0AF8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_10;             // 0x0B08(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_11;             // 0x0B18(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_12;             // 0x0B28(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_6;        // 0x0B38(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0B40(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0B50(0x0018)()
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_2;             // 0x0B68(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x0B70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BDA[0x3];                                     // 0x0B71(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_DungeonId_1;                    // 0x0B74(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BDB[0x4];                                     // 0x0B7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_7;        // 0x0B80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_19;           // 0x0B88(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_3;             // 0x0B98(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_16;                    // 0x0BA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BDC[0x3];                                     // 0x0BA1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InContentId;                          // 0x0BA4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsStartMatching;                     // 0x0BAC(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0BAD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BDD[0x2];                                     // 0x0BAE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_3;          // 0x0BB0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_13;             // 0x0BC0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActivatedDungeon_bActivated;            // 0x0BD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDungeonMap_ReturnValue;                 // 0x0BD1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BDE[0x6];                                     // 0x0BD2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_4;          // 0x0BD8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_14;             // 0x0BE8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded_7;                       // 0x0BF8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_C*                    K2Node_CustomEvent_Sender_1;                       // 0x0C00(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x0C08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BDF[0x3];                                     // 0x0C09(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 SelectItemIndex)>        K2Node_CreateDelegate_OutputDelegate_20;           // 0x0C0C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0C1C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionMenu_C*                          CallFunc_Create_ReturnValue_12;                    // 0x0C20(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_21;           // 0x0C28(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class FName>                           K2Node_Event_InSubEvents;                          // 0x0C38(0x0010)(ConstParm, ReferenceParm)
	TArray<class FName>                           CallFunc_GetValidSubEvents_OutValidEvents;         // 0x0C48(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0C58(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0C5C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BE0[0x3];                                     // 0x0C5D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0C60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0C64(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0C65(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BE1[0x2];                                     // 0x0C66(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InSelectItemIndex;              // 0x0C68(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BE2[0x4];                                     // 0x0C6C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_13;                    // 0x0C70(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_22;           // 0x0C78(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x0C88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x0C89(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ELayoutPresetTypes                            K2Node_CustomEvent_Preset;                         // 0x0C8A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BE3[0x1];                                     // 0x0C8B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0C8C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_14;                    // 0x0C90(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode, struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)> K2Node_CreateDelegate_OutputDelegate_23;           // 0x0C98(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0CA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BE4[0x3];                                     // 0x0CA9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_24;           // 0x0CAC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Event_RetCode;                              // 0x0CBC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x0CC0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0CD0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0CE0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0CF8(0x0018)()
	bool                                          CallFunc_GetGameSingleton_IsValid;                 // 0x0D10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BE5[0x7];                                     // 0x0D11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue;             // 0x0D18(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0D20(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialHelpDialogBox_C*               CallFunc_Create_ReturnValue_15;                    // 0x0D28(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetServerReconnectionWaitTime_ReturnValue; // 0x0D30(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDelayTime;                          // 0x0D34(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0D38(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDuration_3;                         // 0x0D3C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInWait_1;                            // 0x0D40(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BE6[0x3];                                     // 0x0D41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0D44(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0D48(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0D88(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0D98(0x0018)()
	float                                         K2Node_Event_InDuration_2;                         // 0x0DB0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInWait;                              // 0x0DB4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BE7[0x3];                                     // 0x0DB5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0DB8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0DF8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0E08(0x0018)()
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x0E20(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_2;         // 0x0E28(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_17;                    // 0x0E30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BE8[0x3];                                     // 0x0E31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0E34(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnimTag_ReturnValue;                   // 0x0E40(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BE9[0x3];                                     // 0x0E41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0E44(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0E48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BEA[0x3];                                     // 0x0E49(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_InColor;                              // 0x0E4C(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDuration_1;                         // 0x0E5C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0E60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0E64(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0E68(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0E6C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_25;           // 0x0E70(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_Event_InDuration;                           // 0x0E80(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x0E84(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BEB[0x3];                                     // 0x0E85(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_26;           // 0x0E88(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_FadeIn_bResult;                           // 0x0E98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_9;                       // 0x0E99(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0E9A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BEC[0x5];                                     // 0x0E9B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0EA0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0EB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BED[0x7];                                     // 0x0EB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0EB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0EC0(0x0018)()
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0ED8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists_1;     // 0x0EE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BEE[0x7];                                     // 0x0EE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue_1; // 0x0EE8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSystemMessageManager_IsValid_1;        // 0x0EF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BEF[0x7];                                     // 0x0EF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue_1;    // 0x0EF8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSystemMessageShowingOrStandby_ReturnValue; // 0x0F00(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFastForwardFlag_ReturnValue;           // 0x0F01(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF0[0x2];                                     // 0x0F02(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode, struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)> K2Node_CreateDelegate_OutputDelegate_27;           // 0x0F04(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex)> K2Node_CreateDelegate_OutputDelegate_28;           // 0x0F14(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsFadedOutScreen_ReturnValue;             // 0x0F24(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF1[0x3];                                     // 0x0F25(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InNewTarget;                          // 0x0F28(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInRelative;                          // 0x0F30(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0F31(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF2[0x2];                                     // 0x0F32(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_CalcViewTargetByActor_Location;           // 0x0F34(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_CalcViewTargetByActor_Rotation;           // 0x0F40(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0F4C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF3[0x3];                                     // 0x0F4D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_8;        // 0x0F50(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0F58(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x0F5C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF4[0x3];                                     // 0x0F5D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestConfirmationMenu_C*               CallFunc_Create_ReturnValue_16;                    // 0x0F60(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_9;        // 0x0F68(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x0F70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF5[0x7];                                     // 0x0F71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_3;         // 0x0F78(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_4;         // 0x0F80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x0F88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0F89(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF6[0x6];                                     // 0x0F8A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InOtherActor_1;                       // 0x0F90(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDistancePlayer;                     // 0x0F98(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsNoCheckAtTeleportPlayer_1;         // 0x0F9C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF7[0x3];                                     // 0x0F9D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_InCameraZOffset_1;                    // 0x0FA0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInEnable;                            // 0x0FA4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BF8[0x3];                                     // 0x0FA5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_InTargetLocation;                     // 0x0FA8(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_InTargetRotation;                     // 0x0FB4(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InBlendTime_1;                        // 0x0FC0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BF9[0x4];                                     // 0x0FC4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_10;       // 0x0FC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestConfirmationMenu_C*               CallFunc_Create_ReturnValue_17;                    // 0x0FD0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex)> K2Node_CreateDelegate_OutputDelegate_29;           // 0x0FD8(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_11;       // 0x0FE8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_30;           // 0x0FF0(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_Event_InCameraId;                           // 0x1000(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_InOffsetLocation;                     // 0x1008(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InBlendTime;                          // 0x1014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetFreeViewTarget_ViewTargetActor;        // 0x1018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_TeleportTo_ReturnValue;                // 0x1020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BFA[0x7];                                     // 0x1021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScriptCameraSetting                   CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x1028(0x0030)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x1058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BFB[0x7];                                     // 0x1059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetFreeViewTarget_ViewTargetActor_1;      // 0x1060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetFreeViewTarget_ViewTargetActor_2;      // 0x1068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x1070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalcViewTarget_OutTargetLocation;         // 0x107C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_CalcViewTarget_OutTargetRotation;         // 0x1088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CalcViewTarget_bSucs;                     // 0x1094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BFC[0x3];                                     // 0x1095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1; // 0x1098(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1; // 0x1120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_TeleportTo_ReturnValue_1;              // 0x1121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BFD[0x6];                                     // 0x1122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_12;       // 0x1128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_4;             // 0x1130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_18;                    // 0x1138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasOnlineStatus_ReturnValue;              // 0x1139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7BFE[0x2];                                     // 0x113A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InId_2;                               // 0x113C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7BFF[0x4];                                     // 0x1144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScriptCameraShakeData                 CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x1148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x1150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C00[0x3];                                     // 0x1151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InId_1;                               // 0x1154(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C01[0x4];                                     // 0x115C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScriptCameraShakeData                 CallFunc_GetDataTableRowFromName_OutRow_5;         // 0x1160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_5;    // 0x1168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x1169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C02[0x2];                                     // 0x116A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, EAcceptedQuestErrorCode ErrorCode, int32 RetCode, struct FAcceptedQuestInfo& AcceptedQuestInfo)> K2Node_CreateDelegate_OutputDelegate_31;           // 0x116C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x117C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_32;           // 0x1180(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x1190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C03[0x3];                                     // 0x1191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_33;           // 0x1194(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_Event_InId;                                 // 0x11A4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InDemoName_2;                         // 0x11AC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_8;                       // 0x11B4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C04[0x3];                                     // 0x11B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_7;                      // 0x11B8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_DemoID_1;                       // 0x11BC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C05[0x4];                                     // 0x11C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_5;          // 0x11C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_3;            // 0x11D8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x11E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C06[0x7];                                     // 0x11E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_15;             // 0x11F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x1200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C07[0x7];                                     // 0x1201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_16;             // 0x1208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x1218(0x0018)()
	class UQuestBoard_C*                          CallFunc_Create_ReturnValue_18;                    // 0x1230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_5;                  // 0x1238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x123C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C08[0x3];                                     // 0x123D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x1240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 SelectItem)>             K2Node_CreateDelegate_OutputDelegate_34;           // 0x1244(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7C09[0x4];                                     // 0x1254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectMenu_C*                          CallFunc_Create_ReturnValue_19;                    // 0x1258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bReported)>               K2Node_CreateDelegate_OutputDelegate_35;           // 0x1260(0x0010)(ZeroConstructor, NoDestructor)
	class UQuestReceiveRewardWindow_C*            CallFunc_Create_ReturnValue_20;                    // 0x1270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InDemoName_1;                         // 0x1278(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_7;                       // 0x1280(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C0A[0x3];                                     // 0x1281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_6;                      // 0x1284(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_DemoID;                         // 0x1288(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x1290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C0B[0x7];                                     // 0x1291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_6;          // 0x1298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_4;            // 0x12A8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x12B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C0C[0x4];                                     // 0x12BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_17;             // 0x12C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x12D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_18;             // 0x12E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_19;             // 0x12F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x1300(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_20;             // 0x1318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x1328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x1329(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C0D[0x6];                                     // 0x132A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAestheShop_TicketSelectMenu_C*         CallFunc_Create_ReturnValue_21;                    // 0x1330(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool InIsCourseDecided, int32 InTicketTokenId, int32 InUseTicketNum)> K2Node_CreateDelegate_OutputDelegate_36;           // 0x1338(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsDebug_ReturnValue_2;                    // 0x1348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C0E[0x3];                                     // 0x1349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InDemoName;                           // 0x134C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameSingleton_IsValid_1;               // 0x1354(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C0F[0x3];                                     // 0x1355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue_1;           // 0x1358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_37;           // 0x1360(0x0010)(ZeroConstructor, NoDestructor)
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue;               // 0x1370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x1378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable;                                // 0x1379(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_1;                              // 0x137A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x137B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   K2Node_CustomEvent_InDemoId;                       // 0x137C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_38;           // 0x1384(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_PlayDemo_ReturnValue;                     // 0x1394(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDebug_ReturnValue_3;                    // 0x1395(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C10[0x2];                                     // 0x1396(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_T_ApartShop_C*                     CallFunc_Create_ReturnValue_22;                    // 0x1398(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x13A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_39;           // 0x13A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_22;                   // 0x13B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C11[0x3];                                     // 0x13B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x13BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_40;           // 0x13C0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x13D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x13D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C12[0x3];                                     // 0x13D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_13;       // 0x13D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_14;       // 0x13E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool InGoToNext)>              K2Node_CreateDelegate_OutputDelegate_41;           // 0x13E8(0x0010)(ZeroConstructor, NoDestructor)
	class UDhcBattleTop_C*                        CallFunc_Create_ReturnValue_23;                    // 0x13F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class ASBLevelSequenceActor*            K2Node_CustomEvent_SequencerActor;                 // 0x1400(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameWorld_ReturnValue;                  // 0x1408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C13[0x3];                                     // 0x1409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_42;           // 0x140C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7C14[0x4];                                     // 0x141C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InOtherActor;                         // 0x1420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_ViewParamId;                          // 0x1428(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsNoCheckAtTeleportPlayer;           // 0x1430(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C15[0x3];                                     // 0x1431(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_InCameraZOffset;                      // 0x1434(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSoundManager_IsValid;                  // 0x1438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C16[0x7];                                     // 0x1439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSoundManager*                        CallFunc_GetSoundManager_ReturnValue;              // 0x1440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopType                                     K2Node_Event_InShopType_2;                         // 0x1448(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C17[0x3];                                     // 0x1449(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InProductListId;                      // 0x144C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x1454(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C18[0x3];                                     // 0x1455(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UNpcGuild_C*                            CallFunc_Create_ReturnValue_24;                    // 0x1458(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x1460(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result_6;                       // 0x1478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C19[0x3];                                     // 0x1479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_43;           // 0x147C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7C1A[0x4];                                     // 0x148C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNpcGuildJoin_C*                        CallFunc_Create_ReturnValue_25;                    // 0x1490(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNpcGuild_C*                            CallFunc_Create_ReturnValue_26;                    // 0x1498(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_44;           // 0x14A0(0x0010)(ZeroConstructor, NoDestructor)
	class UImagineStackBMenu_C*                   CallFunc_Create_ReturnValue_27;                    // 0x14B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsBattleImagine;                     // 0x14B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_InIsCostumeChange;                    // 0x14B9(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_InIsColorSVEnabled;                   // 0x14BA(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C1B[0x5];                                     // 0x14BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue_2;          // 0x14C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue_3;          // 0x14D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsLiquidMemoryUsed;             // 0x14E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C1C[0x7];                                     // 0x14E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_29;     // 0x14E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_30;     // 0x14F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopType                                     K2Node_Event_InShopType_1;                         // 0x14F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C1D[0x3];                                     // 0x14F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsUsed)>                  K2Node_CreateDelegate_OutputDelegate_45;           // 0x14FC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7C1E[0x4];                                     // 0x150C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Result_5;                       // 0x1510(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool IsUsed)>                  K2Node_CreateDelegate_OutputDelegate_46;           // 0x1520(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsUsed)>                  K2Node_CreateDelegate_OutputDelegate_47;           // 0x1530(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_48;           // 0x1540(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsUsed)>                  K2Node_CreateDelegate_OutputDelegate_49;           // 0x1550(0x0010)(ZeroConstructor, NoDestructor)
	class URmShopMenu_C*                          CallFunc_Create_ReturnValue_28;                    // 0x1560(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x1568(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x1578(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x1588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x1590(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_CreateWeaponCustomMenuSynthe_Widget;      // 0x1598(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x15A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C1F[0x4];                                     // 0x15A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIWeaponCustomBase*                  K2Node_DynamicCast_AsSBUIWeapon_Custom_Base;       // 0x15A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_19;                    // 0x15B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C20[0x7];                                     // 0x15B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x15B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerWarpComponent*                 CallFunc_GetPlayerWarpComponent_ReturnValue;       // 0x15C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_23;                   // 0x15D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_24;                   // 0x15D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C21[0x2];                                     // 0x15D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_50;           // 0x15D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7C22[0x4];                                     // 0x15E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_31;     // 0x15E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Fang_expedition_C*                  CallFunc_Create_ReturnValue_29;                    // 0x15F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x15F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSuccess;                      // 0x1600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C23[0x3];                                     // 0x1601(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_51;           // 0x1604(0x0010)(ZeroConstructor, NoDestructor)
	EShopType                                     K2Node_Event_InShopType;                           // 0x1614(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C24[0x3];                                     // 0x1615(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_2;                             // 0x1618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_CreateWeaponCustomMenuTuning_Widget;      // 0x1620(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_3;                             // 0x1628(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIWeaponCustomBase*                  K2Node_DynamicCast_AsSBUIWeapon_Custom_Base_1;     // 0x1630(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_20;                    // 0x1638(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C25[0x7];                                     // 0x1639(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsSBLogin_Bonus_Window;    // 0x1640(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_2;                // 0x1648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C26[0x7];                                     // 0x1649(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLoginBonusWindow*                    CallFunc_Create_ReturnValue_30;                    // 0x1650(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_8;                       // 0x1658(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_32;     // 0x1660(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_52;           // 0x1668(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_isUsed_3;                       // 0x1678(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isUsed_2;                       // 0x1679(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isUsed_1;                       // 0x167A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isUsed;                         // 0x167B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C27[0x4];                                     // 0x167C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_1;                       // 0x1680(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_53;           // 0x1688(0x0010)(ZeroConstructor, NoDestructor)
	class UClass*                                 Temp_class_Variable_4;                             // 0x1698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_CreateWeaponCustomMenuExtender_Widget;    // 0x16A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIWeaponCustomBase*                  K2Node_DynamicCast_AsSBUIWeapon_Custom_Base_2;     // 0x16A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_21;                    // 0x16B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C28[0x7];                                     // 0x16B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_2;       // 0x16B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_25;                   // 0x16C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C29[0x7];                                     // 0x16C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWarpComponent*                 CallFunc_GetPlayerWarpComponent_ReturnValue_1;     // 0x16C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_26;                   // 0x16D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C2A[0x3];                                     // 0x16D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_54;           // 0x16D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDhcMapMode;                         // 0x16E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InGoToNext;                     // 0x16E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C2B[0x2];                                     // 0x16E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x16E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C2C[0x4];                                     // 0x16EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_33;     // 0x16F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x16F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x1700(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x1708(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x1710(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_2;                       // 0x1718(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         K2Node_Event_InRoomId;                             // 0x1720(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C2D[0x4];                                     // 0x1724(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x1728(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_5;                      // 0x1730(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C2E[0x4];                                     // 0x1734(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerOrnamentComponent*             CallFunc_GetPlayerOrnamentComponent_ReturnValue;   // 0x1738(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_5;            // 0x1740(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x1750(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x1768(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C2F[0x3];                                     // 0x1769(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_5;                   // 0x176C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       CallFunc_Array_Get_Item_3;                         // 0x1770(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x1778(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1788(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C30[0x7];                                     // 0x1789(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_5;                             // 0x1790(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_CreateWeaponCustomMenuRemove_Widget;      // 0x1798(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIWeaponCustomBase*                  K2Node_DynamicCast_AsSBUIWeapon_Custom_Base_3;     // 0x17A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_22;                    // 0x17A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C31[0x7];                                     // 0x17A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_3;                       // 0x17B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_55;           // 0x17B8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_ValidT_Apart_ReturnValue;                 // 0x17C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C32[0x7];                                     // 0x17C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShop_C*                           CallFunc_Create_ReturnValue_31;                    // 0x17D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x17D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C33[0x7];                                     // 0x17D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShop_C*                           CallFunc_Create_ReturnValue_32;                    // 0x17E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            K2Node_Select_Default_3;                           // 0x17E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C34[0x3];                                     // 0x17E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x17EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x17F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UEventShop_C*                           CallFunc_Create_ReturnValue_33;                    // 0x1800(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetPlayerGender_OutGender;                // 0x1808(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C35[0x7];                                     // 0x1809(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShop_C*                           CallFunc_Create_ReturnValue_34;                    // 0x1810(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventShop_C*                           CallFunc_Create_ReturnValue_35;                    // 0x1818(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_56;           // 0x1820(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_57;           // 0x1830(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_3;       // 0x1840(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_27;                   // 0x1848(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C36[0x7];                                     // 0x1849(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWarpComponent*                 CallFunc_GetPlayerWarpComponent_ReturnValue_2;     // 0x1850(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_28;                   // 0x1858(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C37[0x7];                                     // 0x1859(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_4;       // 0x1860(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWarpComponent*                 CallFunc_GetPlayerWarpComponent_ReturnValue_3;     // 0x1868(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_29;                   // 0x1870(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_30;                   // 0x1871(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsCourseDecided;              // 0x1872(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C38[0x1];                                     // 0x1873(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InTicketTokenId;                // 0x1874(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InUseTicketNum;                 // 0x1878(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsSuccess)>               K2Node_CreateDelegate_OutputDelegate_58;           // 0x187C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7C39[0x4];                                     // 0x188C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x1890(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAestheCourseMasterFromTicketTokenId_OutIsValid; // 0x18A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C3A[0x7];                                     // 0x18A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCourseMasterData          CallFunc_GetAestheCourseMasterFromTicketTokenId_OutMaster; // 0x18A8(0x0050)()
	bool                                          CallFunc_CheckIfPlayerHasAestheTicket_OutHasTicket; // 0x18F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C3B[0x3];                                     // 0x18F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;               // 0x18FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1900(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C3C[0x7];                                     // 0x1901(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_4;           // 0x1908(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_5;           // 0x1918(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_21;             // 0x1928(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_22;             // 0x1938(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_23;             // 0x1948(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_24;             // 0x1958(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_31;                   // 0x1968(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C3D[0x7];                                     // 0x1969(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_25;             // 0x1970(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_26;             // 0x1980(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_27;             // 0x1990(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMG_ShopAdventurerRank_Rankup_C*       CallFunc_Create_ReturnValue_36;                    // 0x19A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue_1;          // 0x19A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_QuestIndex_1;                         // 0x19B8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_59;           // 0x19BC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Event_InQuestIndex_4;                       // 0x19CC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_60;           // 0x19D0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bReported;                      // 0x19E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C3E[0x3];                                     // 0x19E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InClientId;                           // 0x19E4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C3F[0x4];                                     // 0x19EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetRelationQuest_OutQuestIndexList;       // 0x19F0(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetRelationQuest_ReturnValue;             // 0x1A00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_4;                         // 0x1A04(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x1A08(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x1A0C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x1A0D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C40[0x2];                                     // 0x1A0E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_SelectItem;                     // 0x1A10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C41[0x4];                                     // 0x1A14(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x1A18(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_5;                         // 0x1A28(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C42[0x4];                                     // 0x1A2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetQuestNameArray_OutQuestNameList;       // 0x1A30(0x0010)(ReferenceParm)
	class FName                                   K2Node_Event_InQuestBoardId;                       // 0x1A40(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_61;           // 0x1A48(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Event_QuestIndex;                           // 0x1A58(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C43[0x4];                                     // 0x1A5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_15;       // 0x1A60(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_3;        // 0x1A68(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_23;                    // 0x1A70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_4;                       // 0x1A71(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptedQuestErrorCode                       K2Node_CustomEvent_ErrorCode;                      // 0x1A72(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C44[0x1];                                     // 0x1A73(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x1A74(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     K2Node_CustomEvent_AcceptedQuestInfo;              // 0x1A78(0x0060)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue_32;                   // 0x1AD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C45[0x7];                                     // 0x1AD9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetAcceptQuestErrorCodeText_ReturnValue;  // 0x1AE0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x1AF0(0x0018)()
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue_2;          // 0x1B08(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     K2Node_MakeStruct_AcceptedQuestInfo;               // 0x1B10(0x0060)()
	bool                                          CallFunc_Request_AcceptQuest_ReturnValue;          // 0x1B70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBImagineCategoryType                        Temp_byte_Variable_2;                              // 0x1B71(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        Temp_byte_Variable_3;                              // 0x1B72(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x1B73(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_62;           // 0x1B74(0x0010)(ZeroConstructor, NoDestructor)
	ESBImagineCategoryType                        K2Node_Select_Default_4;                           // 0x1B84(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSystemMessageManager_IsValid_2;        // 0x1B85(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C46[0x2];                                     // 0x1B86(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue_2;    // 0x1B88(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_StoragePresetEquip_C*              CallFunc_Create_ReturnValue_37;                    // 0x1B90(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InQuestIndex_3;                       // 0x1B98(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  CallFunc_GetQuestStatus_QuestStatus;               // 0x1B9C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C47[0x3];                                     // 0x1B9D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_63;           // 0x1BA0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x1BB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestDetail_FinishStatus                     K2Node_CustomEvent_FinishStatus_1;                 // 0x1BB1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C48[0x2];                                     // 0x1BB2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_QuestIndex_1;                   // 0x1BB4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x1BB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x1BB9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestDetail_FinishStatus                     K2Node_CustomEvent_FinishStatus;                   // 0x1BBA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C49[0x1];                                     // 0x1BBB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_QuestIndex;                     // 0x1BBC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InQuestIndex_2;                       // 0x1BC0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x1BC4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x1BC5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C4A[0x2];                                     // 0x1BC6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InQuestIndex_1;                       // 0x1BC8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InStepIndex;                          // 0x1BCC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InConditionDataId;                    // 0x1BD0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C4B[0x4];                                     // 0x1BD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URankingMenu_C*                         CallFunc_Create_ReturnValue_38;                    // 0x1BD8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_CompleteStep_ReturnValue;         // 0x1BE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C4C[0x7];                                     // 0x1BE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_6;           // 0x1BE8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_7;           // 0x1BF8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x1C08(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x1C20(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x1C38(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x1C78(0x0040)(HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_3;                       // 0x1CB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C4D[0x3];                                     // 0x1CB9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x1CBC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     K2Node_CustomEvent_PrevAcceptedQuestInfo_1;        // 0x1CC0(0x0060)(ConstParm)
	bool                                          CallFunc_IsDebug_ReturnValue_4;                    // 0x1D20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C4E[0x7];                                     // 0x1D21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_6;            // 0x1D28(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x1D38(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x1D78(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x1D90(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x1DA8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x1DE8(0x0010)(ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x1DF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C4F[0x7];                                     // 0x1DF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x1E00(0x0018)()
	class FText                                   K2Node_Select_Default_5;                           // 0x1E18(0x0018)()
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x1E30(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C50[0x4];                                     // 0x1E34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_8;           // 0x1E38(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_28;             // 0x1E48(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_64;           // 0x1E58(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_29;             // 0x1E68(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_30;             // 0x1E78(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     K2Node_MakeStruct_AcceptedQuestInfo_1;             // 0x1E88(0x0060)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_31;             // 0x1EE8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_32;             // 0x1EF8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMG_ShopAdventurerRank_C*              CallFunc_Create_ReturnValue_39;                    // 0x1F08(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_33;             // 0x1F10(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_34;             // 0x1F20(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_35;             // 0x1F30(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_65;           // 0x1F40(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_36;             // 0x1F50(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue_5;                    // 0x1F60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSBTelopManager_IsValid;                // 0x1F61(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C51[0x6];                                     // 0x1F62(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTelopManager*                        CallFunc_GetSBTelopManager_ReturnValue;            // 0x1F68(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x1F70(0x0060)()
	int32                                         K2Node_Event_InQuestIndex;                         // 0x1FD0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_NpcId;                                // 0x1FD4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_UpdateQuestProgressTalkNpc_ReturnValue; // 0x1FDC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C52[0x3];                                     // 0x1FDD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_6;                  // 0x1FE0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x1FE4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C53[0x3];                                     // 0x1FE5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x1FE8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_2;                       // 0x1FEC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C54[0x3];                                     // 0x1FED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x1FF0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C55[0x4];                                     // 0x1FF4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     K2Node_CustomEvent_PrevAcceptedQuestInfo;          // 0x1FF8(0x0060)(ConstParm)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_7;            // 0x2058(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_66;           // 0x2068(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x2078(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_8;          // 0x2090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x2091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C56[0x6];                                     // 0x2092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCashExchangeShop_C*                    CallFunc_Create_ReturnValue_40;                    // 0x2098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& Result)>  K2Node_CreateDelegate_OutputDelegate_67;           // 0x20A0(0x0010)(ZeroConstructor, NoDestructor)
	class UArenaList_C*                           CallFunc_Create_ReturnValue_41;                    // 0x20B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_68;           // 0x20B8(0x0010)(ZeroConstructor, NoDestructor)
	class UEventShop_C*                           CallFunc_Create_ReturnValue_42;                    // 0x20C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsLiquidMemoryUsed)>      K2Node_CreateDelegate_OutputDelegate_69;           // 0x20D0(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class FText>                           K2Node_Event_InItems;                              // 0x20E0(0x0010)(ConstParm, ReferenceParm)
	class FText                                   K2Node_Event_MessageText_1;                        // 0x20F0(0x0018)(ConstParm)
	class FText                                   CallFunc_Array_Get_Item_6;                         // 0x2108(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x2120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_8;               // 0x2124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x2128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C57[0x3];                                     // 0x2129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x212C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x2130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C58[0x3];                                     // 0x2131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_70;           // 0x2134(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7C59[0x4];                                     // 0x2144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_MessageText;                          // 0x2148(0x0018)(ConstParm)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x2160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C5A[0x3];                                     // 0x2161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_5;             // 0x2164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_InText_1;                             // 0x2168(0x0018)(ConstParm)
	bool                                          K2Node_Event_bWaitUserInput;                       // 0x2180(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C5B[0x7];                                     // 0x2181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_Event_InAttachCharacter;                    // 0x2188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_InText;                               // 0x2190(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x21A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_BalloonComponent_C*                 CallFunc_GetComponentByClass_ReturnValue_3;        // 0x21B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_33;                   // 0x21C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C5C[0x3];                                     // 0x21C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_SelectItemIndex;                // 0x21C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_71;           // 0x21C8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_9;          // 0x21D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C5D[0x7];                                     // 0x21D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_16;       // 0x21E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LiquidMemoryShop_C*                CallFunc_Create_ReturnValue_43;                    // 0x21E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_34;                   // 0x21F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C5E[0x7];                                     // 0x21F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_1;                     // 0x21F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_17;       // 0x2200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD;                 // 0x2208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_24;                    // 0x2210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_35;                   // 0x2211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C5F[0x6];                                     // 0x2212(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextWindow*                          CallFunc_GetTextWindow_ReturnValue;                // 0x2218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_2;                     // 0x2220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD_1;               // 0x2228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_25;                    // 0x2230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C60[0x3];                                     // 0x2231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_72;           // 0x2234(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7C61[0x4];                                     // 0x2244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextWindow*                          CallFunc_GetTextWindow_ReturnValue_1;              // 0x2248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_36;                   // 0x2250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C62[0x7];                                     // 0x2251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_18;       // 0x2258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_37;                   // 0x2260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_38;                   // 0x2261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C63[0x2];                                     // 0x2262(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_6;                   // 0x2264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_7;                         // 0x2268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEventTriggerName_ReturnValue;          // 0x2270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x2280(0x0018)()
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_73;           // 0x2298(0x0010)(ZeroConstructor, NoDestructor)
	class UImagineCraft_C*                        CallFunc_Create_ReturnValue_44;                    // 0x22A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_74;           // 0x22B0(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_34;     // 0x22C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UChildActorComponent*>           K2Node_MakeArray_Array_5;                          // 0x22C8(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_39;                   // 0x22D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C64[0x7];                                     // 0x22D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_19;       // 0x22E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_40;                   // 0x22E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C65[0x3];                                     // 0x22E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item_8;                         // 0x22EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C66[0x4];                                     // 0x22F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScriptCameraShakeData                 CallFunc_GetDataTableRowFromName_OutRow_6;         // 0x22F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_6;    // 0x2300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C67[0x3];                                     // 0x2301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_9;               // 0x2304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x2308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C68[0x3];                                     // 0x2309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_75;           // 0x230C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_10;              // 0x231C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x2320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_41;                   // 0x2321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C69[0x2];                                     // 0x2322(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InName;                               // 0x2324(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_42;                   // 0x232C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C6A[0x3];                                     // 0x232D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_76;           // 0x2330(0x0010)(ZeroConstructor, NoDestructor)
	class UWBP_StorageShop_C*                     CallFunc_Create_ReturnValue_45;                    // 0x2340(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bAll;                                 // 0x2348(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C6B[0x7];                                     // 0x2349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_20;       // 0x2350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBWorldSettings*                       CallFunc_GetWorldSettings_ReturnValue;             // 0x2358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_5;             // 0x2360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_26;                    // 0x2368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C6C[0x3];                                     // 0x2369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x236C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_6;                           // 0x2374(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C6D[0x4];                                     // 0x237C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetActivateMapsOnDungeonComplete_MapIdList; // 0x2380(0x0010)(ReferenceParm)
	class UMachineMenu_C*                         CallFunc_Create_ReturnValue_46;                    // 0x2390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_77;           // 0x2398(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   CallFunc_Array_Get_Item_9;                         // 0x23A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_47;                    // 0x23B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDungeonDisplayName_ReturnValue;        // 0x23B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x23C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x23E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_6;                          // 0x2420(0x0010)(ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_78;           // 0x2430(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   CallFunc_Array_Get_Item_10;                        // 0x2440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_11;              // 0x2448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C6E[0x4];                                     // 0x244C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_7;          // 0x2450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x2460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C6F[0x7];                                     // 0x2461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_37;             // 0x2468(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_DungeonId;                      // 0x2478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_79;           // 0x2480(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x2490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C70[0x7];                                     // 0x2491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x2498(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class ASBLevelSequenceActor* SequencerActor)> K2Node_CreateDelegate_OutputDelegate_80;           // 0x24A8(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x24B8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x24D0(0x0018)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x24E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 RetCode, class FName& DemoId)> K2Node_CreateDelegate_OutputDelegate_81;           // 0x24EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_43;                   // 0x24FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C71[0x3];                                     // 0x24FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode, class FName& DemoId)> K2Node_CreateDelegate_OutputDelegate_82;           // 0x2500(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_83;           // 0x2510(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_21;       // 0x2520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x2528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C72[0x4];                                     // 0x252C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_NappoId;                              // 0x2530(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_35;     // 0x2540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBHappyNappoComponent*                 CallFunc_GetHappyNappoComponent_ReturnValue;       // 0x2548(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_36;     // 0x2550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_44;                   // 0x2558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C73[0x7];                                     // 0x2559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBHappyNappoComponent*                 CallFunc_GetHappyNappoComponent_ReturnValue_1;     // 0x2560(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_37;     // 0x2568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBHappyNappoComponent*                 CallFunc_GetHappyNappoComponent_ReturnValue_2;     // 0x2570(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x2578(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_is_new;                         // 0x257C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C74[0x3];                                     // 0x257D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_CustomEvent_gained_achievement_ids;         // 0x2580(0x0010)(ConstParm, ReferenceParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_38;     // 0x2590(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBHappyNappoComponent*                 CallFunc_GetHappyNappoComponent_ReturnValue_3;     // 0x2598(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetInteractedNapposList_ReturnValue;      // 0x25A0(0x0010)(ReferenceParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_39;     // 0x25B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBHappyNappoComponent*                 CallFunc_GetHappyNappoComponent_ReturnValue_4;     // 0x25B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x25C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditor_ReturnValue_1;                   // 0x25C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C75[0x6];                                     // 0x25C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_40;     // 0x25C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBHappyNappoComponent*                 CallFunc_GetHappyNappoComponent_ReturnValue_5;     // 0x25D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInteractedHappyNappoIds_ReturnValue;   // 0x25D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_10;         // 0x25DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C76[0x3];                                     // 0x25DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x25E0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C77[0x4];                                     // 0x25E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_NappoIds;                       // 0x25E8(0x0010)(ConstParm, ReferenceParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_41;     // 0x25F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_8;                 // 0x2600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C78[0x7];                                     // 0x2601(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBHappyNappoComponent*                 CallFunc_GetHappyNappoComponent_ReturnValue_6;     // 0x2608(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor) == 0x000008, "Wrong alignment on BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor");
static_assert(sizeof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor) == 0x002610, "Wrong size on BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, EntryPoint) == 0x000000, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue) == 0x000010, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_1) == 0x000018, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000030, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_2) == 0x000048, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_2) == 0x000050, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Array_Index_Variable) == 0x000060, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_3) == 0x000064, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_3) == 0x000078, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_4) == 0x000080, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000090, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_4) == 0x000098, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x0000A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x0000B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_5) == 0x0000C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_5) == 0x0000C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_6) == 0x0000D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Loop_Counter_Variable) == 0x0000D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000DC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Add_IntInt_ReturnValue) == 0x0000EC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_7) == 0x0000F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_8) == 0x0000F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetQuestComponent_ReturnValue) == 0x000100, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetQuestComponent_ReturnValue_1) == 0x000108, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_1) == 0x000111, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_bool_Variable) == 0x000112, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_9) == 0x000118, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Loop_Counter_Variable_1) == 0x000120, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000128, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Add_IntInt_ReturnValue_1) == 0x000130, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_2) == 0x000134, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Array_Index_Variable_1) == 0x000138, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_10) == 0x000140, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetTheaterComponent_ReturnValue) == 0x000148, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetTheaterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_3) == 0x000150, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_6) == 0x000158, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_7) == 0x000160, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_8) == 0x000170, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_9) == 0x000180, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Array_Index_Variable_2) == 0x000190, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_LimitAngleDifference_OutTarget) == 0x000194, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_LimitAngleDifference_OutTarget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_11) == 0x000198, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetTheaterComponent_ReturnValue_1) == 0x0001A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetTheaterComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Loop_Counter_Variable_2) == 0x0001A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_4) == 0x0001AC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Array_Index_Variable_3) == 0x0001B4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_object_Variable) == 0x0001B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Loaded_4) == 0x0001C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Loaded_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsASAnimation_Set) == 0x0001C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsASAnimation_Set' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess) == 0x0001D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsStandalone_ReturnValue) == 0x0001D1, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_12) == 0x0001D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_13) == 0x0001E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsInMission_ReturnValue) == 0x0001E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsInMission_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetLoginBonusComponent_ReturnValue) == 0x0001F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetLoginBonusComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_bWasSuccessful_2) == 0x0001F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_bWasSuccessful_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_ErrorCode_2) == 0x0001FC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_ErrorCode_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_14) == 0x000200, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000208, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetLoginBonusComponent_ReturnValue_1) == 0x000210, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetLoginBonusComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BooleanAND_ReturnValue) == 0x000218, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsNeedLoginBonusWindow_ReturnValue) == 0x000219, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsNeedLoginBonusWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x00021A, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_15) == 0x000220, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_object_Variable_1) == 0x000228, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetHUD_ReturnValue) == 0x000230, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBChara_Create_Data) == 0x000238, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBChara_Create_Data' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_1) == 0x000240, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x000248, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_2) == 0x000258, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_5) == 0x000259, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetTextFromAsset_ReturnValue) == 0x000260, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue) == 0x000270, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_16) == 0x000288, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_FaceComponent) == 0x000290, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_FaceComponent' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_Speed) == 0x000298, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_Speed' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_Duration) == 0x00029C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_Duration' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Loop_Counter_Variable_3) == 0x0002A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002A4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetLipSyncSpeed_ReturnValue) == 0x0002A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetLipSyncSpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_6) == 0x0002AC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_17) == 0x0002B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_10) == 0x0002B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_18) == 0x0002C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_19) == 0x0002D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_BuffPoint) == 0x0002D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_BuffPoint' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_PlayerCharacter) == 0x0002E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0002E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Loaded_5) == 0x0002F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Loaded_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetAllActorsOfClass_OutActors) == 0x000300, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Loop_Counter_Variable_4) == 0x000310, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue) == 0x000314, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Add_IntInt_ReturnValue_4) == 0x000318, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_1) == 0x00031C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_RowName) == 0x000320, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_RowName' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bCastShadow) == 0x000328, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bCastShadow' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_BoolToString_ReturnValue) == 0x000330, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_OutRow) == 0x000340, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000360, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_class_Variable) == 0x000368, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_ClassDynamicCast_AsActor) == 0x000370, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_ClassDynamicCast_bSuccess) == 0x000378, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_ClassDynamicCast_AsActor_1) == 0x000380, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_ClassDynamicCast_AsActor_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_ClassDynamicCast_bSuccess_1) == 0x000388, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000390, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item) == 0x0003A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetComponentByClass_ReturnValue) == 0x0003A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDisplayName_ReturnValue) == 0x0003B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_7) == 0x0003C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue) == 0x0003C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_2) == 0x0003D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0003E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Less_IntInt_ReturnValue) == 0x0003F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item_1) == 0x0003F4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_3) == 0x0003FC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_NameToString_ReturnValue) == 0x000400, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Less_IntInt_ReturnValue_1) == 0x000410, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000411, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BooleanAND_ReturnValue_1) == 0x000412, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_20) == 0x000418, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_21) == 0x000420, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_BoolToString_ReturnValue_1) == 0x000428, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_BoolToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000438, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Loaded_6) == 0x000448, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Loaded_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue) == 0x000450, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_8) == 0x000458, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000460, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_3) == 0x000468, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetGuildComponent_ReturnValue) == 0x000470, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsGuildMember_ReturnValue) == 0x000478, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Not_PreBool_ReturnValue) == 0x000479, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_11) == 0x00047C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_9) == 0x00048C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_10) == 0x00048D, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_22) == 0x000490, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InWarpPointId) == 0x000498, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InWarpPointId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_1) == 0x0004A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0004A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_RequestAddActivate_ReturnValue) == 0x0004B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_RequestAddActivate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0004B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_11) == 0x0004C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0004C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_4) == 0x0004D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsInitialLoadCompleted_ReturnValue) == 0x0004D1, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsInitialLoadCompleted_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_2) == 0x0004D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_FindLookAtRotation_ReturnValue) == 0x0004E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_12) == 0x0004EC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x0004FC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000584, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InMailId) == 0x000588, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InMailId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_3) == 0x000590, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerId_ReturnValue) == 0x000598, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0005A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_5) == 0x0005B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_State) == 0x0005B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_6) == 0x0005C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetMailComponent_ReturnValue) == 0x0005C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetMailComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetCharacterId_self_CastInput) == 0x0005D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetCharacterId_ReturnValue) == 0x0005E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_bWasSuccessful_1) == 0x0005F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_ErrorCode_1) == 0x0005F4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_ErrorCode_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_7) == 0x0005F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InId_3) == 0x000600, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InId_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InSettingId) == 0x000608, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InSettingId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InTransitionTime) == 0x000610, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InTransitionTime' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_13) == 0x000614, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsBP_Script_Post_Process_Actor) == 0x000628, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsBP_Script_Post_Process_Actor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_7) == 0x000630, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_ApplyDofSettings_bResult) == 0x000631, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_ApplyDofSettings_bResult' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsBP_Script_Post_Process_Actor_1) == 0x000638, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsBP_Script_Post_Process_Actor_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_8) == 0x000640, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InTargetActor) == 0x000648, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InTargetActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InParticleId) == 0x000650, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InParticleId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InAttachSocketId) == 0x000658, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InAttachSocketId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InOffsetLocation_1) == 0x000660, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InOffsetLocation_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_23) == 0x000670, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000678, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0006A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0006A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x0006B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsParticle_System) == 0x0006B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsParticle_System' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_9) == 0x0006C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsParticle_System_1) == 0x0006C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsParticle_System_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_10) == 0x0006D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_12) == 0x0006D1, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_bool_Variable_1) == 0x0006D2, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InQuestion) == 0x0006D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InQuestion' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InItems_1) == 0x0006F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InItems_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_InSelectItemIndex_1) == 0x000700, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_InSelectItemIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InCharacterId) == 0x000704, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InCharacterId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_Location) == 0x00070C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x000718, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x0007A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0007A1, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x0007A2, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_24) == 0x0007A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_object_Variable_2) == 0x0007B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsParticle_System_2) == 0x0007B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsParticle_System_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_11) == 0x0007C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_25) == 0x0007C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_SpawnSubActor_Internal_ReturnValue) == 0x0007D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_SpawnSubActor_Internal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_SpawnSubActor_Internal_ReturnValue_1) == 0x0007D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_SpawnSubActor_Internal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_26) == 0x0007E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InActor) == 0x0007E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InTargetLocation_1) == 0x0007F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InTargetLocation_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_27) == 0x000800, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Lerp_ReturnValue) == 0x000808, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_MakeRotator_ReturnValue) == 0x00080C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Array_Index_Variable_4) == 0x000818, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item_2) == 0x00081C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000828, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000838, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000848, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000858, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_SourceActor) == 0x000868, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_SourceActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_DestinationActor) == 0x000870, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_DestinationActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bIsMount) == 0x000878, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bIsMount' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_bool_Has_Been_Initd_Variable) == 0x000879, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Not_PreBool_ReturnValue_1) == 0x00087A, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00087C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Get_Actor_Yaw_Diff_YawDiff) == 0x000888, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Get_Actor_Yaw_Diff_YawDiff' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00088C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_FloatToString_ReturnValue) == 0x000890, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BooleanAND_ReturnValue_2) == 0x0008A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_6) == 0x0008A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetComponentByClass_ReturnValue_2) == 0x0008B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0008C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x0008D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_12) == 0x0008D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_28) == 0x0008E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x0008E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_13) == 0x0008F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerInteractionComponent_ReturnValue) == 0x0008F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerInteractionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_14) == 0x000900, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_InActor) == 0x000908, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_InActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_InTargetLocation) == 0x000910, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_InTargetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_SetActorRotation_ReturnValue) == 0x00091C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000920, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x00092C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_FindLookAtRotation_ReturnValue_1) == 0x000938, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_FindLookAtRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BreakRotator_Roll) == 0x000944, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BreakRotator_Pitch) == 0x000948, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BreakRotator_Yaw) == 0x00094C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BreakRotator_Roll_1) == 0x000950, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BreakRotator_Pitch_1) == 0x000954, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BreakRotator_Yaw_1) == 0x000958, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_bool_IsClosed_Variable) == 0x00095C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_8) == 0x000960, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_14) == 0x000968, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_15) == 0x000978, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InContentLockType) == 0x000988, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InContentLockType' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bInLock) == 0x000989, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bInLock' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_16) == 0x00098C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetContentLock_ReturnValue) == 0x00099C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetContentLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_4) == 0x0009A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0009A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x0009B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_13) == 0x0009B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x0009C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_11) == 0x0009C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_11' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Request_SetContentLock_ReturnValue) == 0x0009C9, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Request_SetContentLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InEmoteId) == 0x0009CC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InEmoteId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_5) == 0x0009D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeArray_Array) == 0x0009E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_bWasSuccessful) == 0x0009F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x0009F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_14) == 0x000A00, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSystemMessageManager_IsValid) == 0x000A01, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSystemMessageManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSystemMessageManager_ReturnValue) == 0x000A08, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSystemMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_10) == 0x000A10, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_9) == 0x000A18, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_10) == 0x000A20, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsDebug_ReturnValue) == 0x000A28, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_17) == 0x000A2C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_bool_Variable_2) == 0x000A3C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_11) == 0x000A40, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InKey) == 0x000A48, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InKey' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InValue) == 0x000A50, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_SBKeyPair) == 0x000A60, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_SBKeyPair' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_NameToString_ReturnValue_2) == 0x000A78, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_NameToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeArray_Array_1) == 0x000A88, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Request_SetKeyValue_ReturnValue) == 0x000A98, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Request_SetKeyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBRetMessage_ReturnValue) == 0x000AA0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_18) == 0x000AB0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000AC0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsDebug_ReturnValue_1) == 0x000AD0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsDebug_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_8) == 0x000AD8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_9) == 0x000AE8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000AF8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_10) == 0x000B08, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_11) == 0x000B18, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_12) == 0x000B28, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_6) == 0x000B38, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Select_Default) == 0x000B40, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000B50, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_State_2) == 0x000B68, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_State_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_15) == 0x000B70, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_DungeonId_1) == 0x000B74, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_DungeonId_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_7) == 0x000B80, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_19) == 0x000B88, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_State_3) == 0x000B98, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_State_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_16) == 0x000BA0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_16' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InContentId) == 0x000BA4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InContentId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bIsStartMatching) == 0x000BAC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bIsStartMatching' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000BAD, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_NameToString_ReturnValue_3) == 0x000BB0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_NameToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_13) == 0x000BC0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsActivatedDungeon_bActivated) == 0x000BD0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsActivatedDungeon_bActivated' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsDungeonMap_ReturnValue) == 0x000BD1, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsDungeonMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_NameToString_ReturnValue_4) == 0x000BD8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_NameToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_14) == 0x000BE8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Loaded_7) == 0x000BF8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Loaded_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Sender_1) == 0x000C00, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_InDungeonGame_ReturnValue) == 0x000C08, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_20) == 0x000C0C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Add_ReturnValue) == 0x000C1C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_12) == 0x000C20, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_21) == 0x000C28, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InSubEvents) == 0x000C38, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InSubEvents' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetValidSubEvents_OutValidEvents) == 0x000C48, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetValidSubEvents_OutValidEvents' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_4) == 0x000C58, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Less_IntInt_ReturnValue_2) == 0x000C5C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_5) == 0x000C60, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000C64, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000C65, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_InSelectItemIndex) == 0x000C68, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_InSelectItemIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_13) == 0x000C70, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_22) == 0x000C78, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_15) == 0x000C88, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_16) == 0x000C89, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Preset) == 0x000C8A, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Preset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000C8C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_14) == 0x000C90, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_23) == 0x000C98, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_bool_Variable_3) == 0x000CA8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_24) == 0x000CAC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_24' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_RetCode) == 0x000CBC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_RetCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x000CC0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000CD0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000CE0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000CF8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetGameSingleton_IsValid) == 0x000D10, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetGameSingleton_IsValid' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetGameSingleton_ReturnValue) == 0x000D18, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetGameSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetUIManager_ReturnValue) == 0x000D20, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_15) == 0x000D28, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetServerReconnectionWaitTime_ReturnValue) == 0x000D30, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetServerReconnectionWaitTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InDelayTime) == 0x000D34, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InDelayTime' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_FMax_ReturnValue) == 0x000D38, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InDuration_3) == 0x000D3C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InDuration_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bInWait_1) == 0x000D40, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bInWait_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000D44, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_FormatArgumentData) == 0x000D48, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeArray_Array_2) == 0x000D88, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Format_ReturnValue) == 0x000D98, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InDuration_2) == 0x000DB0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InDuration_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bInWait) == 0x000DB4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bInWait' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_FormatArgumentData_1) == 0x000DB8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeArray_Array_3) == 0x000DF8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Format_ReturnValue_1) == 0x000E08, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x000E20, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_Character_2) == 0x000E28, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_Character_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_17) == 0x000E30, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_17' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetVelocity_ReturnValue) == 0x000E34, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_HasAnimTag_ReturnValue) == 0x000E40, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_HasAnimTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_VSize_ReturnValue) == 0x000E44, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000E48, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InColor) == 0x000E4C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InColor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InDuration_1) == 0x000E5C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InDuration_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BreakColor_R) == 0x000E60, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BreakColor_G) == 0x000E64, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BreakColor_B) == 0x000E68, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BreakColor_A) == 0x000E6C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_25) == 0x000E70, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_25' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InDuration) == 0x000E80, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InDuration' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_17) == 0x000E84, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_26) == 0x000E88, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_26' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_FadeIn_bResult) == 0x000E98, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_FadeIn_bResult' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_9) == 0x000E99, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000E9A, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000EA0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000EB0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000EB8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000EC0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000ED8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetCurrentMatchmakingState_bExists_1) == 0x000EE0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetCurrentMatchmakingState_bExists_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetCurrentMatchmakingState_ReturnValue_1) == 0x000EE8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetCurrentMatchmakingState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSystemMessageManager_IsValid_1) == 0x000EF0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSystemMessageManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSystemMessageManager_ReturnValue_1) == 0x000EF8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSystemMessageManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsSystemMessageShowingOrStandby_ReturnValue) == 0x000F00, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsSystemMessageShowingOrStandby_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetFastForwardFlag_ReturnValue) == 0x000F01, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetFastForwardFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_27) == 0x000F04, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_27' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_28) == 0x000F14, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_28' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsFadedOutScreen_ReturnValue) == 0x000F24, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsFadedOutScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InNewTarget) == 0x000F28, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InNewTarget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bInRelative) == 0x000F30, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bInRelative' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Not_PreBool_ReturnValue_2) == 0x000F31, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_CalcViewTargetByActor_Location) == 0x000F34, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_CalcViewTargetByActor_Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_CalcViewTargetByActor_Rotation) == 0x000F40, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_CalcViewTargetByActor_Rotation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BooleanAND_ReturnValue_3) == 0x000F4C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_8) == 0x000F50, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Select_Default_1) == 0x000F58, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_18) == 0x000F5C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_16) == 0x000F60, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_9) == 0x000F68, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_19) == 0x000F70, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerCharacter_ReturnValue_3) == 0x000F78, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerCharacter_ReturnValue_4) == 0x000F80, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_20) == 0x000F88, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BooleanAND_ReturnValue_4) == 0x000F89, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InOtherActor_1) == 0x000F90, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InOtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InDistancePlayer) == 0x000F98, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InDistancePlayer' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bIsNoCheckAtTeleportPlayer_1) == 0x000F9C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bIsNoCheckAtTeleportPlayer_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InCameraZOffset_1) == 0x000FA0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InCameraZOffset_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bInEnable) == 0x000FA4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bInEnable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InTargetLocation) == 0x000FA8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InTargetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InTargetRotation) == 0x000FB4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InTargetRotation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InBlendTime_1) == 0x000FC0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InBlendTime_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_10) == 0x000FC8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_17) == 0x000FD0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_29) == 0x000FD8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_29' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_11) == 0x000FE8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_30) == 0x000FF0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_30' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InCameraId) == 0x001000, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InCameraId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InOffsetLocation) == 0x001008, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InOffsetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InBlendTime) == 0x001014, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InBlendTime' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetFreeViewTarget_ViewTargetActor) == 0x001018, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetFreeViewTarget_ViewTargetActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_TeleportTo_ReturnValue) == 0x001020, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_TeleportTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_OutRow_3) == 0x001028, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_OutRow_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_ReturnValue_3) == 0x001058, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetFreeViewTarget_ViewTargetActor_1) == 0x001060, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetFreeViewTarget_ViewTargetActor_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetFreeViewTarget_ViewTargetActor_2) == 0x001068, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetFreeViewTarget_ViewTargetActor_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Add_VectorVector_ReturnValue) == 0x001070, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_CalcViewTarget_OutTargetLocation) == 0x00107C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_CalcViewTarget_OutTargetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_CalcViewTarget_OutTargetRotation) == 0x001088, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_CalcViewTarget_OutTargetRotation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_CalcViewTarget_bSucs) == 0x001094, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_CalcViewTarget_bSucs' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1) == 0x001098, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1) == 0x001120, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_K2_TeleportTo_ReturnValue_1) == 0x001121, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_K2_TeleportTo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_12) == 0x001128, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_State_4) == 0x001130, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_State_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_18) == 0x001138, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_18' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_HasOnlineStatus_ReturnValue) == 0x001139, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_HasOnlineStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InId_2) == 0x00113C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InId_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_OutRow_4) == 0x001148, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_OutRow_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_ReturnValue_4) == 0x001150, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InId_1) == 0x001154, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InId_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_OutRow_5) == 0x001160, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_OutRow_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_ReturnValue_5) == 0x001168, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Contains_ReturnValue) == 0x001169, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_31) == 0x00116C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_31' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_AddUnique_ReturnValue) == 0x00117C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_32) == 0x001180, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_32' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_RemoveItem_ReturnValue) == 0x001190, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_33) == 0x001194, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_33' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InId) == 0x0011A4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InDemoName_2) == 0x0011AC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InDemoName_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_8) == 0x0011B4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_RetCode_7) == 0x0011B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_RetCode_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_DemoID_1) == 0x0011BC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_DemoID_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_NameToString_ReturnValue_5) == 0x0011C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_NameToString_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBRetMessage_ReturnValue_3) == 0x0011D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBRetMessage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0011E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_15) == 0x0011F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BooleanAND_ReturnValue_5) == 0x001200, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_16) == 0x001208, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_5) == 0x001218, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_18) == 0x001230, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Loop_Counter_Variable_5) == 0x001238, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Loop_Counter_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Less_IntInt_ReturnValue_3) == 0x00123C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Add_IntInt_ReturnValue_5) == 0x001240, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_34) == 0x001244, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_34' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_19) == 0x001258, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_35) == 0x001260, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_35' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_20) == 0x001270, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InDemoName_1) == 0x001278, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InDemoName_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_7) == 0x001280, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_RetCode_6) == 0x001284, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_RetCode_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_DemoID) == 0x001288, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_DemoID' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_MakeLiteralByte_ReturnValue) == 0x001290, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_NameToString_ReturnValue_6) == 0x001298, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_NameToString_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBRetMessage_ReturnValue_4) == 0x0012A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBRetMessage_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x0012B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_17) == 0x0012C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_IntToString_ReturnValue) == 0x0012D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_18) == 0x0012E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_19) == 0x0012F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_6) == 0x001300, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_20) == 0x001318, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x001328, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BooleanAND_ReturnValue_6) == 0x001329, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_21) == 0x001330, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_36) == 0x001338, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_36' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsDebug_ReturnValue_2) == 0x001348, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsDebug_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InDemoName) == 0x00134C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InDemoName' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetGameSingleton_IsValid_1) == 0x001354, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetGameSingleton_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetGameSingleton_ReturnValue_1) == 0x001358, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetGameSingleton_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_37) == 0x001360, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_37' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDemoManager_ReturnValue) == 0x001370, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDemoManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_21) == 0x001378, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_byte_Variable) == 0x001379, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_byte_Variable_1) == 0x00137A, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_bool_Variable_4) == 0x00137B, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_InDemoId) == 0x00137C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_InDemoId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_38) == 0x001384, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_38' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_PlayDemo_ReturnValue) == 0x001394, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_PlayDemo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsDebug_ReturnValue_3) == 0x001395, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsDebug_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_22) == 0x001398, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0013A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_39) == 0x0013A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_39' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_22) == 0x0013B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Variable) == 0x0013BC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_40) == 0x0013C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_40' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Variable_1) == 0x0013D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_bool_Variable_5) == 0x0013D4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_13) == 0x0013D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_14) == 0x0013E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_41) == 0x0013E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_41' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_23) == 0x0013F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_SequencerActor) == 0x001400, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_SequencerActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsSameWorld_ReturnValue) == 0x001408, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsSameWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_42) == 0x00140C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_42' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InOtherActor) == 0x001420, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_ViewParamId) == 0x001428, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_ViewParamId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bIsNoCheckAtTeleportPlayer) == 0x001430, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bIsNoCheckAtTeleportPlayer' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InCameraZOffset) == 0x001434, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InCameraZOffset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSoundManager_IsValid) == 0x001438, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSoundManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSoundManager_ReturnValue) == 0x001440, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSoundManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InShopType_2) == 0x001448, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InShopType_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InProductListId) == 0x00144C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InProductListId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_SwitchEnum_CmpSuccess) == 0x001454, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_24) == 0x001458, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_MakeLiteralText_ReturnValue) == 0x001460, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_6) == 0x001478, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_43) == 0x00147C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_43' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_25) == 0x001490, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_26) == 0x001498, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_44) == 0x0014A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_44' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_27) == 0x0014B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bIsBattleImagine) == 0x0014B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bIsBattleImagine' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InIsCostumeChange) == 0x0014B9, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InIsCostumeChange' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InIsColorSVEnabled) == 0x0014BA, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InIsColorSVEnabled' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_BoolToString_ReturnValue_2) == 0x0014C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_BoolToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_BoolToString_ReturnValue_3) == 0x0014D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_BoolToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_IsLiquidMemoryUsed) == 0x0014E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_IsLiquidMemoryUsed' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_29) == 0x0014E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_30) == 0x0014F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InShopType_1) == 0x0014F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InShopType_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_45) == 0x0014FC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_45' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_5) == 0x001510, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_46) == 0x001520, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_46' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_47) == 0x001530, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_47' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_48) == 0x001540, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_48' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_49) == 0x001550, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_49' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_28) == 0x001560, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_MakeLiteralString_ReturnValue) == 0x001568, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetCharacterId_ReturnValue_1) == 0x001578, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x001588, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_class_Variable_1) == 0x001590, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_CreateWeaponCustomMenuSynthe_Widget) == 0x001598, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_CreateWeaponCustomMenuSynthe_Widget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x0015A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBUIWeapon_Custom_Base) == 0x0015A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBUIWeapon_Custom_Base' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_19) == 0x0015B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_19' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0015B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerWarpComponent_ReturnValue) == 0x0015C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerWarpComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_23) == 0x0015D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_24) == 0x0015D1, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_50) == 0x0015D4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_50' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_31) == 0x0015E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_29) == 0x0015F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Loaded) == 0x0015F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_IsSuccess) == 0x001600, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_IsSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_51) == 0x001604, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_51' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InShopType) == 0x001614, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InShopType' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_class_Variable_2) == 0x001618, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_CreateWeaponCustomMenuTuning_Widget) == 0x001620, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_CreateWeaponCustomMenuTuning_Widget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_class_Variable_3) == 0x001628, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_class_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBUIWeapon_Custom_Base_1) == 0x001630, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBUIWeapon_Custom_Base_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_20) == 0x001638, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_20' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_ClassDynamicCast_AsSBLogin_Bonus_Window) == 0x001640, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_ClassDynamicCast_AsSBLogin_Bonus_Window' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_ClassDynamicCast_bSuccess_2) == 0x001648, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_ClassDynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_30) == 0x001650, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Loaded_8) == 0x001658, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Loaded_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_32) == 0x001660, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_52) == 0x001668, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_52' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_isUsed_3) == 0x001678, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_isUsed_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_isUsed_2) == 0x001679, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_isUsed_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_isUsed_1) == 0x00167A, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_isUsed_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_isUsed) == 0x00167B, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_isUsed' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Loaded_1) == 0x001680, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_53) == 0x001688, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_53' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_class_Variable_4) == 0x001698, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_class_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_CreateWeaponCustomMenuExtender_Widget) == 0x0016A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_CreateWeaponCustomMenuExtender_Widget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBUIWeapon_Custom_Base_2) == 0x0016A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBUIWeapon_Custom_Base_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_21) == 0x0016B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_21' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerCharacter_ReturnValue_2) == 0x0016B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_25) == 0x0016C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerWarpComponent_ReturnValue_1) == 0x0016C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerWarpComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_26) == 0x0016D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_54) == 0x0016D4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_54' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_IsDhcMapMode) == 0x0016E4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_IsDhcMapMode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_InGoToNext) == 0x0016E5, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_InGoToNext' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Select_Default_2) == 0x0016E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_33) == 0x0016F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetEventExecutor_ReturnValue) == 0x0016F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Sender) == 0x001700, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Param) == 0x001708, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetEventExecutor_ReturnValue_1) == 0x001710, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Loaded_2) == 0x001718, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InRoomId) == 0x001720, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InRoomId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerState_ReturnValue) == 0x001728, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_RetCode_5) == 0x001730, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_RetCode_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerOrnamentComponent_ReturnValue) == 0x001738, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerOrnamentComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBRetMessage_ReturnValue_5) == 0x001740, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBRetMessage_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_7) == 0x001750, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x001768, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Array_Index_Variable_5) == 0x00176C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Array_Index_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item_3) == 0x001770, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDisplayName_ReturnValue_1) == 0x001778, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x001788, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_class_Variable_5) == 0x001790, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_class_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_CreateWeaponCustomMenuRemove_Widget) == 0x001798, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_CreateWeaponCustomMenuRemove_Widget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBUIWeapon_Custom_Base_3) == 0x0017A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBUIWeapon_Custom_Base_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_22) == 0x0017A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_22' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Loaded_3) == 0x0017B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Loaded_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_55) == 0x0017B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_55' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_ValidT_Apart_ReturnValue) == 0x0017C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_ValidT_Apart_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_31) == 0x0017D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0017D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_32) == 0x0017E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Select_Default_3) == 0x0017E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x0017EC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_IntToString_ReturnValue_2) == 0x0017F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_33) == 0x001800, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerGender_OutGender) == 0x001808, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerGender_OutGender' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_34) == 0x001810, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_35) == 0x001818, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_56) == 0x001820, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_56' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_57) == 0x001830, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_57' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerCharacter_ReturnValue_3) == 0x001840, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_27) == 0x001848, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerWarpComponent_ReturnValue_2) == 0x001850, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerWarpComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_28) == 0x001858, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerCharacter_ReturnValue_4) == 0x001860, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerWarpComponent_ReturnValue_3) == 0x001868, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerWarpComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_29) == 0x001870, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_30) == 0x001871, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_InIsCourseDecided) == 0x001872, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_InIsCourseDecided' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_InTicketTokenId) == 0x001874, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_InTicketTokenId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_InUseTicketNum) == 0x001878, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_InUseTicketNum' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_58) == 0x00187C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_58' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_IntToString_ReturnValue_3) == 0x001890, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetAestheCourseMasterFromTicketTokenId_OutIsValid) == 0x0018A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetAestheCourseMasterFromTicketTokenId_OutIsValid' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetAestheCourseMasterFromTicketTokenId_OutMaster) == 0x0018A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetAestheCourseMasterFromTicketTokenId_OutMaster' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_CheckIfPlayerHasAestheTicket_OutHasTicket) == 0x0018F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_CheckIfPlayerHasAestheTicket_OutHasTicket' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_BoolToInt_ReturnValue) == 0x0018FC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x001900, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_IntToString_ReturnValue_4) == 0x001908, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_IntToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_IntToString_ReturnValue_5) == 0x001918, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_IntToString_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_21) == 0x001928, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_22) == 0x001938, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_23) == 0x001948, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_24) == 0x001958, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_31) == 0x001968, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_25) == 0x001970, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_26) == 0x001980, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_27) == 0x001990, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_36) == 0x0019A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_MakeLiteralString_ReturnValue_1) == 0x0019A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_MakeLiteralString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_QuestIndex_1) == 0x0019B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_QuestIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_59) == 0x0019BC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_59' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InQuestIndex_4) == 0x0019CC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InQuestIndex_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_60) == 0x0019D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_60' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_bReported) == 0x0019E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_bReported' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InClientId) == 0x0019E4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InClientId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetRelationQuest_OutQuestIndexList) == 0x0019F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetRelationQuest_OutQuestIndexList' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetRelationQuest_ReturnValue) == 0x001A00, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetRelationQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item_4) == 0x001A04, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_6) == 0x001A08, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x001A0C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x001A0D, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_SelectItem) == 0x001A10, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x001A18, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item_5) == 0x001A28, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetQuestNameArray_OutQuestNameList) == 0x001A30, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetQuestNameArray_OutQuestNameList' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InQuestBoardId) == 0x001A40, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InQuestBoardId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_61) == 0x001A48, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_61' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_QuestIndex) == 0x001A58, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_QuestIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_15) == 0x001A60, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_Controller_3) == 0x001A68, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_Controller_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_23) == 0x001A70, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_23' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_4) == 0x001A71, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_ErrorCode) == 0x001A72, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_RetCode_4) == 0x001A74, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_AcceptedQuestInfo) == 0x001A78, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_32) == 0x001AD8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetAcceptQuestErrorCodeText_ReturnValue) == 0x001AE0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetAcceptQuestErrorCodeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_8) == 0x001AF0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetQuestComponent_ReturnValue_2) == 0x001B08, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetQuestComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_AcceptedQuestInfo) == 0x001B10, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Request_AcceptQuest_ReturnValue) == 0x001B70, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Request_AcceptQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_byte_Variable_2) == 0x001B71, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_byte_Variable_3) == 0x001B72, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_bool_Variable_6) == 0x001B73, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_62) == 0x001B74, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_62' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Select_Default_4) == 0x001B84, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSystemMessageManager_IsValid_2) == 0x001B85, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSystemMessageManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSystemMessageManager_ReturnValue_2) == 0x001B88, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSystemMessageManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_37) == 0x001B90, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InQuestIndex_3) == 0x001B98, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InQuestIndex_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetQuestStatus_QuestStatus) == 0x001B9C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetQuestStatus_QuestStatus' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_63) == 0x001BA0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_63' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x001BB0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_FinishStatus_1) == 0x001BB1, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_FinishStatus_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_QuestIndex_1) == 0x001BB4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_QuestIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x001BB8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x001BB9, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_FinishStatus) == 0x001BBA, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_FinishStatus' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_QuestIndex) == 0x001BBC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_QuestIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InQuestIndex_2) == 0x001BC0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InQuestIndex_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x001BC4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x001BC5, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InQuestIndex_1) == 0x001BC8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InQuestIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InStepIndex) == 0x001BCC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InStepIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InConditionDataId) == 0x001BD0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InConditionDataId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_38) == 0x001BD8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Request_CompleteStep_ReturnValue) == 0x001BE0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Request_CompleteStep_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_IntToString_ReturnValue_6) == 0x001BE8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_IntToString_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_IntToString_ReturnValue_7) == 0x001BF8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_IntToString_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_9) == 0x001C08, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_10) == 0x001C20, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_FormatArgumentData_2) == 0x001C38, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_FormatArgumentData_3) == 0x001C78, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_3) == 0x001CB8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_RetCode_3) == 0x001CBC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_PrevAcceptedQuestInfo_1) == 0x001CC0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_PrevAcceptedQuestInfo_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsDebug_ReturnValue_4) == 0x001D20, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsDebug_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBRetMessage_ReturnValue_6) == 0x001D28, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBRetMessage_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_FormatArgumentData_4) == 0x001D38, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_11) == 0x001D78, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_12) == 0x001D90, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_FormatArgumentData_5) == 0x001DA8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeArray_Array_4) == 0x001DE8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x001DF8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Format_ReturnValue_2) == 0x001E00, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Select_Default_5) == 0x001E18, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_ByteToInt_ReturnValue_4) == 0x001E30, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_ByteToInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_IntToString_ReturnValue_8) == 0x001E38, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_IntToString_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_28) == 0x001E48, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_64) == 0x001E58, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_64' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_29) == 0x001E68, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_30) == 0x001E78, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_AcceptedQuestInfo_1) == 0x001E88, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_AcceptedQuestInfo_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_31) == 0x001EE8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_32) == 0x001EF8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_39) == 0x001F08, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_33) == 0x001F10, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_34) == 0x001F20, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_35) == 0x001F30, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_65) == 0x001F40, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_65' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_36) == 0x001F50, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsDebug_ReturnValue_5) == 0x001F60, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsDebug_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBTelopManager_IsValid) == 0x001F61, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBTelopManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBTelopManager_ReturnValue) == 0x001F68, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBTelopManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_SBTelopPlayParam) == 0x001F70, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InQuestIndex) == 0x001FD0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InQuestIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_NpcId) == 0x001FD4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_NpcId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Request_UpdateQuestProgressTalkNpc_ReturnValue) == 0x001FDC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Request_UpdateQuestProgressTalkNpc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Loop_Counter_Variable_6) == 0x001FE0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Loop_Counter_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Less_IntInt_ReturnValue_4) == 0x001FE4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Add_IntInt_ReturnValue_6) == 0x001FE8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_2) == 0x001FEC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_RetCode_2) == 0x001FF0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_PrevAcceptedQuestInfo) == 0x001FF8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_PrevAcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBRetMessage_ReturnValue_7) == 0x002058, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBRetMessage_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_66) == 0x002068, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_66' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_13) == 0x002078, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x002090, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BooleanAND_ReturnValue_7) == 0x002091, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_40) == 0x002098, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_67) == 0x0020A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_67' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_41) == 0x0020B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_68) == 0x0020B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_68' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_42) == 0x0020C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_69) == 0x0020D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_69' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InItems) == 0x0020E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InItems' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_MessageText_1) == 0x0020F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_MessageText_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item_6) == 0x002108, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_7) == 0x002120, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_8) == 0x002124, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Less_IntInt_ReturnValue_5) == 0x002128, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Subtract_IntInt_ReturnValue) == 0x00212C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result_1) == 0x002130, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_70) == 0x002134, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_70' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_MessageText) == 0x002148, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_MessageText' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_Result) == 0x002160, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_ByteToInt_ReturnValue_5) == 0x002164, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_ByteToInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InText_1) == 0x002168, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InText_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bWaitUserInput) == 0x002180, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bWaitUserInput' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InAttachCharacter) == 0x002188, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InAttachCharacter' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InText) == 0x002190, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_TextToString_ReturnValue) == 0x0021A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetComponentByClass_ReturnValue_3) == 0x0021B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_33) == 0x0021C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_SelectItemIndex) == 0x0021C4, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_SelectItemIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_71) == 0x0021C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_71' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue_9) == 0x0021D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_16) == 0x0021E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_43) == 0x0021E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_34) == 0x0021F0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetHUD_ReturnValue_1) == 0x0021F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_17) == 0x002200, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBBattle_HUD) == 0x002208, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBBattle_HUD' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_24) == 0x002210, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_24' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_35) == 0x002211, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetTextWindow_ReturnValue) == 0x002218, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetTextWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetHUD_ReturnValue_2) == 0x002220, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetHUD_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBBattle_HUD_1) == 0x002228, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBBattle_HUD_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_25) == 0x002230, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_25' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_72) == 0x002234, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_72' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetTextWindow_ReturnValue_1) == 0x002248, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetTextWindow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_36) == 0x002250, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_18) == 0x002258, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_37) == 0x002260, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_38) == 0x002261, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, Temp_int_Array_Index_Variable_6) == 0x002264, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::Temp_int_Array_Index_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item_7) == 0x002268, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetEventTriggerName_ReturnValue) == 0x002270, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetEventTriggerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_14) == 0x002280, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_73) == 0x002298, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_73' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_44) == 0x0022A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_74) == 0x0022B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_74' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_34) == 0x0022C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeArray_Array_5) == 0x0022C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_39) == 0x0022D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_19) == 0x0022E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_40) == 0x0022E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item_8) == 0x0022EC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_OutRow_6) == 0x0022F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_OutRow_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDataTableRowFromName_ReturnValue_6) == 0x002300, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDataTableRowFromName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_9) == 0x002304, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Less_IntInt_ReturnValue_6) == 0x002308, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_75) == 0x00230C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_75' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_10) == 0x00231C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_NotEqual_IntInt_ReturnValue) == 0x002320, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_41) == 0x002321, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_InName) == 0x002324, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_InName' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_42) == 0x00232C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_76) == 0x002330, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_76' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_45) == 0x002340, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_bAll) == 0x002348, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_bAll' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_20) == 0x002350, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetWorldSettings_ReturnValue) == 0x002358, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetWorldSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_AsSBPlayer_State_5) == 0x002360, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_AsSBPlayer_State_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_DynamicCast_bSuccess_26) == 0x002368, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_DynamicCast_bSuccess_26' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x00236C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Select_Default_6) == 0x002374, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetActivateMapsOnDungeonComplete_MapIdList) == 0x002380, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetActivateMapsOnDungeonComplete_MapIdList' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_46) == 0x002390, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_77) == 0x002398, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_77' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item_9) == 0x0023A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item_9' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Create_ReturnValue_47) == 0x0023B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Create_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetDungeonDisplayName_ReturnValue) == 0x0023B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetDungeonDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_15) == 0x0023C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeStruct_FormatArgumentData_6) == 0x0023E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_MakeArray_Array_6) == 0x002420, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_78) == 0x002430, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_78' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Get_Item_10) == 0x002440, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Get_Item_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Length_ReturnValue_11) == 0x002448, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Length_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_NameToString_ReturnValue_7) == 0x002450, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_NameToString_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Greater_IntInt_ReturnValue) == 0x002460, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Concat_StrStr_ReturnValue_37) == 0x002468, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Concat_StrStr_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_DungeonId) == 0x002478, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_DungeonId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_79) == 0x002480, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_79' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x002490, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x002498, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_80) == 0x0024A8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_80' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Conv_StringToText_ReturnValue_16) == 0x0024B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Format_ReturnValue_3) == 0x0024D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_PlaySE_ReturnValue) == 0x0024E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_81) == 0x0024EC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_81' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_43) == 0x0024FC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_82) == 0x002500, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_82' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CreateDelegate_OutputDelegate_83) == 0x002510, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CreateDelegate_OutputDelegate_83' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetPlayerController_ReturnValue_21) == 0x002520, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetPlayerController_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_Array_Add_ReturnValue_1) == 0x002528, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_Event_NappoId) == 0x002530, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_Event_NappoId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_35) == 0x002540, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetHappyNappoComponent_ReturnValue) == 0x002548, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetHappyNappoComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_36) == 0x002550, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsValid_ReturnValue_44) == 0x002558, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsValid_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetHappyNappoComponent_ReturnValue_1) == 0x002560, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetHappyNappoComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_37) == 0x002568, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetHappyNappoComponent_ReturnValue_2) == 0x002570, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetHappyNappoComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_RetCode_1) == 0x002578, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_is_new) == 0x00257C, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_is_new' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_gained_achievement_ids) == 0x002580, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_gained_achievement_ids' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_38) == 0x002590, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetHappyNappoComponent_ReturnValue_3) == 0x002598, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetHappyNappoComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetInteractedNapposList_ReturnValue) == 0x0025A0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetInteractedNapposList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_39) == 0x0025B0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetHappyNappoComponent_ReturnValue_4) == 0x0025B8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetHappyNappoComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsEditor_ReturnValue) == 0x0025C0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_IsEditor_ReturnValue_1) == 0x0025C1, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_IsEditor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_40) == 0x0025C8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetHappyNappoComponent_ReturnValue_5) == 0x0025D0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetHappyNappoComponent_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetInteractedHappyNappoIds_ReturnValue) == 0x0025D8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetInteractedHappyNappoIds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_EqualEqual_IntInt_ReturnValue_10) == 0x0025DC, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_EqualEqual_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_RetCode) == 0x0025E0, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, K2Node_CustomEvent_NappoIds) == 0x0025E8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::K2Node_CustomEvent_NappoIds' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetSBPlayerController_ReturnValue_41) == 0x0025F8, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetSBPlayerController_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_BooleanAND_ReturnValue_8) == 0x002600, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_BooleanAND_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor, CallFunc_GetHappyNappoComponent_ReturnValue_6) == 0x002608, "Member 'BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor::CallFunc_GetHappyNappoComponent_ReturnValue_6' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.ReRequest
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_ReRequest final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C79[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         NappoIds;                                          // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_ReRequest) == 0x000008, "Wrong alignment on BP_ScriptActor_C_ReRequest");
static_assert(sizeof(BP_ScriptActor_C_ReRequest) == 0x000018, "Wrong size on BP_ScriptActor_C_ReRequest");
static_assert(offsetof(BP_ScriptActor_C_ReRequest, RetCode) == 0x000000, "Member 'BP_ScriptActor_C_ReRequest::RetCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ReRequest, NappoIds) == 0x000008, "Member 'BP_ScriptActor_C_ReRequest::NappoIds' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnInteractAPI
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_OnInteractAPI final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_new;                                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C7A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Gained_achievement_ids;                            // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_OnInteractAPI) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnInteractAPI");
static_assert(sizeof(BP_ScriptActor_C_OnInteractAPI) == 0x000018, "Wrong size on BP_ScriptActor_C_OnInteractAPI");
static_assert(offsetof(BP_ScriptActor_C_OnInteractAPI, RetCode) == 0x000000, "Member 'BP_ScriptActor_C_OnInteractAPI::RetCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnInteractAPI, Is_new) == 0x000004, "Member 'BP_ScriptActor_C_OnInteractAPI::Is_new' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnInteractAPI, Gained_achievement_ids) == 0x000008, "Member 'BP_ScriptActor_C_OnInteractAPI::Gained_achievement_ids' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_InteractNappo
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_BP_InteractNappo final
{
public:
	class FString                                 NappoId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_InteractNappo) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_InteractNappo");
static_assert(sizeof(BP_ScriptActor_C_BP_InteractNappo) == 0x000010, "Wrong size on BP_ScriptActor_C_BP_InteractNappo");
static_assert(offsetof(BP_ScriptActor_C_BP_InteractNappo, NappoId) == 0x000000, "Member 'BP_ScriptActor_C_BP_InteractNappo::NappoId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.ContentsActivated
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_ContentsActivated final
{
public:
	class FName                                   DungeonId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_ContentsActivated) == 0x000004, "Wrong alignment on BP_ScriptActor_C_ContentsActivated");
static_assert(sizeof(BP_ScriptActor_C_ContentsActivated) == 0x000008, "Wrong size on BP_ScriptActor_C_ContentsActivated");
static_assert(offsetof(BP_ScriptActor_C_ContentsActivated, DungeonId) == 0x000000, "Member 'BP_ScriptActor_C_ContentsActivated::DungeonId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateContentsOnComplete
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_BP_ActivateContentsOnComplete final
{
public:
	bool                                          bAll;                                              // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_ActivateContentsOnComplete) == 0x000001, "Wrong alignment on BP_ScriptActor_C_BP_ActivateContentsOnComplete");
static_assert(sizeof(BP_ScriptActor_C_BP_ActivateContentsOnComplete) == 0x000001, "Wrong size on BP_ScriptActor_C_BP_ActivateContentsOnComplete");
static_assert(offsetof(BP_ScriptActor_C_BP_ActivateContentsOnComplete, bAll) == 0x000000, "Member 'BP_ScriptActor_C_BP_ActivateContentsOnComplete::bAll' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetSpeaker
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_SetSpeaker final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_SetSpeaker) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_SetSpeaker");
static_assert(sizeof(BP_ScriptActor_C_BP_SetSpeaker) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_SetSpeaker");
static_assert(offsetof(BP_ScriptActor_C_BP_SetSpeaker, InName) == 0x000000, "Member 'BP_ScriptActor_C_BP_SetSpeaker::InName' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnItemSelected_Event_0
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_OnItemSelected_Event_0 final
{
public:
	int32                                         SelectItemIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnItemSelected_Event_0) == 0x000004, "Wrong alignment on BP_ScriptActor_C_OnItemSelected_Event_0");
static_assert(sizeof(BP_ScriptActor_C_OnItemSelected_Event_0) == 0x000004, "Wrong size on BP_ScriptActor_C_OnItemSelected_Event_0");
static_assert(offsetof(BP_ScriptActor_C_OnItemSelected_Event_0, SelectItemIndex) == 0x000000, "Member 'BP_ScriptActor_C_OnItemSelected_Event_0::SelectItemIndex' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowBalloonWindow
// 0x0020 (0x0020 - 0x0000)
struct BP_ScriptActor_C_BP_ShowBalloonWindow final
{
public:
	class ACharacter*                             InAttachCharacter;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   InText;                                            // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowBalloonWindow) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_ShowBalloonWindow");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowBalloonWindow) == 0x000020, "Wrong size on BP_ScriptActor_C_BP_ShowBalloonWindow");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowBalloonWindow, InAttachCharacter) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowBalloonWindow::InAttachCharacter' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowBalloonWindow, InText) == 0x000008, "Member 'BP_ScriptActor_C_BP_ShowBalloonWindow::InText' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTextWindow
// 0x0020 (0x0020 - 0x0000)
struct BP_ScriptActor_C_BP_ShowTextWindow final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bWaitUserInput;                                    // 0x0018(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowTextWindow) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_ShowTextWindow");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowTextWindow) == 0x000020, "Wrong size on BP_ScriptActor_C_BP_ShowTextWindow");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowTextWindow, InText) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowTextWindow::InText' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowTextWindow, bWaitUserInput) == 0x000018, "Member 'BP_ScriptActor_C_BP_ShowTextWindow::bWaitUserInput' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_0_Copy
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_CustomEvent_0_Copy final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_CustomEvent_0_Copy) == 0x000001, "Wrong alignment on BP_ScriptActor_C_CustomEvent_0_Copy");
static_assert(sizeof(BP_ScriptActor_C_CustomEvent_0_Copy) == 0x000001, "Wrong size on BP_ScriptActor_C_CustomEvent_0_Copy");
static_assert(offsetof(BP_ScriptActor_C_CustomEvent_0_Copy, Result) == 0x000000, "Member 'BP_ScriptActor_C_CustomEvent_0_Copy::Result' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowYesNoDialog
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_BP_ShowYesNoDialog final
{
public:
	class FText                                   MessageText;                                       // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowYesNoDialog) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_ShowYesNoDialog");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowYesNoDialog) == 0x000018, "Wrong size on BP_ScriptActor_C_BP_ShowYesNoDialog");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowYesNoDialog, MessageText) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowYesNoDialog::MessageText' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_CustomEvent_0 final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_CustomEvent_0) == 0x000001, "Wrong alignment on BP_ScriptActor_C_CustomEvent_0");
static_assert(sizeof(BP_ScriptActor_C_CustomEvent_0) == 0x000001, "Wrong size on BP_ScriptActor_C_CustomEvent_0");
static_assert(offsetof(BP_ScriptActor_C_CustomEvent_0, Result) == 0x000000, "Member 'BP_ScriptActor_C_CustomEvent_0::Result' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowMessageDialog
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_BP_ShowMessageDialog final
{
public:
	class FText                                   MessageText;                                       // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowMessageDialog) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_ShowMessageDialog");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowMessageDialog) == 0x000018, "Wrong size on BP_ScriptActor_C_BP_ShowMessageDialog");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowMessageDialog, MessageText) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowMessageDialog::MessageText' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowSelectMenu
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_BP_ShowSelectMenu final
{
public:
	TArray<class FText>                           InItems;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowSelectMenu) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_ShowSelectMenu");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowSelectMenu) == 0x000010, "Wrong size on BP_ScriptActor_C_BP_ShowSelectMenu");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowSelectMenu, InItems) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowSelectMenu::InItems' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnUpdateQuestProgressCompleted
// 0x0068 (0x0068 - 0x0000)
struct BP_ScriptActor_C_OnUpdateQuestProgressCompleted final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C7B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     PrevAcceptedQuestInfo;                             // 0x0008(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_OnUpdateQuestProgressCompleted) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnUpdateQuestProgressCompleted");
static_assert(sizeof(BP_ScriptActor_C_OnUpdateQuestProgressCompleted) == 0x000068, "Wrong size on BP_ScriptActor_C_OnUpdateQuestProgressCompleted");
static_assert(offsetof(BP_ScriptActor_C_OnUpdateQuestProgressCompleted, Result) == 0x000000, "Member 'BP_ScriptActor_C_OnUpdateQuestProgressCompleted::Result' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnUpdateQuestProgressCompleted, RetCode) == 0x000004, "Member 'BP_ScriptActor_C_OnUpdateQuestProgressCompleted::RetCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnUpdateQuestProgressCompleted, PrevAcceptedQuestInfo) == 0x000008, "Member 'BP_ScriptActor_C_OnUpdateQuestProgressCompleted::PrevAcceptedQuestInfo' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_UpdateQuestProgressByTalkNpc
// 0x000C (0x000C - 0x0000)
struct BP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NpcId;                                             // 0x0004(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc");
static_assert(sizeof(BP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc) == 0x00000C, "Wrong size on BP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc");
static_assert(offsetof(BP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc, InQuestIndex) == 0x000000, "Member 'BP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc::InQuestIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc, NpcId) == 0x000004, "Member 'BP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc::NpcId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnCompleteQuestStep_Completed
// 0x0068 (0x0068 - 0x0000)
struct BP_ScriptActor_C_OnCompleteQuestStep_Completed final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C7C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     PrevAcceptedQuestInfo;                             // 0x0008(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_OnCompleteQuestStep_Completed) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnCompleteQuestStep_Completed");
static_assert(sizeof(BP_ScriptActor_C_OnCompleteQuestStep_Completed) == 0x000068, "Wrong size on BP_ScriptActor_C_OnCompleteQuestStep_Completed");
static_assert(offsetof(BP_ScriptActor_C_OnCompleteQuestStep_Completed, Result) == 0x000000, "Member 'BP_ScriptActor_C_OnCompleteQuestStep_Completed::Result' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnCompleteQuestStep_Completed, RetCode) == 0x000004, "Member 'BP_ScriptActor_C_OnCompleteQuestStep_Completed::RetCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnCompleteQuestStep_Completed, PrevAcceptedQuestInfo) == 0x000008, "Member 'BP_ScriptActor_C_OnCompleteQuestStep_Completed::PrevAcceptedQuestInfo' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_CompleteQuestStep
// 0x000C (0x000C - 0x0000)
struct BP_ScriptActor_C_BP_CompleteQuestStep final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStepIndex;                                       // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InConditionDataId;                                 // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_CompleteQuestStep) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_CompleteQuestStep");
static_assert(sizeof(BP_ScriptActor_C_BP_CompleteQuestStep) == 0x00000C, "Wrong size on BP_ScriptActor_C_BP_CompleteQuestStep");
static_assert(offsetof(BP_ScriptActor_C_BP_CompleteQuestStep, InQuestIndex) == 0x000000, "Member 'BP_ScriptActor_C_BP_CompleteQuestStep::InQuestIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_CompleteQuestStep, InStepIndex) == 0x000004, "Member 'BP_ScriptActor_C_BP_CompleteQuestStep::InStepIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_CompleteQuestStep, InConditionDataId) == 0x000008, "Member 'BP_ScriptActor_C_BP_CompleteQuestStep::InConditionDataId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestConfirm
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_BP_ShowQuestConfirm final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowQuestConfirm) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ShowQuestConfirm");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowQuestConfirm) == 0x000004, "Wrong size on BP_ScriptActor_C_BP_ShowQuestConfirm");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowQuestConfirm, InQuestIndex) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowQuestConfirm::InQuestIndex' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnQuestConfirmFinish_1
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnQuestConfirmFinish_1 final
{
public:
	EQuestDetail_FinishStatus                     FinishStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C7D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnQuestConfirmFinish_1) == 0x000004, "Wrong alignment on BP_ScriptActor_C_OnQuestConfirmFinish_1");
static_assert(sizeof(BP_ScriptActor_C_OnQuestConfirmFinish_1) == 0x000008, "Wrong size on BP_ScriptActor_C_OnQuestConfirmFinish_1");
static_assert(offsetof(BP_ScriptActor_C_OnQuestConfirmFinish_1, FinishStatus) == 0x000000, "Member 'BP_ScriptActor_C_OnQuestConfirmFinish_1::FinishStatus' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnQuestConfirmFinish_1, QuestIndex) == 0x000004, "Member 'BP_ScriptActor_C_OnQuestConfirmFinish_1::QuestIndex' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_2
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnFinish_Event_2 final
{
public:
	EQuestDetail_FinishStatus                     FinishStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C7E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnFinish_Event_2) == 0x000004, "Wrong alignment on BP_ScriptActor_C_OnFinish_Event_2");
static_assert(sizeof(BP_ScriptActor_C_OnFinish_Event_2) == 0x000008, "Wrong size on BP_ScriptActor_C_OnFinish_Event_2");
static_assert(offsetof(BP_ScriptActor_C_OnFinish_Event_2, FinishStatus) == 0x000000, "Member 'BP_ScriptActor_C_OnFinish_Event_2::FinishStatus' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnFinish_Event_2, QuestIndex) == 0x000004, "Member 'BP_ScriptActor_C_OnFinish_Event_2::QuestIndex' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestCompleteJingle
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_BP_ShowQuestCompleteJingle final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowQuestCompleteJingle) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ShowQuestCompleteJingle");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowQuestCompleteJingle) == 0x000004, "Wrong size on BP_ScriptActor_C_BP_ShowQuestCompleteJingle");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowQuestCompleteJingle, InQuestIndex) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowQuestCompleteJingle::InQuestIndex' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnAcceptQuestDelegate_Event_0
// 0x0068 (0x0068 - 0x0000)
struct BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptedQuestErrorCode                       ErrorCode;                                         // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C7F[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     AcceptedQuestInfo;                                 // 0x0008(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0");
static_assert(sizeof(BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0) == 0x000068, "Wrong size on BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0");
static_assert(offsetof(BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0, Result) == 0x000000, "Member 'BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0::Result' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0, ErrorCode) == 0x000001, "Member 'BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0::ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0, RetCode) == 0x000004, "Member 'BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0::RetCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0, AcceptedQuestInfo) == 0x000008, "Member 'BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0::AcceptedQuestInfo' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_QuestAccept
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_BP_QuestAccept final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_QuestAccept) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_QuestAccept");
static_assert(sizeof(BP_ScriptActor_C_BP_QuestAccept) == 0x000004, "Wrong size on BP_ScriptActor_C_BP_QuestAccept");
static_assert(offsetof(BP_ScriptActor_C_BP_QuestAccept, QuestIndex) == 0x000000, "Member 'BP_ScriptActor_C_BP_QuestAccept::QuestIndex' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestBoard
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_ShowQuestBoard final
{
public:
	class FName                                   InQuestBoardId;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowQuestBoard) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ShowQuestBoard");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowQuestBoard) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_ShowQuestBoard");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowQuestBoard, InQuestBoardId) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowQuestBoard::InQuestBoardId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_Event_1
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_OnSelectItem_Event_1 final
{
public:
	int32                                         SelectItem;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnSelectItem_Event_1) == 0x000004, "Wrong alignment on BP_ScriptActor_C_OnSelectItem_Event_1");
static_assert(sizeof(BP_ScriptActor_C_OnSelectItem_Event_1) == 0x000004, "Wrong size on BP_ScriptActor_C_OnSelectItem_Event_1");
static_assert(offsetof(BP_ScriptActor_C_OnSelectItem_Event_1, SelectItem) == 0x000000, "Member 'BP_ScriptActor_C_OnSelectItem_Event_1::SelectItem' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_PickQuest
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_PickQuest final
{
public:
	class FName                                   InClientId;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_PickQuest) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_PickQuest");
static_assert(sizeof(BP_ScriptActor_C_BP_PickQuest) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_PickQuest");
static_assert(offsetof(BP_ScriptActor_C_BP_PickQuest, InClientId) == 0x000000, "Member 'BP_ScriptActor_C_BP_PickQuest::InClientId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_1
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_OnFinish_Event_1 final
{
public:
	bool                                          bReported;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_OnFinish_Event_1) == 0x000001, "Wrong alignment on BP_ScriptActor_C_OnFinish_Event_1");
static_assert(sizeof(BP_ScriptActor_C_OnFinish_Event_1) == 0x000001, "Wrong size on BP_ScriptActor_C_OnFinish_Event_1");
static_assert(offsetof(BP_ScriptActor_C_OnFinish_Event_1, bReported) == 0x000000, "Member 'BP_ScriptActor_C_OnFinish_Event_1::bReported' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestRequestMenu
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_BP_ShowQuestRequestMenu final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowQuestRequestMenu) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ShowQuestRequestMenu");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowQuestRequestMenu) == 0x000004, "Wrong size on BP_ScriptActor_C_BP_ShowQuestRequestMenu");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowQuestRequestMenu, InQuestIndex) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowQuestRequestMenu::InQuestIndex' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ReportQuest
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_BP_ReportQuest final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ReportQuest) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ReportQuest");
static_assert(sizeof(BP_ScriptActor_C_BP_ReportQuest) == 0x000004, "Wrong size on BP_ScriptActor_C_BP_ReportQuest");
static_assert(offsetof(BP_ScriptActor_C_BP_ReportQuest, QuestIndex) == 0x000000, "Member 'BP_ScriptActor_C_BP_ReportQuest::QuestIndex' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnCloseAestheShopMenu
// 0x000C (0x000C - 0x0000)
struct BP_ScriptActor_C_OnCloseAestheShopMenu final
{
public:
	bool                                          InIsCourseDecided;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C80[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InTicketTokenId;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InUseTicketNum;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnCloseAestheShopMenu) == 0x000004, "Wrong alignment on BP_ScriptActor_C_OnCloseAestheShopMenu");
static_assert(sizeof(BP_ScriptActor_C_OnCloseAestheShopMenu) == 0x00000C, "Wrong size on BP_ScriptActor_C_OnCloseAestheShopMenu");
static_assert(offsetof(BP_ScriptActor_C_OnCloseAestheShopMenu, InIsCourseDecided) == 0x000000, "Member 'BP_ScriptActor_C_OnCloseAestheShopMenu::InIsCourseDecided' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnCloseAestheShopMenu, InTicketTokenId) == 0x000004, "Member 'BP_ScriptActor_C_OnCloseAestheShopMenu::InTicketTokenId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnCloseAestheShopMenu, InUseTicketNum) == 0x000008, "Member 'BP_ScriptActor_C_OnCloseAestheShopMenu::InUseTicketNum' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnCompleteRoomInfoDelegate_����_0
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_OnCompleteRoomInfoDelegate______0 final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnCompleteRoomInfoDelegate______0) == 0x000004, "Wrong alignment on BP_ScriptActor_C_OnCompleteRoomInfoDelegate______0");
static_assert(sizeof(BP_ScriptActor_C_OnCompleteRoomInfoDelegate______0) == 0x000004, "Wrong size on BP_ScriptActor_C_OnCompleteRoomInfoDelegate______0");
static_assert(offsetof(BP_ScriptActor_C_OnCompleteRoomInfoDelegate______0, RetCode) == 0x000000, "Member 'BP_ScriptActor_C_OnCompleteRoomInfoDelegate______0::RetCode' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_RequestMyRoom
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_BP_RequestMyRoom final
{
public:
	int32                                         InRoomId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_RequestMyRoom) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_RequestMyRoom");
static_assert(sizeof(BP_ScriptActor_C_BP_RequestMyRoom) == 0x000004, "Wrong size on BP_ScriptActor_C_BP_RequestMyRoom");
static_assert(offsetof(BP_ScriptActor_C_BP_RequestMyRoom, InRoomId) == 0x000000, "Member 'BP_ScriptActor_C_BP_RequestMyRoom::InRoomId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_1
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_CustomEvent_1 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_CustomEvent_1) == 0x000008, "Wrong alignment on BP_ScriptActor_C_CustomEvent_1");
static_assert(sizeof(BP_ScriptActor_C_CustomEvent_1) == 0x000010, "Wrong size on BP_ScriptActor_C_CustomEvent_1");
static_assert(offsetof(BP_ScriptActor_C_CustomEvent_1, Sender) == 0x000000, "Member 'BP_ScriptActor_C_CustomEvent_1::Sender' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CustomEvent_1, Param) == 0x000008, "Member 'BP_ScriptActor_C_CustomEvent_1::Param' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_����_0
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_OnClose______0 final
{
public:
	bool                                          InGoToNext;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_OnClose______0) == 0x000001, "Wrong alignment on BP_ScriptActor_C_OnClose______0");
static_assert(sizeof(BP_ScriptActor_C_OnClose______0) == 0x000001, "Wrong size on BP_ScriptActor_C_OnClose______0");
static_assert(offsetof(BP_ScriptActor_C_OnClose______0, InGoToNext) == 0x000000, "Member 'BP_ScriptActor_C_OnClose______0::InGoToNext' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowDhcUIMenu
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_BP_ShowDhcUIMenu final
{
public:
	bool                                          IsDhcMapMode;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowDhcUIMenu) == 0x000001, "Wrong alignment on BP_ScriptActor_C_BP_ShowDhcUIMenu");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowDhcUIMenu) == 0x000001, "Wrong size on BP_ScriptActor_C_BP_ShowDhcUIMenu");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowDhcUIMenu, IsDhcMapMode) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowDhcUIMenu::IsDhcMapMode' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponExtender
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_OnClosed_WeaponExtender final
{
public:
	bool                                          IsUsed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_OnClosed_WeaponExtender) == 0x000001, "Wrong alignment on BP_ScriptActor_C_OnClosed_WeaponExtender");
static_assert(sizeof(BP_ScriptActor_C_OnClosed_WeaponExtender) == 0x000001, "Wrong size on BP_ScriptActor_C_OnClosed_WeaponExtender");
static_assert(offsetof(BP_ScriptActor_C_OnClosed_WeaponExtender, IsUsed) == 0x000000, "Member 'BP_ScriptActor_C_OnClosed_WeaponExtender::IsUsed' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponAbilityRemove
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_OnClosed_WeaponAbilityRemove final
{
public:
	bool                                          IsUsed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_OnClosed_WeaponAbilityRemove) == 0x000001, "Wrong alignment on BP_ScriptActor_C_OnClosed_WeaponAbilityRemove");
static_assert(sizeof(BP_ScriptActor_C_OnClosed_WeaponAbilityRemove) == 0x000001, "Wrong size on BP_ScriptActor_C_OnClosed_WeaponAbilityRemove");
static_assert(offsetof(BP_ScriptActor_C_OnClosed_WeaponAbilityRemove, IsUsed) == 0x000000, "Member 'BP_ScriptActor_C_OnClosed_WeaponAbilityRemove::IsUsed' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponTuning
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_OnClosed_WeaponTuning final
{
public:
	bool                                          IsUsed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_OnClosed_WeaponTuning) == 0x000001, "Wrong alignment on BP_ScriptActor_C_OnClosed_WeaponTuning");
static_assert(sizeof(BP_ScriptActor_C_OnClosed_WeaponTuning) == 0x000001, "Wrong size on BP_ScriptActor_C_OnClosed_WeaponTuning");
static_assert(offsetof(BP_ScriptActor_C_OnClosed_WeaponTuning, IsUsed) == 0x000000, "Member 'BP_ScriptActor_C_OnClosed_WeaponTuning::IsUsed' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponSynthe
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_OnClosed_WeaponSynthe final
{
public:
	bool                                          IsUsed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_OnClosed_WeaponSynthe) == 0x000001, "Wrong alignment on BP_ScriptActor_C_OnClosed_WeaponSynthe");
static_assert(sizeof(BP_ScriptActor_C_OnClosed_WeaponSynthe) == 0x000001, "Wrong size on BP_ScriptActor_C_OnClosed_WeaponSynthe");
static_assert(offsetof(BP_ScriptActor_C_OnClosed_WeaponSynthe, IsUsed) == 0x000000, "Member 'BP_ScriptActor_C_OnClosed_WeaponSynthe::IsUsed' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTAbilityShopMenu
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_BP_ShowTAbilityShopMenu final
{
public:
	EShopType                                     InShopType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowTAbilityShopMenu) == 0x000001, "Wrong alignment on BP_ScriptActor_C_BP_ShowTAbilityShopMenu");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowTAbilityShopMenu) == 0x000001, "Wrong size on BP_ScriptActor_C_BP_ShowTAbilityShopMenu");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowTAbilityShopMenu, InShopType) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowTAbilityShopMenu::InShopType' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnAdventureRankUpClosed
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_OnAdventureRankUpClosed final
{
public:
	bool                                          IsSuccess;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_OnAdventureRankUpClosed) == 0x000001, "Wrong alignment on BP_ScriptActor_C_OnAdventureRankUpClosed");
static_assert(sizeof(BP_ScriptActor_C_OnAdventureRankUpClosed) == 0x000001, "Wrong size on BP_ScriptActor_C_OnAdventureRankUpClosed");
static_assert(offsetof(BP_ScriptActor_C_OnAdventureRankUpClosed, IsSuccess) == 0x000000, "Member 'BP_ScriptActor_C_OnAdventureRankUpClosed::IsSuccess' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_3
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_OnFinish_Event_3 final
{
public:
	class FString                                 Result;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnFinish_Event_3) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnFinish_Event_3");
static_assert(sizeof(BP_ScriptActor_C_OnFinish_Event_3) == 0x000010, "Wrong size on BP_ScriptActor_C_OnFinish_Event_3");
static_assert(offsetof(BP_ScriptActor_C_OnFinish_Event_3, Result) == 0x000000, "Member 'BP_ScriptActor_C_OnFinish_Event_3::Result' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEventShopMenu
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_BP_ShowEventShopMenu final
{
public:
	EShopType                                     InShopType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowEventShopMenu) == 0x000001, "Wrong alignment on BP_ScriptActor_C_BP_ShowEventShopMenu");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowEventShopMenu) == 0x000001, "Wrong size on BP_ScriptActor_C_BP_ShowEventShopMenu");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowEventShopMenu, InShopType) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowEventShopMenu::InShopType' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_LiquidMemoryShop_Event
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_OnClose_LiquidMemoryShop_Event final
{
public:
	bool                                          IsLiquidMemoryUsed;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_OnClose_LiquidMemoryShop_Event) == 0x000001, "Wrong alignment on BP_ScriptActor_C_OnClose_LiquidMemoryShop_Event");
static_assert(sizeof(BP_ScriptActor_C_OnClose_LiquidMemoryShop_Event) == 0x000001, "Wrong size on BP_ScriptActor_C_OnClose_LiquidMemoryShop_Event");
static_assert(offsetof(BP_ScriptActor_C_OnClose_LiquidMemoryShop_Event, IsLiquidMemoryUsed) == 0x000000, "Member 'BP_ScriptActor_C_OnClose_LiquidMemoryShop_Event::IsLiquidMemoryUsed' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowColoringShop
// 0x0002 (0x0002 - 0x0000)
struct BP_ScriptActor_C_BP_ShowColoringShop final
{
public:
	bool                                          InIsCostumeChange;                                 // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsColorSVEnabled;                                // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowColoringShop) == 0x000001, "Wrong alignment on BP_ScriptActor_C_BP_ShowColoringShop");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowColoringShop) == 0x000002, "Wrong size on BP_ScriptActor_C_BP_ShowColoringShop");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowColoringShop, InIsCostumeChange) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowColoringShop::InIsCostumeChange' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowColoringShop, InIsColorSVEnabled) == 0x000001, "Member 'BP_ScriptActor_C_BP_ShowColoringShop::InIsColorSVEnabled' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImaginCraft
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_BP_ShowImaginCraft final
{
public:
	bool                                          bIsBattleImagine;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowImaginCraft) == 0x000001, "Wrong alignment on BP_ScriptActor_C_BP_ShowImaginCraft");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowImaginCraft) == 0x000001, "Wrong size on BP_ScriptActor_C_BP_ShowImaginCraft");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowImaginCraft, bIsBattleImagine) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowImaginCraft::bIsBattleImagine' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_3
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_CustomEvent_3 final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_CustomEvent_3) == 0x000001, "Wrong alignment on BP_ScriptActor_C_CustomEvent_3");
static_assert(sizeof(BP_ScriptActor_C_CustomEvent_3) == 0x000001, "Wrong size on BP_ScriptActor_C_CustomEvent_3");
static_assert(offsetof(BP_ScriptActor_C_CustomEvent_3, Result) == 0x000000, "Member 'BP_ScriptActor_C_CustomEvent_3::Result' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowShopMenu
// 0x000C (0x000C - 0x0000)
struct BP_ScriptActor_C_BP_ShowShopMenu final
{
public:
	EShopType                                     InShopType;                                        // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C81[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InProductListId;                                   // 0x0004(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowShopMenu) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ShowShopMenu");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowShopMenu) == 0x00000C, "Wrong size on BP_ScriptActor_C_BP_ShowShopMenu");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowShopMenu, InShopType) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowShopMenu::InShopType' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowShopMenu, InProductListId) == 0x000004, "Member 'BP_ScriptActor_C_BP_ShowShopMenu::InProductListId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetTalkModeFixed
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_BP_SetTalkModeFixed final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ViewParamId;                                       // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsNoCheckAtTeleportPlayer;                        // 0x0010(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C82[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InCameraZOffset;                                   // 0x0014(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_SetTalkModeFixed) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_SetTalkModeFixed");
static_assert(sizeof(BP_ScriptActor_C_BP_SetTalkModeFixed) == 0x000018, "Wrong size on BP_ScriptActor_C_BP_SetTalkModeFixed");
static_assert(offsetof(BP_ScriptActor_C_BP_SetTalkModeFixed, InOtherActor) == 0x000000, "Member 'BP_ScriptActor_C_BP_SetTalkModeFixed::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetTalkModeFixed, ViewParamId) == 0x000008, "Member 'BP_ScriptActor_C_BP_SetTalkModeFixed::ViewParamId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetTalkModeFixed, bIsNoCheckAtTeleportPlayer) == 0x000010, "Member 'BP_ScriptActor_C_BP_SetTalkModeFixed::bIsNoCheckAtTeleportPlayer' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetTalkModeFixed, InCameraZOffset) == 0x000014, "Member 'BP_ScriptActor_C_BP_SetTalkModeFixed::InCameraZOffset' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.Event_OnDemoPlayEnd
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_Event_OnDemoPlayEnd final
{
public:
	const class ASBLevelSequenceActor*            SequencerActor;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_Event_OnDemoPlayEnd) == 0x000008, "Wrong alignment on BP_ScriptActor_C_Event_OnDemoPlayEnd");
static_assert(sizeof(BP_ScriptActor_C_Event_OnDemoPlayEnd) == 0x000008, "Wrong size on BP_ScriptActor_C_Event_OnDemoPlayEnd");
static_assert(offsetof(BP_ScriptActor_C_Event_OnDemoPlayEnd, SequencerActor) == 0x000000, "Member 'BP_ScriptActor_C_Event_OnDemoPlayEnd::SequencerActor' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.PlayDemo_Internal
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_PlayDemo_Internal final
{
public:
	class FName                                   InDemoId;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_PlayDemo_Internal) == 0x000004, "Wrong alignment on BP_ScriptActor_C_PlayDemo_Internal");
static_assert(sizeof(BP_ScriptActor_C_PlayDemo_Internal) == 0x000008, "Wrong size on BP_ScriptActor_C_PlayDemo_Internal");
static_assert(offsetof(BP_ScriptActor_C_PlayDemo_Internal, InDemoId) == 0x000000, "Member 'BP_ScriptActor_C_PlayDemo_Internal::InDemoId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayDemo_SkipSave
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_PlayDemo_SkipSave final
{
public:
	class FName                                   InDemoName;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_PlayDemo_SkipSave) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_PlayDemo_SkipSave");
static_assert(sizeof(BP_ScriptActor_C_BP_PlayDemo_SkipSave) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_PlayDemo_SkipSave");
static_assert(offsetof(BP_ScriptActor_C_BP_PlayDemo_SkipSave, InDemoName) == 0x000000, "Member 'BP_ScriptActor_C_BP_PlayDemo_SkipSave::InDemoName' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.�������_4
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C__________4 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C83[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DemoId;                                            // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C__________4) == 0x000004, "Wrong alignment on BP_ScriptActor_C__________4");
static_assert(sizeof(BP_ScriptActor_C__________4) == 0x000010, "Wrong size on BP_ScriptActor_C__________4");
static_assert(offsetof(BP_ScriptActor_C__________4, Result) == 0x000000, "Member 'BP_ScriptActor_C__________4::Result' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C__________4, RetCode) == 0x000004, "Member 'BP_ScriptActor_C__________4::RetCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C__________4, DemoId) == 0x000008, "Member 'BP_ScriptActor_C__________4::DemoId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SaveDemoBrowsedFlag
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_SaveDemoBrowsedFlag final
{
public:
	class FName                                   InDemoName;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_SaveDemoBrowsedFlag) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_SaveDemoBrowsedFlag");
static_assert(sizeof(BP_ScriptActor_C_BP_SaveDemoBrowsedFlag) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_SaveDemoBrowsedFlag");
static_assert(offsetof(BP_ScriptActor_C_BP_SaveDemoBrowsedFlag, InDemoName) == 0x000000, "Member 'BP_ScriptActor_C_BP_SaveDemoBrowsedFlag::InDemoName' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.Event_OnSaveDemoBrowsed
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_Event_OnSaveDemoBrowsed final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C84[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DemoId;                                            // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_Event_OnSaveDemoBrowsed) == 0x000004, "Wrong alignment on BP_ScriptActor_C_Event_OnSaveDemoBrowsed");
static_assert(sizeof(BP_ScriptActor_C_Event_OnSaveDemoBrowsed) == 0x000010, "Wrong size on BP_ScriptActor_C_Event_OnSaveDemoBrowsed");
static_assert(offsetof(BP_ScriptActor_C_Event_OnSaveDemoBrowsed, Result) == 0x000000, "Member 'BP_ScriptActor_C_Event_OnSaveDemoBrowsed::Result' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Event_OnSaveDemoBrowsed, RetCode) == 0x000004, "Member 'BP_ScriptActor_C_Event_OnSaveDemoBrowsed::RetCode' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Event_OnSaveDemoBrowsed, DemoId) == 0x000008, "Member 'BP_ScriptActor_C_Event_OnSaveDemoBrowsed::DemoId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayDemo
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_PlayDemo final
{
public:
	class FName                                   InDemoName;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_PlayDemo) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_PlayDemo");
static_assert(sizeof(BP_ScriptActor_C_BP_PlayDemo) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_PlayDemo");
static_assert(offsetof(BP_ScriptActor_C_BP_PlayDemo, InDemoName) == 0x000000, "Member 'BP_ScriptActor_C_BP_PlayDemo::InDemoName' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_PlaySubTitle
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_PlaySubTitle final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_PlaySubTitle) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_PlaySubTitle");
static_assert(sizeof(BP_ScriptActor_C_BP_PlaySubTitle) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_PlaySubTitle");
static_assert(offsetof(BP_ScriptActor_C_BP_PlaySubTitle, InId) == 0x000000, "Member 'BP_ScriptActor_C_BP_PlaySubTitle::InId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_StopCameraShake
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_StopCameraShake final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_StopCameraShake) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_StopCameraShake");
static_assert(sizeof(BP_ScriptActor_C_BP_StopCameraShake) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_StopCameraShake");
static_assert(offsetof(BP_ScriptActor_C_BP_StopCameraShake, InId) == 0x000000, "Member 'BP_ScriptActor_C_BP_StopCameraShake::InId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayCameraShake
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_PlayCameraShake final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_PlayCameraShake) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_PlayCameraShake");
static_assert(sizeof(BP_ScriptActor_C_BP_PlayCameraShake) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_PlayCameraShake");
static_assert(offsetof(BP_ScriptActor_C_BP_PlayCameraShake, InId) == 0x000000, "Member 'BP_ScriptActor_C_BP_PlayCameraShake::InId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTargetPreset
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_BP_SetViewTargetPreset final
{
public:
	class FName                                   InCameraId;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InOffsetLocation;                                  // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InBlendTime;                                       // 0x0014(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_SetViewTargetPreset) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_SetViewTargetPreset");
static_assert(sizeof(BP_ScriptActor_C_BP_SetViewTargetPreset) == 0x000018, "Wrong size on BP_ScriptActor_C_BP_SetViewTargetPreset");
static_assert(offsetof(BP_ScriptActor_C_BP_SetViewTargetPreset, InCameraId) == 0x000000, "Member 'BP_ScriptActor_C_BP_SetViewTargetPreset::InCameraId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetViewTargetPreset, InOffsetLocation) == 0x000008, "Member 'BP_ScriptActor_C_BP_SetViewTargetPreset::InOffsetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetViewTargetPreset, InBlendTime) == 0x000014, "Member 'BP_ScriptActor_C_BP_SetViewTargetPreset::InBlendTime' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTarget
// 0x001C (0x001C - 0x0000)
struct BP_ScriptActor_C_BP_SetViewTarget final
{
public:
	struct FVector                                InTargetLocation;                                  // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InTargetRotation;                                  // 0x000C(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         InBlendTime;                                       // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_SetViewTarget) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_SetViewTarget");
static_assert(sizeof(BP_ScriptActor_C_BP_SetViewTarget) == 0x00001C, "Wrong size on BP_ScriptActor_C_BP_SetViewTarget");
static_assert(offsetof(BP_ScriptActor_C_BP_SetViewTarget, InTargetLocation) == 0x000000, "Member 'BP_ScriptActor_C_BP_SetViewTarget::InTargetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetViewTarget, InTargetRotation) == 0x00000C, "Member 'BP_ScriptActor_C_BP_SetViewTarget::InTargetRotation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetViewTarget, InBlendTime) == 0x000018, "Member 'BP_ScriptActor_C_BP_SetViewTarget::InBlendTime' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.SetTalkModeFilterEnable
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_SetTalkModeFilterEnable final
{
public:
	bool                                          bInEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_SetTalkModeFilterEnable) == 0x000001, "Wrong alignment on BP_ScriptActor_C_SetTalkModeFilterEnable");
static_assert(sizeof(BP_ScriptActor_C_SetTalkModeFilterEnable) == 0x000001, "Wrong size on BP_ScriptActor_C_SetTalkModeFilterEnable");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFilterEnable, bInEnable) == 0x000000, "Member 'BP_ScriptActor_C_SetTalkModeFilterEnable::bInEnable' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetTalkMode
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_BP_SetTalkMode final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InDistancePlayer;                                  // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsNoCheckAtTeleportPlayer;                        // 0x000C(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C85[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InCameraZOffset;                                   // 0x0010(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_SetTalkMode) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_SetTalkMode");
static_assert(sizeof(BP_ScriptActor_C_BP_SetTalkMode) == 0x000018, "Wrong size on BP_ScriptActor_C_BP_SetTalkMode");
static_assert(offsetof(BP_ScriptActor_C_BP_SetTalkMode, InOtherActor) == 0x000000, "Member 'BP_ScriptActor_C_BP_SetTalkMode::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetTalkMode, InDistancePlayer) == 0x000008, "Member 'BP_ScriptActor_C_BP_SetTalkMode::InDistancePlayer' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetTalkMode, bIsNoCheckAtTeleportPlayer) == 0x00000C, "Member 'BP_ScriptActor_C_BP_SetTalkMode::bIsNoCheckAtTeleportPlayer' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetTalkMode, InCameraZOffset) == 0x000010, "Member 'BP_ScriptActor_C_BP_SetTalkMode::InCameraZOffset' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTargetActor
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_BP_SetViewTargetActor final
{
public:
	class AActor*                                 InNewTarget;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInRelative;                                       // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_SetViewTargetActor) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_SetViewTargetActor");
static_assert(sizeof(BP_ScriptActor_C_BP_SetViewTargetActor) == 0x000010, "Wrong size on BP_ScriptActor_C_BP_SetViewTargetActor");
static_assert(offsetof(BP_ScriptActor_C_BP_SetViewTargetActor, InNewTarget) == 0x000000, "Member 'BP_ScriptActor_C_BP_SetViewTargetActor::InNewTarget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetViewTargetActor, bInRelative) == 0x000008, "Member 'BP_ScriptActor_C_BP_SetViewTargetActor::bInRelative' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnCheckMatcheCancel
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_OnCheckMatcheCancel final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnCheckMatcheCancel) == 0x000001, "Wrong alignment on BP_ScriptActor_C_OnCheckMatcheCancel");
static_assert(sizeof(BP_ScriptActor_C_OnCheckMatcheCancel) == 0x000001, "Wrong size on BP_ScriptActor_C_OnCheckMatcheCancel");
static_assert(offsetof(BP_ScriptActor_C_OnCheckMatcheCancel, Result) == 0x000000, "Member 'BP_ScriptActor_C_OnCheckMatcheCancel::Result' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ResetColorFilter
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_BP_ResetColorFilter final
{
public:
	float                                         InDuration;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ResetColorFilter) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ResetColorFilter");
static_assert(sizeof(BP_ScriptActor_C_BP_ResetColorFilter) == 0x000004, "Wrong size on BP_ScriptActor_C_BP_ResetColorFilter");
static_assert(offsetof(BP_ScriptActor_C_BP_ResetColorFilter, InDuration) == 0x000000, "Member 'BP_ScriptActor_C_BP_ResetColorFilter::InDuration' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetColorFilter
// 0x0014 (0x0014 - 0x0000)
struct BP_ScriptActor_C_BP_SetColorFilter final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InDuration;                                        // 0x0010(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_SetColorFilter) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_SetColorFilter");
static_assert(sizeof(BP_ScriptActor_C_BP_SetColorFilter) == 0x000014, "Wrong size on BP_ScriptActor_C_BP_SetColorFilter");
static_assert(offsetof(BP_ScriptActor_C_BP_SetColorFilter, InColor) == 0x000000, "Member 'BP_ScriptActor_C_BP_SetColorFilter::InColor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetColorFilter, InDuration) == 0x000010, "Member 'BP_ScriptActor_C_BP_SetColorFilter::InDuration' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_FadeIn
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_FadeIn final
{
public:
	float                                         InDuration;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInWait;                                           // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_FadeIn) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_FadeIn");
static_assert(sizeof(BP_ScriptActor_C_BP_FadeIn) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_FadeIn");
static_assert(offsetof(BP_ScriptActor_C_BP_FadeIn, InDuration) == 0x000000, "Member 'BP_ScriptActor_C_BP_FadeIn::InDuration' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_FadeIn, bInWait) == 0x000004, "Member 'BP_ScriptActor_C_BP_FadeIn::bInWait' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_FadeOut
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_FadeOut final
{
public:
	float                                         InDuration;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInWait;                                           // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_FadeOut) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_FadeOut");
static_assert(sizeof(BP_ScriptActor_C_BP_FadeOut) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_FadeOut");
static_assert(offsetof(BP_ScriptActor_C_BP_FadeOut, InDuration) == 0x000000, "Member 'BP_ScriptActor_C_BP_FadeOut::InDuration' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_FadeOut, bInWait) == 0x000004, "Member 'BP_ScriptActor_C_BP_FadeOut::bInWait' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_Delay
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_BP_Delay final
{
public:
	float                                         InDelayTime;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_Delay) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_Delay");
static_assert(sizeof(BP_ScriptActor_C_BP_Delay) == 0x000004, "Wrong size on BP_ScriptActor_C_BP_Delay");
static_assert(offsetof(BP_ScriptActor_C_BP_Delay, InDelayTime) == 0x000000, "Member 'BP_ScriptActor_C_BP_Delay::InDelayTime' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowConnectToServerError
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_BP_ShowConnectToServerError final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowConnectToServerError) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ShowConnectToServerError");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowConnectToServerError) == 0x000004, "Wrong size on BP_ScriptActor_C_BP_ShowConnectToServerError");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowConnectToServerError, RetCode) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowConnectToServerError::RetCode' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.�������_1
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C__________1 final
{
public:
	ELayoutPresetTypes                            Preset;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C__________1) == 0x000001, "Wrong alignment on BP_ScriptActor_C__________1");
static_assert(sizeof(BP_ScriptActor_C__________1) == 0x000001, "Wrong size on BP_ScriptActor_C__________1");
static_assert(offsetof(BP_ScriptActor_C__________1, Preset) == 0x000000, "Member 'BP_ScriptActor_C__________1::Preset' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_Event_2
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_OnSelectItem_Event_2 final
{
public:
	int32                                         InSelectItemIndex;                                 // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnSelectItem_Event_2) == 0x000004, "Wrong alignment on BP_ScriptActor_C_OnSelectItem_Event_2");
static_assert(sizeof(BP_ScriptActor_C_OnSelectItem_Event_2) == 0x000004, "Wrong size on BP_ScriptActor_C_OnSelectItem_Event_2");
static_assert(offsetof(BP_ScriptActor_C_OnSelectItem_Event_2, InSelectItemIndex) == 0x000000, "Member 'BP_ScriptActor_C_OnSelectItem_Event_2::InSelectItemIndex' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_GetValidSubEvent
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_BP_GetValidSubEvent final
{
public:
	TArray<class FName>                           InSubEvents;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_BP_GetValidSubEvent) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_GetValidSubEvent");
static_assert(sizeof(BP_ScriptActor_C_BP_GetValidSubEvent) == 0x000010, "Wrong size on BP_ScriptActor_C_BP_GetValidSubEvent");
static_assert(offsetof(BP_ScriptActor_C_BP_GetValidSubEvent, InSubEvents) == 0x000000, "Member 'BP_ScriptActor_C_BP_GetValidSubEvent::InSubEvents' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_2
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnClose_Event_2 final
{
public:
	class UUMG_MatchingMenu_C*                    Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnClose_Event_2) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnClose_Event_2");
static_assert(sizeof(BP_ScriptActor_C_OnClose_Event_2) == 0x000008, "Wrong size on BP_ScriptActor_C_OnClose_Event_2");
static_assert(offsetof(BP_ScriptActor_C_OnClose_Event_2, Sender) == 0x000000, "Member 'BP_ScriptActor_C_OnClose_Event_2::Sender' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateContent
// 0x000C (0x000C - 0x0000)
struct BP_ScriptActor_C_BP_ActivateContent final
{
public:
	class FName                                   InContentId;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsStartMatching;                                  // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_ActivateContent) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ActivateContent");
static_assert(sizeof(BP_ScriptActor_C_BP_ActivateContent) == 0x00000C, "Wrong size on BP_ScriptActor_C_BP_ActivateContent");
static_assert(offsetof(BP_ScriptActor_C_BP_ActivateContent, InContentId) == 0x000000, "Member 'BP_ScriptActor_C_BP_ActivateContent::InContentId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_ActivateContent, bIsStartMatching) == 0x000008, "Member 'BP_ScriptActor_C_BP_ActivateContent::bIsStartMatching' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnAddActivate_Event_0
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnAddActivate_Event_0 final
{
public:
	class FName                                   DungeonId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnAddActivate_Event_0) == 0x000004, "Wrong alignment on BP_ScriptActor_C_OnAddActivate_Event_0");
static_assert(sizeof(BP_ScriptActor_C_OnAddActivate_Event_0) == 0x000008, "Wrong size on BP_ScriptActor_C_OnAddActivate_Event_0");
static_assert(offsetof(BP_ScriptActor_C_OnAddActivate_Event_0, DungeonId) == 0x000000, "Member 'BP_ScriptActor_C_OnAddActivate_Event_0::DungeonId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetUserData
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_BP_SetUserData final
{
public:
	class FName                                   InKey;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InValue;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_SetUserData) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_SetUserData");
static_assert(sizeof(BP_ScriptActor_C_BP_SetUserData) == 0x000018, "Wrong size on BP_ScriptActor_C_BP_SetUserData");
static_assert(offsetof(BP_ScriptActor_C_BP_SetUserData, InKey) == 0x000000, "Member 'BP_ScriptActor_C_BP_SetUserData::InKey' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetUserData, InValue) == 0x000008, "Member 'BP_ScriptActor_C_BP_SetUserData::InValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.Event_OnSetKeyValue
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_Event_OnSetKeyValue final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_Event_OnSetKeyValue) == 0x000001, "Wrong alignment on BP_ScriptActor_C_Event_OnSetKeyValue");
static_assert(sizeof(BP_ScriptActor_C_Event_OnSetKeyValue) == 0x000001, "Wrong size on BP_ScriptActor_C_Event_OnSetKeyValue");
static_assert(offsetof(BP_ScriptActor_C_Event_OnSetKeyValue, Result) == 0x000000, "Member 'BP_ScriptActor_C_Event_OnSetKeyValue::Result' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_CustomEvent final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_CustomEvent) == 0x000001, "Wrong alignment on BP_ScriptActor_C_CustomEvent");
static_assert(sizeof(BP_ScriptActor_C_CustomEvent) == 0x000001, "Wrong size on BP_ScriptActor_C_CustomEvent");
static_assert(offsetof(BP_ScriptActor_C_CustomEvent, bWasSuccessful) == 0x000000, "Member 'BP_ScriptActor_C_CustomEvent::bWasSuccessful' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_GetEmote
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_GetEmote final
{
public:
	class FName                                   InEmoteId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_GetEmote) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_GetEmote");
static_assert(sizeof(BP_ScriptActor_C_BP_GetEmote) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_GetEmote");
static_assert(offsetof(BP_ScriptActor_C_BP_GetEmote, InEmoteId) == 0x000000, "Member 'BP_ScriptActor_C_BP_GetEmote::InEmoteId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnSetKeyValueDelegate_Event_0
// 0x0001 (0x0001 - 0x0000)
struct BP_ScriptActor_C_OnSetKeyValueDelegate_Event_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_OnSetKeyValueDelegate_Event_0) == 0x000001, "Wrong alignment on BP_ScriptActor_C_OnSetKeyValueDelegate_Event_0");
static_assert(sizeof(BP_ScriptActor_C_OnSetKeyValueDelegate_Event_0) == 0x000001, "Wrong size on BP_ScriptActor_C_OnSetKeyValueDelegate_Event_0");
static_assert(offsetof(BP_ScriptActor_C_OnSetKeyValueDelegate_Event_0, Result) == 0x000000, "Member 'BP_ScriptActor_C_OnSetKeyValueDelegate_Event_0::Result' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetContentLock
// 0x0002 (0x0002 - 0x0000)
struct BP_ScriptActor_C_BP_SetContentLock final
{
public:
	ESBContentLockType                            InContentLockType;                                 // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInLock;                                           // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_SetContentLock) == 0x000001, "Wrong alignment on BP_ScriptActor_C_BP_SetContentLock");
static_assert(sizeof(BP_ScriptActor_C_BP_SetContentLock) == 0x000002, "Wrong size on BP_ScriptActor_C_BP_SetContentLock");
static_assert(offsetof(BP_ScriptActor_C_BP_SetContentLock, InContentLockType) == 0x000000, "Member 'BP_ScriptActor_C_BP_SetContentLock::InContentLockType' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetContentLock, bInLock) == 0x000001, "Member 'BP_ScriptActor_C_BP_SetContentLock::bInLock' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.LookAtLocation_Internal
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_LookAtLocation_Internal final
{
public:
	const class AActor*                           InActor;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InTargetLocation;                                  // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_LookAtLocation_Internal) == 0x000008, "Wrong alignment on BP_ScriptActor_C_LookAtLocation_Internal");
static_assert(sizeof(BP_ScriptActor_C_LookAtLocation_Internal) == 0x000018, "Wrong size on BP_ScriptActor_C_LookAtLocation_Internal");
static_assert(offsetof(BP_ScriptActor_C_LookAtLocation_Internal, InActor) == 0x000000, "Member 'BP_ScriptActor_C_LookAtLocation_Internal::InActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LookAtLocation_Internal, InTargetLocation) == 0x000008, "Member 'BP_ScriptActor_C_LookAtLocation_Internal::InTargetLocation' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_LookAtActorForPlayer
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_BP_LookAtActorForPlayer final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DestinationActor;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsMount;                                          // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_LookAtActorForPlayer) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_LookAtActorForPlayer");
static_assert(sizeof(BP_ScriptActor_C_BP_LookAtActorForPlayer) == 0x000018, "Wrong size on BP_ScriptActor_C_BP_LookAtActorForPlayer");
static_assert(offsetof(BP_ScriptActor_C_BP_LookAtActorForPlayer, SourceActor) == 0x000000, "Member 'BP_ScriptActor_C_BP_LookAtActorForPlayer::SourceActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_LookAtActorForPlayer, DestinationActor) == 0x000008, "Member 'BP_ScriptActor_C_BP_LookAtActorForPlayer::DestinationActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_LookAtActorForPlayer, bIsMount) == 0x000010, "Member 'BP_ScriptActor_C_BP_LookAtActorForPlayer::bIsMount' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_LookAtLocation
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptActor_C_BP_LookAtLocation final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InTargetLocation;                                  // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_LookAtLocation) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_LookAtLocation");
static_assert(sizeof(BP_ScriptActor_C_BP_LookAtLocation) == 0x000018, "Wrong size on BP_ScriptActor_C_BP_LookAtLocation");
static_assert(offsetof(BP_ScriptActor_C_BP_LookAtLocation, InActor) == 0x000000, "Member 'BP_ScriptActor_C_BP_LookAtLocation::InActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_LookAtLocation, InTargetLocation) == 0x000008, "Member 'BP_ScriptActor_C_BP_LookAtLocation::InTargetLocation' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SpawnSubActor
// 0x0014 (0x0014 - 0x0000)
struct BP_ScriptActor_C_BP_SpawnSubActor final
{
public:
	class FName                                   InCharacterId;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_SpawnSubActor) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_SpawnSubActor");
static_assert(sizeof(BP_ScriptActor_C_BP_SpawnSubActor) == 0x000014, "Wrong size on BP_ScriptActor_C_BP_SpawnSubActor");
static_assert(offsetof(BP_ScriptActor_C_BP_SpawnSubActor, InCharacterId) == 0x000000, "Member 'BP_ScriptActor_C_BP_SpawnSubActor::InCharacterId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SpawnSubActor, Location) == 0x000008, "Member 'BP_ScriptActor_C_BP_SpawnSubActor::Location' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_����_0
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptActor_C_OnSelectItem______0 final
{
public:
	int32                                         InSelectItemIndex;                                 // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnSelectItem______0) == 0x000004, "Wrong alignment on BP_ScriptActor_C_OnSelectItem______0");
static_assert(sizeof(BP_ScriptActor_C_OnSelectItem______0) == 0x000004, "Wrong size on BP_ScriptActor_C_OnSelectItem______0");
static_assert(offsetof(BP_ScriptActor_C_OnSelectItem______0, InSelectItemIndex) == 0x000000, "Member 'BP_ScriptActor_C_OnSelectItem______0::InSelectItemIndex' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowChoiceDialog
// 0x0028 (0x0028 - 0x0000)
struct BP_ScriptActor_C_BP_ShowChoiceDialog final
{
public:
	class FText                                   InQuestion;                                        // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FText>                           InItems;                                           // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowChoiceDialog) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_ShowChoiceDialog");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowChoiceDialog) == 0x000028, "Wrong size on BP_ScriptActor_C_BP_ShowChoiceDialog");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowChoiceDialog, InQuestion) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowChoiceDialog::InQuestion' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowChoiceDialog, InItems) == 0x000018, "Member 'BP_ScriptActor_C_BP_ShowChoiceDialog::InItems' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayParticleFromActor
// 0x0028 (0x0028 - 0x0000)
struct BP_ScriptActor_C_BP_PlayParticleFromActor final
{
public:
	const class AActor*                           InTargetActor;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InParticleId;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InAttachSocketId;                                  // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InOffsetLocation;                                  // 0x0018(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_PlayParticleFromActor) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_PlayParticleFromActor");
static_assert(sizeof(BP_ScriptActor_C_BP_PlayParticleFromActor) == 0x000028, "Wrong size on BP_ScriptActor_C_BP_PlayParticleFromActor");
static_assert(offsetof(BP_ScriptActor_C_BP_PlayParticleFromActor, InTargetActor) == 0x000000, "Member 'BP_ScriptActor_C_BP_PlayParticleFromActor::InTargetActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_PlayParticleFromActor, InParticleId) == 0x000008, "Member 'BP_ScriptActor_C_BP_PlayParticleFromActor::InParticleId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_PlayParticleFromActor, InAttachSocketId) == 0x000010, "Member 'BP_ScriptActor_C_BP_PlayParticleFromActor::InAttachSocketId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_PlayParticleFromActor, InOffsetLocation) == 0x000018, "Member 'BP_ScriptActor_C_BP_PlayParticleFromActor::InOffsetLocation' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ApplyDofSettings
// 0x000C (0x000C - 0x0000)
struct BP_ScriptActor_C_BP_ApplyDofSettings final
{
public:
	class FName                                   InSettingId;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InTransitionTime;                                  // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ApplyDofSettings) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ApplyDofSettings");
static_assert(sizeof(BP_ScriptActor_C_BP_ApplyDofSettings) == 0x00000C, "Wrong size on BP_ScriptActor_C_BP_ApplyDofSettings");
static_assert(offsetof(BP_ScriptActor_C_BP_ApplyDofSettings, InSettingId) == 0x000000, "Member 'BP_ScriptActor_C_BP_ApplyDofSettings::InSettingId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_ApplyDofSettings, InTransitionTime) == 0x000008, "Member 'BP_ScriptActor_C_BP_ApplyDofSettings::InTransitionTime' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTutorialHelp
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_ShowTutorialHelp final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ShowTutorialHelp) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ShowTutorialHelp");
static_assert(sizeof(BP_ScriptActor_C_BP_ShowTutorialHelp) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_ShowTutorialHelp");
static_assert(offsetof(BP_ScriptActor_C_BP_ShowTutorialHelp, InId) == 0x000000, "Member 'BP_ScriptActor_C_BP_ShowTutorialHelp::InId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnCompletedMail
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnCompletedMail final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C86[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnCompletedMail) == 0x000004, "Wrong alignment on BP_ScriptActor_C_OnCompletedMail");
static_assert(sizeof(BP_ScriptActor_C_OnCompletedMail) == 0x000008, "Wrong size on BP_ScriptActor_C_OnCompletedMail");
static_assert(offsetof(BP_ScriptActor_C_OnCompletedMail, bWasSuccessful) == 0x000000, "Member 'BP_ScriptActor_C_OnCompletedMail::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_OnCompletedMail, ErrorCode) == 0x000004, "Member 'BP_ScriptActor_C_OnCompletedMail::ErrorCode' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SendMail
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_SendMail final
{
public:
	class FName                                   InMailId;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_SendMail) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_SendMail");
static_assert(sizeof(BP_ScriptActor_C_BP_SendMail) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_SendMail");
static_assert(offsetof(BP_ScriptActor_C_BP_SendMail, InMailId) == 0x000000, "Member 'BP_ScriptActor_C_BP_SendMail::InMailId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateWarpPoint
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_BP_ActivateWarpPoint final
{
public:
	class FName                                   InWarpPointId;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_ActivateWarpPoint) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_ActivateWarpPoint");
static_assert(sizeof(BP_ScriptActor_C_BP_ActivateWarpPoint) == 0x000008, "Wrong size on BP_ScriptActor_C_BP_ActivateWarpPoint");
static_assert(offsetof(BP_ScriptActor_C_BP_ActivateWarpPoint, InWarpPointId) == 0x000000, "Member 'BP_ScriptActor_C_BP_ActivateWarpPoint::InWarpPointId' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetEnvironmentMeshShadow
// 0x000C (0x000C - 0x0000)
struct BP_ScriptActor_C_BP_SetEnvironmentMeshShadow final
{
public:
	class FName                                   RowName;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCastShadow;                                       // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_BP_SetEnvironmentMeshShadow) == 0x000004, "Wrong alignment on BP_ScriptActor_C_BP_SetEnvironmentMeshShadow");
static_assert(sizeof(BP_ScriptActor_C_BP_SetEnvironmentMeshShadow) == 0x00000C, "Wrong size on BP_ScriptActor_C_BP_SetEnvironmentMeshShadow");
static_assert(offsetof(BP_ScriptActor_C_BP_SetEnvironmentMeshShadow, RowName) == 0x000000, "Member 'BP_ScriptActor_C_BP_SetEnvironmentMeshShadow::RowName' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_SetEnvironmentMeshShadow, bCastShadow) == 0x000008, "Member 'BP_ScriptActor_C_BP_SetEnvironmentMeshShadow::bCastShadow' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_RequestFreeBuffEffectActivation
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_BP_RequestFreeBuffEffectActivation final
{
public:
	const class ASBFieldActorFreeBuffPoint*       BuffPoint;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           PlayerCharacter;                                   // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_RequestFreeBuffEffectActivation) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_RequestFreeBuffEffectActivation");
static_assert(sizeof(BP_ScriptActor_C_BP_RequestFreeBuffEffectActivation) == 0x000010, "Wrong size on BP_ScriptActor_C_BP_RequestFreeBuffEffectActivation");
static_assert(offsetof(BP_ScriptActor_C_BP_RequestFreeBuffEffectActivation, BuffPoint) == 0x000000, "Member 'BP_ScriptActor_C_BP_RequestFreeBuffEffectActivation::BuffPoint' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_RequestFreeBuffEffectActivation, PlayerCharacter) == 0x000008, "Member 'BP_ScriptActor_C_BP_RequestFreeBuffEffectActivation::PlayerCharacter' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.BP_StartActorLipSyncAnim
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_BP_StartActorLipSyncAnim final
{
public:
	class USBCharaPartsFaceComponent*             FaceComponent;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_BP_StartActorLipSyncAnim) == 0x000008, "Wrong alignment on BP_ScriptActor_C_BP_StartActorLipSyncAnim");
static_assert(sizeof(BP_ScriptActor_C_BP_StartActorLipSyncAnim) == 0x000010, "Wrong size on BP_ScriptActor_C_BP_StartActorLipSyncAnim");
static_assert(offsetof(BP_ScriptActor_C_BP_StartActorLipSyncAnim, FaceComponent) == 0x000000, "Member 'BP_ScriptActor_C_BP_StartActorLipSyncAnim::FaceComponent' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_StartActorLipSyncAnim, Speed) == 0x000008, "Member 'BP_ScriptActor_C_BP_StartActorLipSyncAnim::Speed' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_BP_StartActorLipSyncAnim, Duration) == 0x00000C, "Member 'BP_ScriptActor_C_BP_StartActorLipSyncAnim::Duration' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.LoginBonusCheckCmplete
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_LoginBonusCheckCmplete final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C87[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_LoginBonusCheckCmplete) == 0x000004, "Wrong alignment on BP_ScriptActor_C_LoginBonusCheckCmplete");
static_assert(sizeof(BP_ScriptActor_C_LoginBonusCheckCmplete) == 0x000008, "Wrong size on BP_ScriptActor_C_LoginBonusCheckCmplete");
static_assert(offsetof(BP_ScriptActor_C_LoginBonusCheckCmplete, bWasSuccessful) == 0x000000, "Member 'BP_ScriptActor_C_LoginBonusCheckCmplete::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LoginBonusCheckCmplete, ErrorCode) == 0x000004, "Member 'BP_ScriptActor_C_LoginBonusCheckCmplete::ErrorCode' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B");
static_assert(sizeof(BP_ScriptActor_C_OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B) == 0x000008, "Wrong size on BP_ScriptActor_C_OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B");
static_assert(offsetof(BP_ScriptActor_C_OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B, Loaded) == 0x000000, "Member 'BP_ScriptActor_C_OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B::Loaded' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_EF4A23B0441F8A087072C0826ED33902
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnLoaded_EF4A23B0441F8A087072C0826ED33902 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnLoaded_EF4A23B0441F8A087072C0826ED33902) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnLoaded_EF4A23B0441F8A087072C0826ED33902");
static_assert(sizeof(BP_ScriptActor_C_OnLoaded_EF4A23B0441F8A087072C0826ED33902) == 0x000008, "Wrong size on BP_ScriptActor_C_OnLoaded_EF4A23B0441F8A087072C0826ED33902");
static_assert(offsetof(BP_ScriptActor_C_OnLoaded_EF4A23B0441F8A087072C0826ED33902, Loaded) == 0x000000, "Member 'BP_ScriptActor_C_OnLoaded_EF4A23B0441F8A087072C0826ED33902::Loaded' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF");
static_assert(sizeof(BP_ScriptActor_C_OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF) == 0x000008, "Wrong size on BP_ScriptActor_C_OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF");
static_assert(offsetof(BP_ScriptActor_C_OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF, Loaded) == 0x000000, "Member 'BP_ScriptActor_C_OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF::Loaded' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290");
static_assert(sizeof(BP_ScriptActor_C_OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290) == 0x000008, "Wrong size on BP_ScriptActor_C_OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290");
static_assert(offsetof(BP_ScriptActor_C_OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290, Loaded) == 0x000000, "Member 'BP_ScriptActor_C_OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290::Loaded' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_E0794065497F6D746C417B8FDB70CAC5
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnLoaded_E0794065497F6D746C417B8FDB70CAC5 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnLoaded_E0794065497F6D746C417B8FDB70CAC5) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnLoaded_E0794065497F6D746C417B8FDB70CAC5");
static_assert(sizeof(BP_ScriptActor_C_OnLoaded_E0794065497F6D746C417B8FDB70CAC5) == 0x000008, "Wrong size on BP_ScriptActor_C_OnLoaded_E0794065497F6D746C417B8FDB70CAC5");
static_assert(offsetof(BP_ScriptActor_C_OnLoaded_E0794065497F6D746C417B8FDB70CAC5, Loaded) == 0x000000, "Member 'BP_ScriptActor_C_OnLoaded_E0794065497F6D746C417B8FDB70CAC5::Loaded' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8");
static_assert(sizeof(BP_ScriptActor_C_OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8) == 0x000008, "Wrong size on BP_ScriptActor_C_OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8");
static_assert(offsetof(BP_ScriptActor_C_OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8, Loaded) == 0x000000, "Member 'BP_ScriptActor_C_OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8::Loaded' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B");
static_assert(sizeof(BP_ScriptActor_C_OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B) == 0x000008, "Wrong size on BP_ScriptActor_C_OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B");
static_assert(offsetof(BP_ScriptActor_C_OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B, Loaded) == 0x000000, "Member 'BP_ScriptActor_C_OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B::Loaded' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_919BBF95440C9B20CDB744AE50922B91
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnLoaded_919BBF95440C9B20CDB744AE50922B91 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnLoaded_919BBF95440C9B20CDB744AE50922B91) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnLoaded_919BBF95440C9B20CDB744AE50922B91");
static_assert(sizeof(BP_ScriptActor_C_OnLoaded_919BBF95440C9B20CDB744AE50922B91) == 0x000008, "Wrong size on BP_ScriptActor_C_OnLoaded_919BBF95440C9B20CDB744AE50922B91");
static_assert(offsetof(BP_ScriptActor_C_OnLoaded_919BBF95440C9B20CDB744AE50922B91, Loaded) == 0x000000, "Member 'BP_ScriptActor_C_OnLoaded_919BBF95440C9B20CDB744AE50922B91::Loaded' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptActor_C_OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7) == 0x000008, "Wrong alignment on BP_ScriptActor_C_OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7");
static_assert(sizeof(BP_ScriptActor_C_OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7) == 0x000008, "Wrong size on BP_ScriptActor_C_OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7");
static_assert(offsetof(BP_ScriptActor_C_OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7, Loaded) == 0x000000, "Member 'BP_ScriptActor_C_OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7::Loaded' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CalcViewTargetByActor
// 0x0090 (0x0090 - 0x0000)
struct BP_ScriptActor_C_CalcViewTargetByActor final
{
public:
	class AActor*                                 NewTargetActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRelative;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C88[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetViewTargetLocation_Location;           // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_CalcViewTargetByActor) == 0x000008, "Wrong alignment on BP_ScriptActor_C_CalcViewTargetByActor");
static_assert(sizeof(BP_ScriptActor_C_CalcViewTargetByActor) == 0x000090, "Wrong size on BP_ScriptActor_C_CalcViewTargetByActor");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, NewTargetActor) == 0x000000, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::NewTargetActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, IsRelative) == 0x000008, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::IsRelative' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, Location) == 0x00000C, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, Rotation) == 0x000018, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::Rotation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000024, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, CallFunc_GetActorForwardVector_ReturnValue) == 0x000030, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, CallFunc_GetViewTargetLocation_Location) == 0x00003C, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::CallFunc_GetViewTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000048, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, CallFunc_Add_VectorVector_ReturnValue) == 0x000054, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000060, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00006C, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000078, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTargetByActor, CallFunc_FindLookAtRotation_ReturnValue) == 0x000084, "Member 'BP_ScriptActor_C_CalcViewTargetByActor::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.GetViewTargetLocation
// 0x0050 (0x0050 - 0x0000)
struct BP_ScriptActor_C_GetViewTargetLocation final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0008(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C89[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C8A[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSocketExist_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_GetViewTargetLocation) == 0x000008, "Wrong alignment on BP_ScriptActor_C_GetViewTargetLocation");
static_assert(sizeof(BP_ScriptActor_C_GetViewTargetLocation) == 0x000050, "Wrong size on BP_ScriptActor_C_GetViewTargetLocation");
static_assert(offsetof(BP_ScriptActor_C_GetViewTargetLocation, Actor) == 0x000000, "Member 'BP_ScriptActor_C_GetViewTargetLocation::Actor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetViewTargetLocation, Location) == 0x000008, "Member 'BP_ScriptActor_C_GetViewTargetLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetViewTargetLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'BP_ScriptActor_C_GetViewTargetLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetViewTargetLocation, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000020, "Member 'BP_ScriptActor_C_GetViewTargetLocation::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetViewTargetLocation, K2Node_DynamicCast_AsCharacter) == 0x000030, "Member 'BP_ScriptActor_C_GetViewTargetLocation::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetViewTargetLocation, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_ScriptActor_C_GetViewTargetLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetViewTargetLocation, CallFunc_GetSocketLocation_ReturnValue) == 0x00003C, "Member 'BP_ScriptActor_C_GetViewTargetLocation::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetViewTargetLocation, CallFunc_DoesSocketExist_ReturnValue) == 0x000048, "Member 'BP_ScriptActor_C_GetViewTargetLocation::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkPlayerPosition
// 0x02E8 (0x02E8 - 0x0000)
struct BP_ScriptActor_C_CalcTalkPlayerPosition final
{
public:
	class AActor*                                 NewTargetActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TestZ;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TestLocation;                                      // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0028(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C8B[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C8C[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FHitResult>                     CallFunc_LineTraceMultiForObjects_OutHits;         // 0x00C8(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceMultiForObjects_ReturnValue;     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C8D[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_Array_Get_Item;                           // 0x00E0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C8E[0x1];                                     // 0x016B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C8F[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C90[0x3];                                     // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C91[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C92[0x2];                                     // 0x0242(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x024C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0258(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0264(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x0270(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C93[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x02AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x02B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C94[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_3;                          // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_3;                          // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_3;                          // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_CalcTalkPlayerPosition) == 0x000008, "Wrong alignment on BP_ScriptActor_C_CalcTalkPlayerPosition");
static_assert(sizeof(BP_ScriptActor_C_CalcTalkPlayerPosition) == 0x0002E8, "Wrong size on BP_ScriptActor_C_CalcTalkPlayerPosition");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, NewTargetActor) == 0x000000, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::NewTargetActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, Distance) == 0x000008, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::Distance' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, Location) == 0x00000C, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, TestZ) == 0x000018, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::TestZ' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, TestLocation) == 0x00001C, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::TestLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, Temp_object_Variable) == 0x000028, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_GetActorForwardVector_ReturnValue) == 0x000044, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000050, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_X) == 0x00005C, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_Y) == 0x000060, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_Z) == 0x000064, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Add_VectorVector_ReturnValue) == 0x000068, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, Temp_int_Array_Index_Variable) == 0x00007C, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_X_1) == 0x000080, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_Y_1) == 0x000084, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_Z_1) == 0x000088, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_MakeVector_ReturnValue) == 0x00008C, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000098, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, K2Node_MakeArray_Array) == 0x0000A8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000B8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_LineTraceMultiForObjects_OutHits) == 0x0000C8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_LineTraceMultiForObjects_OutHits' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_LineTraceMultiForObjects_ReturnValue) == 0x0000D8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_LineTraceMultiForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Array_Length_ReturnValue) == 0x0000DC, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Array_Get_Item) == 0x0000E0, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Less_IntInt_ReturnValue) == 0x000168, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_bBlockingHit) == 0x000169, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_bInitialOverlap) == 0x00016A, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_Time) == 0x00016C, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_Distance) == 0x000170, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_Location) == 0x000174, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_ImpactPoint) == 0x000180, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_Normal) == 0x00018C, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_ImpactNormal) == 0x000198, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_PhysMat) == 0x0001A8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_HitActor) == 0x0001B0, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_HitComponent) == 0x0001B8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_HitBoneName) == 0x0001C0, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_HitItem) == 0x0001C8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_ElementIndex) == 0x0001CC, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_FaceIndex) == 0x0001D0, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_TraceStart) == 0x0001D4, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_TraceEnd) == 0x0001E0, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_IsValid_ReturnValue) == 0x0001EC, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_GetDisplayName_ReturnValue) == 0x0001F0, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Concat_StrStr_ReturnValue) == 0x000200, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_X_2) == 0x000210, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_Y_2) == 0x000214, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_Z_2) == 0x000218, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000220, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Conv_FloatToString_ReturnValue) == 0x000230, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_bBlockingHit_1) == 0x000240, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x000241, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_Time_1) == 0x000244, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_Distance_1) == 0x000248, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_Location_1) == 0x00024C, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000258, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_Normal_1) == 0x000264, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_ImpactNormal_1) == 0x000270, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_PhysMat_1) == 0x000280, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_HitActor_1) == 0x000288, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_HitComponent_1) == 0x000290, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_HitBoneName_1) == 0x000298, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_HitItem_1) == 0x0002A0, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_ElementIndex_1) == 0x0002A4, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_FaceIndex_1) == 0x0002A8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_TraceStart_1) == 0x0002AC, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakHitResult_TraceEnd_1) == 0x0002B8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0002C8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_X_3) == 0x0002D8, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_Y_3) == 0x0002DC, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_BreakVector_Z_3) == 0x0002E0, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkPlayerPosition, CallFunc_FMax_ReturnValue) == 0x0002E4, "Member 'BP_ScriptActor_C_CalcTalkPlayerPosition::CallFunc_FMax_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.TryGetSocketLocation
// 0x0040 (0x0040 - 0x0000)
struct BP_ScriptActor_C_TryGetSocketLocation final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesSocketExist_ReturnValue;              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C95[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_TryGetSocketLocation) == 0x000008, "Wrong alignment on BP_ScriptActor_C_TryGetSocketLocation");
static_assert(sizeof(BP_ScriptActor_C_TryGetSocketLocation) == 0x000040, "Wrong size on BP_ScriptActor_C_TryGetSocketLocation");
static_assert(offsetof(BP_ScriptActor_C_TryGetSocketLocation, Actor) == 0x000000, "Member 'BP_ScriptActor_C_TryGetSocketLocation::Actor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_TryGetSocketLocation, SocketName) == 0x000008, "Member 'BP_ScriptActor_C_TryGetSocketLocation::SocketName' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_TryGetSocketLocation, Location) == 0x000010, "Member 'BP_ScriptActor_C_TryGetSocketLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_TryGetSocketLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00001C, "Member 'BP_ScriptActor_C_TryGetSocketLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_TryGetSocketLocation, K2Node_DynamicCast_AsCharacter) == 0x000028, "Member 'BP_ScriptActor_C_TryGetSocketLocation::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_TryGetSocketLocation, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ScriptActor_C_TryGetSocketLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_TryGetSocketLocation, CallFunc_DoesSocketExist_ReturnValue) == 0x000031, "Member 'BP_ScriptActor_C_TryGetSocketLocation::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_TryGetSocketLocation, CallFunc_GetSocketLocation_ReturnValue) == 0x000034, "Member 'BP_ScriptActor_C_TryGetSocketLocation::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.SetTalkMode
// 0x02E8 (0x02E8 - 0x0000)
struct BP_ScriptActor_C_SetTalkMode final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistancePlayer;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsNoCheckAtTeleport;                              // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C96[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CameraZOffset;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraPosOffset;                                   // 0x0014(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         TmpLogArray;                                       // 0x0020(0x0010)(Edit, BlueprintVisible)
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNoCheckAtTeleportPlayer;                         // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C97[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeightDif;                                         // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewCameraTargetLocation;                           // 0x0040(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewCameraLocation;                                 // 0x004C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherTarget;                                       // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               NewPlayerRotation;                                 // 0x0060(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                NewPlayerLocation;                                 // 0x006C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C98[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_RotatorToString_ReturnValue;         // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C99[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_1;        // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHeight_ReturnValue;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C9A[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalcTalkModeTagetLocation_Ret;            // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalcTalkModeCameraLocation_Ret;           // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcTalkModeHeightDiff_Ret;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C9B[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C9C[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C9D[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_2;        // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_BalloonComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C9E[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_3;        // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7C9F[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorFloat_ReturnValue;         // 0x01B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_4;        // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CA0[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x01F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CA1[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x0208(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CA2[0x3];                                     // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_CalcTalkPlayerPosition_Location;          // 0x0294(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue_1;         // 0x02A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CA3[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CA4[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CA5[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x02D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TeleportTo_ReturnValue;                   // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_SetTalkMode) == 0x000008, "Wrong alignment on BP_ScriptActor_C_SetTalkMode");
static_assert(sizeof(BP_ScriptActor_C_SetTalkMode) == 0x0002E8, "Wrong size on BP_ScriptActor_C_SetTalkMode");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, InOtherActor) == 0x000000, "Member 'BP_ScriptActor_C_SetTalkMode::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, DistancePlayer) == 0x000008, "Member 'BP_ScriptActor_C_SetTalkMode::DistancePlayer' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, bIsNoCheckAtTeleport) == 0x00000C, "Member 'BP_ScriptActor_C_SetTalkMode::bIsNoCheckAtTeleport' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CameraZOffset) == 0x000010, "Member 'BP_ScriptActor_C_SetTalkMode::CameraZOffset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CameraPosOffset) == 0x000014, "Member 'BP_ScriptActor_C_SetTalkMode::CameraPosOffset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, TmpLogArray) == 0x000020, "Member 'BP_ScriptActor_C_SetTalkMode::TmpLogArray' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, PlayerCharacter) == 0x000030, "Member 'BP_ScriptActor_C_SetTalkMode::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, IsNoCheckAtTeleportPlayer) == 0x000038, "Member 'BP_ScriptActor_C_SetTalkMode::IsNoCheckAtTeleportPlayer' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, HeightDif) == 0x00003C, "Member 'BP_ScriptActor_C_SetTalkMode::HeightDif' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, NewCameraTargetLocation) == 0x000040, "Member 'BP_ScriptActor_C_SetTalkMode::NewCameraTargetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, NewCameraLocation) == 0x00004C, "Member 'BP_ScriptActor_C_SetTalkMode::NewCameraLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, OtherTarget) == 0x000058, "Member 'BP_ScriptActor_C_SetTalkMode::OtherTarget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, NewPlayerRotation) == 0x000060, "Member 'BP_ScriptActor_C_SetTalkMode::NewPlayerRotation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, NewPlayerLocation) == 0x00006C, "Member 'BP_ScriptActor_C_SetTalkMode::NewPlayerLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_MakeVector_ReturnValue) == 0x000078, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Conv_RotatorToString_ReturnValue) == 0x000088, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Conv_RotatorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, Temp_int_Array_Index_Variable) == 0x000098, "Member 'BP_ScriptActor_C_SetTalkMode::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Conv_VectorToString_ReturnValue) == 0x0000A0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Conv_VectorToString_ReturnValue_1) == 0x0000B0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Conv_VectorToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0000C0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_GetHeight_ReturnValue) == 0x0000C8, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_GetHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Conv_FloatToString_ReturnValue) == 0x0000D0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_CalcTalkModeTagetLocation_Ret) == 0x0000E0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_CalcTalkModeTagetLocation_Ret' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_CalcTalkModeCameraLocation_Ret) == 0x0000EC, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_CalcTalkModeCameraLocation_Ret' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_CalcTalkModeHeightDiff_Ret) == 0x0000F8, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_CalcTalkModeHeightDiff_Ret' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_BreakVector_X) == 0x0000FC, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_BreakVector_Y) == 0x000100, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_BreakVector_Z) == 0x000104, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Conv_FloatToString_ReturnValue_1) == 0x000108, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Conv_FloatToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_MakeLiteralString_ReturnValue) == 0x000118, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_IsDebug_ReturnValue) == 0x000128, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_IsDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Array_Add_ReturnValue) == 0x00012C, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, Temp_int_Loop_Counter_Variable) == 0x000130, "Member 'BP_ScriptActor_C_SetTalkMode::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Add_IntInt_ReturnValue) == 0x000134, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Array_Get_Item) == 0x000138, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Less_IntInt_ReturnValue) == 0x00014C, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000150, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Conv_VectorToString_ReturnValue_2) == 0x000160, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Conv_VectorToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_GetComponentByClass_ReturnValue) == 0x000170, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Conv_FloatToString_ReturnValue_2) == 0x000178, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Conv_FloatToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_IsValid_ReturnValue) == 0x000188, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Conv_VectorToString_ReturnValue_3) == 0x000190, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Conv_VectorToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0001A0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0001A4, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0001A8, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_FMin_ReturnValue) == 0x0001B0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Subtract_VectorFloat_ReturnValue) == 0x0001B4, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Subtract_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_Conv_VectorToString_ReturnValue_4) == 0x0001C0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_Conv_VectorToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0001D0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0001D8, "Member 'BP_ScriptActor_C_SetTalkMode::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'BP_ScriptActor_C_SetTalkMode::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001E4, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_FindLookAtRotation_ReturnValue) == 0x0001F0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_GetPlayerController_ReturnValue) == 0x000200, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x000208, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000290, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_CalcTalkPlayerPosition_Location) == 0x000294, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_CalcTalkPlayerPosition_Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_FindLookAtRotation_ReturnValue_1) == 0x0002A0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_FindLookAtRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x0002B0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_BreakRotator_Roll) == 0x0002B8, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_BreakRotator_Pitch) == 0x0002BC, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_BreakRotator_Yaw) == 0x0002C0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x0002C8, "Member 'BP_ScriptActor_C_SetTalkMode::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, K2Node_DynamicCast_bSuccess_1) == 0x0002D0, "Member 'BP_ScriptActor_C_SetTalkMode::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_MakeRotator_ReturnValue) == 0x0002D4, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkMode, CallFunc_TeleportTo_ReturnValue) == 0x0002E0, "Member 'BP_ScriptActor_C_SetTalkMode::CallFunc_TeleportTo_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.IsActivatedDungeon
// 0x0028 (0x0028 - 0x0000)
struct BP_ScriptActor_C_IsActivatedDungeon final
{
public:
	class FName                                   InDungeonId;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bActivated;                                        // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CA6[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActivatedDungeon_ReturnValue;           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_IsActivatedDungeon) == 0x000008, "Wrong alignment on BP_ScriptActor_C_IsActivatedDungeon");
static_assert(sizeof(BP_ScriptActor_C_IsActivatedDungeon) == 0x000028, "Wrong size on BP_ScriptActor_C_IsActivatedDungeon");
static_assert(offsetof(BP_ScriptActor_C_IsActivatedDungeon, InDungeonId) == 0x000000, "Member 'BP_ScriptActor_C_IsActivatedDungeon::InDungeonId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_IsActivatedDungeon, bActivated) == 0x000008, "Member 'BP_ScriptActor_C_IsActivatedDungeon::bActivated' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_IsActivatedDungeon, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_ScriptActor_C_IsActivatedDungeon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_IsActivatedDungeon, K2Node_DynamicCast_AsSBPlayer_State) == 0x000018, "Member 'BP_ScriptActor_C_IsActivatedDungeon::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_IsActivatedDungeon, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ScriptActor_C_IsActivatedDungeon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_IsActivatedDungeon, CallFunc_IsActivatedDungeon_ReturnValue) == 0x000021, "Member 'BP_ScriptActor_C_IsActivatedDungeon::CallFunc_IsActivatedDungeon_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.GetValidSubEvents
// 0x0058 (0x0058 - 0x0000)
struct BP_ScriptActor_C_GetValidSubEvents final
{
public:
	TArray<class FName>                           InCheckEvents;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                           OutValidEvents;                                    // 0x0010(0x0010)(Parm, OutParm)
	class USBEventTriggerDatabase*                EventTriggerDatabase;                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ValidEventTrigger;                                 // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEventTriggerConditionByTriggerId_ReturnValue; // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CA7[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_GetValidSubEvents) == 0x000008, "Wrong alignment on BP_ScriptActor_C_GetValidSubEvents");
static_assert(sizeof(BP_ScriptActor_C_GetValidSubEvents) == 0x000058, "Wrong size on BP_ScriptActor_C_GetValidSubEvents");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, InCheckEvents) == 0x000000, "Member 'BP_ScriptActor_C_GetValidSubEvents::InCheckEvents' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, OutValidEvents) == 0x000010, "Member 'BP_ScriptActor_C_GetValidSubEvents::OutValidEvents' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, EventTriggerDatabase) == 0x000020, "Member 'BP_ScriptActor_C_GetValidSubEvents::EventTriggerDatabase' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, ValidEventTrigger) == 0x000028, "Member 'BP_ScriptActor_C_GetValidSubEvents::ValidEventTrigger' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_ScriptActor_C_GetValidSubEvents::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'BP_ScriptActor_C_GetValidSubEvents::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'BP_ScriptActor_C_GetValidSubEvents::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, CallFunc_Array_Get_Item) == 0x000044, "Member 'BP_ScriptActor_C_GetValidSubEvents::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, CallFunc_CheckEventTriggerConditionByTriggerId_ReturnValue) == 0x00004C, "Member 'BP_ScriptActor_C_GetValidSubEvents::CallFunc_CheckEventTriggerConditionByTriggerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, CallFunc_Less_IntInt_ReturnValue) == 0x00004D, "Member 'BP_ScriptActor_C_GetValidSubEvents::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'BP_ScriptActor_C_GetValidSubEvents::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetValidSubEvents, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'BP_ScriptActor_C_GetValidSubEvents::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.SpawnSubActor_Internal
// 0x0150 (0x0150 - 0x0000)
struct BP_ScriptActor_C_SpawnSubActor_Internal final
{
public:
	class UClass*                                 InActorClass;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InLocation;                                        // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CA8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateData*                     InCharaCreateData;                                 // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASAnimationSet*                        InAnimationSet;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 LocalSpawnActor;                                   // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LocalSpawnRotation;                                // 0x0038(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                LocalSpawnLocation;                                // 0x0044(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CA9[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBNpcCharacter*                        K2Node_DynamicCast_AsSBNpc_Character;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CAA[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBNpcCharacter*                        K2Node_DynamicCast_AsSBNpc_Character_1;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CAB[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNpcCharacterMovementComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CAC[0xF];                                     // 0x0081(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CAD[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_SpawnSubActor_Internal) == 0x000010, "Wrong alignment on BP_ScriptActor_C_SpawnSubActor_Internal");
static_assert(sizeof(BP_ScriptActor_C_SpawnSubActor_Internal) == 0x000150, "Wrong size on BP_ScriptActor_C_SpawnSubActor_Internal");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, InActorClass) == 0x000000, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::InActorClass' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, InLocation) == 0x000008, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::InLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, InCharaCreateData) == 0x000018, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::InCharaCreateData' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, InAnimationSet) == 0x000020, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::InAnimationSet' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, ReturnValue) == 0x000028, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, LocalSpawnActor) == 0x000030, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::LocalSpawnActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, LocalSpawnRotation) == 0x000038, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::LocalSpawnRotation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, LocalSpawnLocation) == 0x000044, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::LocalSpawnLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, K2Node_DynamicCast_AsSBNpc_Character) == 0x000058, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::K2Node_DynamicCast_AsSBNpc_Character' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, K2Node_DynamicCast_AsSBNpc_Character_1) == 0x000068, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::K2Node_DynamicCast_AsSBNpc_Character_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_GetComponentByClass_ReturnValue) == 0x000078, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_IsValid_ReturnValue_2) == 0x000080, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000C0, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C8, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000D0, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D8, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0000E8, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_FindLookAtRotation_ReturnValue) == 0x0000F0, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000FC, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000108, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_BreakRotator_Roll) == 0x000114, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_BreakRotator_Pitch) == 0x000118, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_BreakRotator_Yaw) == 0x00011C, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_MakeRotator_ReturnValue) == 0x000120, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x00012C, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SpawnSubActor_Internal, CallFunc_Add_VectorVector_ReturnValue) == 0x000138, "Member 'BP_ScriptActor_C_SpawnSubActor_Internal::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CalcViewTarget
// 0x0120 (0x0120 - 0x0000)
struct BP_ScriptActor_C_CalcViewTarget final
{
public:
	struct FVector                                InTargetLocation;                                  // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InTargetRotation;                                  // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInRelative;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CAE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                OutTargetLocation;                                 // 0x001C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OutTargetRotation;                                 // 0x0028(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bSucs;                                             // 0x0034(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CAF[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetLocation;                                    // 0x0038(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CB0[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             PlayerCharacter;                                   // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CB1[0x8];                                     // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0090(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;            // 0x00C0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_CalcViewTarget) == 0x000010, "Wrong alignment on BP_ScriptActor_C_CalcViewTarget");
static_assert(sizeof(BP_ScriptActor_C_CalcViewTarget) == 0x000120, "Wrong size on BP_ScriptActor_C_CalcViewTarget");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, InTargetLocation) == 0x000000, "Member 'BP_ScriptActor_C_CalcViewTarget::InTargetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, InTargetRotation) == 0x00000C, "Member 'BP_ScriptActor_C_CalcViewTarget::InTargetRotation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, bInRelative) == 0x000018, "Member 'BP_ScriptActor_C_CalcViewTarget::bInRelative' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, OutTargetLocation) == 0x00001C, "Member 'BP_ScriptActor_C_CalcViewTarget::OutTargetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, OutTargetRotation) == 0x000028, "Member 'BP_ScriptActor_C_CalcViewTarget::OutTargetRotation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, bSucs) == 0x000034, "Member 'BP_ScriptActor_C_CalcViewTarget::bSucs' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, TargetLocation) == 0x000038, "Member 'BP_ScriptActor_C_CalcViewTarget::TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, PlayerCharacter) == 0x000048, "Member 'BP_ScriptActor_C_CalcViewTarget::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, CallFunc_MakeTransform_ReturnValue) == 0x000050, "Member 'BP_ScriptActor_C_CalcViewTarget::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000080, "Member 'BP_ScriptActor_C_CalcViewTarget::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, CallFunc_GetTransform_ReturnValue) == 0x000090, "Member 'BP_ScriptActor_C_CalcViewTarget::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, CallFunc_ComposeTransforms_ReturnValue) == 0x0000C0, "Member 'BP_ScriptActor_C_CalcViewTarget::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, CallFunc_BreakTransform_Location) == 0x0000F0, "Member 'BP_ScriptActor_C_CalcViewTarget::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, CallFunc_BreakTransform_Rotation) == 0x0000FC, "Member 'BP_ScriptActor_C_CalcViewTarget::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcViewTarget, CallFunc_BreakTransform_Scale) == 0x000108, "Member 'BP_ScriptActor_C_CalcViewTarget::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.GetFreeViewTarget
// 0x0020 (0x0020 - 0x0000)
struct BP_ScriptActor_C_GetFreeViewTarget final
{
public:
	class AActor*                                 ViewTargetActor;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_GetFreeViewTarget) == 0x000008, "Wrong alignment on BP_ScriptActor_C_GetFreeViewTarget");
static_assert(sizeof(BP_ScriptActor_C_GetFreeViewTarget) == 0x000020, "Wrong size on BP_ScriptActor_C_GetFreeViewTarget");
static_assert(offsetof(BP_ScriptActor_C_GetFreeViewTarget, ViewTargetActor) == 0x000000, "Member 'BP_ScriptActor_C_GetFreeViewTarget::ViewTargetActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetFreeViewTarget, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_ScriptActor_C_GetFreeViewTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetFreeViewTarget, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_ScriptActor_C_GetFreeViewTarget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetFreeViewTarget, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_ScriptActor_C_GetFreeViewTarget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetFreeViewTarget, CallFunc_Percent_IntInt_ReturnValue) == 0x000018, "Member 'BP_ScriptActor_C_GetFreeViewTarget::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CurViewTarget
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_CurViewTarget final
{
public:
	class AActor*                                 ViewTargetActor;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_CurViewTarget) == 0x000008, "Wrong alignment on BP_ScriptActor_C_CurViewTarget");
static_assert(sizeof(BP_ScriptActor_C_CurViewTarget) == 0x000010, "Wrong size on BP_ScriptActor_C_CurViewTarget");
static_assert(offsetof(BP_ScriptActor_C_CurViewTarget, ViewTargetActor) == 0x000000, "Member 'BP_ScriptActor_C_CurViewTarget::ViewTargetActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CurViewTarget, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_ScriptActor_C_CurViewTarget::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.PlayParticleFromActor_Internal
// 0x0070 (0x0070 - 0x0000)
struct BP_ScriptActor_C_PlayParticleFromActor_Internal final
{
public:
	class AActor*                                 InTargetActor;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        InParticle;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InSocketId;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OffsetLocation;                                    // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0024(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CB2[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CB3[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSocketExist_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CB4[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_Simple_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_PlayParticleFromActor_Internal) == 0x000008, "Wrong alignment on BP_ScriptActor_C_PlayParticleFromActor_Internal");
static_assert(sizeof(BP_ScriptActor_C_PlayParticleFromActor_Internal) == 0x000070, "Wrong size on BP_ScriptActor_C_PlayParticleFromActor_Internal");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, InTargetActor) == 0x000000, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::InTargetActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, InParticle) == 0x000008, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::InParticle' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, InSocketId) == 0x000010, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::InSocketId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, OffsetLocation) == 0x000018, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::OffsetLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, Location) == 0x000024, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, K2Node_DynamicCast_AsCharacter) == 0x000040, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, CallFunc_GetSocketLocation_ReturnValue) == 0x00004C, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, CallFunc_DoesSocketExist_ReturnValue) == 0x000058, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, CallFunc_Add_VectorVector_ReturnValue) == 0x00005C, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_PlayParticleFromActor_Internal, CallFunc_SpawnEmitterAtLocation_Simple_ReturnValue) == 0x000068, "Member 'BP_ScriptActor_C_PlayParticleFromActor_Internal::CallFunc_SpawnEmitterAtLocation_Simple_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CreateWalletWidgetIfNeeded
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptActor_C_CreateWalletWidgetIfNeeded final
{
public:
	class UScriptMyWalletWidget_C*                CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_CreateWalletWidgetIfNeeded) == 0x000008, "Wrong alignment on BP_ScriptActor_C_CreateWalletWidgetIfNeeded");
static_assert(sizeof(BP_ScriptActor_C_CreateWalletWidgetIfNeeded) == 0x000010, "Wrong size on BP_ScriptActor_C_CreateWalletWidgetIfNeeded");
static_assert(offsetof(BP_ScriptActor_C_CreateWalletWidgetIfNeeded, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_ScriptActor_C_CreateWalletWidgetIfNeeded::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CreateWalletWidgetIfNeeded, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_ScriptActor_C_CreateWalletWidgetIfNeeded::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.LimitAngleDifference
// 0x0058 (0x0058 - 0x0000)
struct BP_ScriptActor_C_LimitAngleDifference final
{
public:
	float                                         Start;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Target;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutTarget;                                         // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpNewTarget;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpNormalizedTarget;                               // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpTarget;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpStart;                                          // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CB5[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CB6[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CB7[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CB8[0x1];                                     // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CB9[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_2;                           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_LimitAngleDifference) == 0x000004, "Wrong alignment on BP_ScriptActor_C_LimitAngleDifference");
static_assert(sizeof(BP_ScriptActor_C_LimitAngleDifference) == 0x000058, "Wrong size on BP_ScriptActor_C_LimitAngleDifference");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, Start) == 0x000000, "Member 'BP_ScriptActor_C_LimitAngleDifference::Start' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, Target) == 0x000004, "Member 'BP_ScriptActor_C_LimitAngleDifference::Target' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, OutTarget) == 0x000008, "Member 'BP_ScriptActor_C_LimitAngleDifference::OutTarget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, TmpNewTarget) == 0x00000C, "Member 'BP_ScriptActor_C_LimitAngleDifference::TmpNewTarget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, TmpNormalizedTarget) == 0x000010, "Member 'BP_ScriptActor_C_LimitAngleDifference::TmpNormalizedTarget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, TmpTarget) == 0x000014, "Member 'BP_ScriptActor_C_LimitAngleDifference::TmpTarget' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, TmpStart) == 0x000018, "Member 'BP_ScriptActor_C_LimitAngleDifference::TmpStart' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, Temp_float_Variable) == 0x00001C, "Member 'BP_ScriptActor_C_LimitAngleDifference::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_ScriptActor_C_LimitAngleDifference::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, CallFunc_Less_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_ScriptActor_C_LimitAngleDifference::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, Temp_float_Variable_1) == 0x000028, "Member 'BP_ScriptActor_C_LimitAngleDifference::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, Temp_bool_Variable) == 0x00002C, "Member 'BP_ScriptActor_C_LimitAngleDifference::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000030, "Member 'BP_ScriptActor_C_LimitAngleDifference::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, K2Node_Select_Default) == 0x000034, "Member 'BP_ScriptActor_C_LimitAngleDifference::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, Temp_bool_Variable_1) == 0x000038, "Member 'BP_ScriptActor_C_LimitAngleDifference::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, CallFunc_Add_FloatFloat_ReturnValue) == 0x00003C, "Member 'BP_ScriptActor_C_LimitAngleDifference::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000040, "Member 'BP_ScriptActor_C_LimitAngleDifference::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000041, "Member 'BP_ScriptActor_C_LimitAngleDifference::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000042, "Member 'BP_ScriptActor_C_LimitAngleDifference::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, K2Node_Select_Default_1) == 0x000044, "Member 'BP_ScriptActor_C_LimitAngleDifference::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000048, "Member 'BP_ScriptActor_C_LimitAngleDifference::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, CallFunc_Abs_ReturnValue) == 0x00004C, "Member 'BP_ScriptActor_C_LimitAngleDifference::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, Temp_bool_Variable_2) == 0x000050, "Member 'BP_ScriptActor_C_LimitAngleDifference::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000051, "Member 'BP_ScriptActor_C_LimitAngleDifference::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_LimitAngleDifference, K2Node_Select_Default_2) == 0x000054, "Member 'BP_ScriptActor_C_LimitAngleDifference::K2Node_Select_Default_2' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.Get Actor Yaw Diff
// 0x0068 (0x0068 - 0x0000)
struct BP_ScriptActor_C_Get_Actor_Yaw_Diff final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DestinationActor;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         YawDiff;                                           // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_Get_Actor_Yaw_Diff) == 0x000008, "Wrong alignment on BP_ScriptActor_C_Get_Actor_Yaw_Diff");
static_assert(sizeof(BP_ScriptActor_C_Get_Actor_Yaw_Diff) == 0x000068, "Wrong size on BP_ScriptActor_C_Get_Actor_Yaw_Diff");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, SourceActor) == 0x000000, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::SourceActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, DestinationActor) == 0x000008, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::DestinationActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, YawDiff) == 0x000010, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::YawDiff' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000014, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_BreakRotator_Roll) == 0x00002C, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_BreakRotator_Pitch) == 0x000030, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_BreakRotator_Yaw) == 0x000034, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_FindLookAtRotation_ReturnValue) == 0x000044, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_BreakRotator_Roll_1) == 0x000050, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_BreakRotator_Pitch_1) == 0x000054, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_BreakRotator_Yaw_1) == 0x000058, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00005C, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_Get_Actor_Yaw_Diff, CallFunc_Abs_ReturnValue) == 0x000060, "Member 'BP_ScriptActor_C_Get_Actor_Yaw_Diff::CallFunc_Abs_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.AddStringArrayForDebug
// 0x0048 (0x0048 - 0x0000)
struct BP_ScriptActor_C_AddStringArrayForDebug final
{
public:
	TArray<class FString>                         SrcTextArray;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 DstText;                                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 DstTitle;                                          // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_AddStringArrayForDebug) == 0x000008, "Wrong alignment on BP_ScriptActor_C_AddStringArrayForDebug");
static_assert(sizeof(BP_ScriptActor_C_AddStringArrayForDebug) == 0x000048, "Wrong size on BP_ScriptActor_C_AddStringArrayForDebug");
static_assert(offsetof(BP_ScriptActor_C_AddStringArrayForDebug, SrcTextArray) == 0x000000, "Member 'BP_ScriptActor_C_AddStringArrayForDebug::SrcTextArray' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_AddStringArrayForDebug, DstText) == 0x000010, "Member 'BP_ScriptActor_C_AddStringArrayForDebug::DstText' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_AddStringArrayForDebug, DstTitle) == 0x000020, "Member 'BP_ScriptActor_C_AddStringArrayForDebug::DstTitle' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_AddStringArrayForDebug, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'BP_ScriptActor_C_AddStringArrayForDebug::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_AddStringArrayForDebug, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'BP_ScriptActor_C_AddStringArrayForDebug::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeHeightDiff
// 0x0178 (0x0178 - 0x0000)
struct BP_ScriptActor_C_CalcTalkModeHeightDiff final
{
public:
	class AActor*                                 NPC;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ret;                                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CBA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TryGetSocketLocation_Location;            // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TryGetSocketLocation_Location_1;          // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_VectorToText_ReturnValue;            // 0x0060(0x0018)()
	class FText                                   CallFunc_Conv_VectorToText_ReturnValue_1;          // 0x0078(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0090(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0110(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0120(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0130(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0148(0x0018)()
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_CalcTalkModeHeightDiff) == 0x000008, "Wrong alignment on BP_ScriptActor_C_CalcTalkModeHeightDiff");
static_assert(sizeof(BP_ScriptActor_C_CalcTalkModeHeightDiff) == 0x000178, "Wrong size on BP_ScriptActor_C_CalcTalkModeHeightDiff");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, NPC) == 0x000000, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::NPC' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, Ret) == 0x000008, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::Ret' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000024, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_TryGetSocketLocation_Location) == 0x000030, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_TryGetSocketLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_TryGetSocketLocation_Location_1) == 0x00003C, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_TryGetSocketLocation_Location_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000048, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000054, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_Conv_VectorToText_ReturnValue) == 0x000060, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_Conv_VectorToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_Conv_VectorToText_ReturnValue_1) == 0x000078, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_Conv_VectorToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, K2Node_MakeStruct_FormatArgumentData) == 0x000090, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D0, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, K2Node_MakeArray_Array) == 0x000110, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, K2Node_MakeArray_Array_1) == 0x000120, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_Format_ReturnValue) == 0x000130, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_Format_ReturnValue_1) == 0x000148, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x000160, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_BreakVector_X) == 0x00016C, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_BreakVector_Y) == 0x000170, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeHeightDiff, CallFunc_BreakVector_Z) == 0x000174, "Member 'BP_ScriptActor_C_CalcTalkModeHeightDiff::CallFunc_BreakVector_Z' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeCameraLocation
// 0x0280 (0x0280 - 0x0000)
struct BP_ScriptActor_C_CalcTalkModeCameraLocation final
{
public:
	class AActor*                                 NPC;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeightDiff;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Ret;                                               // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerNeckJSimilarLoc;                             // 0x0024(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerNeckJLocation;                               // 0x0030(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerLocation;                                    // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CBB[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_VectorToText_ReturnValue;            // 0x0058(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0040)(HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CBC[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_VectorToText_ReturnValue_1;          // 0x00D0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0100(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0140(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0150(0x0018)()
	float                                         CallFunc_GetPlayerNeckJOffset_ZOffset;             // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TryGetSocketLocation_Location;            // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CBD[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x01CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x01D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x01E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x01FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CBE[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x022C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0238(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue_1; // 0x0244(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0250(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x025C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0268(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x0274(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_CalcTalkModeCameraLocation) == 0x000008, "Wrong alignment on BP_ScriptActor_C_CalcTalkModeCameraLocation");
static_assert(sizeof(BP_ScriptActor_C_CalcTalkModeCameraLocation) == 0x000280, "Wrong size on BP_ScriptActor_C_CalcTalkModeCameraLocation");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, NPC) == 0x000000, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::NPC' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, HeightDiff) == 0x000008, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::HeightDiff' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, Offset) == 0x00000C, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::Offset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, Ret) == 0x000018, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::Ret' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, PlayerNeckJSimilarLoc) == 0x000024, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::PlayerNeckJSimilarLoc' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, PlayerNeckJLocation) == 0x000030, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::PlayerNeckJLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, PlayerLocation) == 0x00003C, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::PlayerLocation' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000048, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Conv_VectorToText_ReturnValue) == 0x000058, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Conv_VectorToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0000B0, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, K2Node_MakeArray_Array) == 0x0000C0, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Conv_VectorToText_ReturnValue_1) == 0x0000D0, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Conv_VectorToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, K2Node_MakeStruct_FormatArgumentData_1) == 0x000100, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, K2Node_MakeArray_Array_1) == 0x000140, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Format_ReturnValue_1) == 0x000150, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_GetPlayerNeckJOffset_ZOffset) == 0x000168, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_GetPlayerNeckJOffset_ZOffset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_MakeVector_ReturnValue) == 0x00016C, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000178, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000180, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_TryGetSocketLocation_Location) == 0x00018C, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_TryGetSocketLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000198, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0001A4, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_MakeVector_ReturnValue_1) == 0x0001A8, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0001B8, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001C0, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0001CC, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x0001D8, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x0001E4, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_BreakVector_X) == 0x0001F0, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_BreakVector_Y) == 0x0001F4, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_BreakVector_Z) == 0x0001F8, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0001FC, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_MakeVector_ReturnValue_2) == 0x000208, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x000218, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Normal_ReturnValue) == 0x000220, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x00022C, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_RotateAngleAxis_ReturnValue) == 0x000238, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_GreaterGreater_VectorRotator_ReturnValue_1) == 0x000244, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_GreaterGreater_VectorRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000250, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Add_VectorVector_ReturnValue_2) == 0x00025C, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000268, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeCameraLocation, CallFunc_Add_VectorVector_ReturnValue_4) == 0x000274, "Member 'BP_ScriptActor_C_CalcTalkModeCameraLocation::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeTagetLocation
// 0x00D8 (0x00D8 - 0x0000)
struct BP_ScriptActor_C_CalcTalkModeTagetLocation final
{
public:
	class AActor*                                 NPC;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Ret;                                               // 0x0014(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlayerNeckJOffset_ZOffset;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TryGetSocketLocation_Location;            // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue_1; // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_CalcTalkModeTagetLocation) == 0x000008, "Wrong alignment on BP_ScriptActor_C_CalcTalkModeTagetLocation");
static_assert(sizeof(BP_ScriptActor_C_CalcTalkModeTagetLocation) == 0x0000D8, "Wrong size on BP_ScriptActor_C_CalcTalkModeTagetLocation");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, NPC) == 0x000000, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::NPC' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, Offset) == 0x000008, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::Offset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, Ret) == 0x000014, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::Ret' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_GetPlayerNeckJOffset_ZOffset) == 0x000020, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_GetPlayerNeckJOffset_ZOffset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_MakeVector_ReturnValue) == 0x000024, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000030, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_TryGetSocketLocation_Location) == 0x000038, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_TryGetSocketLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000044, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000050, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000058, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x000064, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x000070, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_GreaterGreater_VectorRotator_ReturnValue_1) == 0x000078, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_GreaterGreater_VectorRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000084, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000090, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_Add_VectorVector_ReturnValue_1) == 0x00009C, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000A8, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0000B4, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_Add_VectorVector_ReturnValue_3) == 0x0000C0, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_CalcTalkModeTagetLocation, CallFunc_Add_VectorVector_ReturnValue_4) == 0x0000CC, "Member 'BP_ScriptActor_C_CalcTalkModeTagetLocation::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.SetTalkModeFixed_Internal
// 0x02C8 (0x02C8 - 0x0000)
struct BP_ScriptActor_C_SetTalkModeFixed_Internal final
{
public:
	class AActor*                                 InOtherActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ViewParamId;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsNoCheck;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CBF[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InCameraZOffset;                                   // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         DebugLog;                                          // 0x0018(0x0010)(Edit, BlueprintVisible)
	class AActor*                                 NewLocalVar_0;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptTalkModeViewParameter           ViewParameters;                                    // 0x0030(0x0024)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CC0[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraPosOffset;                                   // 0x0060(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CC1[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue;                      // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CC2[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CC3[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x00C0(0x0018)()
	class UBP_BalloonComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00E0(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CC4[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0128(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0138(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CC5[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CC6[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0168(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CC7[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CC8[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_1;        // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x01B4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CC9[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0240(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CCA[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_2;        // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue_1;         // 0x0260(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0278(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptTalkModeViewParameter           CallFunc_GetDataTableRowFromName_OutRow;           // 0x0284(0x0024)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TeleportTo_ReturnValue;                   // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CCB[0x6];                                     // 0x02AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_RotatorToString_ReturnValue;         // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_SetTalkModeFixed_Internal) == 0x000008, "Wrong alignment on BP_ScriptActor_C_SetTalkModeFixed_Internal");
static_assert(sizeof(BP_ScriptActor_C_SetTalkModeFixed_Internal) == 0x0002C8, "Wrong size on BP_ScriptActor_C_SetTalkModeFixed_Internal");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, InOtherActor) == 0x000000, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::InOtherActor' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, ViewParamId) == 0x000008, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::ViewParamId' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, bIsNoCheck) == 0x000010, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::bIsNoCheck' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, InCameraZOffset) == 0x000014, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::InCameraZOffset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, DebugLog) == 0x000018, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::DebugLog' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, NewLocalVar_0) == 0x000028, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, ViewParameters) == 0x000030, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::ViewParameters' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, PlayerCharacter) == 0x000058, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CameraPosOffset) == 0x000060, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CameraPosOffset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, Temp_int_Array_Index_Variable) == 0x00006C, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_MakeVector_ReturnValue) == 0x000070, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_IsValid_ReturnValue) == 0x00007C, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Array_Get_Item) == 0x000080, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_IsDebug_ReturnValue) == 0x000094, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_IsDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Conv_FloatToString_ReturnValue) == 0x000098, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_MakeLiteralString_ReturnValue) == 0x0000A8, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Array_Add_ReturnValue) == 0x0000B8, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Conv_NameToText_ReturnValue) == 0x0000C0, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_GetComponentByClass_ReturnValue) == 0x0000D8, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, K2Node_MakeStruct_FormatArgumentData) == 0x0000E0, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, K2Node_MakeArray_Array) == 0x000128, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Format_ReturnValue) == 0x000138, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, Temp_int_Loop_Counter_Variable) == 0x000150, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Less_IntInt_ReturnValue) == 0x000154, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Add_IntInt_ReturnValue) == 0x000158, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_GetPlayerController_ReturnValue) == 0x000160, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Add_VectorVector_ReturnValue) == 0x000168, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Conv_VectorToString_ReturnValue) == 0x000178, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000188, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Conv_VectorToString_ReturnValue_1) == 0x000198, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Conv_VectorToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_FindLookAtRotation_ReturnValue) == 0x0001A8, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x0001B4, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x00023C, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000240, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Conv_VectorToString_ReturnValue_2) == 0x000250, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Conv_VectorToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_FindLookAtRotation_ReturnValue_1) == 0x000260, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_FindLookAtRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_BreakRotator_Roll) == 0x00026C, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_BreakRotator_Pitch) == 0x000270, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_BreakRotator_Yaw) == 0x000274, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_MakeRotator_ReturnValue) == 0x000278, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_GetDataTableRowFromName_OutRow) == 0x000284, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0002A8, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_TeleportTo_ReturnValue) == 0x0002A9, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_TeleportTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_Conv_RotatorToString_ReturnValue) == 0x0002B0, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_Conv_RotatorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_SetTalkModeFixed_Internal, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0002C0, "Member 'BP_ScriptActor_C_SetTalkModeFixed_Internal::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.GetPlayerNeckJOffset
// 0x0020 (0x0020 - 0x0000)
struct BP_ScriptActor_C_GetPlayerNeckJOffset final
{
public:
	float                                         ZOffset;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayerHeight;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CCC[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHeight_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptActor_C_GetPlayerNeckJOffset) == 0x000008, "Wrong alignment on BP_ScriptActor_C_GetPlayerNeckJOffset");
static_assert(sizeof(BP_ScriptActor_C_GetPlayerNeckJOffset) == 0x000020, "Wrong size on BP_ScriptActor_C_GetPlayerNeckJOffset");
static_assert(offsetof(BP_ScriptActor_C_GetPlayerNeckJOffset, ZOffset) == 0x000000, "Member 'BP_ScriptActor_C_GetPlayerNeckJOffset::ZOffset' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetPlayerNeckJOffset, PlayerHeight) == 0x000004, "Member 'BP_ScriptActor_C_GetPlayerNeckJOffset::PlayerHeight' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetPlayerNeckJOffset, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_ScriptActor_C_GetPlayerNeckJOffset::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetPlayerNeckJOffset, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_ScriptActor_C_GetPlayerNeckJOffset::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetPlayerNeckJOffset, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'BP_ScriptActor_C_GetPlayerNeckJOffset::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_GetPlayerNeckJOffset, CallFunc_GetHeight_ReturnValue) == 0x00001C, "Member 'BP_ScriptActor_C_GetPlayerNeckJOffset::CallFunc_GetHeight_ReturnValue' has a wrong offset!");

// Function BP_ScriptActor.BP_ScriptActor_C.ClearPartyMigrationState
// 0x0020 (0x0020 - 0x0000)
struct BP_ScriptActor_C_ClearPartyMigrationState final
{
public:
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CCD[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasConvocation_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptActor_C_ClearPartyMigrationState) == 0x000008, "Wrong alignment on BP_ScriptActor_C_ClearPartyMigrationState");
static_assert(sizeof(BP_ScriptActor_C_ClearPartyMigrationState) == 0x000020, "Wrong size on BP_ScriptActor_C_ClearPartyMigrationState");
static_assert(offsetof(BP_ScriptActor_C_ClearPartyMigrationState, CallFunc_GetCurrentParty_OutPartyState) == 0x000000, "Member 'BP_ScriptActor_C_ClearPartyMigrationState::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ClearPartyMigrationState, CallFunc_GetCurrentParty_ReturnValue) == 0x000008, "Member 'BP_ScriptActor_C_ClearPartyMigrationState::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ClearPartyMigrationState, CallFunc_IsLocalPartyLeader_ReturnValue) == 0x000009, "Member 'BP_ScriptActor_C_ClearPartyMigrationState::CallFunc_IsLocalPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ClearPartyMigrationState, K2Node_DynamicCast_AsSBParty_Game_State_General) == 0x000010, "Member 'BP_ScriptActor_C_ClearPartyMigrationState::K2Node_DynamicCast_AsSBParty_Game_State_General' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ClearPartyMigrationState, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ScriptActor_C_ClearPartyMigrationState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScriptActor_C_ClearPartyMigrationState, CallFunc_HasConvocation_ReturnValue) == 0x000019, "Member 'BP_ScriptActor_C_ClearPartyMigrationState::CallFunc_HasConvocation_ReturnValue' has a wrong offset!");

}

