#pragma once

 

// Package: BP_PlayerSceneCapture2D_Studio

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ST_PlayerSceneCapture2D_Rotation_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio
// 0x0418 (0x0418 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A18[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A19[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A1A[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_1; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A1B[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_DeltaRotationZ;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x007C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_9A1C[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                K2Node_CustomEvent_Sender_3;                       // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_3;                        // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_2;                       // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param;                  // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A1D[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param_1;                // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A1E[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Set_Length_ReturnValue;                   // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Remove_ReturnValue;                   // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A1F[0x5];                                     // 0x0193(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param_2;                // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A20[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param_3;                // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A21[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A22[0x2];                                     // 0x01DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A23[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A24[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_4;             // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A25[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Set_Length_ReturnValue_1;                 // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_5;             // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Remove_ReturnValue_1;                 // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x01FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_2;          // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A26[0x3];                                     // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0210(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A27[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUserImageComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bResult;                        // 0x0251(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A28[0x2];                                     // 0x0252(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UploadFaceImage_Request_ReturnValue;      // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A29[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bResult, int32 RetCode)>  K2Node_CreateDelegate_OutputDelegate_5;            // 0x025C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A2A[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bResult, int32 RetCode)>  K2Node_CreateDelegate_OutputDelegate_6;            // 0x0270(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A2B[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bResult, int32 RetCode)>  K2Node_CreateDelegate_OutputDelegate_7;            // 0x0284(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9A2C[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x02A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A2D[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InPrevStateName;                // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InNextStateName;                // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x02E0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A2E[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_State_Machine_Name_OutName;           // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_State_Name_IsValid;                   // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A2F[0x6];                                     // 0x030A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_State_Name_OutStateName;              // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x0322(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0323(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A30[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0332(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A31[0x1];                                     // 0x0333(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A32[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0349(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x034A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x034B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x034C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A33[0x3];                                     // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A34[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0360(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0369(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A35[0x2];                                     // 0x036A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_DeltaTime;                      // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_3;                    // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0372(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A36[0x1];                                     // 0x0373(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Command;                        // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0381(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0382(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmoteFinished_ReturnValue;              // 0x0383(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0385(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A37[0x2];                                     // 0x0386(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_10;           // 0x0388(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Enabled;                        // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetAnalogStickRotate_bValid;              // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A38[0x2];                                     // 0x039A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnalogStickRotate_RotateValue;         // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMouseRotate_bValid;                    // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A39[0x3];                                     // 0x03A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMouseRotate_RotateValue;               // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x03A8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x03C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x03C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_3;                          // 0x03D8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_3;                         // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_2;      // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A3A[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_3;        // 0x03F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_3;             // 0x0400(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_3;      // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio) == 0x000418, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, EntryPoint) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsEmpty_ReturnValue) == 0x000004, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_MakeArray_Array) == 0x000018, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000030, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_1) == 0x000060, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_2) == 0x000069, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_3) == 0x00006A, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_DeltaRotationZ) == 0x00006C, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_DeltaRotationZ' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_MakeRotator_ReturnValue) == 0x000070, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x00007C, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetEventExecutor_ReturnValue) == 0x000108, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate_1) == 0x000110, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate_2) == 0x000120, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate_3) == 0x000130, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate_4) == 0x000140, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Sender_3) == 0x000150, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Param_3) == 0x000158, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Param_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Sender_2) == 0x000160, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Param_2) == 0x000168, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_AsSBInt_Param) == 0x000170, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_AsSBInt_Param' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_bSuccess_2) == 0x000178, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_AsSBInt_Param_1) == 0x000180, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_AsSBInt_Param_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_bSuccess_3) == 0x000188, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000189, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Set_Length_ReturnValue) == 0x00018C, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Set_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Set_Remove_ReturnValue) == 0x000190, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Set_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Greater_IntInt_ReturnValue) == 0x000191, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000192, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Sender_1) == 0x000198, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Param_1) == 0x0001A0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_AsSBInt_Param_2) == 0x0001A8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_AsSBInt_Param_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_bSuccess_4) == 0x0001B0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Sender) == 0x0001B8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Param) == 0x0001C0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_AsSBInt_Param_3) == 0x0001C8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_AsSBInt_Param_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_DynamicCast_bSuccess_5) == 0x0001D0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Add_IntInt_ReturnValue) == 0x0001D4, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsEmpty_ReturnValue_1) == 0x0001D8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0001D9, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001DC, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0001E0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001E4, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Greater_IntInt_ReturnValue_3) == 0x0001E8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Add_IntInt_ReturnValue_3) == 0x0001EC, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Greater_IntInt_ReturnValue_4) == 0x0001F0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Greater_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Set_Length_ReturnValue_1) == 0x0001F4, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Set_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Greater_IntInt_ReturnValue_5) == 0x0001F8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Greater_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Set_Remove_ReturnValue_1) == 0x0001F9, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Set_Remove_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_BooleanOR_ReturnValue) == 0x0001FA, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x0001FB, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_NotEqual_BoolBool_ReturnValue_2) == 0x0001FC, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_NotEqual_BoolBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000200, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetPlayerController_ReturnValue) == 0x000208, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_MakeArray_Array_1) == 0x000210, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_4) == 0x000220, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Array_Get_Item_1) == 0x000228, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000230, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetComponentByClass_ReturnValue) == 0x000238, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetDisplayName_ReturnValue_1) == 0x000240, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_5) == 0x000250, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_bResult) == 0x000251, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_bResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_RetCode) == 0x000254, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_UploadFaceImage_Request_ReturnValue) == 0x000258, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_UploadFaceImage_Request_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate_5) == 0x00025C, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Not_PreBool_ReturnValue) == 0x00026C, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate_6) == 0x000270, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_6) == 0x000280, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate_7) == 0x000284, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetCharacterId_ReturnValue) == 0x000298, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate_8) == 0x0002A8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002B8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_InPrevStateName) == 0x0002C0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_InPrevStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_InNextStateName) == 0x0002D0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_InNextStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate_9) == 0x0002E0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_7) == 0x0002F0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Get_State_Machine_Name_OutName) == 0x0002F8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Get_State_Machine_Name_OutName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000308, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Get_State_Name_IsValid) == 0x000309, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Get_State_Name_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Get_State_Name_OutStateName) == 0x000310, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Get_State_Name_OutStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_BooleanAND_ReturnValue) == 0x000320, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_8) == 0x000321, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_IsVisible) == 0x000322, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsDedicatedServer_ReturnValue) == 0x000323, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Not_PreBool_ReturnValue_2) == 0x000324, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000328, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_9) == 0x000330, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsLocallyControlled_ReturnValue) == 0x000331, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_BooleanAND_ReturnValue_1) == 0x000332, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_Event_DeltaSeconds) == 0x000334, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000338, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000340, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Not_PreBool_ReturnValue_3) == 0x000348, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_10) == 0x000349, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x00034A, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_BooleanAND_ReturnValue_2) == 0x00034B, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsEmpty_ReturnValue_2) == 0x00034C, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetPlayerController_ReturnValue_1) == 0x000350, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_11) == 0x000358, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000360, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsValid_ReturnValue_12) == 0x000368, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Result) == 0x000369, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_DeltaTime) == 0x00036C, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000370, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsEmpty_ReturnValue_3) == 0x000371, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsEmpty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000372, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000374, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Command) == 0x000378, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Command' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000380, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000381, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_BooleanOR_ReturnValue_1) == 0x000382, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_IsEmoteFinished_ReturnValue) == 0x000383, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_IsEmoteFinished_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_NotEqual_NameName_ReturnValue) == 0x000384, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_Event_EndPlayReason) == 0x000385, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CreateDelegate_OutputDelegate_10) == 0x000388, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_CustomEvent_Enabled) == 0x000398, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_CustomEvent_Enabled' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetAnalogStickRotate_bValid) == 0x000399, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetAnalogStickRotate_bValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetAnalogStickRotate_RotateValue) == 0x00039C, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetAnalogStickRotate_RotateValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetMouseRotate_bValid) == 0x0003A0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetMouseRotate_bValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetMouseRotate_RotateValue) == 0x0003A4, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetMouseRotate_RotateValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_MakeArray_Array_2) == 0x0003A8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Array_Get_Item_2) == 0x0003B8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x0003C0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetDisplayName_ReturnValue_2) == 0x0003C8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, K2Node_MakeArray_Array_3) == 0x0003D8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_Array_Get_Item_3) == 0x0003E8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_NotEqual_ObjectObject_ReturnValue_2) == 0x0003F0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_NotEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_K2_GetRootComponent_ReturnValue_3) == 0x0003F8, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_K2_GetRootComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_GetDisplayName_ReturnValue_3) == 0x000400, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_GetDisplayName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio, CallFunc_NotEqual_ObjectObject_ReturnValue_3) == 0x000410, "Member 'BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio::CallFunc_NotEqual_ObjectObject_ReturnValue_3' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ForceCaptureEnabled
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_ForceCaptureEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_ForceCaptureEnabled) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_ForceCaptureEnabled");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_ForceCaptureEnabled) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_ForceCaptureEnabled");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ForceCaptureEnabled, Enabled) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_ForceCaptureEnabled::Enabled' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_ReceiveEndPlay");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_ReceiveEndPlay");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SendCommand
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SendCommand final
{
public:
	class FName                                   Command;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SendCommand) == 0x000004, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SendCommand");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SendCommand) == 0x000008, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SendCommand");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SendCommand, Command) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SendCommand::Command' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CaptureWhenMovingUpdate
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_CaptureWhenMovingUpdate final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_CaptureWhenMovingUpdate) == 0x000004, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_CaptureWhenMovingUpdate");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_CaptureWhenMovingUpdate) == 0x000004, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_CaptureWhenMovingUpdate");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_CaptureWhenMovingUpdate, DeltaTime) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_CaptureWhenMovingUpdate::DeltaTime' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCharaPartsLoaded
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoaded final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoaded) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoaded");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoaded) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoaded");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoaded, Result) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoaded::Result' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_ReceiveTick");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_ReceiveTick) == 0x000004, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_ReceiveTick");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarVisibility final
{
public:
	bool                                          IsVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarVisibility) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarVisibility");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarVisibility) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarVisibility");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarVisibility, IsVisible) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarVisibility::IsVisible' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnPlayerAvatarPoseChangedToDefault_����
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault_____ final
{
public:
	class FString                                 InPrevStateName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNextStateName;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault_____) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault_____");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault_____) == 0x000020, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault_____");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault_____, InPrevStateName) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault_____::InPrevStateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault_____, InNextStateName) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault_____::InNextStateName' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnUploadFacemageComplete_����
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete_____ final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A3B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete_____) == 0x000004, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete_____");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete_____) == 0x000008, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete_____");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete_____, bResult) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete_____::bResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete_____, RetCode) == 0x000004, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete_____::RetCode' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnDisableCapture
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_OnDisableCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_OnDisableCapture) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_OnDisableCapture");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_OnDisableCapture) == 0x000010, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_OnDisableCapture");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnDisableCapture, Sender) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnDisableCapture::Sender' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnDisableCapture, Param) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnDisableCapture::Param' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnEnableCapture
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_OnEnableCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_OnEnableCapture) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_OnEnableCapture");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_OnEnableCapture) == 0x000010, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_OnEnableCapture");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnEnableCapture, Sender) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnEnableCapture::Sender' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnEnableCapture, Param) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnEnableCapture::Param' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnDestroyCapture
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture) == 0x000010, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture, Sender) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture::Sender' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture, Param) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture::Param' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCreateCapture
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_OnCreateCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_OnCreateCapture) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_OnCreateCapture");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_OnCreateCapture) == 0x000010, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_OnCreateCapture");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnCreateCapture, Sender) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnCreateCapture::Sender' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_OnCreateCapture, Param) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_OnCreateCapture::Param' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.AddAvatarRotation
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_AddAvatarRotation final
{
public:
	float                                         DeltaRotationZ;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_AddAvatarRotation) == 0x000004, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_AddAvatarRotation");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_AddAvatarRotation) == 0x000004, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_AddAvatarRotation");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AddAvatarRotation, DeltaRotationZ) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_AddAvatarRotation::DeltaRotationZ' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UserConstructionScript
// 0x0140 (0x0140 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A3C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0020(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_PlayerSceneCapture2D_Rotation      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A3D[0xB];                                     // 0x0045(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0050(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x00A4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript) == 0x000140, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_GetObjectName_ReturnValue) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000020, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_Conv_StringToName_ReturnValue) == 0x000030, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000044, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_GetTransform_ReturnValue) == 0x000050, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_BreakTransform_Location) == 0x000080, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_BreakTransform_Rotation) == 0x00008C, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_BreakTransform_Scale) == 0x000098, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0000A4, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_Array_Find_ReturnValue) == 0x00012C, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000130, "Member 'BP_PlayerSceneCapture2D_Studio_C_UserConstructionScript::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RotatePlayerAvatar
// 0x0140 (0x0140 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar final
{
public:
	float                                         InAddRotateValue;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A3E[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x00B0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar) == 0x000010, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar) == 0x000140, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, InAddRotateValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::InAddRotateValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_BreakTransform_Location) == 0x000040, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_BreakTransform_Rotation) == 0x00004C, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_BreakTransform_Scale) == 0x000058, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_BreakRotator_Roll) == 0x000064, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_BreakRotator_Pitch) == 0x000068, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_BreakRotator_Yaw) == 0x00006C, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_Add_FloatFloat_ReturnValue) == 0x000070, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_MakeRotator_ReturnValue) == 0x000074, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000B0, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000138, "Member 'BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ResetPlayerAvatarRotation
// 0x0140 (0x0140 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation final
{
public:
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A3F[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A40[0xC];                                     // 0x0074(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x00B0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation) == 0x000010, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation) == 0x000140, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_BreakRotator_Roll) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_BreakRotator_Pitch) == 0x000004, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_BreakRotator_Yaw) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_MakeRotator_ReturnValue) == 0x00000C, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_BreakTransform_Location) == 0x000050, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_BreakTransform_Rotation) == 0x00005C, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_BreakTransform_Scale) == 0x000068, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000B0, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000138, "Member 'BP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarRotateActive
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarRotateActive final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarRotateActive) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarRotateActive");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarRotateActive) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarRotateActive");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarRotateActive, InIsActive) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarRotateActive::InIsActive' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdateAvatar
// 0x03D8 (0x03D8 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar final
{
public:
	struct FSBCharaCreateParameter                InNewCharaCreateParameter;                         // 0x0000(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A41[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar) == 0x0003D8, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar, InNewCharaCreateParameter) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar::InNewCharaCreateParameter' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar, CallFunc_IsValid_ReturnValue) == 0x0003C0, "Member 'BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x0003C8, "Member 'BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar, K2Node_DynamicCast_bSuccess) == 0x0003D0, "Member 'BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdatePlayerAvatar
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A42[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RefreshAvatar
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A43[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_RefreshAvatar::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetStudioVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetStudioVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetStudioVisibility) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetStudioVisibility");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetStudioVisibility) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetStudioVisibility");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetStudioVisibility, InIsVisible) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetStudioVisibility::InIsVisible' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnable
// 0x0002 (0x0002 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable final
{
public:
	bool                                          bIsEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetCaptureEnable_Internal_bWantVisible;   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable) == 0x000002, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable, bIsEnable) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable::bIsEnable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable, CallFunc_SetCaptureEnable_Internal_bWantVisible) == 0x000001, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable::CallFunc_SetCaptureEnable_Internal_bWantVisible' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.AdjustSceneCapture2dTransform
// 0x0170 (0x0170 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform final
{
public:
	class USceneCaptureComponent2D*               InSceneCapture;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InSceneCaptue2dOffsetLocation;                     // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InSceneCapture2dOffsetRotator;                     // 0x0014(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A44[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A45[0xF];                                     // 0x0031(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A46[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A47[0xC];                                     // 0x00A4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00B0(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x00E0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform) == 0x000010, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform) == 0x000170, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, InSceneCapture) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::InSceneCapture' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, InSceneCaptue2dOffsetLocation) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::InSceneCaptue2dOffsetLocation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, InSceneCapture2dOffsetRotator) == 0x000014, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::InSceneCapture2dOffsetRotator' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000028, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, CallFunc_GetSocketTransform_ReturnValue) == 0x000040, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, CallFunc_IsValid_ReturnValue_2) == 0x000070, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, CallFunc_BreakTransform_Location) == 0x000074, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, CallFunc_BreakTransform_Rotation) == 0x000080, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, CallFunc_BreakTransform_Scale) == 0x00008C, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, CallFunc_Add_VectorVector_ReturnValue) == 0x000098, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, CallFunc_MakeTransform_ReturnValue) == 0x0000B0, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x0000E0, "Member 'BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarEyeBlinkEnable
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable final
{
public:
	bool                                          InIsEnable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A48[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable, InIsEnable) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable::InIsEnable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.GetDirectionalLightRotation
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation final
{
public:
	struct FRotator                               ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation) == 0x000004, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation, ReturnValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x00000C, "Member 'BP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetIsPlayerAvatarNaked
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked final
{
public:
	bool                                          InIsNaked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A49[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked, InIsNaked) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked::InIsNaked' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RequestEmote
// 0x0058 (0x0058 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_RequestEmote final
{
public:
	class FName                                   EmoteName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A4A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A4B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_RequestEmote");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote) == 0x000058, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_RequestEmote");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote, EmoteName) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_RequestEmote::EmoteName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote, CallFunc_IsEmpty_ReturnValue) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_RequestEmote::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_RequestEmote::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PlayerSceneCapture2D_Studio_C_RequestEmote::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PlayerSceneCapture2D_Studio_C_RequestEmote::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000030, "Member 'BP_PlayerSceneCapture2D_Studio_C_RequestEmote::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'BP_PlayerSceneCapture2D_Studio_C_RequestEmote::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000048, "Member 'BP_PlayerSceneCapture2D_Studio_C_RequestEmote::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_RequestEmote, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_PlayerSceneCapture2D_Studio_C_RequestEmote::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureWhenMovingMode
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode final
{
public:
	bool                                          Param_bCaptureWhenMovingMode;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A4C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Param_CaptureGraceTime;                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode) == 0x000004, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode) == 0x000008, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode, Param_bCaptureWhenMovingMode) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode::Param_bCaptureWhenMovingMode' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode, Param_CaptureGraceTime) == 0x000004, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode::Param_CaptureGraceTime' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.IsEmoteFinished
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A4D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnimTag_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished, ReturnValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished, CallFunc_HasAnimTag_ReturnValue) == 0x000011, "Member 'BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished::CallFunc_HasAnimTag_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetForceDirectionalLightEnable
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetForceDirectionalLightEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetForceDirectionalLightEnable) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetForceDirectionalLightEnable");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetForceDirectionalLightEnable) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetForceDirectionalLightEnable");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetForceDirectionalLightEnable, bEnable) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetForceDirectionalLightEnable::bEnable' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCostumePartsData
// 0x00A0 (0x00A0 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData final
{
public:
	struct FSBMasterCostume                       CostumeData;                                       // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A4E[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData) == 0x0000A0, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData, CostumeData) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData::CostumeData' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000090, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCostumePartsDataByUniqueId
// 0x00B0 (0x00B0 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId final
{
public:
	struct FSBMasterCostume                       CostumeData;                                       // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 InUniqueId;                                        // 0x0088(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A4F[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId) == 0x0000B0, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId, CostumeData) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId::CostumeData' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId, InUniqueId) == 0x000088, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId::InUniqueId' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x0000A0, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCharaCreateParameterOnly
// 0x03D8 (0x03D8 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly final
{
public:
	struct FSBCharaCreateParameter                CharaCreateParameter;                              // 0x0000(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A50[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly) == 0x0003D8, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly, CharaCreateParameter) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly::CharaCreateParameter' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly, CallFunc_IsValid_ReturnValue) == 0x0003C0, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x0003C8, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly, K2Node_DynamicCast_bSuccess) == 0x0003D0, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetLightEnable
// 0x0007 (0x0007 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetLightEnable final
{
public:
	bool                                          bIsEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetLightEnable) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetLightEnable");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetLightEnable) == 0x000007, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetLightEnable");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetLightEnable, bIsEnable) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetLightEnable::bIsEnable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetLightEnable, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000001, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetLightEnable::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetLightEnable, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetLightEnable::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetLightEnable, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetLightEnable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetLightEnable, CallFunc_BooleanOR_ReturnValue_1) == 0x000004, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetLightEnable::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetLightEnable, CallFunc_BooleanOR_ReturnValue_2) == 0x000005, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetLightEnable::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetLightEnable, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x000006, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetLightEnable::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnableByMoveing
// 0x0002 (0x0002 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing final
{
public:
	bool                                          bIsEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetCaptureEnable_Internal_bWantVisible;   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing) == 0x000002, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing, bIsEnable) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing::bIsEnable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing, CallFunc_SetCaptureEnable_Internal_bWantVisible) == 0x000001, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing::CallFunc_SetCaptureEnable_Internal_bWantVisible' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnable_Internal
// 0x000D (0x000D - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal final
{
public:
	bool                                          bIsEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bWantVisible;                                      // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal) == 0x00000D, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, bIsEnable) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::bIsEnable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, bWantVisible) == 0x000001, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::bWantVisible' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_BooleanAND_ReturnValue_1) == 0x000004, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_Not_PreBool_ReturnValue_1) == 0x000005, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_BooleanOR_ReturnValue) == 0x000006, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_Not_PreBool_ReturnValue_2) == 0x000007, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_BooleanAND_ReturnValue_2) == 0x000009, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_BooleanAND_ReturnValue_3) == 0x00000A, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_BooleanAND_ReturnValue_4) == 0x00000B, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x00000C, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdatePlayerAvatarWeapon
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A51[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetSceneCapture2DCameraForBattleSet
// 0x0120 (0x0120 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet final
{
public:
	bool                                          InIsBattleSet;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A52[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A53[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A54[0xC];                                     // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x008C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet) == 0x000010, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet) == 0x000120, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, InIsBattleSet) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::InIsBattleSet' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, Temp_float_Variable) == 0x000004, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, Temp_float_Variable_1) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, Temp_bool_Variable) == 0x00000C, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, K2Node_Select_Default) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, CallFunc_GetRelativeTransform_ReturnValue) == 0x000020, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, CallFunc_BreakTransform_Location) == 0x000050, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, CallFunc_BreakTransform_Rotation) == 0x00005C, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, CallFunc_BreakTransform_Scale) == 0x000068, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, CallFunc_BreakVector_X) == 0x000074, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, CallFunc_BreakVector_Y) == 0x000078, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, CallFunc_BreakVector_Z) == 0x00007C, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, CallFunc_MakeVector_ReturnValue) == 0x000080, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x00008C, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.JumpMaschineState
// 0x0038 (0x0038 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState final
{
public:
	class FString                                 MachinName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 StateName;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A55[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState) == 0x000038, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState, MachinName) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState::MachinName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState, StateName) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState::StateName' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000028, "Member 'BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetFacialType
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetFacialType final
{
public:
	ESBFacialType                                 InFacialType;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A56[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetFacialType) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetFacialType");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetFacialType) == 0x000018, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetFacialType");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetFacialType, InFacialType) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetFacialType::InFacialType' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetFacialType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetFacialType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetFacialType, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetFacialType::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetFacialType, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetFacialType::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DoOnEnableCapture
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture final
{
public:
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture) == 0x000008, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture) == 0x000010, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture, CallFunc_GetEventExecutor_ReturnValue) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture, CallFunc_IsVisible_ReturnValue) == 0x000008, "Member 'BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture, CallFunc_IsVisible_ReturnValue_1) == 0x000009, "Member 'BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture, CallFunc_BooleanOR_ReturnValue) == 0x00000A, "Member 'BP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetFaceCaptureVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerSceneCapture2D_Studio_C_SetFaceCaptureVisibility final
{
public:
	bool                                          bNewVisibility;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerSceneCapture2D_Studio_C_SetFaceCaptureVisibility) == 0x000001, "Wrong alignment on BP_PlayerSceneCapture2D_Studio_C_SetFaceCaptureVisibility");
static_assert(sizeof(BP_PlayerSceneCapture2D_Studio_C_SetFaceCaptureVisibility) == 0x000001, "Wrong size on BP_PlayerSceneCapture2D_Studio_C_SetFaceCaptureVisibility");
static_assert(offsetof(BP_PlayerSceneCapture2D_Studio_C_SetFaceCaptureVisibility, bNewVisibility) == 0x000000, "Member 'BP_PlayerSceneCapture2D_Studio_C_SetFaceCaptureVisibility::bNewVisibility' has a wrong offset!");

}

