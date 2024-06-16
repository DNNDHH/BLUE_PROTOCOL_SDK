#pragma once

 

// Package: Configure_SoundCS

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Configure_SoundCS.Configure_SoundCS_C.ApplyMainSoundSaveData
// 0x001C (0x001C - 0x0000)
struct Configure_SoundCS_C_ApplyMainSoundSaveData final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenNum_ChildNum;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A91[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Configure_SoundCS_C_ApplyMainSoundSaveData) == 0x000004, "Wrong alignment on Configure_SoundCS_C_ApplyMainSoundSaveData");
static_assert(sizeof(Configure_SoundCS_C_ApplyMainSoundSaveData) == 0x00001C, "Wrong size on Configure_SoundCS_C_ApplyMainSoundSaveData");
static_assert(offsetof(Configure_SoundCS_C_ApplyMainSoundSaveData, Temp_int_Variable) == 0x000000, "Member 'Configure_SoundCS_C_ApplyMainSoundSaveData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ApplyMainSoundSaveData, Temp_int_Variable_1) == 0x000004, "Member 'Configure_SoundCS_C_ApplyMainSoundSaveData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ApplyMainSoundSaveData, Temp_int_Variable_2) == 0x000008, "Member 'Configure_SoundCS_C_ApplyMainSoundSaveData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ApplyMainSoundSaveData, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Configure_SoundCS_C_ApplyMainSoundSaveData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ApplyMainSoundSaveData, CallFunc_GetChildrenNum_ChildNum) == 0x000010, "Member 'Configure_SoundCS_C_ApplyMainSoundSaveData::CallFunc_GetChildrenNum_ChildNum' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ApplyMainSoundSaveData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'Configure_SoundCS_C_ApplyMainSoundSaveData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ApplyMainSoundSaveData, K2Node_Select_Default) == 0x000015, "Member 'Configure_SoundCS_C_ApplyMainSoundSaveData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ApplyMainSoundSaveData, K2Node_Select_Default_1) == 0x000018, "Member 'Configure_SoundCS_C_ApplyMainSoundSaveData::K2Node_Select_Default_1' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.PlayVoice
// 0x00E0 (0x00E0 - 0x0000)
struct Configure_SoundCS_C_PlayVoice final
{
public:
	TArray<TSoftObjectPtr<class UAkAudioEvent>>   VoiceEventNameList;                                // 0x0000(0x0010)(Edit, BlueprintVisible)
	ESBClassType                                  ClassType;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A92[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VoiceId;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Gender;                                            // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A93[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        SceneComponent;                                    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UAkAudioEvent>>   K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A94[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_LoopAdd_ReturnValue;                      // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A95[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UAkAudioEvent>           CallFunc_Array_Get_Item;                           // 0x0048(0x0028)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_DynamicCast_AsAk_Audio_Event;               // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A96[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerVoiceVariables                K2Node_MakeStruct_SBPlayerVoiceVariables;          // 0x0088(0x0018)(NoDestructor)
	bool                                          CallFunc_GetSoundManager_IsValid;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A97[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSoundManager*                        CallFunc_GetSoundManager_ReturnValue;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayPlayerVoiceAtListener_ReturnValue;    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A98[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A99[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetVoiceId_ReturnValue;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Configure_SoundCS_C_PlayVoice) == 0x000008, "Wrong alignment on Configure_SoundCS_C_PlayVoice");
static_assert(sizeof(Configure_SoundCS_C_PlayVoice) == 0x0000E0, "Wrong size on Configure_SoundCS_C_PlayVoice");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, VoiceEventNameList) == 0x000000, "Member 'Configure_SoundCS_C_PlayVoice::VoiceEventNameList' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, ClassType) == 0x000010, "Member 'Configure_SoundCS_C_PlayVoice::ClassType' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, VoiceId) == 0x000014, "Member 'Configure_SoundCS_C_PlayVoice::VoiceId' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, Gender) == 0x000018, "Member 'Configure_SoundCS_C_PlayVoice::Gender' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, SceneComponent) == 0x000020, "Member 'Configure_SoundCS_C_PlayVoice::SceneComponent' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, K2Node_MakeArray_Array) == 0x000028, "Member 'Configure_SoundCS_C_PlayVoice::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00003C, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_LoopAdd_ReturnValue) == 0x000040, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_LoopAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_Array_Get_Item) == 0x000048, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000070, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, K2Node_DynamicCast_AsAk_Audio_Event) == 0x000078, "Member 'Configure_SoundCS_C_PlayVoice::K2Node_DynamicCast_AsAk_Audio_Event' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'Configure_SoundCS_C_PlayVoice::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_IsValid_ReturnValue) == 0x000081, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, K2Node_MakeStruct_SBPlayerVoiceVariables) == 0x000088, "Member 'Configure_SoundCS_C_PlayVoice::K2Node_MakeStruct_SBPlayerVoiceVariables' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_GetSoundManager_IsValid) == 0x0000A0, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_GetSoundManager_IsValid' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_GetSoundManager_ReturnValue) == 0x0000A8, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_GetSoundManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000B0, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_PlayPlayerVoiceAtListener_ReturnValue) == 0x0000B8, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_PlayPlayerVoiceAtListener_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0000C0, "Member 'Configure_SoundCS_C_PlayVoice::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'Configure_SoundCS_C_PlayVoice::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000D0, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_GetVoiceId_ReturnValue) == 0x0000D8, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_GetVoiceId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_PlayVoice, CallFunc_GetGender_ReturnValue) == 0x0000DC, "Member 'Configure_SoundCS_C_PlayVoice::CallFunc_GetGender_ReturnValue' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2
// 0x0008 (0x0008 - 0x0000)
struct Configure_SoundCS_C_OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Configure_SoundCS_C_OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2) == 0x000008, "Wrong alignment on Configure_SoundCS_C_OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2");
static_assert(sizeof(Configure_SoundCS_C_OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2) == 0x000008, "Wrong size on Configure_SoundCS_C_OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2");
static_assert(offsetof(Configure_SoundCS_C_OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2, Loaded) == 0x000000, "Member 'Configure_SoundCS_C_OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2::Loaded' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_SoundCS_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_SoundCS_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_SoundCS_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_SoundCS_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_SoundCS_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_SoundCS_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_SoundCS_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_SoundCS_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_SoundCS_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_SoundCS_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_SoundCS_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_SoundCS_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_SoundCS_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_SoundCS_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_SoundCS_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_SoundCS_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_SoundCS_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_SoundCS_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_SoundCS_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_SoundCS_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_SoundCS_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_SoundCS_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_SoundCS_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_SoundCS_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_SoundCS_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_SoundCS_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_SoundCS_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_SoundCS_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Configure_SoundCS_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_SoundCS_C_PreConstruct) == 0x000001, "Wrong alignment on Configure_SoundCS_C_PreConstruct");
static_assert(sizeof(Configure_SoundCS_C_PreConstruct) == 0x000001, "Wrong size on Configure_SoundCS_C_PreConstruct");
static_assert(offsetof(Configure_SoundCS_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Configure_SoundCS_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.OnChangeValue
// 0x000C (0x000C - 0x0000)
struct Configure_SoundCS_C_OnChangeValue final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Volume;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mute;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_SoundCS_C_OnChangeValue) == 0x000004, "Wrong alignment on Configure_SoundCS_C_OnChangeValue");
static_assert(sizeof(Configure_SoundCS_C_OnChangeValue) == 0x00000C, "Wrong size on Configure_SoundCS_C_OnChangeValue");
static_assert(offsetof(Configure_SoundCS_C_OnChangeValue, Param_Index) == 0x000000, "Member 'Configure_SoundCS_C_OnChangeValue::Param_Index' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_OnChangeValue, Volume) == 0x000004, "Member 'Configure_SoundCS_C_OnChangeValue::Volume' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_OnChangeValue, Mute) == 0x000008, "Member 'Configure_SoundCS_C_OnChangeValue::Mute' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.OnRequestPlaySound
// 0x0004 (0x0004 - 0x0000)
struct Configure_SoundCS_C_OnRequestPlaySound final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Configure_SoundCS_C_OnRequestPlaySound) == 0x000004, "Wrong alignment on Configure_SoundCS_C_OnRequestPlaySound");
static_assert(sizeof(Configure_SoundCS_C_OnRequestPlaySound) == 0x000004, "Wrong size on Configure_SoundCS_C_OnRequestPlaySound");
static_assert(offsetof(Configure_SoundCS_C_OnRequestPlaySound, Param_Index) == 0x000000, "Member 'Configure_SoundCS_C_OnRequestPlaySound::Param_Index' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.OnPlaySound
// 0x0004 (0x0004 - 0x0000)
struct Configure_SoundCS_C_OnPlaySound final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Configure_SoundCS_C_OnPlaySound) == 0x000004, "Wrong alignment on Configure_SoundCS_C_OnPlaySound");
static_assert(sizeof(Configure_SoundCS_C_OnPlaySound) == 0x000004, "Wrong size on Configure_SoundCS_C_OnPlaySound");
static_assert(offsetof(Configure_SoundCS_C_OnPlaySound, Param_Index) == 0x000000, "Member 'Configure_SoundCS_C_OnPlaySound::Param_Index' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_SoundCS_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_SoundCS_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_SoundCS_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_SoundCS_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_SoundCS_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_SoundCS_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_SoundCS_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_SoundCS_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_SoundCS_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_SoundCS_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_SoundCS_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_SoundCS_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_SoundCS_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_SoundCS_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Configure_SoundCS_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_SoundCS_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Configure_SoundCS_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Configure_SoundCS_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Configure_SoundCS_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Configure_SoundCS_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Configure_SoundCS_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.LoadVoiceAsset
// 0x0028 (0x0028 - 0x0000)
struct Configure_SoundCS_C_LoadVoiceAsset final
{
public:
	TSoftObjectPtr<class UAkAudioEvent>           AudioEvent;                                        // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Configure_SoundCS_C_LoadVoiceAsset) == 0x000008, "Wrong alignment on Configure_SoundCS_C_LoadVoiceAsset");
static_assert(sizeof(Configure_SoundCS_C_LoadVoiceAsset) == 0x000028, "Wrong size on Configure_SoundCS_C_LoadVoiceAsset");
static_assert(offsetof(Configure_SoundCS_C_LoadVoiceAsset, AudioEvent) == 0x000000, "Member 'Configure_SoundCS_C_LoadVoiceAsset::AudioEvent' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.SetTitleMode
// 0x0001 (0x0001 - 0x0000)
struct Configure_SoundCS_C_SetTitleMode final
{
public:
	bool                                          bTitle;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Configure_SoundCS_C_SetTitleMode) == 0x000001, "Wrong alignment on Configure_SoundCS_C_SetTitleMode");
static_assert(sizeof(Configure_SoundCS_C_SetTitleMode) == 0x000001, "Wrong size on Configure_SoundCS_C_SetTitleMode");
static_assert(offsetof(Configure_SoundCS_C_SetTitleMode, bTitle) == 0x000000, "Member 'Configure_SoundCS_C_SetTitleMode::bTitle' has a wrong offset!");

// Function Configure_SoundCS.Configure_SoundCS_C.ExecuteUbergraph_Configure_SoundCS
// 0x02A8 (0x02A8 - 0x0000)
struct Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bTitle;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A9A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_1;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_2;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_3;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_4;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_5;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A9B[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A9C[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_6;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSoundVolumeType                            Temp_byte_Variable_7;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A9D[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_6;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_5;           // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_4;           // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_3;           // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A9E[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A9F[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveSoundUserData_ReturnValue;            // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AA0[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index_2;                        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Volume;                         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Mute;                           // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AA1[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadSoundConfigData_Result;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AA2[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Sound             CallFunc_LoadSoundConfigData_ReturnValue;          // 0x0094(0x0020)(NoDestructor)
	ESBSoundVolumeType                            K2Node_Select_Default;                             // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSoundConfigData_bIsLoaded;             // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AA3[0x2];                                     // 0x00B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Sound             CallFunc_GetSoundConfigData_ReturnValue;           // 0x00B8(0x0020)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsLoadedSoundConfigData_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AA4[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable_2;                            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AA5[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveSoundConfigData_ReturnValue;          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AA6[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable_3;                            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_4;                            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_5;                            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AA7[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Sound             K2Node_MakeStruct_SBConfigureSaveData_Sound;       // 0x0124(0x0020)(NoDestructor)
	uint8                                         Pad_9AA8[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable_6;                            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AA9[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0158(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0180(0x0028)()
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_2;           // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBConfigureSaveData_ChatSound         K2Node_MakeStruct_SBConfigureSaveData_ChatSound;   // 0x01AC(0x0005)(NoDestructor)
	uint8                                         Pad_9AAA[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_Select_Default_3;                           // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x01D0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index, int32 Volume, bool Mute)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01E4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9AAB[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_2;                // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;            // 0x0208(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_3;                // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AAC[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveSoundUserData_ReturnValue_1;          // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_4;           // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AAD[0x6];                                     // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_4;       // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_5;           // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AAE[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_5;       // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBConfigureSaveData_ChatSound         CallFunc_GetChatSoundData_ReturnValue;             // 0x0258(0x0005)(ConstParm, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveSoundUserData_ReturnValue_2;          // 0x025D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadSoundUserData_ReturnValue;            // 0x025E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedUserSoundConfig_ReturnValue;      // 0x025F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_6;           // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AAF[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_6;       // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMuteSoundGesture_ReturnValue;          // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMuteSoundCostume_ReturnValue;          // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0272(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0273(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AB0[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AB1[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UAkAudioEvent>           K2Node_CustomEvent_AudioEvent;                     // 0x0280(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS) == 0x000008, "Wrong alignment on Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS");
static_assert(sizeof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS) == 0x0002A8, "Wrong size on Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, EntryPoint) == 0x000000, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::EntryPoint' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_Event_bTitle) == 0x000004, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_Event_bTitle' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_int_Variable) == 0x000008, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_byte_Variable) == 0x00000C, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_byte_Variable_1) == 0x00000D, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_byte_Variable_2) == 0x00000E, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_byte_Variable_3) == 0x00000F, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_byte_Variable_4) == 0x000010, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_byte_Variable_5) == 0x000011, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_object_Variable) == 0x000018, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_int_Variable_1) == 0x000020, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_int_Variable_2) == 0x000024, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_Conv_IntToByte_ReturnValue) == 0x000028, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetValidValue_ReturnValue) == 0x000030, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000031, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_SwitchEnum_CmpSuccess) == 0x000032, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000033, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000034, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_byte_Variable_6) == 0x000038, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_byte_Variable_7) == 0x000039, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_CustomEvent_Loaded) == 0x000040, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_object_Variable_1) == 0x000048, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_ComponentBoundEvent_bIsChecked_6) == 0x000050, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_ComponentBoundEvent_bIsChecked_6' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_ComponentBoundEvent_bIsChecked_5) == 0x000051, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_ComponentBoundEvent_bIsChecked_5' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_ComponentBoundEvent_bIsChecked_4) == 0x000052, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_ComponentBoundEvent_bIsChecked_4' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_ComponentBoundEvent_bIsChecked_3) == 0x000053, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_ComponentBoundEvent_bIsChecked_3' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetPlayerId_ReturnValue) == 0x000058, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_IsValid) == 0x000068, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000070, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_Event_IsDesignTime) == 0x000078, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_SaveSoundUserData_ReturnValue) == 0x000079, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_SaveSoundUserData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_CustomEvent_Index_2) == 0x00007C, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_CustomEvent_Index_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_CustomEvent_Volume) == 0x000080, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_CustomEvent_Volume' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_CustomEvent_Mute) == 0x000084, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_CustomEvent_Mute' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000085, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000088, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_LoadSoundConfigData_Result) == 0x000090, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_LoadSoundConfigData_Result' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_LoadSoundConfigData_ReturnValue) == 0x000094, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_LoadSoundConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_Select_Default) == 0x0000B4, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetSoundConfigData_bIsLoaded) == 0x0000B5, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetSoundConfigData_bIsLoaded' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetSoundConfigData_ReturnValue) == 0x0000B8, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetSoundConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_IsLoadedSoundConfigData_ReturnValue) == 0x0000D8, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_IsLoadedSoundConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_object_Variable_2) == 0x0000E0, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_IsValid_2) == 0x0000E8, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x0000F0, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_SaveSoundConfigData_ReturnValue) == 0x0000F8, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_SaveSoundConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_object_Variable_3) == 0x000100, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_object_Variable_4) == 0x000108, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_object_Variable_5) == 0x000110, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_CustomEvent_Index_1) == 0x000118, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_CustomEvent_Index) == 0x00011C, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000120, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_MakeStruct_SBConfigureSaveData_Sound) == 0x000124, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_MakeStruct_SBConfigureSaveData_Sound' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_object_Variable_6) == 0x000148, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_Select_Default_1) == 0x000150, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_Select_Default_2) == 0x000154, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_MakeStruct_SlateColor) == 0x000158, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_MakeStruct_SlateColor_1) == 0x000180, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_ComponentBoundEvent_bIsChecked_2) == 0x0001A8, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_ComponentBoundEvent_bIsChecked_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x0001A9, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_Not_PreBool_ReturnValue) == 0x0001AA, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001AB, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_MakeStruct_SBConfigureSaveData_ChatSound) == 0x0001AC, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_MakeStruct_SBConfigureSaveData_ChatSound' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, Temp_int_Variable_3) == 0x0001B4, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetPlayerId_ReturnValue_1) == 0x0001B8, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_Select_Default_3) == 0x0001C8, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_CreateDelegate_OutputDelegate) == 0x0001D0, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_PlaySE_ReturnValue) == 0x0001E0, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001E4, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetPlayerId_ReturnValue_2) == 0x0001F8, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetPlayerId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_CreateDelegate_OutputDelegate_2) == 0x000208, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetPlayerId_ReturnValue_3) == 0x000218, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetPlayerId_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_IsValid_3) == 0x000228, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x000230, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_SaveSoundUserData_ReturnValue_1) == 0x000238, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_SaveSoundUserData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_IsValid_4) == 0x000239, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_ReturnValue_4) == 0x000240, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_IsValid_5) == 0x000248, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_IsValid_5' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_ReturnValue_5) == 0x000250, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetChatSoundData_ReturnValue) == 0x000258, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetChatSoundData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_SaveSoundUserData_ReturnValue_2) == 0x00025D, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_SaveSoundUserData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_LoadSoundUserData_ReturnValue) == 0x00025E, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_LoadSoundUserData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_IsLoadedUserSoundConfig_ReturnValue) == 0x00025F, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_IsLoadedUserSoundConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_IsValid_6) == 0x000260, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_IsValid_6' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetConfigSaveManager_ReturnValue_6) == 0x000268, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetConfigSaveManager_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetMuteSoundGesture_ReturnValue) == 0x000270, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetMuteSoundGesture_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_GetMuteSoundCostume_ReturnValue) == 0x000271, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_GetMuteSoundCostume_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_Not_PreBool_ReturnValue_2) == 0x000272, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_Not_PreBool_ReturnValue_3) == 0x000273, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_ComponentBoundEvent_bIsChecked) == 0x000274, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_MakeLiteralInt_ReturnValue) == 0x000278, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, CallFunc_Less_IntInt_ReturnValue) == 0x00027C, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS, K2Node_CustomEvent_AudioEvent) == 0x000280, "Member 'Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS::K2Node_CustomEvent_AudioEvent' has a wrong offset!");

}

