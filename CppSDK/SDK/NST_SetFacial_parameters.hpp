#pragma once

 

// Package: NST_SetFacial

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function NST_SetFacial.NST_SetFacial_C.Received_NotifyBegin
// 0x0078 (0x0078 - 0x0000)
struct NST_SetFacial_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AF0[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaPartsFaceComponent*             Face;                                              // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AF1[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNpcCharacterAnimInstance*            K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AF2[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SetTemporaryInt32_ReturnValue;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AF3[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaPartsFaceComponent*             CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AF4[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SetTemporaryInt32_ReturnValue_1;          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetTemporaryBool_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AF5[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NST_SetFacial_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on NST_SetFacial_C_Received_NotifyBegin");
static_assert(sizeof(NST_SetFacial_C_Received_NotifyBegin) == 0x000078, "Wrong size on NST_SetFacial_C_Received_NotifyBegin");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'NST_SetFacial_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'NST_SetFacial_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'NST_SetFacial_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, ReturnValue) == 0x000014, "Member 'NST_SetFacial_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, Face) == 0x000018, "Member 'NST_SetFacial_C_Received_NotifyBegin::Face' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_GetAnimInstance_ReturnValue) == 0x000020, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000028, "Member 'NST_SetFacial_C_Received_NotifyBegin::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'NST_SetFacial_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance) == 0x000038, "Member 'NST_SetFacial_C_Received_NotifyBegin::K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'NST_SetFacial_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_SetTemporaryInt32_ReturnValue) == 0x000050, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_SetTemporaryInt32_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000060, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue_2) == 0x00006A, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_SetTemporaryInt32_ReturnValue_1) == 0x00006C, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_SetTemporaryInt32_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_SetTemporaryBool_ReturnValue) == 0x000070, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_SetTemporaryBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyBegin, CallFunc_SetTemporaryFloat_ReturnValue) == 0x000074, "Member 'NST_SetFacial_C_Received_NotifyBegin::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");

// Function NST_SetFacial.NST_SetFacial_C.Received_NotifyTick
// 0x0090 (0x0090 - 0x0000)
struct NST_SetFacial_C_Received_NotifyTick final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AF6[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaPartsFaceComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AF7[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTemporaryInt32_ReturnValue;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTemporaryInt32_ReturnValue_1;          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SetTemporaryInt32_ReturnValue;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTemporaryInt32_ReturnValue_2;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTemporaryFloat_ReturnValue;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBFacialType>                         CallFunc_Map_Keys_Keys;                            // 0x0058(0x0010)(ReferenceParm)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AF8[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 CallFunc_Map_Values_Values;                        // 0x0070(0x0010)(ReferenceParm)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AF9[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Length_ReturnValue_1;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NST_SetFacial_C_Received_NotifyTick) == 0x000008, "Wrong alignment on NST_SetFacial_C_Received_NotifyTick");
static_assert(sizeof(NST_SetFacial_C_Received_NotifyTick) == 0x000090, "Wrong size on NST_SetFacial_C_Received_NotifyTick");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, MeshComp) == 0x000000, "Member 'NST_SetFacial_C_Received_NotifyTick::MeshComp' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, Animation) == 0x000008, "Member 'NST_SetFacial_C_Received_NotifyTick::Animation' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, FrameDeltaTime) == 0x000010, "Member 'NST_SetFacial_C_Received_NotifyTick::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, ReturnValue) == 0x000014, "Member 'NST_SetFacial_C_Received_NotifyTick::ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_GetAnimInstance_ReturnValue) == 0x000020, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000030, "Member 'NST_SetFacial_C_Received_NotifyTick::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'NST_SetFacial_C_Received_NotifyTick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_GetTemporaryInt32_ReturnValue) == 0x00003C, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_GetTemporaryInt32_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_GetTemporaryInt32_ReturnValue_1) == 0x000044, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_GetTemporaryInt32_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_SetTemporaryInt32_ReturnValue) == 0x000048, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_SetTemporaryInt32_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_GetTemporaryInt32_ReturnValue_2) == 0x00004C, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_GetTemporaryInt32_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_GetTemporaryFloat_ReturnValue) == 0x000050, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_GetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_Add_FloatFloat_ReturnValue) == 0x000054, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_Map_Keys_Keys) == 0x000058, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_SetTemporaryFloat_ReturnValue) == 0x000068, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_Map_Values_Values) == 0x000070, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_Map_Length_ReturnValue) == 0x000080, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000084, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_Less_IntInt_ReturnValue) == 0x000085, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_Map_Length_ReturnValue_1) == 0x000088, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_Map_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyTick, CallFunc_Greater_IntInt_ReturnValue) == 0x00008C, "Member 'NST_SetFacial_C_Received_NotifyTick::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function NST_SetFacial.NST_SetFacial_C.Received_NotifyEnd
// 0x0058 (0x0058 - 0x0000)
struct NST_SetFacial_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AFA[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AFB[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTemporaryInt32_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTemporaryBool_ReturnValue;             // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AFC[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaPartsFaceComponent*             CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NST_SetFacial_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on NST_SetFacial_C_Received_NotifyEnd");
static_assert(sizeof(NST_SetFacial_C_Received_NotifyEnd) == 0x000058, "Wrong size on NST_SetFacial_C_Received_NotifyEnd");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'NST_SetFacial_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'NST_SetFacial_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, ReturnValue) == 0x000010, "Member 'NST_SetFacial_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, CallFunc_GetAnimInstance_ReturnValue) == 0x000018, "Member 'NST_SetFacial_C_Received_NotifyEnd::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'NST_SetFacial_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000028, "Member 'NST_SetFacial_C_Received_NotifyEnd::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'NST_SetFacial_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'NST_SetFacial_C_Received_NotifyEnd::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, CallFunc_GetTemporaryInt32_ReturnValue) == 0x000040, "Member 'NST_SetFacial_C_Received_NotifyEnd::CallFunc_GetTemporaryInt32_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'NST_SetFacial_C_Received_NotifyEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, CallFunc_GetTemporaryBool_ReturnValue) == 0x000045, "Member 'NST_SetFacial_C_Received_NotifyEnd::CallFunc_GetTemporaryBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000048, "Member 'NST_SetFacial_C_Received_NotifyEnd::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NST_SetFacial_C_Received_NotifyEnd, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'NST_SetFacial_C_Received_NotifyEnd::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function NST_SetFacial.NST_SetFacial_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct NST_SetFacial_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(NST_SetFacial_C_GetNotifyName) == 0x000008, "Wrong alignment on NST_SetFacial_C_GetNotifyName");
static_assert(sizeof(NST_SetFacial_C_GetNotifyName) == 0x000010, "Wrong size on NST_SetFacial_C_GetNotifyName");
static_assert(offsetof(NST_SetFacial_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'NST_SetFacial_C_GetNotifyName::ReturnValue' has a wrong offset!");

}

