#pragma once

 

// Package: Configure_Sound

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Configure_Sound.Configure_Sound_C.ApplyMainSoundSaveData
// 0x001C (0x001C - 0x0000)
struct Configure_Sound_C_ApplyMainSoundSaveData final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenNum_ChildNum;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E1A[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Configure_Sound_C_ApplyMainSoundSaveData) == 0x000004, "Wrong alignment on Configure_Sound_C_ApplyMainSoundSaveData");
static_assert(sizeof(Configure_Sound_C_ApplyMainSoundSaveData) == 0x00001C, "Wrong size on Configure_Sound_C_ApplyMainSoundSaveData");
static_assert(offsetof(Configure_Sound_C_ApplyMainSoundSaveData, Temp_int_Variable) == 0x000000, "Member 'Configure_Sound_C_ApplyMainSoundSaveData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ApplyMainSoundSaveData, Temp_int_Variable_1) == 0x000004, "Member 'Configure_Sound_C_ApplyMainSoundSaveData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ApplyMainSoundSaveData, Temp_int_Variable_2) == 0x000008, "Member 'Configure_Sound_C_ApplyMainSoundSaveData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ApplyMainSoundSaveData, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Configure_Sound_C_ApplyMainSoundSaveData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ApplyMainSoundSaveData, CallFunc_GetChildrenNum_ChildNum) == 0x000010, "Member 'Configure_Sound_C_ApplyMainSoundSaveData::CallFunc_GetChildrenNum_ChildNum' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ApplyMainSoundSaveData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'Configure_Sound_C_ApplyMainSoundSaveData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ApplyMainSoundSaveData, K2Node_Select_Default) == 0x000015, "Member 'Configure_Sound_C_ApplyMainSoundSaveData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ApplyMainSoundSaveData, K2Node_Select_Default_1) == 0x000018, "Member 'Configure_Sound_C_ApplyMainSoundSaveData::K2Node_Select_Default_1' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.PlayVoice
// 0x00E0 (0x00E0 - 0x0000)
struct Configure_Sound_C_PlayVoice final
{
public:
	TArray<TSoftObjectPtr<class UAkAudioEvent>>   VoiceEventNameList;                                // 0x0000(0x0010)(Edit, BlueprintVisible)
	ESBClassType                                  ClassType;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VoiceId;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Gender;                                            // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        SceneComponent;                                    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UAkAudioEvent>>   K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E1D[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_LoopAdd_ReturnValue;                      // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UAkAudioEvent>           CallFunc_Array_Get_Item;                           // 0x0048(0x0028)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_DynamicCast_AsAk_Audio_Event;               // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E1F[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerVoiceVariables                K2Node_MakeStruct_SBPlayerVoiceVariables;          // 0x0088(0x0018)(NoDestructor)
	bool                                          CallFunc_GetSoundManager_IsValid;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E20[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSoundManager*                        CallFunc_GetSoundManager_ReturnValue;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayPlayerVoiceAtListener_ReturnValue;    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E21[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E22[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetVoiceId_ReturnValue;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Configure_Sound_C_PlayVoice) == 0x000008, "Wrong alignment on Configure_Sound_C_PlayVoice");
static_assert(sizeof(Configure_Sound_C_PlayVoice) == 0x0000E0, "Wrong size on Configure_Sound_C_PlayVoice");
static_assert(offsetof(Configure_Sound_C_PlayVoice, VoiceEventNameList) == 0x000000, "Member 'Configure_Sound_C_PlayVoice::VoiceEventNameList' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, ClassType) == 0x000010, "Member 'Configure_Sound_C_PlayVoice::ClassType' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, VoiceId) == 0x000014, "Member 'Configure_Sound_C_PlayVoice::VoiceId' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, Gender) == 0x000018, "Member 'Configure_Sound_C_PlayVoice::Gender' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, SceneComponent) == 0x000020, "Member 'Configure_Sound_C_PlayVoice::SceneComponent' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, K2Node_MakeArray_Array) == 0x000028, "Member 'Configure_Sound_C_PlayVoice::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'Configure_Sound_C_PlayVoice::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00003C, "Member 'Configure_Sound_C_PlayVoice::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_LoopAdd_ReturnValue) == 0x000040, "Member 'Configure_Sound_C_PlayVoice::CallFunc_LoopAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_Array_Get_Item) == 0x000048, "Member 'Configure_Sound_C_PlayVoice::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000070, "Member 'Configure_Sound_C_PlayVoice::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, K2Node_DynamicCast_AsAk_Audio_Event) == 0x000078, "Member 'Configure_Sound_C_PlayVoice::K2Node_DynamicCast_AsAk_Audio_Event' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'Configure_Sound_C_PlayVoice::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_IsValid_ReturnValue) == 0x000081, "Member 'Configure_Sound_C_PlayVoice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, K2Node_MakeStruct_SBPlayerVoiceVariables) == 0x000088, "Member 'Configure_Sound_C_PlayVoice::K2Node_MakeStruct_SBPlayerVoiceVariables' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_GetSoundManager_IsValid) == 0x0000A0, "Member 'Configure_Sound_C_PlayVoice::CallFunc_GetSoundManager_IsValid' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_GetSoundManager_ReturnValue) == 0x0000A8, "Member 'Configure_Sound_C_PlayVoice::CallFunc_GetSoundManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000B0, "Member 'Configure_Sound_C_PlayVoice::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_PlayPlayerVoiceAtListener_ReturnValue) == 0x0000B8, "Member 'Configure_Sound_C_PlayVoice::CallFunc_PlayPlayerVoiceAtListener_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0000C0, "Member 'Configure_Sound_C_PlayVoice::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'Configure_Sound_C_PlayVoice::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000D0, "Member 'Configure_Sound_C_PlayVoice::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_GetVoiceId_ReturnValue) == 0x0000D8, "Member 'Configure_Sound_C_PlayVoice::CallFunc_GetVoiceId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_PlayVoice, CallFunc_GetGender_ReturnValue) == 0x0000DC, "Member 'Configure_Sound_C_PlayVoice::CallFunc_GetGender_ReturnValue' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE
// 0x0008 (0x0008 - 0x0000)
struct Configure_Sound_C_OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Configure_Sound_C_OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE) == 0x000008, "Wrong alignment on Configure_Sound_C_OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE");
static_assert(sizeof(Configure_Sound_C_OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE) == 0x000008, "Wrong size on Configure_Sound_C_OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE");
static_assert(offsetof(Configure_Sound_C_OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE, Loaded) == 0x000000, "Member 'Configure_Sound_C_OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE::Loaded' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_Sound_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_Sound_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_Sound_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_Sound_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_Sound_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_Sound_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_Sound_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_Sound_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_Sound_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_Sound_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_Sound_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_Sound_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_Sound_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_Sound_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_Sound_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_Sound_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_Sound_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_Sound_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_Sound_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_Sound_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_Sound_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_Sound_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_Sound_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_Sound_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_Sound_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_Sound_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_Sound_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_Sound_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_Sound_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_Sound_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Configure_Sound_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_PreConstruct) == 0x000001, "Wrong alignment on Configure_Sound_C_PreConstruct");
static_assert(sizeof(Configure_Sound_C_PreConstruct) == 0x000001, "Wrong size on Configure_Sound_C_PreConstruct");
static_assert(offsetof(Configure_Sound_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Configure_Sound_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.OnChangeValue
// 0x000C (0x000C - 0x0000)
struct Configure_Sound_C_OnChangeValue final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Volume;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mute;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_OnChangeValue) == 0x000004, "Wrong alignment on Configure_Sound_C_OnChangeValue");
static_assert(sizeof(Configure_Sound_C_OnChangeValue) == 0x00000C, "Wrong size on Configure_Sound_C_OnChangeValue");
static_assert(offsetof(Configure_Sound_C_OnChangeValue, Param_Index) == 0x000000, "Member 'Configure_Sound_C_OnChangeValue::Param_Index' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_OnChangeValue, Volume) == 0x000004, "Member 'Configure_Sound_C_OnChangeValue::Volume' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_OnChangeValue, Mute) == 0x000008, "Member 'Configure_Sound_C_OnChangeValue::Mute' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.OnRequestPlaySound
// 0x0004 (0x0004 - 0x0000)
struct Configure_Sound_C_OnRequestPlaySound final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Configure_Sound_C_OnRequestPlaySound) == 0x000004, "Wrong alignment on Configure_Sound_C_OnRequestPlaySound");
static_assert(sizeof(Configure_Sound_C_OnRequestPlaySound) == 0x000004, "Wrong size on Configure_Sound_C_OnRequestPlaySound");
static_assert(offsetof(Configure_Sound_C_OnRequestPlaySound, Param_Index) == 0x000000, "Member 'Configure_Sound_C_OnRequestPlaySound::Param_Index' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.OnPlaySound
// 0x0004 (0x0004 - 0x0000)
struct Configure_Sound_C_OnPlaySound final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Configure_Sound_C_OnPlaySound) == 0x000004, "Wrong alignment on Configure_Sound_C_OnPlaySound");
static_assert(sizeof(Configure_Sound_C_OnPlaySound) == 0x000004, "Wrong size on Configure_Sound_C_OnPlaySound");
static_assert(offsetof(Configure_Sound_C_OnPlaySound, Param_Index) == 0x000000, "Member 'Configure_Sound_C_OnPlaySound::Param_Index' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_Sound_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_Sound_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_Sound_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_Sound_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_Sound_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_Sound_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_Sound_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_Sound_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_Sound_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_Sound_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_Sound_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_Sound_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_Sound_C_BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_Sound_C_BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_Sound_C_BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_Sound_C_BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_Sound_C_BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_Sound_C_BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.LoadVoiceAsset
// 0x0028 (0x0028 - 0x0000)
struct Configure_Sound_C_LoadVoiceAsset final
{
public:
	TSoftObjectPtr<class UAkAudioEvent>           AudioEvent;                                        // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Configure_Sound_C_LoadVoiceAsset) == 0x000008, "Wrong alignment on Configure_Sound_C_LoadVoiceAsset");
static_assert(sizeof(Configure_Sound_C_LoadVoiceAsset) == 0x000028, "Wrong size on Configure_Sound_C_LoadVoiceAsset");
static_assert(offsetof(Configure_Sound_C_LoadVoiceAsset, AudioEvent) == 0x000000, "Member 'Configure_Sound_C_LoadVoiceAsset::AudioEvent' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.SetTitleMode
// 0x0001 (0x0001 - 0x0000)
struct Configure_Sound_C_SetTitleMode final
{
public:
	bool                                          bTitle;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_SetTitleMode) == 0x000001, "Wrong alignment on Configure_Sound_C_SetTitleMode");
static_assert(sizeof(Configure_Sound_C_SetTitleMode) == 0x000001, "Wrong size on Configure_Sound_C_SetTitleMode");
static_assert(offsetof(Configure_Sound_C_SetTitleMode, bTitle) == 0x000000, "Member 'Configure_Sound_C_SetTitleMode::bTitle' has a wrong offset!");

// Function Configure_Sound.Configure_Sound_C.ExecuteUbergraph_Configure_Sound
// 0x02B0 (0x02B0 - 0x0000)
struct Configure_Sound_C_ExecuteUbergraph_Configure_Sound final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_3;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_4;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_5;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E23[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E24[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_6;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_7;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E25[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_7;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_6;           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_5;           // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_4;           // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_3;           // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E26[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E27[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveSoundUserData_ReturnValue;            // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E28[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index_2;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Volume;                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Mute;                           // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E29[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadSoundConfigData_Result;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E2A[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Sound             CallFunc_LoadSoundConfigData_ReturnValue;          // 0x008C(0x0020)(NoDestructor)
	ESBSoundVolumeType                            K2Node_Select_Default;                             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSoundConfigData_bIsLoaded;             // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E2B[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Sound             CallFunc_GetSoundConfigData_ReturnValue;           // 0x00B0(0x0020)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsLoadedSoundConfigData_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E2C[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable_2;                            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E2D[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveSoundConfigData_ReturnValue;          // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E2E[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable_3;                            // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_4;                            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_5;                            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E2F[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Sound             K2Node_MakeStruct_SBConfigureSaveData_Sound;       // 0x011C(0x0020)(NoDestructor)
	uint8                                         Pad_4E30[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable_6;                            // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E31[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0150(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0178(0x0028)()
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_2;           // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBConfigureSaveData_ChatSound         K2Node_MakeStruct_SBConfigureSaveData_ChatSound;   // 0x01A4(0x0005)(NoDestructor)
	uint8                                         Pad_4E32[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_Select_Default_3;                           // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x01C8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index, int32 Volume, bool Mute)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01DC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4E33[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_2;                // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;            // 0x0200(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_3;                // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E34[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveSoundUserData_ReturnValue_1;          // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_4;           // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E35[0x6];                                     // 0x0232(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_4;       // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_5;           // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E36[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_5;       // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBConfigureSaveData_ChatSound         CallFunc_GetChatSoundData_ReturnValue;             // 0x0250(0x0005)(ConstParm, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveSoundUserData_ReturnValue_2;          // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadSoundUserData_ReturnValue;            // 0x0256(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedUserSoundConfig_ReturnValue;      // 0x0257(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_6;           // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E37[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_6;       // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPlayNonActiveWindowSound_ReturnValue;  // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMuteSoundGesture_ReturnValue;          // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMuteSoundCostume_ReturnValue;          // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x026B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x026D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_7;           // 0x026E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E38[0x1];                                     // 0x026F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_7;       // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E39[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UAkAudioEvent>           K2Node_CustomEvent_AudioEvent;                     // 0x0280(0x0028)(HasGetValueTypeHash)
	bool                                          K2Node_Event_bTitle;                               // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound) == 0x000008, "Wrong alignment on Configure_Sound_C_ExecuteUbergraph_Configure_Sound");
static_assert(sizeof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound) == 0x0002B0, "Wrong size on Configure_Sound_C_ExecuteUbergraph_Configure_Sound");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, EntryPoint) == 0x000000, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::EntryPoint' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_int_Variable) == 0x000004, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_byte_Variable) == 0x000008, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_byte_Variable_1) == 0x000009, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_byte_Variable_2) == 0x00000A, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_byte_Variable_3) == 0x00000B, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_byte_Variable_4) == 0x00000C, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_byte_Variable_5) == 0x00000D, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_object_Variable) == 0x000010, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_int_Variable_1) == 0x000018, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_int_Variable_2) == 0x00001C, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_Conv_IntToByte_ReturnValue) == 0x000020, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetValidValue_ReturnValue) == 0x000028, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000029, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_SwitchEnum_CmpSuccess) == 0x00002A, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002B, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_byte_Variable_6) == 0x000030, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_byte_Variable_7) == 0x000031, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_CustomEvent_Loaded) == 0x000038, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_object_Variable_1) == 0x000040, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_ComponentBoundEvent_bIsChecked_7) == 0x000048, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_ComponentBoundEvent_bIsChecked_7' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_ComponentBoundEvent_bIsChecked_6) == 0x000049, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_ComponentBoundEvent_bIsChecked_6' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_ComponentBoundEvent_bIsChecked_5) == 0x00004A, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_ComponentBoundEvent_bIsChecked_5' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_ComponentBoundEvent_bIsChecked_4) == 0x00004B, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_ComponentBoundEvent_bIsChecked_4' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_ComponentBoundEvent_bIsChecked_3) == 0x00004C, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_ComponentBoundEvent_bIsChecked_3' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetPlayerId_ReturnValue) == 0x000050, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_IsValid) == 0x000060, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000068, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_Event_IsDesignTime) == 0x000070, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_SaveSoundUserData_ReturnValue) == 0x000071, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_SaveSoundUserData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_CustomEvent_Index_2) == 0x000074, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_CustomEvent_Index_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_CustomEvent_Volume) == 0x000078, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_CustomEvent_Volume' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_CustomEvent_Mute) == 0x00007C, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_CustomEvent_Mute' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_IsValid_1) == 0x00007D, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000080, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_LoadSoundConfigData_Result) == 0x000088, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_LoadSoundConfigData_Result' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_LoadSoundConfigData_ReturnValue) == 0x00008C, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_LoadSoundConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_Select_Default) == 0x0000AC, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetSoundConfigData_bIsLoaded) == 0x0000AD, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetSoundConfigData_bIsLoaded' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetSoundConfigData_ReturnValue) == 0x0000B0, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetSoundConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_IsLoadedSoundConfigData_ReturnValue) == 0x0000D0, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_IsLoadedSoundConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_object_Variable_2) == 0x0000D8, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_IsValid_2) == 0x0000E0, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x0000E8, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_SaveSoundConfigData_ReturnValue) == 0x0000F0, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_SaveSoundConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_object_Variable_3) == 0x0000F8, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_object_Variable_4) == 0x000100, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_object_Variable_5) == 0x000108, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_CustomEvent_Index_1) == 0x000110, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_CustomEvent_Index) == 0x000114, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000118, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_MakeStruct_SBConfigureSaveData_Sound) == 0x00011C, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_MakeStruct_SBConfigureSaveData_Sound' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_object_Variable_6) == 0x000140, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_Select_Default_1) == 0x000148, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_Select_Default_2) == 0x00014C, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_MakeStruct_SlateColor) == 0x000150, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_MakeStruct_SlateColor_1) == 0x000178, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_ComponentBoundEvent_bIsChecked_2) == 0x0001A0, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_ComponentBoundEvent_bIsChecked_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x0001A1, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_Not_PreBool_ReturnValue) == 0x0001A2, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001A3, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_MakeStruct_SBConfigureSaveData_ChatSound) == 0x0001A4, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_MakeStruct_SBConfigureSaveData_ChatSound' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, Temp_int_Variable_3) == 0x0001AC, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetPlayerId_ReturnValue_1) == 0x0001B0, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_Select_Default_3) == 0x0001C0, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_CreateDelegate_OutputDelegate) == 0x0001C8, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_PlaySE_ReturnValue) == 0x0001D8, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001DC, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetPlayerId_ReturnValue_2) == 0x0001F0, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetPlayerId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_CreateDelegate_OutputDelegate_2) == 0x000200, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetPlayerId_ReturnValue_3) == 0x000210, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetPlayerId_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_IsValid_3) == 0x000220, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x000228, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_SaveSoundUserData_ReturnValue_1) == 0x000230, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_SaveSoundUserData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_IsValid_4) == 0x000231, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_ReturnValue_4) == 0x000238, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_IsValid_5) == 0x000240, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_IsValid_5' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_ReturnValue_5) == 0x000248, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetChatSoundData_ReturnValue) == 0x000250, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetChatSoundData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_SaveSoundUserData_ReturnValue_2) == 0x000255, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_SaveSoundUserData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_LoadSoundUserData_ReturnValue) == 0x000256, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_LoadSoundUserData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_IsLoadedUserSoundConfig_ReturnValue) == 0x000257, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_IsLoadedUserSoundConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_IsValid_6) == 0x000258, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_IsValid_6' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_ReturnValue_6) == 0x000260, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetPlayNonActiveWindowSound_ReturnValue) == 0x000268, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetPlayNonActiveWindowSound_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetMuteSoundGesture_ReturnValue) == 0x000269, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetMuteSoundGesture_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetMuteSoundCostume_ReturnValue) == 0x00026A, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetMuteSoundCostume_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_Not_PreBool_ReturnValue_2) == 0x00026B, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_Not_PreBool_ReturnValue_3) == 0x00026C, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_ComponentBoundEvent_bIsChecked) == 0x00026D, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_IsValid_7) == 0x00026E, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_IsValid_7' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_GetConfigSaveManager_ReturnValue_7) == 0x000270, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_GetConfigSaveManager_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_MakeLiteralInt_ReturnValue) == 0x000278, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, CallFunc_Less_IntInt_ReturnValue) == 0x00027C, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_CustomEvent_AudioEvent) == 0x000280, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_CustomEvent_AudioEvent' has a wrong offset!");
static_assert(offsetof(Configure_Sound_C_ExecuteUbergraph_Configure_Sound, K2Node_Event_bTitle) == 0x0002A8, "Member 'Configure_Sound_C_ExecuteUbergraph_Configure_Sound::K2Node_Event_bTitle' has a wrong offset!");

}

