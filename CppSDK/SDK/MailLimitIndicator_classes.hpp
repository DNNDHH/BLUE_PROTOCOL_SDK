#pragma once

 

// Package: MailLimitIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MailLimitIndicator.MailLimitIndicator_C
// 0x0028 (0x02A0 - 0x0278)
class UMailLimitIndicator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Bdr_Base;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       RT_KeyName;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsShowed;                                         // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUIVisibleSettings;                                // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InPhotoMode;                                       // 0x029A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MailLimitIndicator(int32 EntryPoint);
	void OnPhotoMode(class UObject* Sender, class UObject* Param);
	void UpdateShow();
	void UIVisibleSettingChangeDelegates(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void ChangeBorderColor();
	void Destruct();
	void OnChangeCommandMenuFlag(const bool Result);
	void Hide();
	void Show();
	void OnUpdateSkin(const ESBPadKeySkinType SkinType);
	void OnUpdateBookType();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MailLimitIndicator_C">();
	}
	static class UMailLimitIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMailLimitIndicator_C>();
	}
};
static_assert(alignof(UMailLimitIndicator_C) == 0x000008, "Wrong alignment on UMailLimitIndicator_C");
static_assert(sizeof(UMailLimitIndicator_C) == 0x0002A0, "Wrong size on UMailLimitIndicator_C");
static_assert(offsetof(UMailLimitIndicator_C, UberGraphFrame) == 0x000278, "Member 'UMailLimitIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMailLimitIndicator_C, AnimIn) == 0x000280, "Member 'UMailLimitIndicator_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMailLimitIndicator_C, Bdr_Base) == 0x000288, "Member 'UMailLimitIndicator_C::Bdr_Base' has a wrong offset!");
static_assert(offsetof(UMailLimitIndicator_C, RT_KeyName) == 0x000290, "Member 'UMailLimitIndicator_C::RT_KeyName' has a wrong offset!");
static_assert(offsetof(UMailLimitIndicator_C, bIsShowed) == 0x000298, "Member 'UMailLimitIndicator_C::bIsShowed' has a wrong offset!");
static_assert(offsetof(UMailLimitIndicator_C, bUIVisibleSettings) == 0x000299, "Member 'UMailLimitIndicator_C::bUIVisibleSettings' has a wrong offset!");
static_assert(offsetof(UMailLimitIndicator_C, InPhotoMode) == 0x00029A, "Member 'UMailLimitIndicator_C::InPhotoMode' has a wrong offset!");

}

