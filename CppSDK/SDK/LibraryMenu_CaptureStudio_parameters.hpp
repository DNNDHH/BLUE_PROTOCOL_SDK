#pragma once

 

// Package: LibraryMenu_CaptureStudio

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ExecuteUbergraph_LibraryMenu_CaptureStudio
// 0x00B0 (0x00B0 - 0x0000)
struct LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EA8[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ALibraryMenu_Studio_C*                  K2Node_DynamicCast_AsLibrary_Menu_Studio;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EA9[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EnemyCharacterId;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBLibraryEnemyViewSetting                    K2Node_CustomEvent_ViewSetting;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryEnemyWeaponSetting                  K2Node_CustomEvent_WeaponSetting;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EAA[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ALibraryMenu_Studio_C*                  K2Node_DynamicCast_AsLibrary_Menu_Studio_1;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EAB[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALibraryMenu_Studio_C*                  K2Node_DynamicCast_AsLibrary_Menu_Studio_2;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EAC[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EAD[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetModelActor_Actor;                      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EAE[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EAF[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_CustomEvent_EnemyActor;                     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio) == 0x000008, "Wrong alignment on LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio) == 0x0000B0, "Wrong size on LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, EntryPoint) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_CustomEvent_Result) == 0x000014, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_DynamicCast_AsLibrary_Menu_Studio) == 0x000018, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_DynamicCast_AsLibrary_Menu_Studio' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_CustomEvent_EnemyCharacterId) == 0x000028, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_CustomEvent_EnemyCharacterId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_CustomEvent_ViewSetting) == 0x000038, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_CustomEvent_ViewSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_CustomEvent_WeaponSetting) == 0x000039, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_CustomEvent_WeaponSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_DynamicCast_AsLibrary_Menu_Studio_1) == 0x000040, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_DynamicCast_AsLibrary_Menu_Studio_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_DynamicCast_AsLibrary_Menu_Studio_2) == 0x000050, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_DynamicCast_AsLibrary_Menu_Studio_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_BreakRotator_Roll) == 0x00005C, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_BreakRotator_Pitch) == 0x000060, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_BreakRotator_Yaw) == 0x000064, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_BreakRotator_Roll_1) == 0x000068, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_BreakRotator_Pitch_1) == 0x00006C, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_BreakRotator_Yaw_1) == 0x000070, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_GetModelActor_Actor) == 0x000078, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_GetModelActor_Actor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_Add_FloatFloat_ReturnValue) == 0x000080, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_IsValid_ReturnValue) == 0x000084, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_MakeRotator_ReturnValue) == 0x000088, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000094, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_CustomEvent_EnemyActor) == 0x000098, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_CustomEvent_EnemyActor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A0, "Member 'LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnSetWeaponEvent
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_CaptureStudio_C_OnSetWeaponEvent final
{
public:
	class ASBEnemyCharacter*                      EnemyActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_OnSetWeaponEvent) == 0x000008, "Wrong alignment on LibraryMenu_CaptureStudio_C_OnSetWeaponEvent");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_OnSetWeaponEvent) == 0x000008, "Wrong size on LibraryMenu_CaptureStudio_C_OnSetWeaponEvent");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_OnSetWeaponEvent, EnemyActor) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_OnSetWeaponEvent::EnemyActor' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.LoadModelAsset
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_CaptureStudio_C_LoadModelAsset final
{
public:
	class FString                                 EnemyCharacterId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBLibraryEnemyViewSetting                    ViewSetting;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryEnemyWeaponSetting                  WeaponSetting;                                     // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_LoadModelAsset) == 0x000008, "Wrong alignment on LibraryMenu_CaptureStudio_C_LoadModelAsset");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_LoadModelAsset) == 0x000018, "Wrong size on LibraryMenu_CaptureStudio_C_LoadModelAsset");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_LoadModelAsset, EnemyCharacterId) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_LoadModelAsset::EnemyCharacterId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_LoadModelAsset, ViewSetting) == 0x000010, "Member 'LibraryMenu_CaptureStudio_C_LoadModelAsset::ViewSetting' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_LoadModelAsset, WeaponSetting) == 0x000011, "Member 'LibraryMenu_CaptureStudio_C_LoadModelAsset::WeaponSetting' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnSetModelDataEvent
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_CaptureStudio_C_OnSetModelDataEvent final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_OnSetModelDataEvent) == 0x000001, "Wrong alignment on LibraryMenu_CaptureStudio_C_OnSetModelDataEvent");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_OnSetModelDataEvent) == 0x000001, "Wrong size on LibraryMenu_CaptureStudio_C_OnSetModelDataEvent");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_OnSetModelDataEvent, Result) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_OnSetModelDataEvent::Result' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.RegistShowActorModel
// 0x00A8 (0x00A8 - 0x0000)
struct LibraryMenu_CaptureStudio_C_RegistShowActorModel final
{
public:
	class UBP_EF_Avaritelia_C*                    AvariteliaComp;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB0[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBWeapon*                              CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBWeapon*                              CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB1[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ALibraryMenu_Studio_C*                  K2Node_DynamicCast_AsLibrary_Menu_Studio;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB2[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetModelActor_Actor;                      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB3[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBParticleSystemComponent*>     CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class ASBWeapon*>                      CallFunc_GetWeaponsByEquipType_ReturnValue;        // 0x0080(0x0010)(ReferenceParm)
	TArray<class ASBWeapon*>                      CallFunc_GetWeaponsByEquipType_ReturnValue_1;      // 0x0090(0x0010)(ReferenceParm)
	class UBP_EF_Avaritelia_C*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_RegistShowActorModel) == 0x000008, "Wrong alignment on LibraryMenu_CaptureStudio_C_RegistShowActorModel");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_RegistShowActorModel) == 0x0000A8, "Wrong size on LibraryMenu_CaptureStudio_C_RegistShowActorModel");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, AvariteliaComp) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::AvariteliaComp' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, LoopEnd) == 0x000008, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, Temp_int_Loop_Counter_Variable_1) == 0x00001C, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_Array_Get_Item) == 0x000028, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_Array_Length_ReturnValue_1) == 0x00003C, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_Less_IntInt_ReturnValue_1) == 0x000041, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, K2Node_DynamicCast_AsLibrary_Menu_Studio) == 0x000048, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::K2Node_DynamicCast_AsLibrary_Menu_Studio' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_GetModelActor_Actor) == 0x000058, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_GetModelActor_Actor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, K2Node_DynamicCast_AsSBCharacter) == 0x000060, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000070, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_GetWeaponsByEquipType_ReturnValue) == 0x000080, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_GetWeaponsByEquipType_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_GetWeaponsByEquipType_ReturnValue_1) == 0x000090, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_GetWeaponsByEquipType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_RegistShowActorModel, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_CaptureStudio_C_RegistShowActorModel::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.WeaponSetup
// 0x0078 (0x0078 - 0x0000)
struct LibraryMenu_CaptureStudio_C_WeaponSetup final
{
public:
	class ASBEnemyCharacter*                      EnemyCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASBWeapon*>                      List;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ASBWeapon*>                      CallFunc_GetWeaponsByEquipType_ReturnValue;        // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB5[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASBWeapon*>                      CallFunc_GetWeaponsByEquipType_ReturnValue_1;      // 0x0038(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB6[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBWeapon*                              CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB7[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBWeapon*                              CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_WeaponSetup) == 0x000008, "Wrong alignment on LibraryMenu_CaptureStudio_C_WeaponSetup");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_WeaponSetup) == 0x000078, "Wrong size on LibraryMenu_CaptureStudio_C_WeaponSetup");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, EnemyCharacter) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::EnemyCharacter' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, LoopEnd) == 0x000008, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, List) == 0x000010, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::List' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, CallFunc_GetWeaponsByEquipType_ReturnValue) == 0x000020, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::CallFunc_GetWeaponsByEquipType_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, CallFunc_Array_LastIndex_ReturnValue) == 0x000030, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, CallFunc_GetWeaponsByEquipType_ReturnValue_1) == 0x000038, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::CallFunc_GetWeaponsByEquipType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, Temp_int_Variable) == 0x000048, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, Temp_int_Variable_1) == 0x000050, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000054, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, CallFunc_Array_Get_Item) == 0x000058, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000060, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, CallFunc_Add_IntInt_ReturnValue_1) == 0x000064, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_WeaponSetup, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000070, "Member 'LibraryMenu_CaptureStudio_C_WeaponSetup::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.GetCaptureModel
// 0x0038 (0x0038 - 0x0000)
struct LibraryMenu_CaptureStudio_C_GetCaptureModel final
{
public:
	class ASBEnemyCharacter*                      EnemyCharacter;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALibraryMenu_Studio_C*                  K2Node_DynamicCast_AsLibrary_Menu_Studio;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB8[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetModelActor_Actor;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB9[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_DynamicCast_AsSBEnemy_Character;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_GetCaptureModel) == 0x000008, "Wrong alignment on LibraryMenu_CaptureStudio_C_GetCaptureModel");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_GetCaptureModel) == 0x000038, "Wrong size on LibraryMenu_CaptureStudio_C_GetCaptureModel");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_GetCaptureModel, EnemyCharacter) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_GetCaptureModel::EnemyCharacter' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_GetCaptureModel, K2Node_DynamicCast_AsLibrary_Menu_Studio) == 0x000008, "Member 'LibraryMenu_CaptureStudio_C_GetCaptureModel::K2Node_DynamicCast_AsLibrary_Menu_Studio' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_GetCaptureModel, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'LibraryMenu_CaptureStudio_C_GetCaptureModel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_GetCaptureModel, CallFunc_GetModelActor_Actor) == 0x000018, "Member 'LibraryMenu_CaptureStudio_C_GetCaptureModel::CallFunc_GetModelActor_Actor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_GetCaptureModel, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'LibraryMenu_CaptureStudio_C_GetCaptureModel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_GetCaptureModel, K2Node_DynamicCast_AsSBEnemy_Character) == 0x000028, "Member 'LibraryMenu_CaptureStudio_C_GetCaptureModel::K2Node_DynamicCast_AsSBEnemy_Character' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_GetCaptureModel, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'LibraryMenu_CaptureStudio_C_GetCaptureModel::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.SetupCameraPosition
// 0x0108 (0x0108 - 0x0000)
struct LibraryMenu_CaptureStudio_C_SetupCameraPosition final
{
public:
	float                                         CalcSizeV;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseCameraDistanse;                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseSizeH;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SizeH;                                             // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseSize;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scale;                                             // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x002C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_4EBA[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALibraryMenu_Studio_C*                  K2Node_DynamicCast_AsLibrary_Menu_Studio;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EBB[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetModelActor_Actor;                      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      K2Node_DynamicCast_AsSBEnemy_Character;            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EBC[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLibraryEnemySize_Size;                 // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetLibraryEnemySize_SideBottom;           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_SetupCameraPosition) == 0x000008, "Wrong alignment on LibraryMenu_CaptureStudio_C_SetupCameraPosition");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_SetupCameraPosition) == 0x000108, "Wrong size on LibraryMenu_CaptureStudio_C_SetupCameraPosition");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CalcSizeV) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CalcSizeV' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, BaseCameraDistanse) == 0x000004, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::BaseCameraDistanse' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, BaseSizeH) == 0x000008, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::BaseSizeH' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, SizeH) == 0x00000C, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::SizeH' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, BaseSize) == 0x000010, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::BaseSize' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, Scale) == 0x000014, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::Scale' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000018, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_MakeVector_ReturnValue) == 0x00001C, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_FClamp_ReturnValue) == 0x000028, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x00002C, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, K2Node_DynamicCast_AsLibrary_Menu_Studio) == 0x0000B8, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::K2Node_DynamicCast_AsLibrary_Menu_Studio' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_GetModelActor_Actor) == 0x0000C8, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_GetModelActor_Actor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, K2Node_DynamicCast_AsSBEnemy_Character) == 0x0000D0, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::K2Node_DynamicCast_AsSBEnemy_Character' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_GetLibraryEnemySize_Size) == 0x0000DC, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_GetLibraryEnemySize_Size' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_GetLibraryEnemySize_SideBottom) == 0x0000E8, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_GetLibraryEnemySize_SideBottom' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_BreakVector_X) == 0x0000F0, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_BreakVector_Y) == 0x0000F4, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_BreakVector_Z) == 0x0000F8, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_FMax_ReturnValue) == 0x0000FC, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetupCameraPosition, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000100, "Member 'LibraryMenu_CaptureStudio_C_SetupCameraPosition::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ModelDelete
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_CaptureStudio_C_ModelDelete final
{
public:
	class ALibraryMenu_Studio_C*                  K2Node_DynamicCast_AsLibrary_Menu_Studio;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_ModelDelete) == 0x000008, "Wrong alignment on LibraryMenu_CaptureStudio_C_ModelDelete");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_ModelDelete) == 0x000010, "Wrong size on LibraryMenu_CaptureStudio_C_ModelDelete");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ModelDelete, K2Node_DynamicCast_AsLibrary_Menu_Studio) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_ModelDelete::K2Node_DynamicCast_AsLibrary_Menu_Studio' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_ModelDelete, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'LibraryMenu_CaptureStudio_C_ModelDelete::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.SetCameraPosition
// 0x0270 (0x0270 - 0x0000)
struct LibraryMenu_CaptureStudio_C_SetCameraPosition final
{
public:
	float                                         Scale;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rotate;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraHeight;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SideOffset;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EBD[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EBE[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0040(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x00D4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;     // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EBF[0x1];                                     // 0x0163(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X_2;                          // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x017C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EC0[0xB];                                     // 0x0205(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0210(0x0030)(IsPlainOldData, NoDestructor)
	class ALibraryMenu_Studio_C*                  K2Node_DynamicCast_AsLibrary_Menu_Studio;          // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EC1[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetModelActor_Actor;                      // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      K2Node_DynamicCast_AsSBEnemy_Character;            // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_SetCameraPosition) == 0x000010, "Wrong alignment on LibraryMenu_CaptureStudio_C_SetCameraPosition");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_SetCameraPosition) == 0x000270, "Wrong size on LibraryMenu_CaptureStudio_C_SetCameraPosition");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, Scale) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::Scale' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, Rotate) == 0x000004, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::Rotate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CameraHeight) == 0x000008, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CameraHeight' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, SideOffset) == 0x00000C, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::SideOffset' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000010, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_BreakVector_X) == 0x000014, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_BreakVector_Y) == 0x000018, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_BreakVector_Z) == 0x00001C, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_MakeVector_ReturnValue) == 0x000028, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_BreakVector_X_1) == 0x000034, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_BreakVector_Y_1) == 0x000038, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_BreakVector_Z_1) == 0x00003C, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000040, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_MakeVector_ReturnValue_1) == 0x0000C8, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x0000D4, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00015C, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000160, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_NearlyEqual_FloatFloat_ReturnValue_1) == 0x000161, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_NearlyEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_Not_PreBool_ReturnValue_1) == 0x000162, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_BreakVector_X_2) == 0x000164, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_BreakVector_Y_2) == 0x000168, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_BreakVector_Z_2) == 0x00016C, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_MakeVector_ReturnValue_2) == 0x000170, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_K2_SetRelativeLocation_SweepHitResult_2) == 0x00017C, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_K2_SetRelativeLocation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000204, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_GetRelativeTransform_ReturnValue) == 0x000210, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, K2Node_DynamicCast_AsLibrary_Menu_Studio) == 0x000240, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::K2Node_DynamicCast_AsLibrary_Menu_Studio' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, K2Node_DynamicCast_bSuccess) == 0x000248, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, CallFunc_GetModelActor_Actor) == 0x000250, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::CallFunc_GetModelActor_Actor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, K2Node_DynamicCast_AsSBEnemy_Character) == 0x000258, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::K2Node_DynamicCast_AsSBEnemy_Character' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_SetCameraPosition, K2Node_DynamicCast_bSuccess_1) == 0x000260, "Member 'LibraryMenu_CaptureStudio_C_SetCameraPosition::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.AvariteliaEffectCheck
// 0x0060 (0x0060 - 0x0000)
struct LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck final
{
public:
	class UParticleSystemComponent*               Target;                                            // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EC2[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystemComponent*>       WorkComp;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EC3[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EC4[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EC5[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck) == 0x000008, "Wrong alignment on LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck) == 0x000060, "Wrong size on LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, Target) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::Target' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, LoopEnd) == 0x000008, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, WorkComp) == 0x000010, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::WorkComp' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, Temp_int_Variable) == 0x000020, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_Array_LastIndex_ReturnValue) == 0x000028, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002C, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, Temp_int_Variable_1) == 0x000030, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_Array_Get_Item) == 0x000038, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_Array_Find_ReturnValue) == 0x000048, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_Array_Find_ReturnValue_1) == 0x00004C, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_Less_IntInt_ReturnValue_1) == 0x000051, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000052, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_Add_IntInt_ReturnValue_1) == 0x000054, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000058, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck, CallFunc_IsValid_ReturnValue) == 0x00005C, "Member 'LibraryMenu_CaptureStudio_C_AvariteliaEffectCheck::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.NormalEffectCheck
// 0x0058 (0x0058 - 0x0000)
struct LibraryMenu_CaptureStudio_C_NormalEffectCheck final
{
public:
	class USBParticleSystemComponent*             Component;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EC6[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EC7[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBParticleSystemComponent*             CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EC8[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EC9[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBParticleSystemComponent*             CallFunc_Array_Get_Item_1;                         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ECA[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ECB[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_CaptureStudio_C_NormalEffectCheck) == 0x000008, "Wrong alignment on LibraryMenu_CaptureStudio_C_NormalEffectCheck");
static_assert(sizeof(LibraryMenu_CaptureStudio_C_NormalEffectCheck) == 0x000058, "Wrong size on LibraryMenu_CaptureStudio_C_NormalEffectCheck");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, Component) == 0x000000, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::Component' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, LoopEnd) == 0x000008, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, Temp_int_Variable) == 0x000010, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, Temp_int_Variable_1) == 0x000018, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_Array_Get_Item) == 0x000020, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_Array_LastIndex_ReturnValue) == 0x000028, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002C, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_Array_Get_Item_1) == 0x000038, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_Array_Find_ReturnValue) == 0x000040, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000045, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_Array_Find_ReturnValue_1) == 0x000048, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_Less_IntInt_ReturnValue_1) == 0x00004C, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_CaptureStudio_C_NormalEffectCheck, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000050, "Member 'LibraryMenu_CaptureStudio_C_NormalEffectCheck::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");

}

