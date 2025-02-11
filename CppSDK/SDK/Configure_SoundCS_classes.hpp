#pragma once

 

// Package: Configure_SoundCS

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Configure_SoundCS.Configure_SoundCS_C
// 0x00D0 (0x0380 - 0x02B0)
class UConfigure_SoundCS_C final : public USBOptionChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBox_C*                          CB_MuteCostumeSound;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_MuteGestureSound;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_PlayGuild;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_PlayNear;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_PlayParty;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_PlayPrivate;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_PlayZone;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_138;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USound_CtrlVList_C*                     Sound_CtrlVList;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SoundReset;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         SoudText;                                          // 0x0320(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class USound_ControlItem_C*>           Childs;                                            // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSBConfigureSaveData_Sound             SoundValues;                                       // 0x0340(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bTitleMode;                                        // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A8F[0x3];                                     // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VoiceIndex;                                        // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsOpend;                                          // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FSBConfigureSaveData_ChatSound         ChatSounds;                                        // 0x0369(0x0005)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_9A90[0x2];                                     // 0x036E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                AudioEventObject;                                  // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AudioEventAssetLoad;                               // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ApplyChatSoundData();
	void ApplyMainSoundSaveData();
	void PlayVoice();
	void OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2(class UObject* Loaded);
	void BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnChangeValue(int32 Param_Index, int32 Volume, bool Mute);
	void ApplySaveData();
	void OnRequestPlaySound(int32 Param_Index);
	void OnPlaySound(int32 Param_Index);
	void BndEvt__SoundReset_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SoundReset_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SoundReset_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void LoadVoiceAsset(TSoftObjectPtr<class UAkAudioEvent> AudioEvent);
	void Destruct();
	void Open();
	void Close();
	void SetTitleMode(bool bTitle);
	void ExecuteUbergraph_Configure_SoundCS(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Configure_SoundCS_C">();
	}
	static class UConfigure_SoundCS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfigure_SoundCS_C>();
	}
};
static_assert(alignof(UConfigure_SoundCS_C) == 0x000008, "Wrong alignment on UConfigure_SoundCS_C");
static_assert(sizeof(UConfigure_SoundCS_C) == 0x000380, "Wrong size on UConfigure_SoundCS_C");
static_assert(offsetof(UConfigure_SoundCS_C, UberGraphFrame) == 0x0002B0, "Member 'UConfigure_SoundCS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, CB_MuteCostumeSound) == 0x0002B8, "Member 'UConfigure_SoundCS_C::CB_MuteCostumeSound' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, CB_MuteGestureSound) == 0x0002C0, "Member 'UConfigure_SoundCS_C::CB_MuteGestureSound' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, CB_PlayGuild) == 0x0002C8, "Member 'UConfigure_SoundCS_C::CB_PlayGuild' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, CB_PlayNear) == 0x0002D0, "Member 'UConfigure_SoundCS_C::CB_PlayNear' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, CB_PlayParty) == 0x0002D8, "Member 'UConfigure_SoundCS_C::CB_PlayParty' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, CB_PlayPrivate) == 0x0002E0, "Member 'UConfigure_SoundCS_C::CB_PlayPrivate' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, CB_PlayZone) == 0x0002E8, "Member 'UConfigure_SoundCS_C::CB_PlayZone' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, Image) == 0x0002F0, "Member 'UConfigure_SoundCS_C::Image' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, Image_0) == 0x0002F8, "Member 'UConfigure_SoundCS_C::Image_0' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, Image_1) == 0x000300, "Member 'UConfigure_SoundCS_C::Image_1' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, SBRuntimeTextBlock_138) == 0x000308, "Member 'UConfigure_SoundCS_C::SBRuntimeTextBlock_138' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, Sound_CtrlVList) == 0x000310, "Member 'UConfigure_SoundCS_C::Sound_CtrlVList' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, SoundReset) == 0x000318, "Member 'UConfigure_SoundCS_C::SoundReset' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, SoudText) == 0x000320, "Member 'UConfigure_SoundCS_C::SoudText' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, Childs) == 0x000330, "Member 'UConfigure_SoundCS_C::Childs' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, SoundValues) == 0x000340, "Member 'UConfigure_SoundCS_C::SoundValues' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, bTitleMode) == 0x000360, "Member 'UConfigure_SoundCS_C::bTitleMode' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, VoiceIndex) == 0x000364, "Member 'UConfigure_SoundCS_C::VoiceIndex' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, bIsOpend) == 0x000368, "Member 'UConfigure_SoundCS_C::bIsOpend' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, ChatSounds) == 0x000369, "Member 'UConfigure_SoundCS_C::ChatSounds' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, AudioEventObject) == 0x000370, "Member 'UConfigure_SoundCS_C::AudioEventObject' has a wrong offset!");
static_assert(offsetof(UConfigure_SoundCS_C, AudioEventAssetLoad) == 0x000378, "Member 'UConfigure_SoundCS_C::AudioEventAssetLoad' has a wrong offset!");

}

