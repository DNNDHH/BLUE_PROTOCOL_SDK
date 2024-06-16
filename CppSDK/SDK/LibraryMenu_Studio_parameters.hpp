#pragma once

 

// Package: LibraryMenu_Studio

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnSetModelData__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Studio_C_OnSetModelData__DelegateSignature final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Studio_C_OnSetModelData__DelegateSignature) == 0x000001, "Wrong alignment on LibraryMenu_Studio_C_OnSetModelData__DelegateSignature");
static_assert(sizeof(LibraryMenu_Studio_C_OnSetModelData__DelegateSignature) == 0x000001, "Wrong size on LibraryMenu_Studio_C_OnSetModelData__DelegateSignature");
static_assert(offsetof(LibraryMenu_Studio_C_OnSetModelData__DelegateSignature, Result) == 0x000000, "Member 'LibraryMenu_Studio_C_OnSetModelData__DelegateSignature::Result' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnWeaponSetup__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Studio_C_OnWeaponSetup__DelegateSignature final
{
public:
	class ASBEnemyCharacter*                      EnemyActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Studio_C_OnWeaponSetup__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Studio_C_OnWeaponSetup__DelegateSignature");
static_assert(sizeof(LibraryMenu_Studio_C_OnWeaponSetup__DelegateSignature) == 0x000008, "Wrong size on LibraryMenu_Studio_C_OnWeaponSetup__DelegateSignature");
static_assert(offsetof(LibraryMenu_Studio_C_OnWeaponSetup__DelegateSignature, EnemyActor) == 0x000000, "Member 'LibraryMenu_Studio_C_OnWeaponSetup__DelegateSignature::EnemyActor' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.ExecuteUbergraph_LibraryMenu_Studio
// 0x00A0 (0x00A0 - 0x0000)
struct LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D58[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInResult;                            // 0x000C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D59[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_id;                             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBLibraryEnemyViewSetting                    K2Node_CustomEvent_ViewSetting;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryEnemyWeaponSetting                  K2Node_CustomEvent_WeaponSetting;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D5A[0xE];                                     // 0x0022(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBLibraryEnemyLoadCheck*               CallFunc_FinishSpawningActor_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LibraryEnemyModelLoadRequest_Result;      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D5B[0x1];                                     // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7D5C[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_CustomEvent_EnemyCharacter;                 // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WeaponSetup_IsComplete;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoadedAllMipStreaming_ReturnValue;      // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio) == 0x000010, "Wrong alignment on LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio");
static_assert(sizeof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio) == 0x0000A0, "Wrong size on LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, EntryPoint) == 0x000000, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, K2Node_Event_bInResult) == 0x00000C, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::K2Node_Event_bInResult' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, K2Node_CustomEvent_id) == 0x000010, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::K2Node_CustomEvent_id' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, K2Node_CustomEvent_ViewSetting) == 0x000020, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::K2Node_CustomEvent_ViewSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, K2Node_CustomEvent_WeaponSetting) == 0x000021, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::K2Node_CustomEvent_WeaponSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_FinishSpawningActor_ReturnValue) == 0x000068, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_Conv_StringToName_ReturnValue) == 0x000070, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_LibraryEnemyModelLoadRequest_Result) == 0x000079, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_LibraryEnemyModelLoadRequest_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_IsValid_ReturnValue_2) == 0x00007A, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, K2Node_CustomEvent_EnemyCharacter) == 0x000090, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::K2Node_CustomEvent_EnemyCharacter' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_WeaponSetup_IsComplete) == 0x000098, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_WeaponSetup_IsComplete' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_IsValid_ReturnValue_3) == 0x000099, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_IsValid_ReturnValue_4) == 0x00009A, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_IsLoadedAllMipStreaming_ReturnValue) == 0x00009B, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_IsLoadedAllMipStreaming_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio, CallFunc_Not_PreBool_ReturnValue) == 0x00009C, "Member 'LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnWeaponEquip
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Studio_C_OnWeaponEquip final
{
public:
	class ASBEnemyCharacter*                      EnemyCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Studio_C_OnWeaponEquip) == 0x000008, "Wrong alignment on LibraryMenu_Studio_C_OnWeaponEquip");
static_assert(sizeof(LibraryMenu_Studio_C_OnWeaponEquip) == 0x000008, "Wrong size on LibraryMenu_Studio_C_OnWeaponEquip");
static_assert(offsetof(LibraryMenu_Studio_C_OnWeaponEquip, EnemyCharacter) == 0x000000, "Member 'LibraryMenu_Studio_C_OnWeaponEquip::EnemyCharacter' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.SetEnemyModelId
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Studio_C_SetEnemyModelId final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBLibraryEnemyViewSetting                    ViewSetting;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryEnemyWeaponSetting                  WeaponSetting;                                     // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Studio_C_SetEnemyModelId) == 0x000008, "Wrong alignment on LibraryMenu_Studio_C_SetEnemyModelId");
static_assert(sizeof(LibraryMenu_Studio_C_SetEnemyModelId) == 0x000018, "Wrong size on LibraryMenu_Studio_C_SetEnemyModelId");
static_assert(offsetof(LibraryMenu_Studio_C_SetEnemyModelId, ID) == 0x000000, "Member 'LibraryMenu_Studio_C_SetEnemyModelId::ID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_SetEnemyModelId, ViewSetting) == 0x000010, "Member 'LibraryMenu_Studio_C_SetEnemyModelId::ViewSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_SetEnemyModelId, WeaponSetting) == 0x000011, "Member 'LibraryMenu_Studio_C_SetEnemyModelId::WeaponSetting' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnAssetLoaded
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Studio_C_OnAssetLoaded final
{
public:
	bool                                          bInResult;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Studio_C_OnAssetLoaded) == 0x000001, "Wrong alignment on LibraryMenu_Studio_C_OnAssetLoaded");
static_assert(sizeof(LibraryMenu_Studio_C_OnAssetLoaded) == 0x000001, "Wrong size on LibraryMenu_Studio_C_OnAssetLoaded");
static_assert(offsetof(LibraryMenu_Studio_C_OnAssetLoaded, bInResult) == 0x000000, "Member 'LibraryMenu_Studio_C_OnAssetLoaded::bInResult' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Studio_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Studio_C_ReceiveTick) == 0x000004, "Wrong alignment on LibraryMenu_Studio_C_ReceiveTick");
static_assert(sizeof(LibraryMenu_Studio_C_ReceiveTick) == 0x000004, "Wrong size on LibraryMenu_Studio_C_ReceiveTick");
static_assert(offsetof(LibraryMenu_Studio_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'LibraryMenu_Studio_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.LoadEnemyAsset
// 0x0048 (0x0048 - 0x0000)
struct LibraryMenu_Studio_C_LoadEnemyAsset final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D5D[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D5E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        CallFunc_GetLibraryEnemyModelPath_OutData;         // 0x0010(0x0018)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibraryEnemyModelPath_IsValid;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D5F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSoftObjectPath>                K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_RequestLoadAsset_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Studio_C_LoadEnemyAsset) == 0x000008, "Wrong alignment on LibraryMenu_Studio_C_LoadEnemyAsset");
static_assert(sizeof(LibraryMenu_Studio_C_LoadEnemyAsset) == 0x000048, "Wrong size on LibraryMenu_Studio_C_LoadEnemyAsset");
static_assert(offsetof(LibraryMenu_Studio_C_LoadEnemyAsset, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'LibraryMenu_Studio_C_LoadEnemyAsset::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_LoadEnemyAsset, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'LibraryMenu_Studio_C_LoadEnemyAsset::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_LoadEnemyAsset, CallFunc_Conv_StringToName_ReturnValue) == 0x000004, "Member 'LibraryMenu_Studio_C_LoadEnemyAsset::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_LoadEnemyAsset, CallFunc_GetLibraryEnemyModelPath_OutData) == 0x000010, "Member 'LibraryMenu_Studio_C_LoadEnemyAsset::CallFunc_GetLibraryEnemyModelPath_OutData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_LoadEnemyAsset, CallFunc_GetLibraryEnemyModelPath_IsValid) == 0x000028, "Member 'LibraryMenu_Studio_C_LoadEnemyAsset::CallFunc_GetLibraryEnemyModelPath_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_LoadEnemyAsset, K2Node_MakeArray_Array) == 0x000030, "Member 'LibraryMenu_Studio_C_LoadEnemyAsset::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_LoadEnemyAsset, CallFunc_RequestLoadAsset_ReturnValue) == 0x000040, "Member 'LibraryMenu_Studio_C_LoadEnemyAsset::CallFunc_RequestLoadAsset_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.ModelSetup
// 0x0150 (0x0150 - 0x0000)
struct LibraryMenu_Studio_C_ModelSetup final
{
public:
	class USBAnimationControlComponent*           Component;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CalcSize;                                          // 0x0008(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CheckSize;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkFloat;                                         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChangeScale;                                       // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseSize;                                          // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D60[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D61[0xC];                                     // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0040(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00B0(0x0030)(IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEnemyTypeData                       CallFunc_GetLibraryEnemyTypeData_OutData;          // 0x00E8(0x0030)()
	bool                                          CallFunc_GetLibraryEnemyTypeData_IsValid;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D62[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBEnemy_Character;       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D63[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Studio_C_ModelSetup) == 0x000010, "Wrong alignment on LibraryMenu_Studio_C_ModelSetup");
static_assert(sizeof(LibraryMenu_Studio_C_ModelSetup) == 0x000150, "Wrong size on LibraryMenu_Studio_C_ModelSetup");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, Component) == 0x000000, "Member 'LibraryMenu_Studio_C_ModelSetup::Component' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CalcSize) == 0x000008, "Member 'LibraryMenu_Studio_C_ModelSetup::CalcSize' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CheckSize) == 0x000014, "Member 'LibraryMenu_Studio_C_ModelSetup::CheckSize' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, WorkFloat) == 0x000018, "Member 'LibraryMenu_Studio_C_ModelSetup::WorkFloat' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, ChangeScale) == 0x00001C, "Member 'LibraryMenu_Studio_C_ModelSetup::ChangeScale' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, BaseSize) == 0x000020, "Member 'LibraryMenu_Studio_C_ModelSetup::BaseSize' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_IsValid_ReturnValue_1) == 0x000025, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000028, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_GetTransform_ReturnValue) == 0x000040, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_BreakTransform_Location) == 0x000070, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_BreakTransform_Rotation) == 0x00007C, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_BreakTransform_Scale) == 0x000088, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_BreakRotator_Roll) == 0x000094, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_BreakRotator_Pitch) == 0x000098, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_BreakRotator_Yaw) == 0x00009C, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_MakeRotator_ReturnValue) == 0x0000A4, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_MakeTransform_ReturnValue) == 0x0000B0, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_Conv_StringToName_ReturnValue) == 0x0000E0, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_GetLibraryEnemyTypeData_OutData) == 0x0000E8, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_GetLibraryEnemyTypeData_OutData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_GetLibraryEnemyTypeData_IsValid) == 0x000118, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_GetLibraryEnemyTypeData_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x000120, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, K2Node_ClassDynamicCast_AsSBEnemy_Character) == 0x000128, "Member 'LibraryMenu_Studio_C_ModelSetup::K2Node_ClassDynamicCast_AsSBEnemy_Character' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, K2Node_ClassDynamicCast_bSuccess) == 0x000130, "Member 'LibraryMenu_Studio_C_ModelSetup::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000138, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Studio_C_ModelSetup, CallFunc_FinishSpawningActor_ReturnValue) == 0x000140, "Member 'LibraryMenu_Studio_C_ModelSetup::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.GetModelActor
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Studio_C_GetModelActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Studio_C_GetModelActor) == 0x000008, "Wrong alignment on LibraryMenu_Studio_C_GetModelActor");
static_assert(sizeof(LibraryMenu_Studio_C_GetModelActor) == 0x000008, "Wrong size on LibraryMenu_Studio_C_GetModelActor");
static_assert(offsetof(LibraryMenu_Studio_C_GetModelActor, Actor) == 0x000000, "Member 'LibraryMenu_Studio_C_GetModelActor::Actor' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.WeaponSetup
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Studio_C_WeaponSetup final
{
public:
	bool                                          IsComplete;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Studio_C_WeaponSetup) == 0x000001, "Wrong alignment on LibraryMenu_Studio_C_WeaponSetup");
static_assert(sizeof(LibraryMenu_Studio_C_WeaponSetup) == 0x000001, "Wrong size on LibraryMenu_Studio_C_WeaponSetup");
static_assert(offsetof(LibraryMenu_Studio_C_WeaponSetup, IsComplete) == 0x000000, "Member 'LibraryMenu_Studio_C_WeaponSetup::IsComplete' has a wrong offset!");

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.ModelDelete
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Studio_C_ModelDelete final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Studio_C_ModelDelete) == 0x000001, "Wrong alignment on LibraryMenu_Studio_C_ModelDelete");
static_assert(sizeof(LibraryMenu_Studio_C_ModelDelete) == 0x000001, "Wrong size on LibraryMenu_Studio_C_ModelDelete");
static_assert(offsetof(LibraryMenu_Studio_C_ModelDelete, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'LibraryMenu_Studio_C_ModelDelete::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

