#pragma once

 

// Package: Sound_CtrlVList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Sound_CtrlVList.Sound_CtrlVList_C
// 0x0050 (0x02C8 - 0x0278)
class USound_CtrlVList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VBox;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                 TextIds;                                           // 0x0288(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class USound_ControlItem_C*>           SoundCtrl;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             SoundChanged;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             RequestPlaySound;                                  // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void PreConstruct(bool IsDesignTime);
	void OnValueChanges(int32 Param_Index, int32 Volume, bool bMute);
	void SetVolume(int32 Param_Index, int32 Volume, bool bMute);
	void RequestSoundEvent(int32 Param_Index);
	void ExecuteUbergraph_Sound_CtrlVList(int32 EntryPoint);
	void RequestPlaySound__DelegateSignature(int32 Param_Index);
	void SoundChanged__DelegateSignature(int32 Param_Index, int32 Volume, bool Mute);

	void GetChildrenNum(int32* ChildNum) const;
	void GetChildValue(int32 Param_Index, int32* SoundVolume) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sound_CtrlVList_C">();
	}
	static class USound_CtrlVList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USound_CtrlVList_C>();
	}
};
static_assert(alignof(USound_CtrlVList_C) == 0x000008, "Wrong alignment on USound_CtrlVList_C");
static_assert(sizeof(USound_CtrlVList_C) == 0x0002C8, "Wrong size on USound_CtrlVList_C");
static_assert(offsetof(USound_CtrlVList_C, UberGraphFrame) == 0x000278, "Member 'USound_CtrlVList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USound_CtrlVList_C, VBox) == 0x000280, "Member 'USound_CtrlVList_C::VBox' has a wrong offset!");
static_assert(offsetof(USound_CtrlVList_C, TextIds) == 0x000288, "Member 'USound_CtrlVList_C::TextIds' has a wrong offset!");
static_assert(offsetof(USound_CtrlVList_C, SoundCtrl) == 0x000298, "Member 'USound_CtrlVList_C::SoundCtrl' has a wrong offset!");
static_assert(offsetof(USound_CtrlVList_C, SoundChanged) == 0x0002A8, "Member 'USound_CtrlVList_C::SoundChanged' has a wrong offset!");
static_assert(offsetof(USound_CtrlVList_C, RequestPlaySound) == 0x0002B8, "Member 'USound_CtrlVList_C::RequestPlaySound' has a wrong offset!");

}

