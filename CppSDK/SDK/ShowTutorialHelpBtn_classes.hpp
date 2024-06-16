#pragma once

 

// Package: ShowTutorialHelpBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShowTutorialHelpBtn.ShowTutorialHelpBtn_C
// 0x0040 (0x02B8 - 0x0278)
class UShowTutorialHelpBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_ShowHint_L;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint_S;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   TutorialHelpId;                                    // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BookmarkTutorialHelpId;                            // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialHelpDialogBox_C*               TutorialHelpDialogWidget;                          // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DesignType;                                        // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInPhotoMode;                                    // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsUsingClassTypeForTutorialHelp;                  // 0x02B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  ClassTypeForTutorialHelp;                          // 0x02B6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShowTutorialHelpBtn(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Btn_ShowHint_L_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnClose_Event_0();
	void Destruct();
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetClassTypeForTutorialHelp(bool bInIsUsingClassTypeForTutorialHelp, ESBClassType InClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowTutorialHelpBtn_C">();
	}
	static class UShowTutorialHelpBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowTutorialHelpBtn_C>();
	}
};
static_assert(alignof(UShowTutorialHelpBtn_C) == 0x000008, "Wrong alignment on UShowTutorialHelpBtn_C");
static_assert(sizeof(UShowTutorialHelpBtn_C) == 0x0002B8, "Wrong size on UShowTutorialHelpBtn_C");
static_assert(offsetof(UShowTutorialHelpBtn_C, UberGraphFrame) == 0x000278, "Member 'UShowTutorialHelpBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowTutorialHelpBtn_C, Btn_ShowHint_L) == 0x000280, "Member 'UShowTutorialHelpBtn_C::Btn_ShowHint_L' has a wrong offset!");
static_assert(offsetof(UShowTutorialHelpBtn_C, Btn_ShowHint_S) == 0x000288, "Member 'UShowTutorialHelpBtn_C::Btn_ShowHint_S' has a wrong offset!");
static_assert(offsetof(UShowTutorialHelpBtn_C, SwitchType) == 0x000290, "Member 'UShowTutorialHelpBtn_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UShowTutorialHelpBtn_C, TutorialHelpId) == 0x000298, "Member 'UShowTutorialHelpBtn_C::TutorialHelpId' has a wrong offset!");
static_assert(offsetof(UShowTutorialHelpBtn_C, BookmarkTutorialHelpId) == 0x0002A0, "Member 'UShowTutorialHelpBtn_C::BookmarkTutorialHelpId' has a wrong offset!");
static_assert(offsetof(UShowTutorialHelpBtn_C, TutorialHelpDialogWidget) == 0x0002A8, "Member 'UShowTutorialHelpBtn_C::TutorialHelpDialogWidget' has a wrong offset!");
static_assert(offsetof(UShowTutorialHelpBtn_C, DesignType) == 0x0002B0, "Member 'UShowTutorialHelpBtn_C::DesignType' has a wrong offset!");
static_assert(offsetof(UShowTutorialHelpBtn_C, bIsInPhotoMode) == 0x0002B4, "Member 'UShowTutorialHelpBtn_C::bIsInPhotoMode' has a wrong offset!");
static_assert(offsetof(UShowTutorialHelpBtn_C, bIsUsingClassTypeForTutorialHelp) == 0x0002B5, "Member 'UShowTutorialHelpBtn_C::bIsUsingClassTypeForTutorialHelp' has a wrong offset!");
static_assert(offsetof(UShowTutorialHelpBtn_C, ClassTypeForTutorialHelp) == 0x0002B6, "Member 'UShowTutorialHelpBtn_C::ClassTypeForTutorialHelp' has a wrong offset!");

}

