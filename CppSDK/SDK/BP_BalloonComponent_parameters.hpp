#pragma once

 

// Package: BP_BalloonComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BalloonComponent.BP_BalloonComponent_C.ChangeBalloonVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_BalloonComponent_C_ChangeBalloonVisible__DelegateSignature final
{
public:
	bool                                          bVsiible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BalloonComponent_C_ChangeBalloonVisible__DelegateSignature) == 0x000001, "Wrong alignment on BP_BalloonComponent_C_ChangeBalloonVisible__DelegateSignature");
static_assert(sizeof(BP_BalloonComponent_C_ChangeBalloonVisible__DelegateSignature) == 0x000001, "Wrong size on BP_BalloonComponent_C_ChangeBalloonVisible__DelegateSignature");
static_assert(offsetof(BP_BalloonComponent_C_ChangeBalloonVisible__DelegateSignature, bVsiible) == 0x000000, "Member 'BP_BalloonComponent_C_ChangeBalloonVisible__DelegateSignature::bVsiible' has a wrong offset!");

// Function BP_BalloonComponent.BP_BalloonComponent_C.ExecuteUbergraph_BP_BalloonComponent
// 0x0090 (0x0090 - 0x0000)
struct BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B49[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSilentBalloon_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B4A[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7B4B[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InText_1;                       // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_CustomEvent_InAttachCharacter_1;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InAttachTransformName;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_InAutoCloseTime;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B4C[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FString                                 K2Node_CustomEvent_InText;                         // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_CustomEvent_InAttachCharacter;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNpcBalloonWindow_C*                    CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent) == 0x000008, "Wrong alignment on BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent");
static_assert(sizeof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent) == 0x000090, "Wrong size on BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, EntryPoint) == 0x000000, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, CallFunc_GetConfigSaveManager_IsValid) == 0x000004, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, CallFunc_IsSilentBalloon_ReturnValue) == 0x000010, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::CallFunc_IsSilentBalloon_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, K2Node_CustomEvent_InText_1) == 0x000028, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::K2Node_CustomEvent_InText_1' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, K2Node_CustomEvent_InAttachCharacter_1) == 0x000038, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::K2Node_CustomEvent_InAttachCharacter_1' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, K2Node_CustomEvent_InAttachTransformName) == 0x000040, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::K2Node_CustomEvent_InAttachTransformName' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, K2Node_CustomEvent_InAutoCloseTime) == 0x000048, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::K2Node_CustomEvent_InAutoCloseTime' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, CallFunc_IsValid_ReturnValue) == 0x00004C, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, K2Node_CustomEvent_InText) == 0x000068, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, K2Node_CustomEvent_InAttachCharacter) == 0x000078, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::K2Node_CustomEvent_InAttachCharacter' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, CallFunc_Create_ReturnValue) == 0x000080, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_BalloonComponent.BP_BalloonComponent_C.Show
// 0x0018 (0x0018 - 0x0000)
struct BP_BalloonComponent_C_Show final
{
public:
	class FString                                 InText;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ACharacter*                             InAttachCharacter;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BalloonComponent_C_Show) == 0x000008, "Wrong alignment on BP_BalloonComponent_C_Show");
static_assert(sizeof(BP_BalloonComponent_C_Show) == 0x000018, "Wrong size on BP_BalloonComponent_C_Show");
static_assert(offsetof(BP_BalloonComponent_C_Show, InText) == 0x000000, "Member 'BP_BalloonComponent_C_Show::InText' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_Show, InAttachCharacter) == 0x000010, "Member 'BP_BalloonComponent_C_Show::InAttachCharacter' has a wrong offset!");

// Function BP_BalloonComponent.BP_BalloonComponent_C.Show_Extend
// 0x0028 (0x0028 - 0x0000)
struct BP_BalloonComponent_C_Show_Extend final
{
public:
	class FString                                 InText;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ACharacter*                             InAttachCharacter;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InAttachTransformName;                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InAutoCloseTime;                                   // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BalloonComponent_C_Show_Extend) == 0x000008, "Wrong alignment on BP_BalloonComponent_C_Show_Extend");
static_assert(sizeof(BP_BalloonComponent_C_Show_Extend) == 0x000028, "Wrong size on BP_BalloonComponent_C_Show_Extend");
static_assert(offsetof(BP_BalloonComponent_C_Show_Extend, InText) == 0x000000, "Member 'BP_BalloonComponent_C_Show_Extend::InText' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_Show_Extend, InAttachCharacter) == 0x000010, "Member 'BP_BalloonComponent_C_Show_Extend::InAttachCharacter' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_Show_Extend, InAttachTransformName) == 0x000018, "Member 'BP_BalloonComponent_C_Show_Extend::InAttachTransformName' has a wrong offset!");
static_assert(offsetof(BP_BalloonComponent_C_Show_Extend, InAutoCloseTime) == 0x000020, "Member 'BP_BalloonComponent_C_Show_Extend::InAutoCloseTime' has a wrong offset!");

}

